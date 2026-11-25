//@category REA
// Print functions that call a named import, so one can be exported as proof
// that the GDK prototype reached the call site.
// Usage: <importName> [limit]
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.Function;

public class FindCallers extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] a = getScriptArgs();
        String want = a.length > 0 ? a[0] : "CreateThread";
        int limit = a.length > 1 ? Integer.parseInt(a[1]) : 10;
        int found = 0;
        for (Function f : currentProgram.getFunctionManager().getFunctions(true)) {
            if (f.isExternal() || f.isThunk()) continue;
            boolean hit = false;
            try {
                for (Function c : f.getCalledFunctions(monitor)) {
                    if (c.getName().equals(want) || c.getName().endsWith("::" + want)) {
                        hit = true;
                        break;
                    }
                }
            } catch (Exception ignored) {
            }
            if (!hit) continue;
            println("CALLER|" + f.getEntryPoint() + "|" + f.getName()
                    + "|" + f.getBody().getNumAddresses());
            if (++found >= limit) break;
        }
        println("CALLERS|" + want + "|" + found);
    }
}
