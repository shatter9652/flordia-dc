// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000b5b0  size: 295 bytes
// Name:    FUN_14000b5b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc4170, FUN_1453d7ff0, FUN_144dc2120, FUN_1406b8d70, FUN_1410da840, FUN_144e23920, FUN_14026a8d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14000b5b0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = func_0x000144e24670(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar5 == 0) || (cVar4 = FUN_144dc4170(lVar5,param_2), cVar4 == '\0')) {
    uVar1 = *(undefined4 *)(param_2 + 0x9c);
    lVar5 = func_0x000144f03110(uVar1);
    lVar6 = func_0x000144fab120(uVar1);
    if (lVar5 == 0 && lVar6 != 0) {
      cVar4 = FUN_144e23920(uVar1);
      if (cVar4 != '\0') {
        lVar5 = FUN_1406b8d70(lVar6);
        return (ulonglong)CONCAT31((int3)((uint)uVar1 >> 8),*(undefined1 *)(lVar5 + 7));
      }
    }
    else {
      lVar6 = FUN_14026a8d0(param_2,0,0,1);
      if (lVar6 != 0) {
        return 0;
      }
      if ((((lVar5 != 0) && (uVar2 = *(uint *)(lVar5 + 0x4c), uVar2 != 0x1ffff)) &&
          (uVar3 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar2 & 0x1ffff) * 4),
          (~uVar3 & *(uint *)(_DAT_14abb6918 + 6)) == 0)) &&
         (((uVar3 & 0x7fe0000) == (uVar2 & 0xfffe0000) && (*_DAT_14abb6918 != 0)))) {
        return 1;
      }
      cVar4 = FUN_1453d7ff0(param_2);
      uVar1 = *(undefined4 *)(param_2 + 0x9c);
      if (((cVar4 != '\0') || (cVar4 = FUN_144dc2120(uVar1), cVar4 != '\0')) &&
         ((cVar4 = func_0x000144e52850(uVar1), cVar4 == '\0' ||
          (cVar4 = FUN_1410da840(param_1,param_2), cVar4 != '\0')))) {
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return 0;
}

