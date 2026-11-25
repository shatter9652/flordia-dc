// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090b80  size: 245 bytes
// Name:    FUN_140090b80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f1b3a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140090b80(void)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_18 = _DAT_14a15dff0;
  uStack_10 = uRam000000014a15dff8;
  FUN_144f1b3a0(&uStack_28);
  fVar5 = _DAT_146159e14;
  auVar4._8_8_ = uStack_20;
  auVar4._0_8_ = uStack_28;
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar3._8_8_ = uRam0000000147f0dcb8;
  auVar3._0_8_ = _DAT_147f0dcb0;
  auVar3 = vsubps_avx(auVar4,auVar3);
  auVar11._0_4_ = auVar3._0_4_ * auVar3._0_4_;
  auVar11._4_4_ = auVar3._4_4_ * auVar3._4_4_;
  auVar11._8_4_ = auVar3._8_4_ * auVar3._8_4_;
  auVar11._12_4_ = auVar3._12_4_ * auVar3._12_4_;
  auVar3 = vblendps_avx(auVar11,auVar12,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  if (_DAT_14615a7f8 < auVar3._0_4_) {
    _DAT_147f0dcb0 = uStack_28;
    uRam0000000147f0dcb8 = uStack_20;
    if (-1 < (int)(_DAT_14a951cfc - 1U)) {
      uVar8 = (ulonglong)(_DAT_14a951cfc - 1U);
      lVar9 = _DAT_14a951d00;
      iVar6 = _DAT_14a951cfc;
      iVar7 = _DAT_14a951cfc;
      do {
        lVar1 = *(longlong *)(lVar9 + uVar8 * 8);
        if (fVar5 < *(float *)(lVar1 + 0x100)) {
          if ((ulonglong)_DAT_14a951ccc != 0) {
            lVar10 = 0;
            do {
              if (*(longlong *)(_DAT_14a951cd0 + lVar10) == lVar1) goto LAB_140090c16;
              lVar10 = lVar10 + 8;
            } while ((ulonglong)_DAT_14a951ccc << 3 != lVar10);
          }
          if (iVar6 != iVar7) {
            *(undefined8 *)(lVar9 + uVar8 * 8) = *(undefined8 *)(lVar9 + (ulonglong)(iVar6 - 1) * 8)
            ;
            lVar9 = _DAT_14a951d00;
            iVar6 = _DAT_14a951cfc;
          }
          iVar6 = iVar6 + -1;
          _DAT_14a951cfc = iVar6;
        }
LAB_140090c16:
        iVar7 = (int)uVar8;
        bVar2 = 0 < (longlong)uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar2);
    }
  }
  return;
}

