// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc330  size: 166 bytes
// Name:    FUN_1401cc330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140d6aeb0, FUN_1401cc400, FUN_1456ab1e0, FUN_145086440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401cc330(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_3c [28];
  undefined1 auVar5 [64];
  
  lVar2 = FUN_145086440(*(undefined4 *)(param_2 + 8),auStack_3c,0x1c);
  auVar5 = ZEXT464(_DAT_145fc6f48);
  uVar4 = (ulonglong)_DAT_145fc6f48;
  if (lVar2 != 0) {
    lVar3 = FUN_140d6aeb0(param_1,lVar2);
    uVar4 = auVar5._0_8_;
    if (lVar3 != 0) {
      lVar3 = func_0x0001401cc3e0(lVar3);
      if (((lVar3 != 0) &&
          (lVar2 = FUN_1401cc400(*(undefined8 *)(param_1 + 0x3b8),*(undefined4 *)(param_1 + 0x3c0),
                                 lVar2,*(undefined8 *)(lVar3 + 8)), lVar2 != 0)) &&
         (cVar1 = FUN_1456ab1e0(lVar2,*(undefined8 *)(lVar3 + 8)), cVar1 != '\0')) {
        return (ulonglong)*(uint *)(param_2 + 0xc);
      }
      uVar4 = (ulonglong)*(uint *)(param_2 + 0x10);
    }
  }
  return uVar4;
}

