// window.elf f73d8bde3636243e04df956e7df154afebded3ec85692b8da4b5fd9976ee3895
// FUN_084054a0 @ 084054a0 size=39
// undefined FUN_084054a0()


void FUN_084054a0(int param_1)

{
  if (param_1 - 1U < 10) {
                    /* WARNING: Could not emulate address calculation at 0x084054b9 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)((ulong)(param_1 - 1U) * 4 + 0x9d48d58) + 0x9d48d58))();
    return;
  }
  return;
}


