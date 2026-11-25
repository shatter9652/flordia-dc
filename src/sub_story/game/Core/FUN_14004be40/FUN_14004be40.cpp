// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004be40  size: 457 bytes
// Name:    FUN_14004be40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004be40(uint *param_1,uint param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar6 = _DAT_149f361c8;
  if (param_2 < _DAT_1475289ac) {
    bVar2 = *(byte *)(_DAT_1475289b0 + 0x14 + (ulonglong)param_2 * 0x18);
    if ((bVar2 & 1) != 0) {
      puVar1 = (uint *)(_DAT_1475289b0 + (ulonglong)param_2 * 0x18);
      if ((bVar2 & 6) == 2) {
        uVar6 = *(uint *)(*(longlong *)
                           (*(longlong *)(_DAT_1475289a0 + 8 + (ulonglong)*puVar1 * 0x20) + 8 +
                           (ulonglong)puVar1[1] * 0x40) + 8 + (ulonglong)puVar1[3] * 0x10);
      }
      else {
        lVar7 = (ulonglong)puVar1[3] * 0x20 +
                *(longlong *)
                 (*(longlong *)(_DAT_1475289a0 + 8 + (ulonglong)*puVar1 * 0x20) + 0x18 +
                 (ulonglong)puVar1[1] * 0x40);
        if ((bVar2 & 2) == 0) {
          uVar5 = (*(code *)*_DAT_146842f88)(_DAT_147528a10);
          if ((puVar1[4] == 0xcae8c265) || (puVar1[4] == 0xaa07e586)) {
            uVar6 = *(uint *)(lVar7 + 0x10);
            uVar3 = *(uint *)(lVar7 + 0xc);
            auVar10._4_4_ = uVar6;
            auVar10._0_4_ = uVar6;
            auVar10._8_4_ = uVar6;
            auVar10._12_4_ = uVar6;
            auVar4 = vminss_avx(ZEXT416((uint)((float)(uint)(_DAT_14abbef40 - _DAT_147528a1c) *
                                              _DAT_14615b34c)),ZEXT416(_DAT_145fc6ed8));
            fVar8 = auVar4._0_4_;
            auVar11._4_4_ = uVar3;
            auVar11._0_4_ = uVar3;
            auVar11._8_4_ = uVar3;
            auVar11._12_4_ = uVar3;
            auVar12._8_8_ = _DAT_14615a0d0;
            auVar12._0_8_ = _DAT_14615a0d0;
            auVar4 = vpmovzxbd_avx(ZEXT416(_DAT_146159e80));
            auVar11 = vpsrlvd_avx2(auVar11,auVar12);
            auVar9 = vpsrlvd_avx2(auVar10,auVar12);
            auVar11 = vpand_avx(auVar11,auVar4);
            auVar9 = vpand_avx(auVar9,auVar4);
            auVar4 = vcvtdq2ps_avx(auVar9);
            auVar11 = vpsubd_avx(auVar11,auVar9);
            auVar11 = vcvtdq2ps_avx(auVar11);
            auVar9._0_4_ = (int)(auVar11._0_4_ * fVar8 + auVar4._0_4_);
            auVar9._4_4_ = (int)(auVar11._4_4_ * fVar8 + auVar4._4_4_);
            auVar9._8_4_ = (int)(auVar11._8_4_ * fVar8 + auVar4._8_4_);
            auVar9._12_4_ = (int)(auVar11._12_4_ * fVar8 + auVar4._12_4_);
            auVar4 = vpsllvd_avx2(auVar9,auVar12);
            auVar4 = vpand_avx(auVar4,_DAT_14615a0e0);
            uVar6 = auVar4._4_4_ |
                    auVar4._0_4_ |
                    (int)(fVar8 * (float)(int)((uVar3 >> 0x18) - (uVar6 >> 0x18)) +
                         (float)(uVar6 >> 0x18)) << 0x18 |
                    (int)(fVar8 * (float)(int)((uVar3 & 0xff) - (uVar6 & 0xff)) +
                         (float)(uVar6 & 0xff)) & 0xffU;
            goto LAB_14004bea9;
          }
          if ((uint)uVar5 < *(uint *)(lVar7 + 0x14)) {
            uVar6 = *(uint *)(lVar7 + 0x10);
            goto LAB_14004bea9;
          }
        }
        uVar6 = *(uint *)(lVar7 + 0xc);
      }
    }
  }
LAB_14004bea9:
  *param_1 = uVar6;
  return;
}

