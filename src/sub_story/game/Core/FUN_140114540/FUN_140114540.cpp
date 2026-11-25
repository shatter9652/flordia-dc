// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114540  size: 943 bytes
// Name:    FUN_140114540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401148f0, FUN_141a9dbc0, FUN_140871a00, FUN_1426a1e40, FUN_144fc0620, FUN_1429708b0, FUN_140128c60, FUN_144fe0120, FUN_144fc05e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140114540(longlong param_1,longlong param_2,int param_3,int param_4,undefined1 param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  uVar6 = func_0x000144fdf400(*(undefined4 *)(param_1 + 0x9c));
  if (param_4 == 0) {
    puVar7 = (undefined8 *)FUN_1401148f0(param_1,param_2,uVar6,uVar9 & 0xffffffff);
    if (puVar7 == (undefined8 *)0x0) goto LAB_14011458d;
LAB_140114630:
    *(byte *)(puVar7 + 5) = *(byte *)(puVar7 + 5) | 0x10;
  }
  else {
    if (param_4 == 3) {
      puVar7 = (undefined8 *)FUN_140871a00();
      if (puVar7 != (undefined8 *)0x0) {
        FUN_141a9dbc0(puVar7);
        *puVar7 = &UNK_1462ae360;
        *(undefined4 *)(puVar7 + 0x19) = 3;
        *(undefined4 *)(puVar7 + 2) = 0x162;
        goto LAB_140114630;
      }
    }
    else if (param_4 == 2) {
      cVar2 = FUN_144fe0120(param_1,param_2,1,1,1,1);
      if (cVar2 == '\0') {
        cVar2 = FUN_144fc05e0(param_2);
        if (cVar2 != '\0') {
          lVar8 = FUN_144fc0620(param_2,param_1,0);
          puVar7 = (undefined8 *)FUN_140871a00();
          if (puVar7 != (undefined8 *)0x0) {
            if (lVar8 == 0) {
              uVar4 = 0x1ffff;
            }
            else {
              plVar1 = *(longlong **)((ulonglong)*(byte *)(lVar8 + 0x30) * 8 + 0x14abbe7c0);
              uVar4 = (uint)((ulonglong)(lVar8 - *plVar1) / (ulonglong)*(uint *)(plVar1 + 1)) &
                      0x1ffff;
              uVar4 = (*(byte *)(lVar8 + 0x30) & 0x1f) << 0x11 | uVar4 |
                      (*(uint *)(plVar1[5] + (ulonglong)uVar4 * 4) & 0x7fe0000) << 5;
            }
            uVar5 = (uint)((ulonglong)(param_2 - *_DAT_14abb6918) /
                          (ulonglong)*(uint *)(_DAT_14abb6918 + 1)) & 0x1ffff;
            FUN_1426a1e40(puVar7,*(uint *)(_DAT_14abb6918[5] + (ulonglong)uVar5 * 4) & 0xfffe0000 |
                                 uVar5,uVar4);
            goto LAB_140114630;
          }
        }
      }
    }
    else if (param_4 == 1) {
      cVar2 = func_0x000140113950(param_2);
      if ((cVar2 != '\0') &&
         ((short)*(undefined4 *)(param_2 + 0xa0) == (short)*(undefined4 *)(param_1 + 0xa0))) {
        iVar3 = FUN_140128c60(param_1);
        if (iVar3 < 1) {
          lVar8 = func_0x000144fa1860(*(undefined4 *)(param_1 + 0x9c));
          if (lVar8 != 0) {
            cVar2 = FUN_1429708b0(*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0xe58),param_2)
            ;
            if (cVar2 != '\0') {
              puVar7 = (undefined8 *)FUN_140871a00();
              if (puVar7 != (undefined8 *)0x0) {
                FUN_141a9dbc0(puVar7);
                *puVar7 = &UNK_1462adee0;
                *(undefined4 *)(puVar7 + 2) = 6;
                goto LAB_140114630;
              }
            }
          }
        }
      }
    }
LAB_14011458d:
    if (param_3 == 5) {
      puVar7 = (undefined8 *)FUN_1401148f0(param_1,param_2,uVar6,uVar9 & 0xffffffff);
      if (puVar7 != (undefined8 *)0x0) goto LAB_140114630;
    }
    else if (param_3 == 4) {
      iVar3 = FUN_140128c60(param_1);
      if (iVar3 < 1) {
        puVar7 = (undefined8 *)FUN_140871a00();
        if (puVar7 != (undefined8 *)0x0) {
          FUN_141a9dbc0();
          *puVar7 = &UNK_1462aec60;
          *(undefined4 *)(puVar7 + 2) = 1;
          goto LAB_140114630;
        }
      }
    }
    else if (param_3 == 2) {
      puVar7 = (undefined8 *)FUN_140871a00();
      if (puVar7 != (undefined8 *)0x0) {
        FUN_141a9dbc0();
        *puVar7 = &UNK_1462ae7e0;
        *(undefined4 *)(puVar7 + 2) = 3;
        goto LAB_140114630;
      }
    }
    puVar7 = (undefined8 *)0x0;
  }
  return puVar7;
}

