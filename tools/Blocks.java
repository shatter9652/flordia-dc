// Print the program's memory blocks and a slice of its function inventory.
//
//   -postScript Blocks.java [offset] [limit]
//
// Exists to answer one question that comes up constantly with windowed imports:
// which virtual addresses did the import actually map, and did analysis seed
// any functions there. A window that reports the addresses you expect but no
// functions means analysis, not the window, is the thing to fix.

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.mem.MemoryBlock;

public class Blocks extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        int offset = 0;
        int limit = 20;
        if (args.length > 0) {
            offset = Integer.decode(args[0]);
        }
        if (args.length > 1) {
            limit = Integer.decode(args[1]);
        }

        println("IMAGEBASE|" + currentProgram.getImageBase());
        for (MemoryBlock block : currentProgram.getMemory().getBlocks()) {
            println("BLOCK|" + block.getName() + "|" + block.getStart() + "|" + block.getEnd()
                    + "|r=" + block.isRead() + " x=" + block.isExecute()
                    + " init=" + block.isInitialized());
        }

        int total = currentProgram.getFunctionManager().getFunctionCount();
        println("FUNCTIONS|" + total);
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        int index = 0;
        int shown = 0;
        while (functions.hasNext() && shown < limit) {
            Function function = functions.next();
            if (index++ < offset) {
                continue;
            }
            println("FUNC|" + function.getEntryPoint() + "|" + function.getName()
                    + "|size=" + function.getBody().getNumAddresses());
            shown++;
        }
    }
}
