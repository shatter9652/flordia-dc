//@category REA
// Load the PS5 evidence into the gta6_full program (Prospero eboot).
//
// The Xbox project gets its vocabulary from GDK import tables; a PS5 build has
// no GDK, so this script uses what the PlayStation image and this tree can
// actually prove:
//
//   * imports/ps5_libraries.tsv -> one Ghidra external library per system
//     library the eboot imports, and a label on the loader table's name string.
//     46 libraries, each resolved to the firmware module that implements it.
//   * names/rage_structs.tsv -> real Ghidra structures from the recovered RAGE
//     headers (fiPackHeader9 and friends), so the decompiler prints
//     header->entryCount instead of *(uint *)(param_1 + 0x24).
//   * names/gtav_classes.tsv -> every GTA V class as an opaque type under
//     /gtav/<namespace>, the same table ApplyRefs.java uses on the Xbox build.
//   * matches/ps5_string_names.tsv (optional) -> rename a placeholder function
//     at a virtual address.
//
// Nothing here renames a function without evidence: the library names come from
// the executable's own loader table, the struct offsets from the headers, and
// the only renames are those in the explicit match file.
//
// Usage: <projectRoot>   e.g. /home/nate/Port2PS4/gta6decomp
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.ArrayDataType;
import ghidra.program.model.data.ByteDataType;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataType;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.DoubleDataType;
import ghidra.program.model.data.DWordDataType;
import ghidra.program.model.data.FloatDataType;
import ghidra.program.model.data.IntegerDataType;
import ghidra.program.model.data.LongDataType;
import ghidra.program.model.data.Pointer64DataType;
import ghidra.program.model.data.QWordDataType;
import ghidra.program.model.data.ShortDataType;
import ghidra.program.model.data.SignedByteDataType;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.data.WordDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.SymbolTable;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

public class ApplyPs5 extends GhidraScript {

    private DataTypeManager dtm;
    private SymbolTable st;
    private FunctionManager fm;
    private int renamed = 0;

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        File root = new File(a.length > 0 ? a[0] : ".");
        dtm = currentProgram.getDataTypeManager();
        st = currentProgram.getSymbolTable();
        fm = currentProgram.getFunctionManager();

        int libs = applyLibraries(new File(root, "imports/ps5_libraries.tsv"));
        int[] types = applyStructs(new File(root, "names/rage_structs.tsv"));
        int classes = registerClasses(new File(root, "names/gtav_classes.tsv"));
        int named = applyNames(new File(root, "matches/ps5_string_names.tsv"));

