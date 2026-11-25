// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001f4e0  size: 1706 bytes
// Name:    FUN_14001f4e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df3830, FUN_14001fc40, FUN_144e0a1f0, FUN_144e0a2d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001f4e0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [64];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int iStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  int iStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined1 auStack_248 [16];
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_128 [16];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 aauStack_f8 [11] [16];
  
  fVar18 = 0.0;
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  uStack_238 = 0;
  uStack_234 = 0;
  uStack_230 = 0;
  uStack_22c = 0;
  iStack_26c = (**(code **)(*param_2 + 0x10))(param_2);
  auStack_168._0_12_ = ZEXT812(0);
  auStack_168._12_4_ = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  if (0 < iStack_26c) {
    _auStack_258 = ZEXT812(0);
    fStack_24c = 0.0;
    fVar34 = 0.0;
    fVar35 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    iVar8 = 0;
    iStack_29c = -1;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    auVar32 = ZEXT1264(ZEXT812(0));
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar23 = _DAT_145fc6ed8;
    fVar24 = _DAT_145fc6ed8;
    fVar25 = _DAT_145fc6ed8;
    fVar26 = _DAT_145fc6ed8;
    do {
      lVar5 = (**(code **)(*param_2 + 0x18))(param_2,iVar8);
      lVar2 = *(longlong *)(lVar5 + 8);
      plVar7 = *(longlong **)(lVar2 + 0x18);
      fVar9 = (float)FUN_144e0a2d0(lVar5);
      fVar13 = *(float *)(lVar5 + 0x14);
      fVar10 = (float)(**(code **)(*plVar7 + 0x70))(plVar7);
      if (_DAT_146159ec4 < fVar9) {
        iVar1 = *(int *)(lVar5 + 0x30);
        auStack_1b8 = ZEXT416((uint)(fVar13 * fVar10 * *(float *)(lVar5 + 0x18)));
        iVar3 = iVar1;
        if ((iStack_29c != -1) && (iVar3 = iStack_29c, iStack_29c != iVar1)) {
          fStack_288 = fVar19;
          fStack_284 = fVar20;
          fStack_280 = fVar21;
          fStack_27c = fVar22;
          plVar7 = (longlong *)func_0x000144edcb00(param_3);
          auVar31 = vrcpps_avx(auVar32._0_16_);
          fVar10 = auVar31._0_4_;
          fVar12 = auVar31._4_4_;
          fVar33 = auVar31._8_4_;
          fVar13 = auVar31._12_4_;
          fVar10 = -((auVar32._0_4_ * fVar10 - fVar23) * fVar10) + fVar10;
          fVar12 = -((auVar32._4_4_ * fVar12 - fVar24) * fVar12) + fVar12;
          fVar33 = -((auVar32._8_4_ * fVar33 - fVar25) * fVar33) + fVar33;
          fVar13 = -((auVar32._12_4_ * fVar13 - fVar26) * fVar13) + fVar13;
          auStack_248._0_4_ = fVar10 * fVar14;
          auStack_248._4_4_ = fVar12 * fVar15;
          auStack_248._8_4_ = fVar33 * fVar16;
          auStack_248._12_4_ = fVar13 * fVar17;
          (**(code **)(*plVar7 + 0x10))(plVar7,&fStack_298,auStack_248);
          auStack_1c8 = auVar32._0_16_;
          func_0x00014001fba0(auStack_1d8,auStack_1c8,&uStack_238,&fStack_288);
          auStack_1e8._0_4_ = fVar10 * fVar34;
          auStack_1e8._4_4_ = fVar12 * fVar35;
          auStack_1e8._8_4_ = fVar33 * fVar36;
          auStack_1e8._12_4_ = fVar13 * fVar37;
          fStack_288 = fVar19;
          fStack_284 = fVar20;
          fStack_280 = fVar21;
          fStack_27c = fVar22;
          (**(code **)(*param_3 + 0x10))(param_3,&uStack_268,auStack_1e8);
          auVar11 = ZEXT464(*(uint *)((longlong)param_2 + 0xc));
          func_0x000144e0a1d0(*(uint *)((longlong)param_2 + 0xc),auStack_1f8);
          fVar14 = auStack_1f8._0_4_;
          if ((_DAT_14615b49c < fVar14) && (auVar32._0_4_ < fVar14 + _DAT_14615d120)) {
            auVar31 = vrcpps_avx(auStack_1f8);
            fVar15 = auVar31._0_4_;
            fVar16 = auVar31._4_4_;
            fVar17 = auVar31._8_4_;
            fVar34 = auVar31._12_4_;
            aauStack_f8[0] = auVar32._0_16_;
            fStack_118 = auVar32._0_4_ * (-((fVar15 * fVar14 - fVar23) * fVar15) + fVar15);
            fStack_114 = auVar32._4_4_ *
                         (-((fVar16 * auStack_1f8._4_4_ - fVar24) * fVar16) + fVar16);
            fStack_110 = auVar32._8_4_ *
                         (-((fVar17 * auStack_1f8._8_4_ - fVar25) * fVar17) + fVar17);
            fStack_10c = auVar32._12_4_ *
                         (-((fVar34 * auStack_1f8._12_4_ - fVar26) * fVar34) + fVar34);
            fStack_108 = fVar27;
            fStack_104 = fVar28;
            fStack_100 = fVar29;
            fStack_fc = fVar30;
            FUN_14001fc40(auVar11._0_8_,auStack_188,&uStack_268,aauStack_f8,&fStack_108,0,
                          &fStack_118);
          }
          auStack_208 = auVar32._0_16_;
          uStack_218 = uStack_268;
          uStack_210 = uStack_260;
          func_0x00014001fba0(&uStack_218,auStack_208,&uStack_228,&fStack_288);
          fVar19 = fVar19 + auVar32._0_4_;
          fVar20 = fVar20 + auVar32._4_4_;
          fVar21 = fVar21 + auVar32._8_4_;
          fVar22 = fVar22 + auVar32._12_4_;
          auVar32 = ZEXT1664(ZEXT816(0) << 0x40);
          fVar14 = 0.0;
          fVar15 = 0.0;
          fVar16 = 0.0;
          fVar17 = 0.0;
          fVar34 = 0.0;
          fVar35 = 0.0;
          fVar36 = 0.0;
          fVar37 = 0.0;
          auStack_258._0_4_ = fVar27 + (float)auStack_258._0_4_;
          auStack_258._4_4_ = fVar28 + (float)auStack_258._4_4_;
          fStack_250 = fVar29 + fStack_250;
          fStack_24c = fVar30 + fStack_24c;
          fVar27 = 0.0;
          fVar28 = 0.0;
          fVar29 = 0.0;
          fVar30 = 0.0;
          iVar3 = iVar1;
        }
        iStack_29c = iVar3;
        fVar10 = fVar9;
        fVar12 = fVar9;
        fVar33 = fVar9;
        fVar13 = fVar9;
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x18))
                  (*(longlong **)(lVar2 + 0x18),&fStack_288);
        lVar6 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 0x40))();
        auStack_248._4_4_ = fStack_284;
        auStack_248._0_4_ = fStack_288;
        auStack_248._12_4_ = fStack_27c;
        auStack_248._8_4_ = fStack_280;
        FUN_144df3830(*(undefined8 *)(lVar6 + 0x20),&fStack_298,auStack_248);
        func_0x000144e0a210(*(undefined8 *)(lVar2 + 0x20),&fStack_288);
        fVar13 = fVar13 * *(float *)(lVar2 + 0x10);
        (**(code **)(*param_3 + 8))(param_3,&fStack_298,auStack_198);
        fVar34 = fVar9 * fStack_298 + fVar34;
        fVar35 = fVar10 * fStack_294 + fVar35;
        fVar36 = fVar12 * fStack_290 + fVar36;
        fVar37 = fVar33 * fStack_28c + fVar37;
        plVar7 = (longlong *)func_0x000144edcb00(param_3);
        uStack_1a8 = CONCAT44(fStack_284,fStack_288);
        uStack_1a0 = CONCAT44(fStack_27c,fStack_280);
        (**(code **)(*plVar7 + 8))(plVar7,&fStack_298,&uStack_1a8);
        auVar31 = auVar32._0_16_;
        fVar14 = fVar9 * fStack_298 + fVar14;
        fVar15 = fVar10 * fStack_294 + fVar15;
        fVar16 = fVar12 * fStack_290 + fVar16;
        fVar17 = fVar33 * fStack_28c + fVar17;
        if (*(char *)(param_1 + 5) == '\0') {
          cVar4 = FUN_144e0a1f0(lVar5);
          auVar31 = auVar32._0_16_;
          if (cVar4 != '\0') {
            *(undefined1 *)(param_1 + 5) = 1;
          }
        }
        auVar32 = ZEXT1664(CONCAT412(auVar31._12_4_ + fVar33,
                                     CONCAT48(auVar31._8_4_ + fVar12,
                                              CONCAT44(auVar31._4_4_ + fVar10,auVar31._0_4_ + fVar9)
                                             )));
        fVar27 = fVar27 + fVar13;
        fVar28 = fVar28 + fVar13;
        fVar29 = fVar29 + fVar13;
        fVar30 = fVar30 + fVar13;
        fVar18 = fVar18 + (float)auStack_1b8._0_4_;
      }
      iVar8 = iVar8 + 1;
    } while (iStack_26c != iVar8);
    auStack_168 = _auStack_258;
    if (iStack_29c != -1) {
      fStack_288 = fVar19;
      fStack_284 = fVar20;
      fStack_280 = fVar21;
      fStack_27c = fVar22;
      plVar7 = (longlong *)func_0x000144edcb00(param_3);
      auVar31 = vrcpps_avx(auVar32._0_16_);
      fVar9 = auVar31._0_4_;
      fVar10 = auVar31._4_4_;
      fVar12 = auVar31._8_4_;
      fVar13 = auVar31._12_4_;
      fVar9 = -((auVar32._0_4_ * fVar9 - fVar23) * fVar9) + fVar9;
      fVar10 = -((auVar32._4_4_ * fVar10 - fVar24) * fVar10) + fVar10;
      fVar12 = -((auVar32._8_4_ * fVar12 - fVar25) * fVar12) + fVar12;
      fVar13 = -((auVar32._12_4_ * fVar13 - fVar26) * fVar13) + fVar13;
      auStack_248._0_4_ = fVar9 * fVar14;
      auStack_248._4_4_ = fVar10 * fVar15;
      auStack_248._8_4_ = fVar12 * fVar16;
      auStack_248._12_4_ = fVar13 * fVar17;
      (**(code **)(*plVar7 + 0x10))(plVar7,&fStack_298);
      auStack_1c8 = auVar32._0_16_;
      func_0x00014001fba0(auStack_1d8,auStack_1c8,&uStack_238,&fStack_288);
      auStack_1e8._0_4_ = fVar34 * fVar9;
      auStack_1e8._4_4_ = fVar35 * fVar10;
      auStack_1e8._8_4_ = fVar36 * fVar12;
      auStack_1e8._12_4_ = fVar37 * fVar13;
      fStack_288 = fVar19;
      fStack_284 = fVar20;
      fStack_280 = fVar21;
      fStack_27c = fVar22;
      (**(code **)(*param_3 + 0x10))(param_3,&uStack_268);
      auVar11 = ZEXT464(*(uint *)((longlong)param_2 + 0xc));
      func_0x000144e0a1d0(*(uint *)((longlong)param_2 + 0xc),auStack_1f8);
      fVar14 = auStack_1f8._0_4_;
      if ((0.0 < fVar14) && (auVar32._0_4_ < fVar14 + _DAT_14615d120)) {
        auVar31 = vrcpps_avx(auStack_1f8);
        fVar15 = auVar31._0_4_;
        fVar16 = auVar31._4_4_;
        fVar17 = auVar31._8_4_;
        fVar34 = auVar31._12_4_;
        auStack_128 = auVar32._0_16_;
        fStack_148 = (-((fVar15 * fVar14 - fVar23) * fVar15) + fVar15) * auVar32._0_4_;
        fStack_144 = (-((fVar16 * auStack_1f8._4_4_ - fVar24) * fVar16) + fVar16) * auVar32._4_4_;
        fStack_140 = (-((fVar17 * auStack_1f8._8_4_ - fVar25) * fVar17) + fVar17) * auVar32._8_4_;
        fStack_13c = (-((fVar34 * auStack_1f8._12_4_ - fVar26) * fVar34) + fVar34) * auVar32._12_4_;
        fStack_138 = fVar27;
        fStack_134 = fVar28;
        fStack_130 = fVar29;
        fStack_12c = fVar30;
        FUN_14001fc40(auVar11._0_8_,auStack_188,&uStack_268,auStack_128,&fStack_138,0,&fStack_148);
      }
      auStack_208 = auVar32._0_16_;
      uStack_218 = uStack_268;
      uStack_210 = uStack_260;
      func_0x00014001fba0(&uStack_218,auStack_208,&uStack_228,&fStack_288);
      fVar19 = fVar19 + auVar32._0_4_;
      fVar20 = fVar20 + auVar32._4_4_;
      fVar21 = fVar21 + auVar32._8_4_;
      fVar22 = fVar22 + auVar32._12_4_;
      auStack_168._0_4_ = fVar27 + (float)auStack_258._0_4_;
      auStack_168._4_4_ = fVar28 + (float)auStack_258._4_4_;
      auStack_168._8_4_ = fVar29 + fStack_250;
      auStack_168._12_4_ = fVar30 + fStack_24c;
    }
  }
  auStack_178._4_4_ = _DAT_145fc6ed8;
  auStack_178._0_4_ = _DAT_145fc6ed8;
  auStack_178._8_4_ = _DAT_145fc6ed8;
  auStack_178._12_4_ = _DAT_145fc6ed8;
  fStack_158 = fVar19;
  fStack_154 = fVar20;
  fStack_150 = fVar21;
  fStack_14c = fVar22;
  FUN_14001fc40(*(undefined4 *)((longlong)param_2 + 0xc),&uStack_238,&uStack_228,&fStack_158,
                auStack_168,1,auStack_178);
  param_1[2] = CONCAT44(uStack_224,uStack_228);
  param_1[3] = CONCAT44(uStack_21c,uStack_220);
  *param_1 = CONCAT44(uStack_234,uStack_238);
  param_1[1] = CONCAT44(uStack_22c,uStack_230);
  *(float *)(param_1 + 4) = fVar19;
  *(float *)((longlong)param_1 + 0x24) = fVar18;
  return;
}

