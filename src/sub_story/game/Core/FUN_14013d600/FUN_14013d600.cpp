// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d600  size: 202 bytes
// Name:    FUN_14013d600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452dd820, FUN_145445330, FUN_1456de4b0, FUN_144f8c5c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001409ea7c9) */
/* WARNING: Removing unreachable block (ram,0x0001409ea94c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013d600(longlong param_1,char param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar4 = func_0x000144f8cb60(*(undefined4 *)(param_1 + 4));
  if (lVar4 != 0) {
    if (((param_2 != '\0') &&
        ((lVar5 = func_0x000144f91750(*(undefined4 *)(param_1 + 8)), lVar5 == 0 ||
         (cVar3 = FUN_1452dd820(lVar5), cVar3 == '\0')))) ||
       ((*(byte *)(param_1 + 0x14) & 0x80) == 0)) {
      *(undefined1 *)(param_1 + 0x6e8) = 1;
      lVar4 = func_0x000144f8cb60(*(undefined4 *)(param_1 + 4));
      if (lVar4 == 0) {
        return;
      }
      func_0x0001409ea760(lVar4);
      if (*(int *)(param_1 + 4) == 0x1ffff) {
        return;
      }
      FUN_145445370(*(undefined4 *)(param_1 + 0x644));
      auVar7._0_12_ = ZEXT812(0);
      auVar7._12_4_ = 0;
      *(undefined4 *)(param_1 + 4) = 0x1ffff;
      *(undefined1 (*) [16])(param_1 + 0x680) = auVar7;
      cVar3 = func_0x0001452af4d0(*(undefined8 *)(param_1 + 0x728));
      if (cVar3 != '\0') {
        *(undefined4 *)(param_1 + 0x64c) = 0;
        *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 2;
        return;
      }
      _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
      *(int *)(param_1 + 0x64c) =
           (int)(_DAT_14615a3a8 * 150.0 * (float)((uint)_DAT_146df5b88 & 0x7fff)) +
           _DAT_14abbef40 + 0x9c4;
      *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
      lVar4 = *(longlong *)(param_1 + 0x728);
      if (((lVar4 != 0) && (*(short *)(lVar4 + 0x1c) != -1)) && (*(short *)(lVar4 + 0x1e) != -1)) {
        return;
      }
      if ((~*(uint *)(param_1 + 0x29c) & 0x3fffff) != 0) {
        if (*(longlong *)(param_1 + 0x2a8) != 0) {
          FUN_1410f65f0(param_1 + 0x2a8,(undefined4 *)(param_1 + 0x29c));
        }
        *(undefined4 *)(param_1 + 0x29c) = 0x3fffff;
      }
      *(undefined2 *)(param_1 + 0x2a0) = 0;
      func_0x000145155d60();
      *(undefined8 *)(param_1 + 0x1c0) = 0;
      *(undefined4 *)(param_1 + 0x2b0) = 0x3fffff;
      *(undefined4 *)(param_1 + 0x29c) = 0x3fffff;
      *(undefined8 *)(param_1 + 0x1c8) = 0xffffffffffff4000;
      func_0x000145155d60(param_1 + 0x1d8);
      *(undefined4 *)(param_1 + 0x2b4) = 0x3fffff;
      *(undefined8 *)(param_1 + 0x250) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 600) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x298) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      iRam000000014a21b750 = iRam000000014a21b750 + 1;
      *(int *)(param_1 + 0x1d0) = iRam000000014a21b750;
      *(undefined4 *)(param_1 + 700) = 0;
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(param_1 + 0x2c0) = 0;
      *(undefined4 *)(param_1 + 0x2b8) = 0;
      *(undefined4 *)(param_1 + 0x2cc) = 0;
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(param_1 + 0x2d0) = 0;
      *(undefined4 *)(param_1 + 0x2c8) = 0;
      lVar4 = *(longlong *)(param_1 + 0x290);
      if ((ulonglong)*(uint *)(param_1 + 0x28c) != 0) {
        lVar5 = (ulonglong)*(uint *)(param_1 + 0x28c) * 0x78;
        do {
          func_0x000145155d60(lVar4);
          lVar4 = lVar4 + 0x78;
          lVar5 = lVar5 + -0x78;
        } while (lVar5 != 0);
        lVar4 = *(longlong *)(param_1 + 0x290);
        uVar1 = *(uint *)(param_1 + 0x28c);
        if ((ulonglong)uVar1 != 0) {
          lVar5 = 0;
          do {
            *(undefined4 *)(lVar4 + 0x6c + lVar5) = 0;
            if (*(longlong *)(lVar4 + 0x70 + lVar5) != 0) {
              func_0x000144d9c130();
            }
            *(undefined4 *)(lVar4 + 0x68 + lVar5) = 0;
            *(undefined8 *)(lVar4 + 0x70 + lVar5) = 0;
            func_0x000145224170(*(undefined8 *)(lVar4 + 0x58 + lVar5));
            lVar5 = lVar5 + 0x78;
          } while ((ulonglong)uVar1 * 0x78 - lVar5 != 0);
          lVar4 = *(longlong *)(param_1 + 0x290);
        }
      }
      *(undefined4 *)(param_1 + 0x28c) = 0;
      if (lVar4 != 0) {
        func_0x000144d9c130(lVar4);
      }
      *(undefined8 *)(param_1 + 0x290) = 0;
      *(undefined4 *)(param_1 + 0x288) = 0;
      *(undefined4 *)(param_1 + 0x2d8) = 0;
      return;
    }
    FUN_144f8c5c0(&uStack_28);
    lVar5 = func_0x000144f855e0(*(undefined4 *)(lVar4 + 0x9c));
    if (lVar5 != 0) {
      auVar2._8_8_ = uStack_20;
      auVar2._0_8_ = uStack_28;
      auVar7 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x590),auVar2);
      auVar6._0_4_ = auVar7._0_4_ * auVar7._0_4_;
      auVar6._4_4_ = auVar7._4_4_ * auVar7._4_4_;
      auVar6._8_4_ = auVar7._8_4_ * auVar7._8_4_;
      auVar6._12_4_ = auVar7._12_4_ * auVar7._12_4_;
      auVar7 = vhaddps_avx(auVar6,auVar6);
      if (((_DAT_14615bcf0 < auVar7._0_4_) && ((*(uint *)(lVar5 + 0x14) & 2) != 0)) &&
         (cVar3 = FUN_1456de4b0(lVar4), cVar3 != '\0')) {
        *(undefined1 *)(param_1 + 0x6e8) = 1;
        FUN_145445330(param_1,0x9c4);
      }
    }
  }
  return;
}

