//@category REA
// Export readable, source-shaped C++ from the stripped GTA6 executable.
//
// Ghidra's default output (FUN_1400010f0 / undefined8 param_1) is not readable
// enough to port from, so this exporter:
//   * disassembles each .pdata-bounded function,
//   * finds the printable strings the function references,
//   * derives a stable, subsystem-qualified name from them,
//   * writes one .cpp per function with a provenance header, string list,
//     callees and a RAGE-typed prologue,
//   * appends a row to index.tsv so runs are resumable.
//
// Usage: <outDir> <startAddressHex|0> <count> <stringsOnly 0|1>
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.disassemble.Disassembler;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.data.FunctionDefinitionDataType;
import ghidra.program.model.data.StructureDataType;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import ghidra.program.model.symbol.Symbol;
import ghidra.app.util.parser.FunctionSignatureParser;
import ghidra.app.cmd.function.ApplyFunctionSignatureCmd;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

public class ReExport extends GhidraScript {

    private Memory mem;
    private DecompInterface dec;
    private final Set<String> emitted = new LinkedHashSet<>();

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        if (a.length < 4) {
            println("EXPORT|error|usage <outDir> <startHex|0> <count> <stringsOnly>");
            return;
        }
        File out = new File(a[0]);
        long start = Long.parseLong(a[1].replace("0x", ""), 16);
        int count = Integer.parseInt(a[2]);
        boolean stringsOnly = "1".equals(a[3]);

        // Reference sets must be loaded before anything is decompiled: the GDK
        // gives imported calls their real signatures, GTA V's source tree gives
        // the class vocabulary the decompiled bodies are named against.
        loadReferences(out);

        mem = currentProgram.getMemory();
        dec = new DecompInterface();
        dec.toggleCCode(true);
        dec.toggleSyntaxTree(false);
        dec.openProgram(currentProgram);

        Disassembler dis = Disassembler.getDisassembler(currentProgram, monitor, null);
        int seen = 0, written = 0, skipped = 0, failed = 0;

        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            Address ep = f.getEntryPoint();
            if (start != 0 && ep.getOffset() < start) continue;
            if (seen++ >= count) break;

            AddressSetView body = f.getBody();
            if (body.getNumAddresses() <= 1) continue;
            try {
                if (getInstructionAt(ep) == null) dis.disassemble(ep, body);
            } catch (Exception ex) {
                // fall through: decompiler may still produce something
            }
            // A leaf body usually references nothing printable, because RAGE hashes its
            // gameplay vocabulary. Fall back to the strings its direct callees load, so a
            // wrapper still gets a meaningful name instead of being dropped as anonymous.
            List<String> own = referencedStrings(body);
            LinkedHashSet<String> merged = new LinkedHashSet<>(own);
            // Imported GDK/Win32 callees name a body even when RAGE hashed its
            // own vocabulary: CreateThread, XGameRuntimeInitialize, D3D12CreateDevice.
            // This is the strongest available signal for an unnamed function.
            try {
                for (Function c : f.getCalledFunctions(monitor)) {
                    if (c.isExternal() || c.isThunk()) merged.add(c.getName());
                }
            } catch (Exception ignored) {
            }
            if (own.size() < 2) {
                try {
                    for (Function c : f.getCalledFunctions(monitor)) {
                        if (c.getBody().getNumAddresses() <= 1) continue;
                        for (String s : referencedStrings(c.getBody())) {
                            merged.add(s);
                            if (merged.size() >= 12) break;
                        }
                        if (merged.size() >= 12) break;
                    }
                } catch (Exception ignored) {
                }
            }
            List<String> strs = new ArrayList<>(merged);
            if (stringsOnly && strs.isEmpty()) { skipped++; continue; }

            String slug = slug(strs);
            String sub = subsystem(strs);
            String name = "sub_" + Long.toHexString(ep.getOffset()) + (slug.isEmpty() ? "" : "_" + slug);
            try {
                if (!name.equals(f.getName())) f.setName(name, SourceType.USER_DEFINED);
            } catch (Exception ex) {
                // duplicate/invalid name: keep provider name
            }

            DecompileResults res = null;
            try {
                res = dec.decompileFunction(f, 90, monitor);
            } catch (Exception ex) {
                res = null;
            }
            if (res == null || !res.decompileCompleted() || res.getDecompiledFunction() == null) {
                failed++;
                continue;
            }
            String code = res.getDecompiledFunction().getC();

