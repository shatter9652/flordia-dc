//@category REA
// Diagnose how this program represents its PE imports, so the GDK prototypes
// can be attached to the right object (external function vs external symbol).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Symbol;

public class ExtDiag extends GhidraScript {
    @Override
    public void run() throws Exception {
        int extFuncs = 0;
        FunctionIterator fit = currentProgram.getFunctionManager().getExternalFunctions();
        while (fit.hasNext()) {
            Function f = fit.next();
            if (extFuncs < 10) println("EXTFUNC|" + f.getName() + "|" + f.getEntryPoint());
            extFuncs++;
        }
        println("EXTFUNC_COUNT|" + extFuncs);

        int extSyms = 0, withFunc = 0;
        for (Symbol s : currentProgram.getSymbolTable().getAllSymbols(true)) {
            if (!s.isExternal()) continue;
            if (extSyms < 10) {
                Function f = currentProgram.getFunctionManager().getFunctionAt(s.getAddress());
                println("EXTSYM|" + s.getName() + "|" + s.getAddress() + "|func=" + (f != null));
            }
            extSyms++;
            if (currentProgram.getFunctionManager().getFunctionAt(s.getAddress()) != null) withFunc++;
        }
        println("EXTSYM_COUNT|" + extSyms + "|with_function=" + withFunc);
        println("LIBRARIES|" + currentProgram.getExternalManager().getExternalLibraryNames().length);
    }
}
