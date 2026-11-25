// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cc190  size: 695 bytes
// Name:    FUN_1400cc190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404c64e0, FUN_1400e2fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cc190(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x308);
  if ((param_2 & 2) == 0 && lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x4a0) = 2;
    *(undefined8 *)(lVar1 + 0x488) = 2;
    *(undefined8 *)(lVar1 + 0x460) = 2;
    *(undefined8 *)(lVar1 + 0x3d0) = 2;
    *(undefined8 *)(lVar1 + 0x3b8) = 2;
    *(undefined8 *)(lVar1 + 0x390) = 2;
    *(undefined8 *)(lVar1 + 0x2c0) = 3;
    *(undefined8 *)(lVar1 + 0x2a8) = 3;
    *(undefined8 *)(lVar1 + 0x270) = 3;
    *(undefined8 *)(lVar1 + 0x1a0) = 3;
    *(undefined8 *)(lVar1 + 0x188) = 3;
    *(undefined8 *)(lVar1 + 0x150) = 3;
    *(undefined4 *)(lVar1 + 0x44) = 0;
    if ((lVar1 + 0x50 != *(longlong *)(lVar1 + 0x48)) && (*(longlong *)(lVar1 + 0x48) != 0)) {
      func_0x000144d9c130();
    }
    func_0x000144d9c130(lVar1,0x530);
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  bVar3 = *(byte *)(param_1 + 0x38f);
  if (((bVar3 == 0) && (*(char *)(param_1 + 0x390) == '\0')) && (*(int *)(param_1 + 0xe4) != 0)) {
    lVar5 = func_0x000145028560(*(undefined8 *)(param_1 + 0x2f8));
    lVar1 = *(longlong *)(param_1 + 0xe8);
    uVar7 = *(uint *)(param_1 + 0xe0) << 4;
    if (uVar7 == 0) {
      uVar4 = 0;
    }
    else {
      uVar10 = 0;
      do {
        uVar4 = uVar10;
        if (!SBORROW1('\0',*(char *)((ulonglong)(uVar10 & 0xf) +
                                    (ulonglong)(uVar10 >> 4) * 0xe10 + lVar1))) break;
        uVar10 = uVar10 + 1;
        uVar4 = uVar7;
      } while (uVar7 != uVar10);
    }
    lVar6 = (ulonglong)(uVar4 >> 4) * 0xe10;
    uVar8 = (ulonglong)((uVar4 & 0xf) * 0xe0);
    if (lVar6 + uVar8 != (ulonglong)(*(uint *)(param_1 + 0xe0) & 0xfffffff) * 0xe10) {
      lVar6 = lVar6 + 0x10 + uVar8 + lVar1;
      uVar2 = *(undefined8 *)
               (*(longlong *)
                 (lVar5 + 0x10 + (ulonglong)*(byte *)(lVar5 + 0xc0 + (ulonglong)DAT_14abc3ac0) * 8)
               + 0x20);
      do {
        FUN_1400e2fd0(uVar2,lVar6);
        uVar10 = uVar4;
        while (uVar4 = uVar7, uVar10 != uVar7) {
          while (uVar4 = uVar10 + 1, uVar10 = uVar4, uVar4 < uVar7) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                        (ulonglong)(uVar4 >> 4) * 0xe10 + lVar1)))
            goto LAB_1400cc3c5;
          }
        }
LAB_1400cc3c5:
        lVar5 = (ulonglong)(uVar4 & 0xf) * 0xe0;
        lVar9 = (ulonglong)(uVar4 >> 4) * 0xe10 + lVar1;
        lVar6 = lVar5 + 0x10 + lVar9;
      } while (lVar9 + lVar5 !=
               (ulonglong)(*(uint *)(param_1 + 0xe0) & 0xfffffff) * 0xe10 +
               *(longlong *)(param_1 + 0xe8));
    }
    FUN_1404c64e0(param_1 + 0xe0);
    bVar3 = *(byte *)(param_1 + 0x38f);
  }
  *(undefined1 *)(param_1 + 0x390) = 0;
  if ((bVar3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x370) = 0;
    *(byte *)(param_1 + 0x91) = *(byte *)(param_1 + 0x91) | 4;
    *(undefined8 *)(param_1 + 0x284) = 0;
    lVar1 = *(longlong *)(param_1 + 0x188);
    *(undefined8 *)(lVar1 + 0x194) = 0;
    *(undefined8 *)(lVar1 + 0x344) = 0;
    *(undefined1 *)(param_1 + 0x38f) = 0;
  }
  return;
}

