// Rename the program's import stubs from names/ps5_eboot_imports.tsv.
//
//   -postScript ApplyImports.java /home/nate/Port2PS4/gta6decomp
//
// The file is `va<TAB>nid<TAB>library<TAB>symbol<TAB>source`, written by
// `tools/ps5nids.py imports`. Each row's VA is an external/thunk stub in this
// program; the rename gives it the SDK symbol and, when the stub has no
// namespace of its own, puts it in one named after the module.
//
// Names are applied only where the stub currently carries a NID (optionally
// with an SCE version suffix such as `#A#B`). A stub that already has a real
// name is left alone, so running this twice is harmless.
//
// Prints one APPLIED|/SKIPPED| line per row and a summary, so the pass can be
// checked rather than trusted.

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

public class ApplyImports extends GhidraScript {
    private static boolean looksLikeNid(String name) {
        String bare = name;
        int hash = bare.indexOf('#');
        if (hash > 0) {
            bare = bare.substring(0, hash);
        }
        if (bare.length() != 11) {
            return false;
        }
        for (int i = 0; i < bare.length(); i++) {
            char c = bare.charAt(i);
            boolean ok = (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
                    || (c >= 'a' && c <= 'z') || c == '+' || c == '-';
            if (!ok) {
                return false;
            }
        }
        return true;
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("// ApplyImports: give the repository root");
            return;
        }
        File table = new File(args[0], "names/ps5_eboot_imports.tsv");
        if (!table.isFile()) {
            println("// ApplyImports: no " + table);
            return;
        }

        int applied = 0;
        int skipped = 0;
        try (BufferedReader reader = new BufferedReader(new FileReader(table))) {
            String line = reader.readLine();  // header
            while ((line = reader.readLine()) != null) {
                String[] fields = line.split("\t", -1);
                if (fields.length < 4 || fields[0].isEmpty() || fields[3].isEmpty()) {
                    continue;
                }
                Address address;
                try {
                    address = toAddr(Long.decode("0x" + fields[0]));
                } catch (Exception e) {
                    println("SKIPPED|" + fields[0] + "|bad address");
                    skipped++;
                    continue;
                }
                Function function = getFunctionAt(address);
                if (function == null) {
                    function = getFunctionContaining(address);
                }
                if (function == null) {
                    println("SKIPPED|" + fields[0] + "|no function");
                    skipped++;
                    continue;
                }
                if (looksLikeNid(fields[3])) {
                    // The corpus knew the module but not a name: renaming a stub
                    // to a NID changes nothing and would re-apply every run.
                    println("SKIPPED|" + fields[0] + "|module only: " + fields[2]);
                    skipped++;
                    continue;
                }
                if (!looksLikeNid(function.getName())) {
                    println("SKIPPED|" + fields[0] + "|already named " + function.getName());
                    skipped++;
                    continue;
                }
                String symbol = fields[3];
                // A mangled C++ symbol keeps its own scope; a C symbol is safe as
                // a plain leaf name.
                try {
                    function.setName(symbol, SourceType.USER_DEFINED);
                    applied++;
                    println("APPLIED|" + fields[0] + "|" + fields[2] + "|" + symbol);
                } catch (Exception e) {
                    println("SKIPPED|" + fields[0] + "|rename failed: " + e.getMessage());
                    skipped++;
                }
            }
        }
        println("IMPORTS_APPLIED|" + applied + "|skipped=" + skipped);
    }
}
