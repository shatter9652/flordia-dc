// Decompile every analysed function into one file each, plus an index.
//
//   -postScript DumpAll.java <output-directory> [max-functions]
//
// Files: <out>/<sanitised name>_<va>.c, each with the function's address, size,
// signature and the decompiler's C. <out>/index.tsv lists address, size, name,
// file, in address order, so the output can be grepped by symbol as well as by
// name.
//
// This is the batch counterpart to DumpC.java: DumpC answers "what is at these
// addresses", DumpAll writes the whole program out. It does not rename
// anything, and the C is provider output, not recovered source.

import java.io.File;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;

public class DumpAll extends GhidraScript {
    private static String sanitise(String name) {
        StringBuilder out = new StringBuilder();
        for (int i = 0; i < name.length(); i++) {
            char c = name.charAt(i);
            boolean ok = (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
                    || (c >= 'a' && c <= 'z') || c == '_' || c == '-' || c == '.';
            out.append(ok ? c : '_');
        }
        String text = out.toString();
        if (text.length() > 96) {
            text = text.substring(0, 96);
        }
        return text.isEmpty() ? "unnamed" : text;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("// DumpAll: give an output directory");
            return;
        }
        File out = new File(args[0]);
        if (!out.isDirectory() && !out.mkdirs()) {
            println("// DumpAll: cannot create " + out);
            return;
        }
        int limit = args.length > 1 ? Integer.decode(args[1]) : Integer.MAX_VALUE;

        List<Function> functions = new ArrayList<Function>();
        FunctionIterator it = currentProgram.getFunctionManager().getFunctions(true);
        while (it.hasNext() && functions.size() < limit) {
            Function function = it.next();
            if (function.isExternal() || function.getBody().getNumAddresses() == 0) {
                continue;
            }
            functions.add(function);
        }
        Collections.sort(functions, new Comparator<Function>() {
            @Override
            public int compare(Function a, Function b) {
                return a.getEntryPoint().compareTo(b.getEntryPoint());
            }
        });

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram)) {
            println("// DumpAll: could not open program");
            return;
        }

        int written = 0;
        int failed = 0;
        try (PrintWriter index = new PrintWriter(new File(out, "index.tsv"), "UTF-8")) {
            index.println("va\tsize\tname\tfile\tprogram\tsha256");
            String program = currentProgram.getName();
            String sha = currentProgram.getExecutableSHA256();
            for (Function function : functions) {
                String va = function.getEntryPoint().toString();
                String file = sanitise(function.getName()) + "_" + va + ".c";
                File target = new File(out, file);
                DecompileResults results = decompiler.decompileFunction(function, 120, monitor);
                if (results == null || !results.decompileCompleted()
                        || results.getDecompiledFunction() == null) {
                    failed++;
                    println("FAILED|" + va + "|" + function.getName());
                    continue;
                }
                try (PrintWriter writer = new PrintWriter(target, "UTF-8")) {
                    writer.println("// " + program + " " + sha);
                    writer.println("// " + function.getName() + " @ " + va
                            + " size=" + function.getBody().getNumAddresses());
                    writer.println("// " + function.getPrototypeString(false, false));
                    writer.println();
                    writer.println(results.getDecompiledFunction().getC());
                }
                index.println(va + "\t" + function.getBody().getNumAddresses() + "\t"
                        + function.getName() + "\t" + file + "\t" + program + "\t" + sha);
                written++;
            }
        } finally {
            decompiler.dispose();
        }
        println("DUMPALL|written=" + written + "|failed=" + failed + "|out=" + out);
    }
}
