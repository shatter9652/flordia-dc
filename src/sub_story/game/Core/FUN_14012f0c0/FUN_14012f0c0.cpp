// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012f0c0  size: 280 bytes
// Name:    FUN_14012f0c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141029d80, FUN_141029ce0, FUN_1424d8070, FUN_14129bb30, FUN_1424d81b0, FUN_1424d8040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14012f0c0(ulonglong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uStack_30;
  int iStack_2c;
  
  *param_2 = 0;
  FUN_141029d80(param_1,param_1 >> 0x20,&iStack_2c);
  if (iStack_2c != 0) {
    if (*(uint *)(_DAT_14763b048 + 0x138) <= *(uint *)(_DAT_14763b048 + 0x13c)) {
      return 0;
    }
    lVar5 = FUN_1424d8040(iStack_2c);
    if (lVar5 == 0) {
      FUN_141029ce0(param_1 & 0xffffffff,param_1 >> 0x20,&uStack_30);
      FUN_1424d8070(iStack_2c,uStack_30);
      return 0;
    }
    uVar2 = *(undefined4 *)(lVar5 + 0xc);
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    lVar6 = func_0x0001424d8180(uVar2,uVar7,param_1 & 0xffffffff);
    if (lVar6 != 0) {
      cVar4 = FUN_1424d81b0(lVar6);
      if (cVar4 != '\0') {
        return 0;
      }
      cVar4 = FUN_14129bb30(lVar6,lVar5);
      if (cVar4 != '\0') {
        uVar3 = *(uint *)(_DAT_14763b048 + 0x13c);
        plVar1 = (longlong *)(_DAT_14763b048 + 0x140);
        *(uint *)(_DAT_14763b048 + 0x13c) = uVar3 + 1;
        *(longlong *)(*plVar1 + (ulonglong)uVar3 * 8) = lVar6;
        return lVar6;
      }
      uVar2 = *(undefined4 *)(lVar5 + 0xc);
      uVar7 = *(undefined8 *)(lVar5 + 0x10);
    }
    cVar4 = func_0x0001413b0ec0(uVar2,uVar7);
    if (cVar4 != '\0') {
      func_0x0001413b1b90(lVar5);
    }
  }
  *param_2 = 1;
  return 0;
}

