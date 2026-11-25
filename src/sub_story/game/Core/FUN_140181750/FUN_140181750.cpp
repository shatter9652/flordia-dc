// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181750  size: 586 bytes
// Name:    FUN_140181750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db934, FUN_1455db8cc, FUN_1456aa560, FUN_1456aa5d0, FUN_1456aa640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140181750(longlong param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  longlong unaff_GS_OFFSET;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[1];
  auVar6 = vcmpps_avx(auVar8,auVar6,2);
  auVar6 = vshufps_avx(auVar6,auVar6,0x50);
  if ((SUB161(auVar6 >> 0x3f,0) & 1) == 0 && -1 < auVar6[0xf]) {
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 4) < _DAT_149e30390) && (FUN_1455db8cc(&DAT_149e30390), _DAT_149e30390 == -1)) {
      _DAT_149e30380 = FUN_1456aa560();
      uRam0000000149e30388 = extraout_XMM0_Qb;
      FUN_1455db934(&DAT_149e30390);
    }
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 4) < _DAT_149e303b0) && (FUN_1455db8cc(&DAT_149e303b0), _DAT_149e303b0 == -1)) {
      _DAT_149e303a0 = FUN_1456aa640();
      uRam0000000149e303a8 = extraout_XMM0_Qb_00;
      FUN_1455db934(&DAT_149e303b0);
    }
    if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 4) < _DAT_149e303d0) && (FUN_1455db8cc(&DAT_149e303d0), _DAT_149e303d0 == -1)) {
      _DAT_149e303c0 = FUN_1456aa5d0();
      uRam0000000149e303c8 = extraout_XMM0_Qb_01;
      FUN_1455db934(&DAT_149e303d0);
    }
    auVar7._8_8_ = *param_2;
    auVar7._0_8_ = *param_2;
    auVar10._8_8_ = param_2[1];
    auVar10._0_8_ = param_2[1];
    lVar3 = *(longlong *)(param_1 + 0x410) - (ulonglong)*(byte *)(param_1 + 0x428);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      auVar2._8_8_ = uRam0000000149e30388;
      auVar2._0_8_ = _DAT_149e30380;
      pauVar4 = (undefined1 (*) [16])(*(longlong *)(param_1 + 0x420) + 0x10);
      lVar5 = lVar3;
      do {
        auVar6 = vcmpps_avx(auVar10,pauVar4[-1],2);
        auVar8 = vcmpps_avx(*pauVar4,auVar7,2);
        auVar8 = auVar8 | auVar6;
        auVar12._0_4_ = auVar8._0_4_ & _DAT_149e303a0;
        auVar12._4_4_ = auVar8._4_4_ & DAT_149e303a0_4;
        auVar12._8_4_ = auVar8._8_4_ & (uint)uRam0000000149e303a8;
        auVar12._12_4_ = auVar8._12_4_ & uRam0000000149e303a8._4_4_;
        auVar6 = vcmpps_avx(auVar12,auVar2,4);
        if ((((SUB161(auVar6 >> 0x1f,0) & 1) == 0 && (SUB161(auVar6 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar6 >> 0x5f,0) & 1) == 0) && -1 < auVar6[0xf]) goto LAB_1401818ad;
        auVar11._0_4_ = auVar8._0_4_ & _DAT_149e303c0;
        auVar11._4_4_ = auVar8._4_4_ & DAT_149e303c0_4;
        auVar11._8_4_ = auVar8._8_4_ & (uint)uRam0000000149e303c8;
        auVar11._12_4_ = auVar8._12_4_ & uRam0000000149e303c8._4_4_;
        auVar6 = vcmpps_avx(auVar11,auVar2,4);
        if ((((SUB161(auVar6 >> 0x1f,0) & 1) == 0 && (SUB161(auVar6 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar6 >> 0x5f,0) & 1) == 0) && -1 < auVar6[0xf]) goto LAB_1401818ad;
        pauVar4 = pauVar4 + 2;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(byte *)(param_1 + 0x428) != 0) {
      lVar3 = lVar3 * 0x20;
      auVar6 = vcmpps_avx(auVar10,*(undefined1 (*) [16])(*(longlong *)(param_1 + 0x420) + lVar3),2);
      auVar8 = vcmpps_avx(*(undefined1 (*) [16])(*(longlong *)(param_1 + 0x420) + 0x10 + lVar3),
                          auVar7,2);
      auVar8 = auVar8 | auVar6;
      auVar9._0_4_ = auVar8._0_4_ & _DAT_149e303a0;
      auVar9._4_4_ = auVar8._4_4_ & DAT_149e303a0_4;
      auVar9._8_4_ = auVar8._8_4_ & (uint)uRam0000000149e303a8;
      auVar9._12_4_ = auVar8._12_4_ & uRam0000000149e303a8._4_4_;
      auVar1._8_8_ = uRam0000000149e30388;
      auVar1._0_8_ = _DAT_149e30380;
      auVar6 = vcmpps_avx(auVar9,auVar1,4);
      if ((((SUB161(auVar6 >> 0x1f,0) & 1) == 0 && (SUB161(auVar6 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar6 >> 0x5f,0) & 1) == 0) && -1 < auVar6[0xf]) {
LAB_1401818ad:
        return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      }
    }
  }
  return 0;
}

