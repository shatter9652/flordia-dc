// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ffb50  size: 255 bytes
// Name:    FUN_1400ffb50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455b8fd0, FUN_140b48d50, FUN_140b49020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400ffb50(undefined4 param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar1 = _DAT_1499a9f98;
  lVar5 = 0;
  lVar4 = FUN_140b49020(_DAT_1499a9f98,param_1,1,0);
  if ((*(byte *)(param_2 + 0x18) & 0x10) != 0) {
    lVar5 = FUN_140b49020(uVar1,param_1,1,1);
  }
  if (lVar4 == 0 && lVar5 == 0) {
    lVar4 = FUN_1455b8fd0(uVar1,*(undefined8 *)(param_2 + 0x10),0);
    lVar5 = FUN_1455b8fd0(_DAT_1499a9f98,*(undefined8 *)(param_2 + 0x10),1);
  }
  uVar6 = CONCAT71((uint7)(uint3)((uint)param_1 >> 8),1);
  if (lVar5 != 0 || lVar4 != 0) {
    if ((lVar4 != 0) && (*(short *)(lVar4 + 0x10) != 0)) {
      lVar7 = 0;
      uVar8 = 0;
      do {
        cVar2 = FUN_140b48d50(*(longlong *)(lVar4 + 8) + lVar7,param_2);
        if (cVar2 != '\0') {
          return uVar6;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar8 < *(ushort *)(lVar4 + 0x10));
    }
    if ((lVar5 == 0) || (*(short *)(lVar5 + 0x10) == 0)) {
      uVar6 = 0;
    }
    else {
      lVar4 = 0;
      uVar8 = 0;
      do {
        uVar3 = FUN_140b48d50(*(longlong *)(lVar5 + 8) + lVar4,param_2);
        uVar6 = (ulonglong)uVar3;
        if ((char)uVar3 != '\0') {
          return uVar6;
        }
        uVar8 = uVar8 + 1;
        lVar4 = lVar4 + 0x28;
      } while (uVar8 < *(ushort *)(lVar5 + 0x10));
    }
  }
  return uVar6;
}

