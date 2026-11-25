// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004bcd0  size: 128 bytes
// Name:    FUN_14004bcd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004bcd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_14004bcd0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  cVar1 = *(char *)(param_1 + 0x7d);
  if (cVar1 == '\0') {
    uVar5 = 8;
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
      uVar5 = 1;
    }
    if ((*(longlong *)(param_1 + 8) != 0) && (uVar2 = FUN_14004bcd0(), uVar5 <= uVar2)) {
      uVar5 = uVar2;
    }
    if (*(short *)(param_1 + 0x28) != 0) {
      uVar4 = 0;
      uVar2 = uVar5;
      do {
        uVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x20) + uVar4 * 8) + 0x28))();
        if (uVar5 < uVar2) {
          uVar5 = uVar2;
        }
        uVar4 = uVar4 + 1;
        uVar2 = uVar5;
      } while (uVar4 < *(ushort *)(param_1 + 0x28));
    }
    cVar3 = (char)*(undefined4 *)(param_1 + 0x7c);
    cVar1 = (char)uVar5;
    if (cVar3 != '\0') {
      cVar1 = cVar3;
    }
    *(char *)(param_1 + 0x7d) = cVar1;
  }
  return cVar1;
}

