// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d310  size: 121 bytes
// Name:    FUN_14006d310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400746e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14006d310(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iStack_20;
  int iStack_1c;
  
  func_0x00014006d390(&iStack_1c);
  if ((((iStack_1c != 0) && (lVar2 = (**(code **)(*param_1 + 0xa8))(param_1), lVar2 != 0)) &&
      (lVar3 = func_0x000144f1bf10(*(undefined4 *)((longlong)param_1 + 0x9c)), lVar3 != 0)) &&
     (cVar1 = FUN_1400746e0(lVar2,iStack_1c,&iStack_20), cVar1 != '\0')) {
    lVar2 = *(longlong *)(lVar3 + 0x30);
    if (0 < (int)*(uint *)(lVar3 + 0x24)) {
      uVar4 = (ulonglong)*(uint *)(lVar3 + 0x24);
      do {
        if (*(int *)(*(longlong *)(lVar2 + 8) + 0x30) == iStack_20) {
          return lVar2;
        }
        lVar2 = lVar2 + 0xc0;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    return 0;
  }
  return 0;
}

