// Print the callers of a list of addresses, and optionally decompile them.
//
//   -postScript Xrefs.java 0x8401550,0x8401440,0x3544790[,--decompile]
//
// The point is to walk upwards from a body we already transcribed to the code
// that feeds it, without importing anything: it runs against the existing
// analysed project with -noanalysis, so it costs a project open, not an
// analysis.
//
// Output is one line per reference and, with --decompile, the caller bodies
// between markers. Nothing is written to the program.

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class Xrefs extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("// Xrefs: no addresses given");
            return;
        }

        boolean decompile = false;
        String list = args[0];
        for (int i = 1; i < args.length; i++) {
            if (args[i].equals("--decompile")) {
                decompile = true;
            }
        }

        DecompInterface decompiler = null;
        if (decompile) {
            decompiler = new DecompInterface();
            decompiler.toggleCCode(true);
            decompiler.toggleSyntaxTree(true);
            if (!decompiler.openProgram(currentProgram)) {
                println("// Xrefs: could not open program");
                return;
            }
        }

        for (String raw : list.split(",")) {
            String text = raw.trim();
            if (text.isEmpty()) {
                continue;
            }
            Address target;
            try {
                target = toAddr(Long.decode(text));
            } catch (Exception e) {
                println("// Xrefs: bad address " + text);
                continue;
            }
            Function owner = getFunctionContaining(target);
            println("// XREFS " + target + " in " + (owner == null ? "<no function>" : owner.getName()));
            ReferenceIterator it = currentProgram.getReferenceManager().getReferencesTo(target);
            while (it.hasNext()) {
                Reference ref = it.next();
                Address from = ref.getFromAddress();
                Function caller = getFunctionContaining(from);
                println("XREF|" + target + "|" + from + "|" + ref.getReferenceType()
                        + "|" + (caller == null ? "<no function>" : caller.getEntryPoint().toString())
                        + "|" + (caller == null ? "<no function>" : caller.getName()));
            }
        }

        if (decompiler == null) {
            return;
        }
        // Decompile every distinct caller once.
        java.util.Set<Long> done = new java.util.HashSet<Long>();
        for (String raw : list.split(",")) {
            Address target;
            try {
                target = toAddr(Long.decode(raw.trim()));
            } catch (Exception e) {
                continue;
            }
            ReferenceIterator it = currentProgram.getReferenceManager().getReferencesTo(target);
            while (it.hasNext()) {
                Address from = it.next().getFromAddress();
                Function caller = getFunctionContaining(from);
                if (caller == null || done.contains(caller.getEntryPoint().getOffset())) {
                    continue;
                }
                done.add(caller.getEntryPoint().getOffset());
                println("// ---- caller of " + target + ": " + caller.getName()
                        + " at " + caller.getEntryPoint());
                DecompileResults results = decompiler.decompileFunction(caller, 60, monitor);
                if (results == null || !results.decompileCompleted()) {
                    println("// Xrefs: decompile failed for " + caller.getName());
                    continue;
                }
                println(results.getDecompiledFunction().getC());
            }
        }
    }
}
