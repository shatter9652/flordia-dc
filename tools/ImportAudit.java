//@category REA
// Audit the PE import representation: external symbols, thunks, IAT slots and
// the functions the .pdata pass created. Run right after an import to prove the
// loader kept the import table (the previous project had 0 externals).
//
// Usage: no args (prints AUDIT| / IMP| / IMPLABEL| lines).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolIterator;
import ghidra.program.model.symbol.SymbolTable;

public class ImportAudit extends GhidraScript {

    @Override
    public void run() throws Exception {
        SymbolTable st = currentProgram.getSymbolTable();
        Memory mem = currentProgram.getMemory();

        int total = 0, external = 0, thunks = 0, funcs = 0, impLabels = 0;
        for (Symbol s : st.getAllSymbols(true)) {
            total++;
            if (s.isExternal()) external++;
            if (s.getName().startsWith("__imp_")) impLabels++;
        }
        FunctionIterator fit = currentProgram.getFunctionManager().getFunctions(true);
        while (fit.hasNext()) {
            Function f = fit.next();
            funcs++;
            if (f.isThunk()) thunks++;
        }

        println("AUDIT|symbols=" + total + "|external=" + external
                + "|thunks=" + thunks + "|functions=" + funcs + "|imp_labels=" + impLabels);

        // Show a few imports with their IAT address and thunk target, if any.
        int shown = 0;
        for (Symbol s : st.getAllSymbols(true)) {
            if (!s.isExternal()) continue;
            if (shown >= 25) break;
            Address a = s.getAddress();
            println("IMP|" + s.getName() + "|" + a + "|" + s.getParentNamespace().getName());
            shown++;
        }
        // Show the IAT slots that ReExport's TSV would label.
        shown = 0;
        for (Symbol s : st.getAllSymbols(true)) {
            if (!s.getName().startsWith("__imp_")) continue;
            if (shown >= 12) break;
            println("IMPLABEL|" + s.getName() + "|" + s.getAddress() + "|"
                    + (mem.contains(s.getAddress()) ? "mapped" : "unmapped"));
            shown++;
        }
        if (external == 0) {
            println("AUDIT|conclusion|no-external-symbols; PE import table was not loaded");
        } else {
            println("AUDIT|conclusion|import-table-loaded");
        }
    }
}
