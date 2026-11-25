//@category REA
// Load every reference we have into the GTA VI program, then let the matched
// evidence name functions:
//   * GDK / Win32 prototypes onto the 587 external functions (real arguments at
//     call sites), and __imp_ labels on the IAT slots;
//   * every GTA V class (26,873) as an opaque Ghidra type under /gtav/<ns>;
//   * GTA V source literals that also exist in the executable -> rename the
//     function that loads them to Class::Method;
//   * byte-marker matches from GDK DLLs and the GTA V / RDR2 PS4 eboots.
//
// Usage: <projectRoot> [minByteCoverage]
import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.parser.FunctionSignatureParser;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

public class ApplyRefs extends GhidraScript {

    private FunctionManager fm;
    private SymbolTable st;
    private int renamed = 0;
    private final Set<String> touched = new LinkedHashSet<>();

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        File root = new File(a.length > 0 ? a[0] : ".");
        fm = currentProgram.getFunctionManager();
        st = currentProgram.getSymbolTable();

        int protos = applyGdk(root);
        int labels = labelIat(root);
        int classes = registerClasses(root);
        int stringNamed = applyStringHits(root);
        int byteNamed = applyByteMatches(root);

        println("REFS|gdk_prototypes=" + protos + "|iat_labels=" + labels
                + "|gtav_classes=" + classes + "|string_named=" + stringNamed
                + "|byte_named=" + byteNamed + "|renamed_total=" + renamed);
    }

    /** Apply the GDK/Win32 prototype to the external function of the same name. */
    private int applyGdk(File root) {
        File tsv = new File(root, "imports/gdk_symbols.tsv");
        if (!tsv.isFile()) {
            println("REFS|missing|" + tsv);
            return 0;
        }
        int applied = 0;
        Map<String, String> protos = new HashMap<>();
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            String line;
            boolean header = true;
            while ((line = r.readLine()) != null) {
                if (header) { header = false; continue; }
                String[] c = line.split("\t", 4);
                if (c.length < 3 || c[1].isEmpty() || c[2].isEmpty()) continue;
                protos.put(c[1], c[2]);
            }
        } catch (Exception ex) {
            println("REFS|gdk-error|" + ex.getMessage());
            return 0;
        }
        FunctionSignatureParser parser = new FunctionSignatureParser(
                currentProgram.getDataTypeManager(), null);
        // The PE loader created an external *symbol* per import but no external
        // Function. ExternalLocation.createFunction() is the supported way to
        // turn one into a typed function; setDataType() is the fallback when the
        // address space refuses a function body.
        ghidra.program.model.symbol.ExternalManager em = currentProgram.getExternalManager();
        int locs = 0, matched = 0, errors = 0;
        for (Symbol s : st.getAllSymbols(true)) {
            if (!s.isExternal()) continue;
            String proto = protos.get(s.getName());
            if (proto == null) continue;
            matched++;
            ghidra.program.model.symbol.ExternalLocation loc = em.getExternalLocation(s);
            if (loc == null) continue;
            locs++;
            try {
                Function f = loc.getFunction();
                if (f == null) f = loc.createFunction();
                FunctionDefinitionDataType sig = parseLoose(parser,
                        f != null ? f.getSignature() : null, proto);
                if (sig == null) { errors++; continue; }
                loc.setDataType(sig);
                applied++;
                if (f != null) {
                    ApplyFunctionSignatureCmd cmd = new ApplyFunctionSignatureCmd(
                            f.getEntryPoint(), sig, SourceType.USER_DEFINED);
                    cmd.applyTo(currentProgram, monitor);
                }
            } catch (Exception ex) {
                errors++;
                if (errors < 4) println("REFS|ext-error|" + s.getName() + "|" + ex.getMessage());
            }
        }
        println("REFS|ext|matched=" + matched + "|locations=" + locs + "|errors=" + errors);
        return applied;
    }

    /** Name the IAT slot itself, so data references read as __imp_CreateThread. */
    private int labelIat(File root) {
        File tsv = new File(root, "imports/gdk_symbols.tsv");
        if (!tsv.isFile()) return 0;
        int made = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            String line;
            boolean header = true;
            while ((line = r.readLine()) != null) {
                if (header) { header = false; continue; }
                String[] c = line.split("\t", 4);
                if (c.length < 4 || c[3].isEmpty()) continue;
                long rva;
                try {
                    rva = Long.parseLong(c[3].trim(), 16);
                } catch (NumberFormatException ex) {
                    continue;
                }
                Address slot = currentProgram.getImageBase().add(rva);
                if (!currentProgram.getMemory().contains(slot)) continue;
                try {
                    st.createLabel(slot, "__imp_" + c[1], SourceType.USER_DEFINED);
                    made++;
                } catch (Exception ignored) {
                }
            }
        } catch (Exception ignored) {
        }
        return made;
    }

    /** Every GTA V class becomes an opaque named type, grouped by namespace. */
    private int registerClasses(File root) {
        File tsv = new File(root, "names/gtav_classes.tsv");
        if (!tsv.isFile()) return 0;
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        int made = 0;
        int tx = dtm.startTransaction("GTAV classes");
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            String line;
            boolean header = true;
            CategoryPath base = new CategoryPath("/gtav");
            while ((line = r.readLine()) != null) {
                if (header) { header = false; continue; }
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

    /** A literal shared with GTA V source names the function that loads it. */
    private int applyStringHits(File root) {
        File tsv = new File(root, "matches/gtav_source_functions.tsv");
        if (!tsv.isFile()) return 0;
        int named = 0;
        try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
            String line;
            boolean header = true;
            while ((line = r.readLine()) != null) {
                if (header) { header = false; continue; }
                String[] c = line.split("\t", 5);
                if (c.length < 4) continue;
                long rva;
                try {
                    rva = Long.parseLong(c[0]);
                } catch (NumberFormatException ex) {
                    continue;
                }
                Function f = fm.getFunctionAt(currentProgram.getImageBase().add(rva));
                if (f == null || f.isExternal() || f.isThunk()) continue;
                if (!isPlaceholder(f.getName())) continue;
                String name = sanitize(c[1]);
                if (name.isEmpty()) continue;
                try {
                    f.setName(name, SourceType.USER_DEFINED);
                    f.setRepeatableComment("GTAVSRC: " + c[1] + "  (" + c[3] + ")"
                            + (c.length > 4 ? "\nliteral: " + c[4] : ""));
                    named++;
                    renamed++;
                } catch (Exception ignored) {
                }
            }
        } catch (Exception ex) {
            println("REFS|string-error|" + ex.getMessage());
        }
        return named;
    }

    /** Function-body byte markers from GDK DLLs and the PS4 eboots. */
    private int applyByteMatches(File root) {
        File dir = new File(root, "matches");
        File[] files = dir.listFiles((d, n) -> n.startsWith("bytes_") && n.endsWith(".tsv"));
        if (files == null) return 0;
        int named = 0;
        for (File tsv : files) {
            String corpus = tsv.getName().substring(6, tsv.getName().length() - 4);
            try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
                String line;
                boolean header = true;
                while ((line = r.readLine()) != null) {
                    if (header) { header = false; continue; }
                    String[] c = line.split("\t", 8);
                    if (c.length < 8) continue;
                    long rva = Long.parseLong(c[0]);
                    Address ep = currentProgram.getImageBase().add(rva);
                    Function f = fm.getFunctionAt(ep);
                    if (f == null) continue;
                    String refName = c[4];
                    String note = "byte-match " + corpus + " @" + c[2]
                            + " shared=" + c[5] + " cov=" + c[6] + " equal=" + c[7];
                    if (!refName.isEmpty() && isPlaceholder(f.getName())) {
                        try {
                            f.setName(sanitize(refName), SourceType.USER_DEFINED);
                            named++;
                            renamed++;
                        } catch (Exception ignored) {
                        }
                    }
                    try {
                        String old = f.getRepeatableComment();
                        f.setRepeatableComment((old == null ? "" : old + "\n") + note);
                    } catch (Exception ignored) {
                    }
                }
            } catch (Exception ex) {
                println("REFS|bytes-error|" + tsv.getName() + "|" + ex.getMessage());
            }
        }
        return named;
    }

    /**
     * Parse a prototype, replacing types the program does not define with
     * void*. GDK headers name HANDLE, WINBOOL, XTaskQueueHandle and hundreds of
     * other types that are not in a stripped program's data type manager; the
     * argument list is still worth keeping, so degrade instead of dropping.
     */
    private FunctionDefinitionDataType parseLoose(FunctionSignatureParser parser,
                                                  ghidra.program.model.listing.FunctionSignature base,
                                                  String proto) {
        String p = proto.trim();
        while (p.endsWith(";")) p = p.substring(0, p.length() - 1).trim();
        for (int attempt = 0; attempt < 16; attempt++) {
            try {
                return parser.parse(base, p);
            } catch (Exception ex) {
                String msg = ex.getMessage() == null ? "" : ex.getMessage();
                java.util.regex.Matcher m = java.util.regex.Pattern
                        .compile("(?:resolve (?:return )?type|datatype):? ([A-Za-z_][A-Za-z0-9_]*)")
                        .matcher(msg);
                if (!m.find()) {
                    if (parseDebug++ < 3) println("REFS|parse-fail|" + msg + "|" + p);
                    return null;
                }
                String type = m.group(1);
                String replaced = p.replaceAll("\\b" + java.util.regex.Pattern.quote(type) + "\\b", "void*");
                if (replaced.equals(p)) return null;
                p = replaced;
            }
        }
        return null;
    }

    private int parseDebug = 0;

    private static boolean isPlaceholder(String name) {
        return name.startsWith("sub_") || name.startsWith("FUN_") || name.startsWith("thunk_FUN_");
    }

    private static String sanitize(String raw) {
        String s = raw.replaceAll("<[^>]*>", "").replace(" ", "").replace("&", "").replace("*", "");
        s = s.replaceAll("[^A-Za-z0-9_:~.]", "_");
        return s;
    }
}
