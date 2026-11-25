//@category REA
// Export decompiled GTA VI functions in the layout this project uses:
//
//   src/sub_story/game/<subsystem>/<FunctionName>/<FunctionName>.cpp
//   src/sub_story/rage/<layer>/<FunctionName>/<FunctionName>.cpp
//
// i.e. one folder per function (so evidence, notes and later ports can sit next
// to it), file named after the function, under the project root this build was
// compiled from. That root is not guessed: the image carries the linker path
// X:/americas/src/sub_story/game/vs_project/.../game_scarlett_master.pdb, so the
// tree is src/sub_story/{game,rage}/..., the same shape GTAVSRC uses at
// src/dev_ng/{game,rage}/.... A function named from a GTA V source file goes to
// that file's own directory (game/shaders, rage/base, ...), and a body that
// loads a resource path is filed under the area that path belongs to
// (common:/data/ai/... -> game/ai, platform:/data/ui/... -> game/frontend/ui).
//
// Usage: <outDir> <startAddressHex|0> <count> <stringsOnly 0|1>
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.disassemble.Disassembler;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.data.CategoryPath;
import ghidra.program.model.data.DataTypeManager;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;

public class ReSource extends GhidraScript {

    private Memory mem;
    private DecompInterface dec;

    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        if (a.length < 4) {
            println("EXPORT|error|usage <outDir> <startHex|0> <count> <stringsOnly>");
            return;
        }
        File out = new File(a[0]);
        long start = 0;
        int count = Integer.MAX_VALUE;
        java.util.Set<Long> only = null;
        if (a[1].startsWith("@")) {
            // address list: one RVA/VA per line, export exactly those functions
            only = new java.util.HashSet<>();
            try (java.io.BufferedReader r = new java.io.BufferedReader(
                    new java.io.FileReader(new File(a[1].substring(1))))) {
                String line;
                while ((line = r.readLine()) != null) {
                    line = line.trim();
                    if (line.isEmpty() || line.startsWith("#")) continue;
                    String t = line.split("\t")[0].replace("0x", "");
                    only.add(Long.parseLong(t, 16));
                }
            }
        } else {
            start = Long.parseLong(a[1].replace("0x", ""), 16);
            count = Integer.parseInt(a[2]);
        }
        boolean stringsOnly = "1".equals(a[3]);

        mem = currentProgram.getMemory();
        loadPdata();
        loadSourceDirs(out);
        dec = new DecompInterface();
        dec.toggleCCode(true);
        dec.toggleSyntaxTree(false);
        dec.openProgram(currentProgram);
        Disassembler dis = Disassembler.getDisassembler(currentProgram, monitor, null);

        int seen = 0, written = 0, skipped = 0, failed = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            Address ep = f.getEntryPoint();
            if (only != null) {
                if (!only.contains(ep.getOffset())) continue;
            } else {
                if (start != 0 && ep.getOffset() < start) continue;
                if (seen++ >= count) break;
            }
            AddressSetView body = f.getBody();
            if (body.getNumAddresses() <= 1) {
                // An imported, non-analyzed function has no body yet. .pdata is
                // the authoritative range, so take it from there and size the
                // function before disassembling.
                Long size = pdataSize(ep);
                if (size == null) continue;
                AddressSet s = new AddressSet(ep, ep.add(size - 1));
                try {
                    f.setBody(s);
                    body = s;
                } catch (Exception ex) {
                    continue;
                }
            }
            try {
                if (getInstructionAt(ep) == null) dis.disassemble(ep, body);
            } catch (Exception ignored) {
            }

