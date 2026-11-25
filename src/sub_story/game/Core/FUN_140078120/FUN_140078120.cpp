// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140078120  size: 1047 bytes
// Name:    FUN_140078120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e64f00, FUN_1400925e0, FUN_1443a73e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140078120(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iStack_48;
  uint uStack_44;
  
  if (*(int *)(param_1 + 0x2000) == 2) {
    return;
  }
  uVar7 = *(uint *)(param_1 + 0x1ff8);
  piVar1 = (int *)(param_1 + 0x1f68 + (longlong)(int)uVar7 * 0x48);
  iVar6 = *piVar1;
  if (((piVar1[10] == 0) && ((uint)piVar1[6] <= (uint)piVar1[7])) ||
     (*(char *)(param_1 + 0x2019) == '\x01')) {
    *(undefined1 *)(param_1 + 0x2019) = 0;
    if (iVar6 == -1) {
      iVar6 = -1;
    }
    else {
      lVar4 = (longlong)*(int *)(param_1 + 0x1f68 + (ulonglong)(~uVar7 & 1) * 0x48);
      if (lVar4 != -1) {
        func_0x000145f40560(*(undefined8 *)(_DAT_149ae9938 + 8 + lVar4 * 0x20),
                            *(undefined8 *)(_DAT_149ae9938 + 8 + (longlong)iVar6 * 0x20),0x200);
        iVar6 = *piVar1;
      }
    }
    FUN_1400925e0(iVar6);
    piVar1[0xd] = 0;
    *piVar1 = -1;
    iVar6 = *(int *)(param_1 + 0x2014);
    if (0 < iVar6) {
      *(int *)(param_1 + 0x2014) = iVar6 + -1;
      if (*(int *)(param_1 + 0x2000) != 2 && (iVar6 != 1 && *(char *)(param_1 + 0x2019) == '\0')) {
        uVar7 = ~*(uint *)(param_1 + 0x1ff8) & 1;
        *(uint *)(param_1 + 0x1ff8) = uVar7;
        *(bool *)(param_1 + 0x2018) =
             *(int *)(param_1 + 0x2000) != 1 || uVar7 != *(uint *)(param_1 + 0x1ffc);
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x2000) = 2;
    *(undefined8 *)(param_1 + 0x1ff8) = 0;
    *(undefined1 *)(param_1 + 0x2018) = 1;
    return;
  }
  if (piVar1[0xd] == 0) {
    FUN_1443a73e0();
    piVar1[0xd] = 2;
    return;
  }
  *(bool *)(param_1 + 0x2018) =
       *(int *)(param_1 + 0x2000) != 1 || uVar7 != *(uint *)(param_1 + 0x1ffc);
  if (iVar6 == -1) {
    return;
  }
  lVar4 = (longlong)iVar6 * 0x40;
  uVar7 = *(uint *)(_DAT_149ae9908 + lVar4);
  uVar8 = *(uint *)(_DAT_149ae9908 + 0x24 + lVar4) & 0x1f;
  uVar9 = uVar8 * 0x100;
  uVar10 = uVar7 >> 0x13 & 0x1f00;
  uVar12 = uVar10 + uVar8 * -0x100;
  if (uVar10 < uVar9) {
    uVar12 = (uVar7 >> 0xe & 0x1f00) + uVar8 * -0x100 + uVar10;
  }
  else if (uVar12 == 0) {
    if (*(int *)(_DAT_149ae9908 + lVar4 + 4) < 0) {
      return;
    }
    uVar12 = uVar7 >> 0xe & 0x1f00;
  }
  if (uVar12 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar11 = 0;
  lVar5 = func_0x000144d9fb90(*(undefined4 *)(param_1 + 0x44),*(undefined8 *)(param_1 + 0x48),0);
  if (lVar5 != 0) {
    iVar11 = *(int *)(lVar5 + 8);
  }
  if ((uint)(iVar2 - iVar11) <= uVar12) {
    return;
  }
  piVar1[0xc] = uVar9;
  uVar10 = 0;
  uVar7 = piVar1[7];
  iVar2 = piVar1[5] - uVar7;
  if (uVar7 <= (uint)piVar1[5] && iVar2 != 0) {
    uVar3 = iVar2 * 2;
    if (uVar12 < uVar3) {
      uVar3 = uVar12;
    }
    uVar10 = 0;
    if (0x1700 < uVar3 + uVar9) {
      piVar1[0xc] = 0;
      uVar10 = uVar8 * -0x100 + 0x1700;
      uVar9 = 0;
      uVar3 = uVar3 - uVar10;
      uVar12 = uVar12 - uVar10;
    }
    if (uVar3 != 0) {
      uVar9 = uVar9 + uVar3;
      uVar12 = uVar12 - uVar3;
      uVar10 = uVar10 + uVar3;
      piVar1[0xc] = uVar9;
    }
  }
  if (uVar12 != 0) {
    iVar2 = piVar1[10];
    uVar8 = (uVar10 >> 1) + uVar7;
    if (0x1700 < uVar9 + uVar12) {
      uVar3 = piVar1[6];
      if ((iVar2 == 0) && (uVar3 <= uVar8)) {
        iVar2 = 0;
      }
      else {
        uVar9 = 0x1700 - uVar9;
        uVar7 = uVar9;
        if ((iVar2 == 0) && (uVar3 < (uVar9 >> 1) + uVar8)) {
          uVar7 = (uVar3 - uVar8) * 2;
        }
        lVar5 = func_0x000145f401d0(*(undefined4 *)(_DAT_149ae9908 + 0x1c + lVar4));
        if (lVar5 != 0) {
          FUN_144e64f00(param_1 + 0x10,lVar5 + (ulonglong)(uint)piVar1[0xc],uVar7,0,1);
        }
        piVar1[0xc] = 0;
        uVar10 = uVar10 + uVar9;
        uVar12 = uVar12 - uVar9;
        uVar7 = piVar1[7];
        if (uVar12 == 0) goto LAB_1400784cd;
        iVar2 = piVar1[10];
        uVar8 = (uVar10 >> 1) + uVar7;
      }
    }
    uVar9 = piVar1[6];
    if (uVar8 <= uVar9 && uVar9 - uVar8 != 0 || iVar2 != 0) {
      uVar7 = uVar12;
      if ((iVar2 == 0) && (uVar9 < (uVar12 >> 1) + uVar8)) {
        uVar7 = (uVar9 - uVar8) * 2;
      }
      lVar4 = func_0x000145f401d0(*(undefined4 *)(_DAT_149ae9908 + 0x1c + lVar4));
      if (lVar4 != 0) {
        FUN_144e64f00(param_1 + 0x10,lVar4 + (ulonglong)(uint)piVar1[0xc],uVar7,0,1);
      }
      uVar10 = uVar10 + uVar12;
      uVar7 = 0;
      if (uVar12 + piVar1[0xc] < 0x1700) {
        uVar7 = uVar12 + piVar1[0xc];
      }
      piVar1[0xc] = uVar7;
      uVar7 = piVar1[7];
    }
  }
LAB_1400784cd:
  piVar1[7] = (uVar10 >> 1) / *(uint *)(param_1 + 0x2004) + uVar7;
  piVar1[0x10] = piVar1[0x10] + uVar10;
  uStack_44 = uVar10 >> 8;
  *(undefined4 *)(param_1 + 0x2024) = 0;
  iStack_48 = iVar6;
  (**(code **)(*_DAT_149ae98b8 + 0x10))(_DAT_149ae98b8,0x12,0xf1f1f1f1,0xffffffff,&iStack_48,0);
  return;
}

