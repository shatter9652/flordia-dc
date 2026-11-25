// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140013a90  size: 328 bytes
// Name:    FUN_140013a90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e59440, FUN_140c8d0a0, FUN_141f70940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140013a90(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar8 = func_0x000144dd26c0(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(uint *)(param_1 + 0x3898);
  uVar9 = (ulonglong)uVar1 & 0x1ffff;
  if ((((uVar9 != 0x1ffff) &&
       (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar3 != (longlong *)0x0)) &&
      (uVar2 = *(uint *)(plVar3[5] + uVar9 * 4), (uVar2 >> 0x11 & 0x3ff) == uVar1 >> 0x16)) &&
     (((uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6) && (lVar4 = *plVar3, lVar4 != 0))))
  {
    lVar5 = plVar3[1];
    uStack_38 = *param_2;
    uStack_30 = param_2[1];
    cVar6 = FUN_144e59440();
    if (cVar6 != '\0') {
      return lVar4 + (ulonglong)(uint)((int)uVar9 * (int)lVar5);
    }
  }
  uStack_48 = *param_2;
  uStack_40 = param_2[1];
  cVar6 = FUN_144e59440(lVar8);
  if (cVar6 == '\0') {
    if ((*(char *)(lVar8 + 0x30) == '\x03') &&
       (iVar7 = func_0x000144dd3460(*param_2,param_2[1]), iVar7 == 0x11b)) {
      lVar8 = func_0x000144dd7540(*(undefined4 *)(lVar8 + 0x9c));
      if ((lVar8 != 0) && ((*(byte *)(lVar8 + 0x10) & 0x20) != 0)) {
        return *(longlong *)(lVar8 + 0x898);
      }
    }
    else {
      uStack_58 = *param_2;
      uStack_50 = param_2[1];
      iVar7 = FUN_140c8d0a0(*(undefined4 *)(param_1 + 0x3898),&uStack_58,param_3);
      if (iVar7 != -1) {
        lVar8 = FUN_141f70940(param_1,iVar7);
        return lVar8;
      }
    }
    lVar8 = 0;
  }
  return lVar8;
}