            File dir = new File(out, "src/" + sub);
            dir.mkdirs();
            File target = new File(dir, name + ".cpp");
            try (BufferedWriter w = new BufferedWriter(new FileWriter(target))) {
                w.write("// Recovered from game_scarlett_master.exe (GTA6, Xbox Series X, PE32+ x64)\n");
                w.write("// Address: " + ep + "  size: " + body.getNumAddresses() + " bytes\n");
                w.write("// Subsystem: " + sub + "   (inferred from referenced RAGE asset paths)\n");
                w.write("//\n// Referenced strings (" + own.size() + " in this body, " + strs.size()
                        + " including direct callees):\n");
                for (String s : strs) w.write("//   \"" + s.replace("\\", "\\\\").replace("\"", "\\\"") + "\"\n");
                w.write("// Callees: ");
                StringBuilder callees = new StringBuilder();
                for (Function c : f.getCalledFunctions(monitor)) {
                    if (callees.length() > 0) callees.append(", ");
                    callees.append(c.getName());
                }
                w.write(callees + "\n");
                w.write("//\n// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;\n");
                w.write("// identifiers are recovered, not original. See ../../README.md.\n\n");
                w.write("#include \"gta6decomp/rage_types.h\"\n\n");
                w.write(code);
                if (!code.endsWith("\n")) w.write("\n");
            }