            List<String> own = referencedStrings(body);
            LinkedHashSet<String> merged = new LinkedHashSet<>(own);
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
                            if (merged.size() >= 16) break;
                        }
                        if (merged.size() >= 16) break;
                    }
                } catch (Exception ignored) {
                }
            }
            List<String> strs = new ArrayList<>(merged);
            if (stringsOnly && strs.isEmpty()) { skipped++; continue; }

            String name = safeName(f.getName());
            String pathName = name.replace("::", "__");
            String sub = subsystem(name, strs);
            String cls = className(name);
            String tree = sourceTree(name, sub, strs);

            DecompileResults res;
            try {
                res = dec.decompileFunction(f, 120, monitor);
            } catch (Exception ex) {
                res = null;
            }
            if (res == null || !res.decompileCompleted() || res.getDecompiledFunction() == null) {
                failed++;
                continue;
            }
            String code = res.getDecompiledFunction().getC();

            File dir = new File(out, "src/sub_story/" + tree + "/" + pathName);
            dir.mkdirs();
            File target = new File(dir, pathName + ".cpp");
            try (BufferedWriter w = new BufferedWriter(new FileWriter(target))) {
                w.write("// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)\n");
                w.write("// Address: " + ep + "  size: " + body.getNumAddresses() + " bytes\n");
                w.write("// Name:    " + f.getName() + "\n");
                w.write("// Subsystem: " + sub + "\n");
                if (cls != null) w.write("// Class:   " + cls + "\n");
                String note = f.getRepeatableComment();
                if (note != null && !note.isEmpty()) {
                    w.write("//\n// Evidence:\n");
                    for (String line : note.split("\n")) w.write("//   " + line + "\n");
                }
                w.write("//\n// Referenced strings (" + own.size() + " in this body, " + strs.size()
                        + " including direct callees):\n");
                for (String s : strs) w.write("//   \"" + esc(s) + "\"\n");
                w.write("// Callees: ");
                StringBuilder callees = new StringBuilder();
                for (Function c : f.getCalledFunctions(monitor)) {
                    if (callees.length() > 0) callees.append(", ");
                    callees.append(c.getName());
                }
                w.write(callees + "\n");
                w.write("//\n// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;\n");
                w.write("// identifiers are recovered, not original. See ../../../README.md.\n\n");
                w.write("#include \"gta6decomp/rage_types.h\"\n");
                if (cls != null) w.write("#include \"gta6decomp/" + cls + ".h\"\n");
                w.write("\n");
                w.write(code);
                if (!code.endsWith("\n")) w.write("\n");
            }
            appendIndex(out, ep, body.getNumAddresses(), f.getName(), sub, strs.size(),
                    "src/sub_story/" + tree + "/" + pathName + "/" + pathName + ".cpp");
            written++;
            if (written % 25 == 0) println("PROGRESS|written=" + written + "|skipped=" + skipped + "|failed=" + failed);
        }
        println("EXPORT|written=" + written + "|skipped=" + skipped + "|failed=" + failed + "|seen=" + seen);
    }

    private java.util.Map<String, String> sourceDirs = new java.util.HashMap<>();

    /** GTAVSRC relative directory for a function name, from the string match table. */
    private void loadSourceDirs(File root) {
        File tsv = new File(root, "matches/gtav_source_functions.tsv");
        if (!tsv.isFile()) return;
        try (java.io.BufferedReader r = new java.io.BufferedReader(
                new java.io.FileReader(tsv))) {
            String line;
            boolean header = true;
            while ((line = r.readLine()) != null) {
                if (header) { header = false; continue; }
                String[] c = line.split("\t", 5);
                if (c.length < 4 || c[1].isEmpty() || c[3].isEmpty()) continue;
                int slash = c[3].lastIndexOf('/');
                if (slash <= 0) continue;
                sourceDirs.put(c[1], c[3].substring(0, slash));
            }
        } catch (Exception ignored) {
        }
    }

    /**
     * Directory for a body, best evidence first: the GTA V source file that named
     * it, then the resource paths the body itself loads, then its subsystem.
     */
    private String sourceTree(String name, String sub, List<String> strs) {
        String known = sourceDirs.get(name);
        if (known != null) return known;
        String asset = assetTree(strs);
        if (asset != null) return asset;
        if (sub.equals("audio")) return "game/audio";
        if (sub.equals("vehicle")) return "game/Vehicles";
        if (sub.equals("peds")) return "game/Peds";
        if (sub.equals("ai") || sub.equals("ai/crime")) return "game/ai";
        if (sub.equals("network")) return "game/network";
        if (sub.equals("renderer")) return "game/renderer";
        if (sub.equals("physics")) return "game/physics";
        if (sub.equals("streaming")) return "game/streaming";
        if (sub.equals("frontend")) return "game/frontend";
        if (sub.equals("script")) return "game/script";
        if (sub.equals("rage")) return "rage/base";
        return "game/Core";
    }

    /** Resource namespace -> GTAVSRC-style source directory. */
    private static final String[][] AREAS = {
        {"ai", "game/ai"}, {"audio", "game/audio"}, {"animation", "game/animation"},
        {"camera", "game/camera"}, {"frontend", "game/frontend"}, {"ui", "game/frontend/ui"},
        {"network", "game/network"}, {"pathserver", "game/pathserver"},
        {"peds", "game/Peds"}, {"physics", "game/physics"}, {"pickups", "game/pickups"},
        {"renderer", "game/renderer"}, {"scene", "game/scene"}, {"script", "game/script"},
        {"shaders", "game/shaders"}, {"streaming", "game/streaming"}, {"task", "game/task"},
        {"text", "game/text"}, {"timecycle", "game/timecycle"},
        {"vehicles", "game/Vehicles"}, {"vehicle", "game/Vehicles"}, {"vfx", "game/vfx"},
        {"weapons", "game/weapons"},
    };

    /**
     * Source directory implied by the resource paths a body loads. The executable
     * keeps its content in namespaces (common:/data/ai/..., platform:/data/ui/...),
     * and those first segments are the same areas the source tree is split into.
     */
    private String assetTree(List<String> strs) {
        for (String s : strs) {
            String t = s;
            int c = t.indexOf(":/");
            if (c > 0 && c < 12) t = t.substring(c + 2);
            else if (t.startsWith("persistent_assets/")) t = t.substring(18);
            else continue;
            t = t.trim().toLowerCase();
            if (t.startsWith("data/")) t = t.substring(5);
            String[] seg = t.split("/");
            if (seg.length == 0 || seg[0].isEmpty()) continue;
            for (String[] area : AREAS) {
                if (!area[0].equals(seg[0])) continue;
                // one level of sub-area, when it is a directory and not a file
                if (seg.length > 2 && !seg[1].contains(".") && seg[1].length() < 24
                        && seg[1].matches("[a-z0-9_\\-]+")) {
                    return area[1] + "/" + seg[1];
                }
                return area[1];
            }
        }
        return null;
    }

    private java.util.Map<Long, Long> pdataMap;

    /** begin RVA -> exclusive end RVA, from the exception directory. */
    private void loadPdata() throws Exception {
        pdataMap = new java.util.HashMap<>();
        ghidra.program.model.mem.MemoryBlock pd = mem.getBlock(".pdata");
        if (pd == null) return;
        byte[] buf = new byte[(int) pd.getSize()];
        pd.getBytes(pd.getStart(), buf);
        for (int o = 0; o + 11 < buf.length; o += 12) {
            long begin = (buf[o] & 0xffL) | ((buf[o + 1] & 0xffL) << 8)
                    | ((buf[o + 2] & 0xffL) << 16) | ((buf[o + 3] & 0xffL) << 24);
            long end = (buf[o + 4] & 0xffL) | ((buf[o + 5] & 0xffL) << 8)
                    | ((buf[o + 6] & 0xffL) << 16) | ((buf[o + 7] & 0xffL) << 24);
            if (begin != 0 && end > begin) pdataMap.put(begin, end);
        }
    }

    private Long pdataSize(Address ep) {
        if (pdataMap == null) return null;
        Long end = pdataMap.get(ep.getOffset() - currentProgram.getImageBase().getOffset());
        if (end == null) return null;
        return end - (ep.getOffset() - currentProgram.getImageBase().getOffset());
    }

    private void appendIndex(File out, Address ep, long size, String name, String sub,
                             int nstr, String path) throws Exception {
        File idx = new File(out, "index.tsv");
        boolean empty = !idx.exists() || idx.length() == 0;
        try (BufferedWriter w = new BufferedWriter(new FileWriter(idx, true))) {
            if (empty) w.write("address\tsize\tname\tsubsystem\tstrings\tfile\n");
            w.write(ep + "\t" + size + "\t" + name + "\t" + sub + "\t" + nstr + "\t" + path + "\n");
        }
    }

    /** Keep GTAVSRC-looking names, make them legal and short enough for a path. */
    private String safeName(String raw) {
        String s = raw.replaceAll("<[^>]*>", "");
        s = s.replaceAll("[^A-Za-z0-9_:~.]", "_");
        if (s.length() > 110) s = s.substring(0, 110) + "_" + Integer.toHexString(s.hashCode());
        return s.isEmpty() ? "unnamed" : s;
    }

    private String className(String name) {
        int i = name.indexOf("::");
        if (i <= 0) return null;
        String cls = name.substring(0, i);
        if (cls.startsWith("sub_") || cls.startsWith("FUN_")) return null;
        return cls.replaceAll("[^A-Za-z0-9_]", "_");
    }

    /** GTAVSRC-ish subsystem buckets, from the class first, then asset strings. */
    private String subsystem(String name, List<String> strs) {
        String n = name.toLowerCase();
        if (n.startsWith("aud") || n.contains("audio") || n.contains("sound")) return "audio";
        if (n.startsWith("cvehicle") || n.contains("vehicle") || n.contains("handling")) return "vehicle";
        if (n.startsWith("cped") || n.startsWith("cpeds") || n.contains("ped")) return "peds";
        if (n.startsWith("ctask") || n.startsWith("cai") || n.contains("dispatch")) return "ai";
        if (n.startsWith("cnet") || n.contains("network") || n.contains("net_")) return "network";
        if (n.startsWith("fw") || n.startsWith("rage")) return "rage";
        if (n.startsWith("grc") || n.contains("shader") || n.contains("render")) return "renderer";
        if (n.startsWith("ph") || n.contains("physics") || n.contains("collision")) return "physics";
        if (n.startsWith("str") || n.contains("stream") || n.contains("rpf")) return "streaming";
        if (n.startsWith("scr") || n.contains("script")) return "script";
        for (String s : strs) {
            String l = s.toLowerCase();
            if (l.contains("crime") || l.contains("wanted") || l.contains("witness")) return "ai/crime";
            if (l.contains("/ai/")) return "ai";
            if (l.contains("vehicle") || l.contains("handling")) return "vehicle";
            if (l.contains("audio") || l.contains("sound")) return "audio";
            if (l.contains("scaleform") || l.contains("hud") || l.contains("ui/")) return "frontend";
            if (l.contains("network") || l.contains("net/")) return "network";
            if (l.contains("stream") || l.contains("rpf")) return "streaming";
            if (l.contains("shader") || l.contains("render")) return "renderer";
            if (l.contains("physics") || l.contains("collision")) return "physics";
        }
        return "core";
    }

    private static final java.util.regex.Pattern RIP_REL =
            java.util.regex.Pattern.compile("\\[RIP\\s*\\+\\s*0x([0-9a-fA-F]+)\\]");

    private List<String> referencedStrings(AddressSetView body) {
        List<String> out = new ArrayList<>();
        InstructionIterator it = currentProgram.getListing().getInstructions(body, true);
        while (it.hasNext()) {
            Instruction ins = it.next();
            for (Reference r : ins.getReferencesFrom()) {
                Address t = r.getToAddress();
                if (t == null) continue;
                String s = readString(t, 160);
                if (s != null && !out.contains(s)) {
                    out.add(s);
                    if (out.size() >= 24) return out;
                }
            }
            java.util.regex.Matcher m = RIP_REL.matcher(ins.toString());
            while (m.find()) {
                try {
                    long disp = Long.parseLong(m.group(1), 16);
                    Address t = ins.getAddress().add(ins.getLength() + disp);
                    String s = readString(t, 160);
                    if (s != null && !out.contains(s)) {
                        out.add(s);
                        if (out.size() >= 24) return out;
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
        if (s.matches("^[A-Za-z0-9_]+$") && s.length() < 8) return null;
        return s;
    }

    private static String esc(String s) {
        return s.replace("\\", "\\\\").replace("\"", "\\\"");
    }
}
