//@category REA
// Print the data type attached to a few imported functions, proving the GDK
// prototype reached the external location (and therefore the decompiler).
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.symbol.ExternalLocation;
import ghidra.program.model.symbol.ExternalLocationIterator;

public class ExternalTypes extends GhidraScript {
    @Override
    public void run() throws Exception {
        int withType = 0, total = 0, funcs = 0;
        FunctionIterator fit = currentProgram.getFunctionManager().getExternalFunctions();
        while (fit.hasNext()) { fit.next(); funcs++; }
        for (String lib : currentProgram.getExternalManager().getExternalLibraryNames()) {
            ExternalLocationIterator it = currentProgram.getExternalManager().getExternalLocations(lib);
            while (it.hasNext()) {
                ExternalLocation loc = it.next();
                total++;
                String type = loc.getDataType() == null ? "" : loc.getDataType().getName();
                if (!type.isEmpty()) withType++;
                if (withType <= 8 && !type.isEmpty()) {
                    println("EXTYPE|" + loc.getLabel() + "|" + type);
                }
            }
        }
        println("EXTYPES|locations=" + total + "|typed=" + withType + "|functions=" + funcs);
    }
}
