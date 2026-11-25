// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400befc0  size: 630 bytes
// Name:    FUN_1400befc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453321d0, FUN_1412b73f0, FUN_144e75ec0, FUN_14339bd90, FUN_14016a240, FUN_143b16040, FUN_144e258f0, FUN_1415d5650, FUN_14026db50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400befc0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  ulonglong uStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  ulonglong auStack_98 [2];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uVar9 = *(ulonglong *)(param_1 + 8);
  uVar6 = uVar9 & 0xfffffffffffffff0;
  lVar4 = func_0x000144dd1230(*(undefined4 *)(uVar6 + 0x9c));
  if (lVar4 != 0) {
    lVar5 = FUN_144e258f0(uVar6);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(uVar6 + 0x38);
      if (lVar5 == 0) {
        return;
      }
      cVar2 = FUN_1453321d0(uVar9,param_1 + 0x10,0);
      if (cVar2 == '\0') {
        return;
      }
    }
    else {
      cVar2 = FUN_1453321d0(uVar9,param_1 + 0x10,lVar5);
      if (cVar2 == '\0') {
        return;
      }
      lVar7 = *(longlong *)(lVar5 + 0x170);
      if (((lVar7 != 0) &&
          (cVar2 = FUN_143b16040(param_1,*(undefined4 *)(lVar7 + 0x460)), cVar2 != '\0')) &&
         (lVar7 = *(longlong *)(lVar7 + 0x450), lVar7 != 0)) {
        lVar8 = 0;
        do {
          cVar2 = FUN_1453321d0(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x68) + lVar8,
                                *(undefined8 *)(lVar7 + 0x100));
          if (cVar2 == '\0') {
            lVar1 = *(longlong *)(param_1 + 0x68);
            *(undefined1 *)(lVar1 + lVar8) = 0;
            *(undefined8 *)(lVar1 + 0x30 + lVar8) = 0;
          }
          lVar7 = *(longlong *)(lVar7 + 0x438);
          lVar8 = lVar8 + 0x50;
        } while (lVar7 != 0);
      }
    }
    auVar10 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
    FUN_14026db50(auStack_a8,lVar5,auVar10._0_2_ | 0x10000);
    lVar7 = param_1 + 0x70;
    FUN_14016a240(lVar7,lVar4,auStack_a8);
    if (*(int *)(param_1 + 0x58) == 0) {
      func_0x0001452e4470(lVar7);
    }
    uStack_d8 = uVar6;
    cVar2 = FUN_1412b73f0(*(undefined8 *)(param_1 + 8));
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x48) = 0;
      lStack_d0 = param_1 + 0x10;
      FUN_1415d5650();
    }
    uVar3 = *(uint *)(param_1 + 100);
    if (uVar3 != 0) {
      uVar9 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0x68) + uVar9 * 0x50) != '\0') {
          lStack_d0 = *(longlong *)(param_1 + 0x68) + uVar9 * 0x50;
          *(int *)(lStack_d0 + 0x38) = (int)uVar9 + 1;
          FUN_1415d5650(&uStack_d8);
          uVar3 = *(uint *)(param_1 + 100);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar3);
    }
    cVar2 = FUN_1412b73f0(*(undefined8 *)(param_1 + 8));
    if (((cVar2 == '\0') && (*(uint *)(param_1 + 0x5c) < 2)) &&
       ((*(uint *)(param_1 + 0x58) & 0xfffffffe) == 2)) {
      uStack_c8 = *(undefined8 *)(uVar6 + 0x70);
      uStack_c0 = *(undefined8 *)(uVar6 + 0x78);
      uVar11 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar5 + 8) + 0x20) + 0x14);
      func_0x000144dc3790(&uStack_c8,auStack_b8);
      uStack_68 = FUN_144e75ec0(auStack_b8,0);
      auStack_98[0] = uVar6;
      func_0x00014016b490(lVar7,auStack_88);
      uStack_78 = *(undefined8 *)(param_1 + 0x30);
      uStack_70 = *(undefined8 *)(param_1 + 0x38);
      uStack_64 = uVar11;
      FUN_14339bd90(auStack_98);
    }
  }
  return;
}

