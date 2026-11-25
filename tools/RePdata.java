//@category REA
// Rebuild exact function bodies from the PE .pdata (RUNTIME_FUNCTION) table and
// disassemble them. GTA6's .exe is stripped of names but keeps a complete
// exception directory, so .pdata is the authoritative function map.
//
// Usage (script args): <pdata_offset> <count>
//   pdata_offset : first RUNTIME_FUNCTION index (resumable cursor)
//   count        : how many entries to process (use a large number for "all")
//
// Prints a single PDATA| summary line plus periodic PROGRESS| lines.
import ghidra.app.script.GhidraScript;
import ghidra.program.disassemble.Disassembler;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.mem.MemoryBlock;

public class RePdata extends GhidraScript {

    private static long u32(byte[] b, int o) {
        return (b[o] & 0xffL) | ((b[o + 1] & 0xffL) << 8)
                | ((b[o + 2] & 0xffL) << 16) | ((b[o + 3] & 0xffL) << 24);
    }

    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        int cursor = args.length > 0 ? Integer.parseInt(args[0]) : 0;
        int count = args.length > 1 ? Integer.parseInt(args[1]) : 1000;

        MemoryBlock pd = currentProgram.getMemory().getBlock(".pdata");
        MemoryBlock tx = currentProgram.getMemory().getBlock(".text");
        if (pd == null || tx == null) {
            println("PDATA|error|missing .pdata or .text");
            return;
        }

        byte[] buf = new byte[(int) pd.getSize()];
        pd.getBytes(pd.getStart(), buf);
        int entries = buf.length / 12;
        int stop = (int) Math.min(entries, (long) cursor + count);

        Address imageBase = currentProgram.getImageBase();
        Disassembler dis = Disassembler.getDisassembler(currentProgram, monitor, null);

        int made = 0, disd = 0, already = 0, bad = 0, failed = 0;
        for (int i = cursor; i < stop; i++) {
            int o = i * 12;
            long begin = u32(buf, o);
            long end = u32(buf, o + 4);   // exclusive
            if (begin < 0x1000 || end <= begin) { bad++; continue; }
            // .pdata stores RVAs; the program's image base is 0x140000000.
            Address start = imageBase.add(begin);
            Address last = imageBase.add(end - 1);
            if (!tx.contains(start) || !tx.contains(last)) { bad++; continue; }

            AddressSet body = new AddressSet(start, last);
            Function f = getFunctionAt(start);
            try {
                if (f == null) {
                    f = createFunction(start, null);
                    if (f == null) { bad++; continue; }
                }
                if (!f.getBody().equals(body)) {
                    f.setBody(body);
                }
                if (getInstructionAt(start) == null) {
                    dis.disassemble(start, body);
                    disd++;
                } else {
                    already++;
                }
                made++;
            } catch (Exception ex) {
                failed++;
            }
            if ((i + 1) % 5000 == 0) {
                println("PROGRESS|" + (i + 1) + "/" + entries
                        + "|made=" + made + "|dis=" + disd + "|already=" + already
                        + "|bad=" + bad + "|fail=" + failed);
            }
        }
        println("PDATA|entries=" + entries + "|cursor=" + cursor + "|stop=" + stop
                + "|made=" + made + "|disassembled=" + disd + "|already=" + already
                + "|bad=" + bad + "|failed=" + failed);
        println("NEXT|" + stop);
    }
}