            appendIndex(out, ep, body.getNumAddresses(), name, sub, strs.size());
            written++;
            if (written % 25 == 0) println("PROGRESS|written=" + written + "|skipped=" + skipped + "|failed=" + failed);
        }
        println("EXPORT|written=" + written + "|skipped=" + skipped + "|failed=" + failed + "|seen=" + seen);
    }

    /** Apply GDK import prototypes and register GTA V class names as Ghidra types. */
    private void loadReferences(File root) {
        int protos = 0, classes = 0;
        DataTypeManager dtm = currentProgram.getDataTypeManager();
        FunctionSignatureParser parser = new FunctionSignatureParser(dtm, null);
        File tsv = new File(root, "imports/gdk_symbols.tsv");
        if (tsv.isFile()) {
            try (BufferedReader r = new BufferedReader(new FileReader(tsv))) {
                String line;
                boolean header = true;
                while ((line = r.readLine()) != null) {
                    if (header) { header = false; continue; }
                    String[] c = line.split("\t", 4);
                    if (c.length < 3) continue;
                    // The import address table slot: label it __imp_<Name> so
                    // call sites decompile with a real provider name.
                    if (c.length >= 4 && !c[3].isEmpty()) {
                        try {
                            long rva = Long.parseLong(c[3], 16);
                            ghidra.program.model.address.Address slot =
                                    currentProgram.getImageBase().add(rva);
                            if (currentProgram.getMemory().contains(slot)) {
                                currentProgram.getSymbolTable().createLabel(slot,
                                        "__imp_" + c[1], SourceType.USER_DEFINED);
                            }
                        } catch (Exception ignored) {
                        }
                    }
                    if (c[2].isEmpty()) continue;
                    for (Symbol s : currentProgram.getSymbolTable().getGlobalSymbols(c[1])) {
                        Function f = currentProgram.getFunctionManager()
                                .getFunctionAt(s.getAddress());
                        if (f == null) continue;
                        // PE imports are thunks in .text pointing at an external
                        // location; accept either so the prototype lands on the
                        // body the decompiler actually calls.
                        if (!f.isExternal() && !f.isThunk()) continue;
                        try {
                            FunctionDefinitionDataType sig = parser.parse(f.getSignature(), c[2]);
                            if (sig != null) {
                                ApplyFunctionSignatureCmd cmd = new ApplyFunctionSignatureCmd(
                                        f.getEntryPoint(), sig, SourceType.USER_DEFINED);
                                if (cmd.applyTo(currentProgram, monitor)) protos++;
                            }
                        } catch (Exception ignored) {
                        }
                    }
                }
            } catch (Exception ex) {
                println("REFS|gdk-error|" + ex.getMessage());
            }
        }
        // GTA V classes become opaque named types, so the Data Type Manager
        // shows the source tree's vocabulary next to the recovered structures.
        File cls = new File(root, "names/gtav_classes.tsv");
        if (cls.isFile()) {
            int tx = dtm.startTransaction("GTAV class names");
            try (BufferedReader r = new BufferedReader(new FileReader(cls))) {
                String line;
                boolean header = true;
                CategoryPath base = new CategoryPath("/gtav");
                while ((line = r.readLine()) != null && classes < 1200) {
                    if (header) { header = false; continue; }
                    String[] c = line.split("\t", 3);
                    if (c.length < 3) continue;
                    String ns = c[0].isEmpty() ? "global" : c[0];
                    CategoryPath cp = new CategoryPath(base, ns);
                    if (dtm.getDataType(cp, c[1]) != null) continue;
                    StructureDataType struct = new StructureDataType(cp, c[1], 0, dtm);
                    dtm.addDataType(struct, null);
                    classes++;
                }
            } catch (Exception ex) {
                println("REFS|gtav-error|" + ex.getMessage());
            } finally {
                dtm.endTransaction(tx, true);
            }
        }
        println("REFS|gdk_prototypes=" + protos + "|gtav_classes=" + classes);
    }

    private void appendIndex(File out, Address ep, long size, String name, String sub, int nstr) throws IOException {
        out.mkdirs();
        File idx = new File(out, "index.tsv");
        boolean empty = !idx.exists() || idx.length() == 0;
        try (BufferedWriter w = new BufferedWriter(new FileWriter(idx, true))) {
            if (empty) w.write("address\tsize\tname\tsubsystem\tstrings\tfile\n");
            w.write(ep + "\t" + size + "\t" + name + "\t" + sub + "\t" + nstr
                    + "\t" + "src/" + sub + "/" + name + ".cpp\n");
        }
    }

    private static final java.util.regex.Pattern RIP_REL =
            java.util.regex.Pattern.compile("\\[RIP\\s*\\+\\s*0x([0-9a-fA-F]+)\\]");

    private List<String> referencedStrings(AddressSetView body) {
        List<String> out = new ArrayList<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(body, true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            // 1. references Ghidra already resolved
            for (Reference r : ins.getReferencesFrom()) {
                Address t = r.getToAddress();
                if (t == null) continue;
                String s = readString(t, 96);
                if (s != null && !out.contains(s)) {
                    out.add(s);
                    if (out.size() >= 12) return out;
                }
            }
            // 2. fallback: RIP-relative operands the reference pass left unresolved.
            //    The operand is printed as [RIP + 0xNN]; the target is the end of
            //    the instruction plus that displacement.
            java.util.regex.Matcher m = RIP_REL.matcher(ins.toString());
            while (m.find()) {
                try {
                    long disp = Long.parseLong(m.group(1), 16);
                    Address t = ins.getAddress().add(ins.getLength() + disp);
                    String s = readString(t, 96);
                    if (s != null && !out.contains(s)) {
                        out.add(s);
                        if (out.size() >= 12) return out;
                    }
                } catch (Exception ignored) {
                }
            }
        }
        return out;
    }

    private String readString(Address a, int max) {
        if (!mem.contains(a)) return null;
        StringBuilder sb = new StringBuilder();
        try {
            for (int i = 0; i < max; i++) {
                int b = mem.getByte(a.add(i)) & 0xff;
                if (b == 0) break;
                if (b < 0x20 || b > 0x7e) return null;
                sb.append((char) b);
            }
        } catch (Exception ex) {
            return null;
        }
        if (sb.length() < 6) return null;
        String s = sb.toString();
        // skip pure symbol noise / format fragments
        if (s.matches("^[A-Za-z0-9_]+$") && s.length() < 8) return null;
        return s;
    }

    private String slug(List<String> strs) {
        if (strs.isEmpty()) return "";
        String s = strs.get(0);
        // prefer asset-path or dotted names, they carry the strongest meaning
        for (String c : strs) {
            if (c.contains("/") || c.contains(":")) { s = c; break; }
        }
        s = s.toLowerCase().replaceAll("^[a-z0-9]+:/", "").replaceAll("^/+", "");
        s = s.replaceAll("[^a-z0-9]+", "_").replaceAll("^_+|_+$", "");
        if (s.length() > 40) s = s.substring(0, 40).replaceAll("_+$", "");
        return s;
    }

    private String subsystem(List<String> strs) {
        for (String s : strs) {
            String l = s.toLowerCase();
            if (l.contains("crime") || l.contains("wanted") || l.contains("witness")) return "ai/crime";
            if (l.contains("/ai/") || l.contains("dispatch") || l.contains("task")) return "ai";
            if (l.contains("vehicle") || l.contains("handling") || l.contains("cars")) return "vehicle";
            if (l.contains("ped") || l.contains("character")) return "peds";
            if (l.contains("audio") || l.contains("sound")) return "audio";
            if (l.contains("scaleform") || l.contains("ui/") || l.contains("hud")) return "ui";
            if (l.contains("network") || l.contains("net/") || l.contains("cloud")) return "network";
            if (l.contains("stream") || l.contains("rpf") || l.contains("img")) return "streaming";
            if (l.contains("script") || l.contains("rage::scr")) return "script";
            if (l.contains("weather") || l.contains("timecycle")) return "weather";
            if (l.contains("shader") || l.contains("render")) return "render";
        }
        return "core";
    }
}
