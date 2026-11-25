// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140093d90  size: 467 bytes
// Name:    FUN_140093d90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140093fd0, FUN_144f24130, FUN_144f240a0, FUN_1400940b0, FUN_140093f70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140093d90(ulonglong *param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong *plStack_50;
  undefined1 auStack_48 [16];
  
  plStack_50 = (longlong *)0x0;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *param_1;
  auVar9 = vpslld_avx(auVar9,5);
  auVar2._0_4_ = auVar9._0_4_ + _DAT_14615c460;
  auVar2._4_4_ = auVar9._4_4_ + _DAT_14615c460;
  auVar2._8_4_ = auVar9._8_4_ + _DAT_14615c460;
  auVar2._12_4_ = auVar9._12_4_ + _DAT_14615c460;
  auVar9 = vcvtdq2ps_avx(auVar9);
  auVar2 = vcvtdq2ps_avx(auVar2);
  auVar10._0_4_ = auVar9._0_4_ ^ _DAT_145fc6f10;
  auVar10._4_4_ = auVar9._4_4_ ^ _DAT_145fc6f10;
  auVar10._8_4_ = auVar9._8_4_ ^ _DAT_145fc6f10;
  auVar10._12_4_ = auVar9._12_4_ ^ _DAT_145fc6f10;
  auStack_48 = vmovlhps_avx(auVar10,auVar2);
  uVar4 = FUN_144f24130(auStack_48,&plStack_50);
  plVar1 = plStack_50;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if ((uint)param_1[5] < uVar4) {
    uVar5 = func_0x000144d9c140(8,(ulonglong)uVar4 << 3);
    if ((ulonglong)*(uint *)((longlong)param_1 + 0x2c) != 0) {
      func_0x000145f40560(uVar5,param_1[6],(ulonglong)*(uint *)((longlong)param_1 + 0x2c) << 3);
    }
    if (param_1[6] != 0) {
      func_0x000144d9c130();
    }
    param_1[6] = uVar5;
    *(uint *)(param_1 + 5) = uVar4;
  }
  for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
    lVar7 = *plVar1;
    if (lVar7 != 0) {
      uVar4 = *(uint *)((longlong)param_1 + 0x2c);
      *(uint *)((longlong)param_1 + 0x2c) = uVar4 + 1;
      *(longlong *)(param_1[6] + (ulonglong)uVar4 * 8) = lVar7;
      uVar5 = (ulonglong)(lVar7 - *_DAT_149e576c8) / (ulonglong)*(uint *)(_DAT_149e576c8 + 1);
      lVar6 = FUN_144f240a0(*(undefined4 *)((longlong)param_1 + 0x1c),param_1[4],uVar5 & 0xffffffff)
      ;
      if (((lVar6 == 0) && (cVar3 = FUN_140093fd0(uVar5 & 0xffffffff), cVar3 == '\0')) &&
         (lVar7 = FUN_1400940b0(lVar7), lVar7 != 0)) {
        uVar4 = *(uint *)((longlong)param_1 + 0x1c);
        if (uVar4 == (uint)param_1[3]) {
          uVar8 = uVar4 >> 1;
          if (uVar4 < 2) {
            uVar8 = 1;
          }
          uVar5 = func_0x000144d9c140(8,(ulonglong)(uVar8 + uVar4) * 8);
          if ((ulonglong)*(uint *)((longlong)param_1 + 0x1c) != 0) {
            func_0x000145f40560(uVar5,param_1[4],(ulonglong)*(uint *)((longlong)param_1 + 0x1c) << 3
                               );
          }
          if (param_1[4] != 0) {
            func_0x000144d9c130();
          }
          param_1[4] = uVar5;
          *(uint *)(param_1 + 3) = uVar8 + uVar4;
          uVar4 = *(uint *)((longlong)param_1 + 0x1c);
        }
        else {
          uVar5 = param_1[4];
        }
        *(uint *)((longlong)param_1 + 0x1c) = uVar4 + 1;
        *(longlong *)(uVar5 + (ulonglong)uVar4 * 8) = lVar7;
      }
    }
  }
  FUN_140093f70(&plStack_50);
  return;
}

