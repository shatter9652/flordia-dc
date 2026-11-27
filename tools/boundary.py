#!/usr/bin/env python3
"""Prove whether a virtual address is an x86-64 instruction boundary.

Ghidra's `Disassemble Entry Points` analyzer decodes from whatever `e_entry`
says. If that address is interior to an instruction, the decoder has no way to
notice: x86 has no self-synchronisation, so it returns a valid-looking
instruction that is simply wrong, and every later address in the sweep is
shifted. That is how a dump of 0x438c63a produced `ADD byte ptr [RAX],AL`
inside the 5-byte `mov ecx,0x810` at 0x438c62e.

The only cheap defence is to look backwards: if some instruction starting in
the previous 15 bytes ends exactly at the address, it is a boundary. If one
merely spans it, the address is interior and the spanning instruction's start
is the address to snap to.

    python3 tools/boundary.py ../6RE/DUMPS/PS5Dump/eboot.bin 0x438c63a
"""
import os
import sys

from capstone import Cs, CS_ARCH_X86, CS_MODE_64

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)

MAX_INSN = 15          # longest x86-64 instruction
_md = Cs(CS_ARCH_X86, CS_MODE_64)


def _resolve(image, va):
    import ps5elf
    return ps5elf.resolve(image, va=va)


def _decode(image, va):
    off = _resolve(image, va)
    if off is None:
        return None
    code = image["data"][off:off + MAX_INSN]
    return next(_md.disasm(code, va), None)


def prove(image, va, max_back=MAX_INSN):
    """Return (start, exact).

    exact is True when an instruction decoded from an earlier offset lands
    precisely on ``va``, which is strong evidence that ``va`` begins an
    instruction. Otherwise ``start`` is the nearest earlier instruction that
    spans ``va`` (the containing instruction's start), and exact is False.
    """
    exact = None
    covering = []
    for back in range(1, max_back + 1):
        cand = va - back
        insn = _decode(image, cand)
        if insn is None:
            continue
        nxt = insn.address + insn.size
        if nxt == va:
            exact = cand
            break
        if nxt > va:
            covering.append(cand)
    if exact is not None:
        return exact, True
    if covering:
        return max(covering), False
    return va, False


def main(argv):
    import ps5elf
    image = ps5elf.load_image(argv[0])
    for text in argv[1:]:
        va = int(text, 0)
        start, exact = prove(image, va)
        if exact:
            print("%#x: boundary (instruction starts here)" % va)
        else:
            print("%#x: NOT a boundary; inside the instruction at %#x"
                  % (va, start))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
