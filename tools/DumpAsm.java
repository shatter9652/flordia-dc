// Print raw disassembly for one or more address ranges.
//
//   -postScript DumpAsm.java 0x84005d0:0x8400640
//   -postScript DumpAsm.java 0x8e0990:0x8e09c0,0x8e1100:0x8e1130
//
// Companion to DumpC.java. The decompiler hides function boundaries and calling
// conventions that a stripped image does not have; when a decompiled body looks
// like it started mid-function, the instruction stream is what settles it. Text
// is the processor's own, nothing is written to the program.

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;

public class DumpAsm extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length == 0) {
            println("// DumpAsm: give START:END or a comma-separated list of ranges");
            return;
        }
        for (String spec : args[0].split(",")) {
            // d:START:END dumps raw bytes, for tables the disassembler would
            // otherwise refuse to touch (jump tables, key-id tables).
            if (spec.startsWith("d:")) {
                String[] hex = spec.substring(2).trim().split(":");
                if (hex.length != 2) {
                    println("// DumpAsm: bad data range " + spec);
                    continue;
                }
                Address at = toAddr(hex[0]);
                Address end = toAddr(hex[1]);
                println("// ==== data " + at + ".." + end);
                StringBuilder line = new StringBuilder();
                int count = 0;
                while (at.compareTo(end) < 0) {
                    byte[] raw = getBytes(at, 1);
                    line.append(raw == null ? "??" : String.format("%02x", raw[0]));
                    line.append(' ');
                    at = at.add(1);
                    if (++count % 16 == 0) {
                        println(line.toString().trim());
                        line.setLength(0);
                    }
                }
                if (line.length() > 0) {
                    println(line.toString().trim());
                }
                println("");
                continue;
            }
            String[] parts = spec.trim().split(":");
            if (parts.length != 2) {
                println("// DumpAsm: bad range " + spec);
                continue;
            }
            Address start = toAddr(parts[0]);
            Address end = toAddr(parts[1]);
            println("// ==== " + start + ".." + end);
            Address at = start;
            while (at.compareTo(end) < 0) {
                Instruction instruction = getInstructionAt(at);
                if (instruction == null) {
                    disassemble(at);
                    instruction = getInstructionAt(at);
                }
                if (instruction == null) {
                    byte[] raw = getBytes(at, 1);
                    String text = raw == null ? "??" : String.format("%02x", raw[0]);
                    println(at + ": " + text + "   <no instruction>");
                    at = at.add(1);
                    continue;
                }
                int length = instruction.getLength();
                // Show the call target's own bytes too: a 5-byte e8 rel32 is a
                // direct call, while an ff /2 is a call through memory or a
                // register, and that distinction matters at every call site.
                println(at + ": " + instruction.toString() + "   ; " + length + " bytes");
                at = at.add(length);
            }
            println("");
        }
    }
}
