// Decompile a list of addresses in the current program and print C to the log.
//
// Used by tools/ghidra_dump.py, which is the local substitute for an MCP
// decompiler: it converts a SELF window with tools/ps5elf.py, imports it into a
// throw-away Ghidra project, and runs this script. Addresses that the loader
// did not seed (a stripped image has only e_entry) are disassembled and turned
// into functions here, which is what makes a windowed import useful.
//
//   -postScript DumpC.java 0x8e0990,0x8e1100,0x8e18c0
//
// Everything is printed with `println`, so analyzeHeadless writes it to
// stdout/log. Nothing is written to the program.

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

public class DumpC extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("// DumpC: no addresses given");
            return;
        }

        DecompInterface decompiler = new DecompInterface();
        decompiler.toggleCCode(true);
        decompiler.toggleSyntaxTree(true);
        if (!decompiler.openProgram(currentProgram)) {
            println("// DumpC: could not open program");
            return;
        }

        for (String raw : args[0].split(",")) {
            String text = raw.trim();
            if (text.isEmpty()) {
                continue;
            }
            Address address;
            try {
                address = toAddr(text);
            } catch (Exception e) {
                println("// DumpC: bad address " + text);
                continue;
            }

            Function function = getFunctionAt(address);
            if (function == null) {
                if (getInstructionAt(address) == null) {
                    disassemble(address);
                }
                function = createFunction(address, null);
            }
            if (function == null) {
                println("// DumpC: no function at " + address);
                continue;
            }

            println("// ==== " + function.getName() + " @ " + address
                    + " size=" + function.getBody().getNumAddresses());
            DecompileResults results = decompiler.decompileFunction(function, 120, monitor);
            if (results != null && results.decompileCompleted()
                    && results.getDecompiledFunction() != null) {
                println(results.getDecompiledFunction().getC());
            } else {
                println("// decompile failed: "
                        + (results == null ? "no result" : results.getErrorMessage()));
            }
            println("");
        }

        decompiler.dispose();
    }
}