        println("REFS|ps5_libraries=" + libs + "|rage_structs=" + types[0]
                + "|rage_fields=" + types[1] + "|gtav_classes=" + classes
                + "|string_named=" + named + "|renamed_total=" + renamed);
    }

    /** One external library per imported system module, plus a name label. */
    private int applyLibraries(File tsv) {
        if (!tsv.isFile()) {
            println("REFS|missing|" + tsv);
            return 0;
        }
        int made = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            String line = r.readLine();            // header
            while ((line = r.readLine()) != null) {
                String[] c = line.split("\t", -1);
                if (c.length < 4 || c[0].isEmpty()) continue;
                String library = c[0];
                try {
                    if (currentProgram.getExternalManager()
                            .addExternalLibraryName(library, SourceType.USER_DEFINED) != null) {
                        made++;
                    }
                } catch (Exception ex) {
                    if (made == 0) println("REFS|lib-error|" + library + "|" + ex.getMessage());
                }
                // The loader table's own string: label it so the table is
                // readable in the listing.
                if (!c[3].isEmpty()) {
                    try {
                        long va = Long.parseLong(c[3].replaceFirst("^0x", ""), 16);
                        Address at = currentProgram.getImageBase().add(va);
                        if (currentProgram.getMemory().contains(at)) {
                            st.createLabel(at, library + "_name", SourceType.USER_DEFINED);
                        }
                    } catch (Exception ignored) {
                    }
                }
            }
        } catch (Exception ex) {
            println("REFS|ps5-libraries-error|" + ex.getMessage());
        }
        return made;
    }

    /** Build the RAGE structures from the recovered headers' field table. */
    private int[] applyStructs(File tsv) {
        if (!tsv.isFile()) {
            println("REFS|missing|" + tsv);
            return new int[] {0, 0};
        }
        Map<String, List<String[]>> byName = new LinkedHashMap<>();
        Map<String, Integer> sizes = new LinkedHashMap<>();
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            r.readLine();
            String line;
            while ((line = r.readLine()) != null) {
                String[] c = line.split("\t", -1);
                if (c.length < 6) continue;
                byName.computeIfAbsent(c[0], k -> new ArrayList<>()).add(c);
                sizes.put(c[0], Integer.decode(c[1]));
            }
        } catch (Exception ex) {
            println("REFS|structs-error|" + ex.getMessage());
            return new int[] {0, 0};
        }

        int made = 0, fields = 0;
        int tx = dtm.startTransaction("RAGE structures");
        try {
            CategoryPath cp = new CategoryPath("/rage");
            for (Map.Entry<String, List<String[]>> e : byName.entrySet()) {
                StructureDataType sdt = new StructureDataType(cp, e.getKey(), 0, dtm);
                boolean ok = true;
                for (String[] c : e.getValue()) {
                    try {
                        int offset = Integer.decode(c[2]);
                        DataType base = scalar(c[3]);
                        int bytes = Integer.parseInt(c[5]);
                        if (base == null) { ok = false; break; }
                        if (offset > sdt.getLength()) {
                            int pad = offset - sdt.getLength();
                            sdt.add(new ArrayDataType(ByteDataType.dataType, pad, 1),
                                    pad, "pad", null);
                        }
                        DataType field = base;
                        if (bytes > base.getLength()) {
                            field = new ArrayDataType(base, bytes / base.getLength(), 1);
                        }
                        sdt.add(field, bytes, c[4], null);
                        fields++;
                    } catch (Exception ex) {
                        ok = false;
                        break;
                    }
                }
                if (!ok || sdt.getLength() > sizes.get(e.getKey())) continue;
                int want = sizes.get(e.getKey());
                if (sdt.getLength() < want) {
                    int pad = want - sdt.getLength();
                    sdt.add(new ArrayDataType(ByteDataType.dataType, pad, 1), pad, "pad", null);
                }
                dtm.addDataType(sdt, null);
                made++;
            }
        } catch (Exception ex) {
            println("REFS|rage-types-error|" + ex.getMessage());
        } finally {
            dtm.endTransaction(tx, true);
        }
        return new int[] {made, fields};
    }

    private static DataType scalar(String t) {
        switch (t) {
            case "u8":  return new ByteDataType();
            case "i8":  return new SignedByteDataType();
            case "u16": return new WordDataType();
            case "i16": return new ShortDataType();
            case "u32": return new DWordDataType();
            case "i32": return new IntegerDataType();
            case "u64": return new QWordDataType();
            case "i64": return new LongDataType();
            case "f32": return new FloatDataType();
            case "f64": return new DoubleDataType();
            case "ptr": return new Pointer64DataType();
            default: return null;
        }
    }

    /** Every GTA V class becomes an opaque named type, grouped by namespace. */
    private int registerClasses(File tsv) {
        if (!tsv.isFile()) return 0;
        int made = 0;
        int tx = dtm.startTransaction("GTAV classes");
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            r.readLine();
            String line;
            CategoryPath base = new CategoryPath("/gtav");
            while ((line = r.readLine()) != null) {
                String[] c = line.split("\t", 3);
                if (c.length < 2 || c[1].isEmpty()) continue;
                String ns = c[0].isEmpty() ? "global" : c[0].replace("::", "/");
                CategoryPath cp = new CategoryPath(base, ns);
                if (dtm.getDataType(cp, c[1]) != null) continue;
                dtm.addDataType(new StructureDataType(cp, c[1], 0, dtm), null);
                made++;
            }
        } catch (Exception ex) {
            println("REFS|gtav-error|" + ex.getMessage());
        } finally {
            dtm.endTransaction(tx, true);
        }
        return made;
    }

    /** Optional explicit renames: "va<TAB>name" with va in the image's space. */
    private int applyNames(File tsv) {
        if (!tsv.isFile()) return 0;
        int named = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            String line;
            while ((line = r.readLine()) != null) {
                if (line.isEmpty() || line.startsWith("#")) continue;
                String[] c = line.split("\t");
                if (c.length < 2) continue;
                long va;
                try {
                    va = Long.parseLong(c[0].replaceFirst("^0x", ""), 16);
                } catch (NumberFormatException ex) {
                    continue;
                }
                Function f = fm.getFunctionAt(currentProgram.getImageBase().add(va));
                if (f == null || f.isExternal() || f.isThunk()) continue;
                String name = c[1].replaceAll("[^A-Za-z0-9_:~.]", "_");
                if (name.isEmpty()) continue;
                try {
                    f.setName(name, SourceType.USER_DEFINED);
                    if (c.length > 2 && !c[2].isEmpty()) {
                        f.setRepeatableComment(c[2]);
                    }
                    named++;
                    renamed++;
                } catch (Exception ignored) {
                }
            }
        } catch (Exception ex) {
            println("REFS|names-error|" + ex.getMessage());
        }
        return named;
    }
}
