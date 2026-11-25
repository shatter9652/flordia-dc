// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140029640  size: 1679 bytes
// Name:    FUN_140029640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e46f50, FUN_144e0a1f0, FUN_144df7680, FUN_144e0b610, FUN_144e09710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140029640(undefined1 (*param_1) [16],longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar39;
  undefined1 auVar38 [64];
  undefined1 auVar40 [64];
  float fVar41;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  int iStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined1 auStack_268 [16];
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 (*pauStack_200) [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [184];
  
  uStack_238 = _DAT_145fc6ee0;
  uStack_230 = _UNK_145fc6ee8;
  auStack_268._8_8_ = _UNK_145fc6ee8;
  auStack_268._0_8_ = _DAT_145fc6ee0;
  uStack_248 = _DAT_145fc6ee0;
  uStack_240 = _UNK_145fc6ee8;
  uStack_258 = _DAT_145fc6ee0;
  uStack_250 = _UNK_145fc6ee8;
  iStack_27c = (**(code **)(*param_2 + 0x10))(param_2);
  if (iStack_27c < 1) {
    auVar40 = ZEXT1664(CONCAT88(_UNK_145fc6ee8,_DAT_145fc6ee0));
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
  }
  else {
    auVar40 = ZEXT1664(CONCAT88(_UNK_145fc6ee8,_DAT_145fc6ee0));
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    iVar9 = 0;
    iVar7 = -1;
    fVar24 = 0.0;
    fVar25 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar33 = 0.0;
    fVar34 = 0.0;
    fVar35 = 0.0;
    fVar36 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    fVar32 = 0.0;
    pauStack_200 = param_1;
    do {
      lVar4 = (**(code **)(*param_2 + 0x18))(param_2,iVar9);
      lVar2 = *(longlong *)(lVar4 + 8);
      plVar6 = *(longlong **)(lVar2 + 0x18);
      fVar10 = (float)FUN_144e0b610(lVar4);
      fVar41 = *(float *)(lVar4 + 0x14);
      fVar11 = (float)(**(code **)(*plVar6 + 0x50))(plVar6);
      if (_DAT_146159ec4 < fVar10) {
        fVar41 = fVar41 * fVar11 * *(float *)(lVar4 + 0x18);
        iVar1 = *(int *)(lVar4 + 0x30);
        iVar8 = iVar1;
        if ((iVar7 != -1) && (iVar8 = iVar7, iVar7 != iVar1)) {
          uVar18 = uStack_238;
          uVar19 = uStack_230;
          uVar37 = uStack_248;
          uVar39 = uStack_240;
          fStack_278 = fVar20;
          fStack_274 = fVar21;
          fStack_270 = fVar22;
          fStack_26c = fVar23;
          plVar6 = (longlong *)func_0x000144e3bfa0(param_3);
          uStack_188 = uVar37;
          uStack_180 = uVar39;
          (**(code **)(*plVar6 + 0x10))(plVar6,&fStack_298,&uStack_188);
          uStack_1a8 = CONCAT44(fStack_294,fStack_298);
          uStack_1a0 = CONCAT44(fStack_28c,fStack_290);
          fStack_198 = fVar33;
          fStack_194 = fVar34;
          fStack_190 = fVar35;
          fStack_18c = fVar36;
          FUN_144e09710(&uStack_1a8,&fStack_198,&uStack_258,&fStack_278);
          fStack_278 = fVar20;
          fStack_274 = fVar21;
          fStack_270 = fVar22;
          fStack_26c = fVar23;
          uStack_1c8 = uVar18;
          uStack_1c0 = uVar19;
          (**(code **)(*param_3 + 0x10))(param_3,&uStack_1b8,&uStack_1c8);
          uStack_1d8 = CONCAT44(fStack_294,fStack_298);
          uStack_1d0 = CONCAT44(fStack_28c,fStack_290);
          fStack_228 = fVar33;
          fStack_224 = fVar34;
          fStack_220 = fVar35;
          fStack_21c = fVar36;
          fStack_218 = fVar29;
          fStack_214 = fVar30;
          fStack_210 = fVar31;
          fStack_20c = fVar32;
          FUN_144df7680(*(undefined4 *)((longlong)param_2 + 0xc),param_3,&uStack_1d8,&uStack_1b8,
                        &fStack_228,&fStack_218,0);
          uStack_1f8 = uStack_1b8;
          uStack_1f0 = uStack_1b0;
          fStack_1e8 = fVar33;
          fStack_1e4 = fVar34;
          fStack_1e0 = fVar35;
          fStack_1dc = fVar36;
          FUN_144e09710(&uStack_1f8,&fStack_1e8,auStack_268,&fStack_278);
          auVar40 = ZEXT1664(CONCAT88(uStack_250,uStack_258));
          auVar16._0_12_ = ZEXT812(0);
          auVar16._12_4_ = 0;
          fVar20 = fVar33 + fVar20;
          fVar21 = fVar34 + fVar21;
          fVar22 = fVar35 + fVar22;
          fVar23 = fVar36 + fVar23;
          fVar25 = fVar25 + fVar29;
          fVar26 = fVar26 + fVar30;
          fVar27 = fVar27 + fVar31;
          fVar28 = fVar28 + fVar32;
          fVar29 = 0.0;
          fVar30 = 0.0;
          fVar31 = 0.0;
          fVar32 = 0.0;
          fVar33 = 0.0;
          fVar34 = 0.0;
          fVar35 = 0.0;
          fVar36 = 0.0;
          auVar13._0_4_ = (float)uStack_258 * auStack_268._0_4_;
          auVar13._4_4_ = (float)((ulonglong)uStack_258 >> 0x20) * auStack_268._4_4_;
          auVar13._8_4_ = (float)uStack_250 * auStack_268._8_4_;
          auVar13._12_4_ = (float)((ulonglong)uStack_250 >> 0x20) * auStack_268._12_4_;
          auVar13 = vhaddps_avx(auVar13,auVar13);
          auVar13 = vhaddps_avx(auVar13,auVar13);
          auVar13 = vcmpps_avx(auVar13,auVar16,1);
          auVar17._0_4_ = (uint)auStack_268._0_4_ ^ _DAT_145fc6f10;
          auVar17._4_4_ = (uint)auStack_268._4_4_ ^ _DAT_145fc6f10;
          auVar17._8_4_ = (uint)auStack_268._8_4_ ^ _DAT_145fc6f10;
          auVar17._12_4_ = (uint)auStack_268._12_4_ ^ _DAT_145fc6f10;
          auStack_268 = vblendvps_avx(auStack_268,auVar17,auVar13);
          uStack_248 = _DAT_145fc6ee0;
          uStack_240 = _UNK_145fc6ee8;
          iVar8 = iVar1;
          uStack_238 = uStack_248;
          uStack_230 = uStack_240;
        }
        auVar38 = ZEXT1664(CONCAT412(fVar10,CONCAT48(fVar10,CONCAT44(fVar10,fVar10))));
        (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x18))
                  (*(longlong **)(lVar2 + 0x18),&fStack_278);
        lVar5 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 0x38))();
        uStack_178 = CONCAT44(fStack_274,fStack_278);
        uStack_170 = CONCAT44(fStack_26c,fStack_270);
        FUN_144e46f50(*(undefined8 *)(lVar5 + 0x20),&fStack_298,&uStack_178);
        uVar18 = CONCAT44(fStack_294,fStack_298);
        uVar19 = CONCAT44(fStack_28c,fStack_290);
        func_0x000144e08cb0(*(undefined8 *)(lVar2 + 0x20),&fStack_278);
        fVar10 = fVar10 * *(float *)(lVar2 + 0x10);
        auStack_138 = auVar38._0_16_;
        fStack_298 = fVar33;
        fStack_294 = fVar34;
        fStack_290 = fVar35;
        fStack_28c = fVar36;
        uStack_148 = uVar18;
        uStack_140 = uVar19;
        (**(code **)(*param_3 + 8))(param_3,auStack_f8,&uStack_148);
        FUN_144e09710(auStack_f8,auStack_138,&uStack_238,&fStack_298);
        auStack_158 = auVar38._0_16_;
        fStack_298 = fVar33;
        fStack_294 = fVar34;
        fStack_290 = fVar35;
        fStack_28c = fVar36;
        plVar6 = (longlong *)func_0x000144e3bfa0(param_3);
        uStack_168 = CONCAT44(fStack_274,fStack_278);
        uStack_160 = CONCAT44(fStack_26c,fStack_270);
        (**(code **)(*plVar6 + 8))(plVar6,auStack_108,&uStack_168);
        FUN_144e09710(auStack_108,auStack_158,&uStack_248,&fStack_298);
        param_1 = pauStack_200;
        auVar13 = auVar38._0_16_;
        if (pauStack_200[2][8] == '\0') {
          cVar3 = FUN_144e0a1f0(lVar4);
          auVar13 = auVar38._0_16_;
          if (cVar3 != '\0') {
            param_1[2][8] = 1;
          }
        }
        fVar33 = fVar33 + auVar13._0_4_;
        fVar34 = fVar34 + auVar13._4_4_;
        fVar35 = fVar35 + auVar13._8_4_;
        fVar36 = fVar36 + auVar13._12_4_;
        fVar29 = fVar29 + fVar10;
        fVar30 = fVar30 + fVar10;
        fVar31 = fVar31 + fVar10;
        fVar32 = fVar32 + fVar10;
        fVar24 = fVar24 + fVar41;
        iVar7 = iVar8;
      }
      iVar9 = iVar9 + 1;
    } while (iStack_27c != iVar9);
    if (iVar7 != -1) {
      uVar18 = uStack_238;
      uVar19 = uStack_230;
      uVar37 = uStack_248;
      uVar39 = uStack_240;
      fStack_278 = fVar20;
      fStack_274 = fVar21;
      fStack_270 = fVar22;
      fStack_26c = fVar23;
      plVar6 = (longlong *)func_0x000144e3bfa0(param_3);
      uStack_188 = uVar37;
      uStack_180 = uVar39;
      (**(code **)(*plVar6 + 0x10))(plVar6,&fStack_298);
      uStack_1a8 = CONCAT44(fStack_294,fStack_298);
      uStack_1a0 = CONCAT44(fStack_28c,fStack_290);
      fStack_198 = fVar33;
      fStack_194 = fVar34;
      fStack_190 = fVar35;
      fStack_18c = fVar36;
      FUN_144e09710(&uStack_1a8,&fStack_198,&uStack_258,&fStack_278);
      fStack_278 = fVar20;
      fStack_274 = fVar21;
      fStack_270 = fVar22;
      fStack_26c = fVar23;
      uStack_1c8 = uVar18;
      uStack_1c0 = uVar19;
      (**(code **)(*param_3 + 0x10))(param_3,&uStack_1b8);
      uStack_1d8 = CONCAT44(fStack_294,fStack_298);
      uStack_1d0 = CONCAT44(fStack_28c,fStack_290);
      fStack_228 = fVar33;
      fStack_224 = fVar34;
      fStack_220 = fVar35;
      fStack_21c = fVar36;
      fStack_218 = fVar29;
      fStack_214 = fVar30;
      fStack_210 = fVar31;
      fStack_20c = fVar32;
      FUN_144df7680(*(undefined4 *)((longlong)param_2 + 0xc),param_3,&uStack_1d8,&uStack_1b8,
                    &fStack_228,&fStack_218,0);
      uStack_1f8 = uStack_1b8;
      uStack_1f0 = uStack_1b0;
      fStack_1e8 = fVar33;
      fStack_1e4 = fVar34;
      fStack_1e0 = fVar35;
      fStack_1dc = fVar36;
      FUN_144e09710(&uStack_1f8,&fStack_1e8,auStack_268,&fStack_278);
      auVar40 = ZEXT1664(CONCAT88(uStack_250,uStack_258));
      auVar14._0_12_ = ZEXT812(0);
      auVar14._12_4_ = 0;
      fVar20 = fVar33 + fVar20;
      fVar21 = fVar34 + fVar21;
      fVar22 = fVar35 + fVar22;
      fVar23 = fVar36 + fVar23;
      fVar25 = fVar25 + fVar29;
      fVar26 = fVar26 + fVar30;
      fVar27 = fVar27 + fVar31;
      fVar28 = fVar28 + fVar32;
      auVar12._0_4_ = (float)uStack_258 * auStack_268._0_4_;
      auVar12._4_4_ = (float)((ulonglong)uStack_258 >> 0x20) * auStack_268._4_4_;
      auVar12._8_4_ = (float)uStack_250 * auStack_268._8_4_;
      auVar12._12_4_ = (float)((ulonglong)uStack_250 >> 0x20) * auStack_268._12_4_;
      auVar13 = vhaddps_avx(auVar12,auVar12);
      auVar13 = vhaddps_avx(auVar13,auVar13);
      auVar13 = vcmpps_avx(auVar13,auVar14,1);
      auVar15._0_4_ = (uint)auStack_268._0_4_ ^ _DAT_145fc6f10;
      auVar15._4_4_ = (uint)auStack_268._4_4_ ^ _DAT_145fc6f10;
      auVar15._8_4_ = (uint)auStack_268._8_4_ ^ _DAT_145fc6f10;
      auVar15._12_4_ = (uint)auStack_268._12_4_ ^ _DAT_145fc6f10;
      auStack_268 = vblendvps_avx(auStack_268,auVar15,auVar13);
    }
  }
  fStack_128 = fVar20;
  fStack_124 = fVar21;
  fStack_120 = fVar22;
  fStack_11c = fVar23;
  fStack_118 = fVar25;
  fStack_114 = fVar26;
  fStack_110 = fVar27;
  fStack_10c = fVar28;
  FUN_144df7680(*(undefined4 *)((longlong)param_2 + 0xc),param_3,&uStack_258,auStack_268,&fStack_128
                ,&fStack_118,1);
  *(undefined8 *)param_1[1] = auStack_268._0_8_;
  *(undefined8 *)(param_1[1] + 8) = auStack_268._8_8_;
  *param_1 = auVar40._0_16_;
  *(float *)param_1[2] = fVar20;
  *(float *)(param_1[2] + 4) = fVar24;
  return;
}

