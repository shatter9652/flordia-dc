// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140127da0  size: 646 bytes
// Name:    FUN_140127da0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140fbe600, FUN_1407e3090, FUN_1403da4b0, FUN_140651480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_140127da0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auStack_4c [4];
  uint uStack_48;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar7 = *(uint *)(param_1 + 0x70);
  if (uVar7 == 0x1ffff) {
LAB_140127def:
    lVar9 = 0;
  }
  else {
    uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar7 & 0x1ffff) * 4);
    param_2 = (ulonglong)uVar2;
    param_3 = (ulonglong)(~uVar2 & *(uint *)(_DAT_14abb6918 + 6));
    if (((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
       (param_2 = (ulonglong)(uVar2 & 0x7fe0000), (uVar2 & 0x7fe0000) != (uVar7 & 0xfffe0000)))
    goto LAB_140127def;
    lVar9 = (ulonglong)((uVar7 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
  }
  uVar11 = *(undefined8 *)(param_1 + 0x260);
  lVar8 = func_0x0001451dc190(uVar11,param_2,param_3);
  cVar5 = '\x02';
  if (lVar8 == 0) {
    if (lVar9 == 0) {
      if (*(char *)(param_1 + 0x259) != '\x01') goto LAB_140127e7a;
      if (*(int *)(param_1 + 0x108) == 7) {
        lVar8 = _DAT_14ab5cdf8 + 0xe80;
      }
      else if (*(int *)(param_1 + 0x108) == 5) {
        lVar8 = 0x14a9f6c28;
      }
      else {
        lVar8 = 0x14a9fbfa0;
      }
    }
    else {
      lVar8 = FUN_140fbe600(*(undefined4 *)(lVar9 + 0x9c));
      if (lVar8 == 0) {
        uVar3 = *(undefined4 *)(lVar9 + 0x9c);
        cVar5 = func_0x000144fb28c0(uVar3);
        if (cVar5 == '\0') {
          lVar8 = FUN_140651480(_DAT_14ab56e30,lVar9,0x20009,0,1,5);
          if (lVar8 == 0) {
            return '\0';
          }
          puVar12 = (undefined8 *)(lVar8 + 0x1fU & 0xfffffffffffffff0);
          if (*(code **)(lVar8 + 0x70) != (code *)0x0) {
            (**(code **)(lVar8 + 0x70))(puVar12);
          }
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = 0x800000000;
            puVar12[1] = lVar9;
          }
          *(code **)(lVar8 + 0x60) = FUN_142aa4a80;
          *(undefined **)(lVar8 + 0x68) = &UNK_1408d04c0;
          *(undefined **)(lVar8 + 0x70) = &SUB_140004380;
          return '\0';
        }
        lVar8 = func_0x000144dd30d0(uVar3);
        uVar10 = *(ulonglong *)(lVar8 + 8) & 0xfffffffffffffff0;
        bVar1 = *(byte *)(uVar10 + 0x30);
        lVar9 = func_0x0001453df200(CONCAT71((int7)((ulonglong)lVar9 >> 8),bVar1) & 0xffffffff);
        if (lVar9 != 0) {
          plVar4 = *(longlong **)((ulonglong)bVar1 * 8 + 0x14abbe7c0);
          uVar7 = (uint)((uVar10 - *plVar4) / (ulonglong)*(uint *)(plVar4 + 1)) & 0x1ffff;
          puStack_40 = auStack_4c;
          auStack_4c[0] = 0;
          uStack_48 = (bVar1 & 0x1f) << 0x11 | uVar7 |
                      (*(uint *)(plVar4[5] + (ulonglong)uVar7 * 4) & 0x7fe0000) << 5;
          pcStack_38 = FUN_142aa4ac0;
          puStack_30 = &UNK_140ac0700;
          uStack_44 = 8;
          puStack_28 = &SUB_140004380;
          FUN_1407e3090(lVar9,uVar10,0xe41402ca);
          return '\0';
        }
        return '\0';
      }
    }
    iVar6 = FUN_1403da4b0(lVar8,param_1 + 0x260,param_1 + 0x80);
    uVar11 = *(undefined8 *)(param_1 + 0x260);
    cVar5 = (4 < iVar6 - 0x4bU) * '\x02';
  }
LAB_140127e7a:
  lVar9 = func_0x0001451dc190(uVar11);
  if (lVar9 != 0) {
    iVar6 = func_0x0001403da470(lVar9);
    cVar5 = (iVar6 != 1) + '\x01';
    if (iVar6 == 0) {
      cVar5 = '\0';
    }
  }
  return cVar5;
}

