// Print raw disassembly for one or more address ranges.
//
//   -postScript DumpAsm.java 0x84005d0:0x8400640
//   -postScript DumpAsm.java 0x8e0990:0x8e09c0,0x8e1100:0x8e1130
//   -postScript DumpAsm.java snap:0x438c63a:0x438c670
//   -postScript DumpAsm.java out=/tmp/asm.txt 0x438c600:0x438c700
//
// Companion to DumpC.java. The decompiler hides function boundaries and calling
// conventions that a stripped image does not have; when a decompiled body looks
// like it started mid-function, the instruction stream is what settles it. Text
// is the processor's own, nothing is written to the program.
//
// Why this is not just "disassemble and print"
// --------------------------------------------
// The x86 decoder has no self-synchronisation: fed any offset it returns *some*
// instruction, usually a plausible one. Two failure modes follow, and both were
// observed in this image at 0x438c63a / 0x438c631:
//
//   1. `disassemble(at)` on an address that is not a real boundary manufactures
//      an instruction. 0x438c631 lies inside the 5-byte `mov ecx,0x810` at
//      0x438c62e; its bytes `08 00` decode cleanly as `ADD byte ptr [RAX],AL`.
//      The printer then advances two bytes and every later address is shifted.
//
//   2. `getInstructionAt(at)` only matches an instruction whose *start* is
//      `at`. Asking for an address interior to an already-decoded instruction
//      used to return the containing one, print it under the requested address,
//      and then advance by its full length -- which overshoots the real end by
//      `at - start` and silently drops code.
//
// So this script proves the boundary before it prints anything: an interior
// address is reported and the sweep resumes at the containing instruction's
// end (never past it), and an address Ghidra cannot decode is shown as a byte
// rather than guessed at. A range that starts mid-instruction is called out;
// prefix it with `snap:` to start at the real boundary instead.

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Instruction;

import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;

public class DumpAsm extends GhidraScript {

    private final StringBuilder out = new StringBuilder();
    private int desyncs = 0;

    private void emit(String line) {
        out.append(line).append('\n');
    }

    @Override
    public void run() throws Exception {
        String outPath = null;
        List<String> specs = new ArrayList<>();
        for (String arg : getScriptArgs()) {
            if (arg.startsWith("out=")) {
                outPath = arg.substring(4);
            } else {
                specs.add(arg);
            }
        }
        if (specs.isEmpty()) {
            emit("// DumpAsm: give START:END or a comma-separated list of ranges");
            finish(outPath);
            return;
        }

        for (String arg : specs) {
            for (String raw : arg.split(",")) {
                String spec = raw.trim();
                if (spec.isEmpty()) {
                    continue;
                }
                // d:START:END dumps raw bytes, for tables the disassembler would
                // otherwise refuse to touch (jump tables, key-id tables).
                if (spec.startsWith("d:")) {
                    dumpData(spec.substring(2).trim());
                    continue;
                }
                boolean snap = false;
                if (spec.startsWith("snap:")) {
                    snap = true;
                    spec = spec.substring(5).trim();
                }
                dumpCode(spec, snap);
            }
        }
        if (desyncs > 0) {
            emit("// " + desyncs + " desync(s): ranges did not start on an "
                 + "instruction boundary; use snap:START:END to align them");
        }
        finish(outPath);
    }

    private void finish(String outPath) throws Exception {
        if (outPath != null) {
            Files.writeString(Paths.get(outPath), out.toString());
        }
        // Headless routes println to the application log, not the terminal; the
        // out= file is how a caller actually receives this text.
        for (String line : out.toString().split("\n")) {
            println(line);
        }
    }

    private void dumpData(String spec) throws Exception {
        String[] hex = spec.split(":");
        if (hex.length != 2) {
            emit("// DumpAsm: bad data range " + spec);
            return;
        }
        Address at = toAddr(hex[0]);
        Address end = toAddr(hex[1]);
        emit("// ==== data " + at + ".." + end);
        StringBuilder line = new StringBuilder();
        int count = 0;
        while (at.compareTo(end) < 0) {
            byte[] raw = getBytes(at, 1);
            line.append(raw == null ? "??" : String.format("%02x", raw[0]));
            line.append(' ');
            at = at.add(1);
            if (++count % 16 == 0) {
                emit(line.toString().trim());
                line.setLength(0);
            }
        }
        if (line.length() > 0) {
            emit(line.toString().trim());
        }
        emit("");
    }

    private void dumpCode(String spec, boolean snap) throws Exception {
        String[] parts = spec.split(":");
        if (parts.length != 2) {
            emit("// DumpAsm: bad range " + spec);
            return;
        }
        Address start = toAddr(parts[0]);
        Address end = toAddr(parts[1]);

        if (snap) {
            Instruction owner = getInstructionContaining(start);
            if (owner != null && owner.getAddress().compareTo(start) < 0) {
                emit("// snapped " + start + " back to instruction start "
                     + owner.getAddress());
                start = owner.getAddress();
            }
        } else if (getInstructionAt(start) == null
                   && getInstructionContaining(start) == null) {
            // Nothing proves this is a boundary. The sweep below is still the
            // best available reading, but say so: a fabricated first
            // instruction shifts everything after it.
            emit("// warning: " + start + " is not a known instruction "
                 + "boundary; prefix the range with snap: to align it");
        }

        emit("// ==== " + start + ".." + end);
        Address at = start;
        while (at.compareTo(end) < 0) {
            Instruction here = getInstructionAt(at);
            if (here == null) {
                Instruction owner = getInstructionContaining(at);
                if (owner != null) {
                    // Interior to a decoded instruction: printing it here would
                    // label it with the wrong address, and advancing by its
                    // length from `at` would skip (at - owner.start) bytes.
                    // Resync to the owner's end and lose nothing.
                    desyncs++;
                    emit(at + ": <desync> inside " + owner.getAddress()
                         + ": " + owner + "   ; resync");
                    at = owner.getMaxAddress().add(1);
                    continue;
                }
                // Undecoded: ask Ghidra, but only accept an instruction that
                // really starts here.
                disassemble(at);
                here = getInstructionAt(at);
            }
            if (here == null) {
                byte[] raw = getBytes(at, 1);
                String text = raw == null ? "??" : String.format("%02x", raw[0]);
                emit(at + ": " + text + "   <no instruction>");
                at = at.add(1);
                continue;
            }
            // A 5-byte e8 rel32 is a direct call, while an ff /2 is a call
            // through memory or a register; the distinction matters at every
            // call site, so the length is printed with the text.
            emit(at + ": " + here + "   ; " + here.getLength() + " bytes");
            at = here.getMaxAddress().add(1);
        }
        emit("");
    }
}
