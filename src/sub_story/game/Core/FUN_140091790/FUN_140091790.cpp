// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140091790  size: 585 bytes
// Name:    FUN_140091790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da3280, FUN_1435d2a30, FUN_144db7bf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140091790(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  uint uStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  ulonglong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  cVar4 = FUN_1435d2a30();
  if (cVar4 != '\0') {
    uStack_b4 = func_0x0001421be650();
    lVar8 = (param_3 & 0xffff) * 0x70;
    uVar9 = *(uint *)(*(longlong *)(param_1 + 8) + 0x34 + lVar8);
    if (uVar9 != 0) {
      auVar20 = ZEXT1664(CONCAT412(_DAT_146159f68,
                                   CONCAT48(_DAT_146159f68,CONCAT44(_DAT_146159f68,_DAT_146159f68)))
                        );
      auVar22 = ZEXT464(_DAT_1461725e0);
      uStack_b0 = (ulonglong)_DAT_14ab5cdc4;
      lVar8 = *(longlong *)(param_1 + 8) + lVar8;
      uVar11 = 0;
      auVar21 = ZEXT1264(ZEXT812(0));
      fVar15 = _DAT_14615a130;
      fVar16 = _DAT_145fc6edc;
      fVar17 = _DAT_145fc6edc;
      fVar18 = _DAT_145fc6edc;
      fVar19 = _DAT_145fc6edc;
      do {
        uVar1 = *(uint *)(*(longlong *)(lVar8 + 0x38) + uVar11 * 4);
        if ((int)uVar1 < 0) {
          uVar7 = 0x40;
          uVar6 = (uVar1 & 0x7000) << 0xc | 0xffffff;
          lVar10 = (ulonglong)(uint)(*(int *)(lVar8 + 0x2c) + (int)uVar11) * 0x1c +
                   *(longlong *)(param_1 + 0x28);
LAB_140091970:
          uStack_a8 = *param_2;
          uStack_a0 = param_2[1];
          FUN_144db7bf0(param_4,&uStack_a8,uVar6,uVar7,lVar10);
          uVar9 = *(uint *)(lVar8 + 0x34);
        }
        else {
          iVar5 = func_0x0001455c0510(uVar1);
          fStack_b8 = 1.0;
          uStack_bc = 0;
          FUN_144da3280(*(int *)(lVar8 + 0x28),(int)uStack_b0 + *(int *)(lVar8 + 0x28) + iVar5,
                        uStack_b4,&fStack_b8,&uStack_bc);
          uVar6 = uStack_bc;
          if (uStack_bc == _DAT_149f361c8) {
            uVar6 = func_0x0001455c0500(uVar1);
            uVar6 = *(uint3 *)((ulonglong)uVar6 * 3 + 0x148d3ba20) | 0xff000000;
          }
          fVar2 = fVar15 * fStack_b8;
          auVar3 = vpmovzxbd_avx(ZEXT416(uVar6));
          auVar3 = vcvtdq2ps_avx(auVar3);
          auVar12._0_4_ = fVar2 * auVar3._0_4_;
          auVar12._4_4_ = fVar2 * auVar3._4_4_;
          auVar12._8_4_ = fVar2 * auVar3._8_4_;
          auVar12._12_4_ = fVar2 * auVar3._12_4_;
          auVar3 = vinsertps_avx(auVar12,ZEXT416(_DAT_145fc6ed8),0x30);
          auVar13._0_4_ = auVar20._0_4_ * auVar3._0_4_ + fVar16;
          auVar13._4_4_ = auVar20._4_4_ * auVar3._4_4_ + fVar17;
          auVar13._8_4_ = auVar20._8_4_ * auVar3._8_4_ + fVar18;
          auVar13._12_4_ = auVar20._12_4_ * auVar3._12_4_ + fVar19;
          auVar3 = vmaxps_avx(auVar13,auVar21._0_16_);
          auVar3 = vminps_avx(auVar3,auVar20._0_16_);
          auVar14._0_4_ = (int)auVar3._0_4_;
          auVar14._4_4_ = (int)auVar3._4_4_;
          auVar14._8_4_ = (int)auVar3._8_4_;
          auVar14._12_4_ = (int)auVar3._12_4_;
          auVar3 = vpshufb_avx(auVar14,auVar22._0_16_);
          uVar6 = auVar3._0_4_ & 0xffffff;
          if (uVar6 != 0) {
            uVar6 = uVar6 | (uVar1 & 0x7000) << 0xc;
            lVar10 = (ulonglong)(uint)(*(int *)(lVar8 + 0x2c) + (int)uVar11) * 0x1c +
                     *(longlong *)(param_1 + 0x28);
            uVar7 = func_0x0001455c0500(uVar1);
            goto LAB_140091970;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
    }
  }
  return;
}

