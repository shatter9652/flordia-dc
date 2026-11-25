// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002fb50  size: 100 bytes
// Name:    FUN_14002fb50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140030be0, FUN_14541a6e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002fb50(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  cVar2 = FUN_14541a6e0(*(undefined4 *)(param_1[2] + 0x9c));
  if ((cVar2 != '\0') && (uVar3 = *(ushort *)(param_1 + 1), uVar3 != 0)) {
    uVar5 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + uVar5 * 8);
      lVar4 = *(longlong *)(lVar1 + 0x12d8);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(lVar1 + 0x12d0);
      }
      if (*(char *)(lVar4 + 0x21) == '\x01') {
        FUN_140030be0();
        uVar3 = *(ushort *)(param_1 + 1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}

