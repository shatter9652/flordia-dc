// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401653e0  size: 456 bytes
// Name:    FUN_1401653e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141f72070
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401653e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  cVar4 = func_0x000145021a50();
  uVar1 = *(uint *)(param_2 + 4);
  if ((ulonglong)uVar1 != 0) {
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(param_2 + 8 + lVar7);
      if (uVar2 != 0x1ffff) {
        uVar3 = *(uint *)(_DAT_14759a5f8[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
        if ((((uVar2 ^ uVar3) < 0x20000) &&
            ((uVar3 & *(uint *)(_DAT_14759a5f8 + 6)) == *(uint *)(_DAT_14759a5f8 + 6))) &&
           (*_DAT_14759a5f8 != 0)) {
          lVar8 = *_DAT_14759a5f8 + (ulonglong)((uVar2 & 0x1ffff) * (int)_DAT_14759a5f8[1]);
          iVar5 = FUN_141f72070(lVar8);
          if (iVar5 != 0) {
            if (*(char *)(lVar8 + 0x1f) == '\0') {
              uVar9 = 0;
            }
            else {
              uVar9 = *(undefined4 *)(lVar8 + 8);
            }
            (**(code **)(*(longlong *)*param_4 + 0x18))((longlong *)*param_4,iVar5,uVar9);
          }
        }
      }
      lVar7 = lVar7 + 4;
    } while ((ulonglong)uVar1 << 2 != lVar7);
  }
  if ((ulonglong)*(uint *)(param_3 + 4) != 0) {
    lVar7 = (ulonglong)*(uint *)(param_3 + 4) << 3;
    lVar8 = 0;
    if (cVar4 == '\x02') {
      do {
        uVar1 = *(uint *)(param_3 + 0xc + lVar8);
        if (uVar1 != 0x1ffff) {
          uVar2 = *(uint *)(_DAT_14759a5f8[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
          if ((((uVar1 ^ uVar2) < 0x20000) &&
              ((uVar2 & *(uint *)(_DAT_14759a5f8 + 6)) == *(uint *)(_DAT_14759a5f8 + 6))) &&
             (*_DAT_14759a5f8 != 0)) {
            lVar6 = *_DAT_14759a5f8 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14759a5f8[1]);
            iVar5 = FUN_141f72070(lVar6);
            if (iVar5 != 0) {
              if (*(char *)(lVar6 + 0x1f) == '\0') {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined4 *)(lVar6 + 8);
              }
              (**(code **)(*(longlong *)*param_4 + 0x18))((longlong *)*param_4,iVar5,uVar9);
            }
          }
        }
        lVar8 = lVar8 + 8;
      } while (lVar7 != lVar8);
    }
    else {
      do {
        uVar1 = *(uint *)(param_3 + 8 + lVar8);
        if (uVar1 != 0x1ffff) {
          uVar2 = *(uint *)(_DAT_14759a5f8[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
          if ((((uVar1 ^ uVar2) < 0x20000) &&
              ((uVar2 & *(uint *)(_DAT_14759a5f8 + 6)) == *(uint *)(_DAT_14759a5f8 + 6))) &&
             (*_DAT_14759a5f8 != 0)) {
            lVar6 = *_DAT_14759a5f8 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14759a5f8[1]);
            iVar5 = FUN_141f72070(lVar6);
            if (iVar5 != 0) {
              if (*(char *)(lVar6 + 0x1f) == '\0') {
                uVar9 = 0;
              }
              else {
                uVar9 = *(undefined4 *)(lVar6 + 8);
              }
              (**(code **)(*(longlong *)*param_4 + 0x18))((longlong *)*param_4,iVar5,uVar9);
            }
          }
        }
        lVar8 = lVar8 + 8;
      } while (lVar7 != lVar8);
    }
  }
  return;
}

