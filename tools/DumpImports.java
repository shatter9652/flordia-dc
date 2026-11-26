// Dump the eboot's imports as TSV, after the loader has resolved their NIDs.
//
//   -postScript DumpImports.java
//
// Line shape:
//
//   IMPORT|<va>|                  the stub's address in the image
//   IMPORT|<va>|<library>|<name>  a thunk the loader named from the import table
//
// GhidraProspero's NIDAnalyzer names PS5 import thunks "<library>::<symbol>"
// while it analyses the image, so a run of this script after analysis is the
// cheapest complete list of the eboot's imports: it needs no NID table of our
// own and no re-analysis. tools/ps5nids.py imports reads this output and joins
// it with the ps5-nid-map corpus for any stub the loader left unnamed.

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.Namespace;
import ghidra.program.model.symbol.Symbol;

public class DumpImports extends GhidraScript {
    @Override
    public void run() throws Exception {
        FunctionIterator functions = currentProgram.getFunctionManager().getFunctions(true);
        int named = 0;
        while (functions.hasNext()) {
            Function function = functions.next();
            if (!function.isThunk() && !function.isExternal()) {
                continue;
            }
            String name = function.getName();
            String library = "";
            Namespace parent = function.getParentNamespace();
            if (parent != null && !parent.isGlobal()) {
                library = parent.getName();
            }
            int split = name.indexOf("::");
            if (split > 0) {
                if (library.isEmpty()) {
                    library = name.substring(0, split);
                }
                name = name.substring(split + 2);
            }
            if (library.isEmpty()) {
                continue;
            }
            println("IMPORT|" + function.getEntryPoint() + "|" + library + "|" + name);
            named++;
        }
        println("IMPORTS|" + named);
    }
}
