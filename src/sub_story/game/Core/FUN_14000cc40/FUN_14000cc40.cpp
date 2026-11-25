// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000cc40  size: 155 bytes
// Name:    FUN_14000cc40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000cc40(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar2 = _DAT_145fc6f4c;
  uVar3 = *(uint *)(param_1 + 4);
  if ((int)(uVar3 + param_3) < 0xfa) {
    auVar8._4_4_ = _DAT_145fc6f70;
    auVar8._0_4_ = _DAT_145fc6f70;
    auVar8._8_4_ = _DAT_145fc6f70;
    auVar8._12_4_ = _DAT_145fc6f70;
    uVar4 = 0;
    do {
      auVar1 = *(undefined1 (*) [16])(param_2 + uVar4 * 0x10);
      auVar9._0_4_ = auVar1._0_4_ & uVar2;
      auVar9._4_4_ = auVar1._4_4_ & uVar2;
      auVar9._8_4_ = auVar1._8_4_ & uVar2;
      auVar9._12_4_ = auVar1._12_4_ & uVar2;
      auVar9 = vcmpps_avx(auVar9,auVar8,0x11);
      uVar5 = vmovmskps_avx(auVar9);
      if ((~(byte)uVar5 & 7) != 0) {
        return;
      }
      uVar6 = (ulonglong)uVar3;
      if (uVar3 != 0) {
        uVar7 = 0;
        do {
          auVar9 = vcmpps_avx(auVar1,*(undefined1 (*) [16])(param_1 + 0x10 + uVar7),0);
          uVar5 = vmovmskps_avx(auVar9);
          if ((~(byte)uVar5 & 3) == 0) goto LAB_14000ccd1;
          uVar7 = uVar7 + 0x20;
        } while (uVar6 << 5 != uVar7);
      }
      uVar3 = uVar3 + 1;
      uVar6 = uVar6 << 5 | 0x10;
      *(uint *)(param_1 + 4) = uVar3;
      *(undefined1 (*) [16])(param_1 + uVar6) = auVar1;
      *(undefined1 *)(param_1 + 0x10 + uVar6) = 0;
LAB_14000ccd1:
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_3);
  }
  return;
}

