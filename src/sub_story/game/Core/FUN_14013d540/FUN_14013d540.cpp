// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d540  size: 187 bytes
// Name:    FUN_14013d540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013d540(longlong param_1,ushort param_2)

{
  int *piVar1;
  char cVar2;
  longlong unaff_GS_OFFSET;
  
  *(ushort *)(param_1 + 0x234) = param_2;
  piVar1 = (int *)(*(longlong *)(_DAT_14a924088 + 0x18) + 0x7e0 + (ulonglong)param_2 * 0x820);
  *piVar1 = *piVar1 + 1;
  if (*(short *)(param_1 + 0x21c) == -1) {
    cVar2 = func_0x000144fffa50(param_1 + 0x21c,3);
    if (cVar2 != '\0') {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      func_0x00014507bb30(*(undefined2 *)(param_1 + 0x21c),0x90544c90);
      *(byte *)(param_1 + 0x23c) = *(byte *)(param_1 + 0x23c) | 4;
      *(undefined4 *)(param_1 + 0x1fc) = 0xffffffff;
    }
  }
  return;
}

