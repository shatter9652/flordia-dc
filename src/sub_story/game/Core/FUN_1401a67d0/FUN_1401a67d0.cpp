// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a67d0  size: 2966 bytes
// Name:    FUN_1401a67d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452a8bf0, FUN_14501ee50, FUN_144fe1540, FUN_141236280, FUN_142089d80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a67d0(longlong param_1,float param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar45;
  float fVar46;
  undefined1 auVar40 [16];
  float fVar47;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  undefined1 auVar54 [64];
  float fVar61;
  float fVar67;
  float fVar68;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar69;
  undefined1 auVar66 [64];
  undefined1 auVar70 [64];
  undefined4 uVar71;
  undefined1 auVar72 [16];
  float fVar73;
  float fVar76;
  float fVar77;
  undefined1 auVar74 [16];
  float fVar78;
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [64];
  undefined1 auVar82 [64];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  uint uStack_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  short sStack_2d4;
  undefined2 uStack_2d2;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [16];
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  undefined2 uStack_284;
  undefined1 uStack_282;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined2 uStack_260;
  undefined1 uStack_25e;
  undefined1 uStack_25c;
  undefined8 uStack_258;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined4 uStack_208;
  undefined1 auStack_1f8 [32];
  undefined1 auStack_1d8 [32];
  undefined2 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [16];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 auVar53 [64];
  undefined1 auVar65 [64];
  undefined1 auVar80 [64];
  
  uStack_2ec = 0;
  uStack_2f0 = 0;
  uStack_2e4 = 0;
  uStack_2e8 = 0;
  lVar12 = *(longlong *)(param_1 + 0x860);
  if ((((lVar12 == 0) ||
       (uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,
       *(longlong *)(uVar8 + 0x38) != lVar12)) || (*(char *)(lVar12 + 0x156) != '\x01')) ||
     (((*(byte *)(lVar12 + 0x1a) & 0x20) != 0 || ((*(byte *)(param_1 + 0x222) & 0x20) != 0)))) {
    func_0x000144e43930(lVar12,&uStack_2d8);
    if (*(short *)(param_1 + 0x932) != 0) {
      FUN_144fe1540(_DAT_14a95dee0 + 0x20ba0,*(undefined4 *)(param_1 + 0x930));
      *(undefined4 *)(param_1 + 0x930) = 0;
    }
    if (*(short *)(param_1 + 0x936) != 0) {
      FUN_144fe1540(_DAT_14a95dee0 + 0x20ba0,*(undefined4 *)(param_1 + 0x934));
      *(undefined4 *)(param_1 + 0x934) = 0;
    }
    return;
  }
  lVar9 = func_0x000144da10f0(*(undefined4 *)(uVar8 + 0x9c));
  if (lVar9 == 0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)FUN_14501ee50(lVar9);
  }
  func_0x000143c9d790(param_1,&uStack_2ec,&uStack_2f0);
  func_0x000143c9d7b0(param_1,&uStack_2e4,&uStack_2e8);
  uVar71 = 0;
  if (plVar10 != (longlong *)0x0) {
    auVar28 = vinsertps_avx(ZEXT416(uStack_2ec),ZEXT416(uStack_2f0),0x10);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(uStack_2e4),0x20);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(uStack_2e8),0x30);
    auVar28 = vcmpps_avx(auVar28,ZEXT816(0),4);
    uVar7 = vmovmskps_avx(auVar28);
    if ((char)uVar7 == '\0') {
      (**(code **)(*plVar10 + 0x470))(plVar10,&uStack_2ec,&uStack_2f0);
      (**(code **)(*plVar10 + 0x478))(plVar10,&uStack_2e4,&uStack_2e8);
      uVar71 = _DAT_146159bdc;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x928);
  if (*(char *)(lVar9 + 0xc) == '\x04') {
    uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    lVar11 = func_0x000144d9f7c0(*(undefined4 *)(uVar8 + 0x9c));
    if (((lVar11 != 0) &&
        (auVar28._0_4_ = uStack_2f0 ^ _DAT_145fc6f10, auVar28._4_4_ = _DAT_145fc6f10,
        auVar28._8_4_ = _DAT_145fc6f10, auVar28._12_4_ = _DAT_145fc6f10,
        auVar28 = vmaxss_avx(auVar28,ZEXT416(uStack_2f0)), auVar28._0_4_ <= _DAT_14615d524)) &&
       (auVar16._0_4_ = uStack_2ec ^ _DAT_145fc6f10, auVar16._4_4_ = _DAT_145fc6f10,
       auVar16._8_4_ = _DAT_145fc6f10, auVar16._12_4_ = _DAT_145fc6f10,
       auVar28 = vmaxss_avx(auVar16,ZEXT416(uStack_2ec)), auVar28._0_4_ <= _DAT_14615d524)) {
      if ((*(float *)(param_1 + 0x648) != _DAT_14615bd54) ||
         (NAN(*(float *)(param_1 + 0x648)) || NAN(_DAT_14615bd54))) {
        if ((*(float *)(param_1 + 0x6e8) != _DAT_14615bd54) ||
           (NAN(*(float *)(param_1 + 0x6e8)) || NAN(_DAT_14615bd54))) {
          auVar52._0_12_ = ZEXT812(0);
          auVar52._12_4_ = 0;
          auVar53 = ZEXT1664(auVar52);
          uVar55 = 0;
          uVar57 = 0;
          uVar59 = 0;
          auVar48._8_8_ = 0;
          auVar48._0_8_ = _DAT_146159bc0;
          auVar28 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x640),
                               *(undefined1 (*) [16])(param_1 + 0x6e0));
          fVar22 = auVar28._0_4_;
          auVar17._0_4_ = fVar22 * fVar22;
          fVar26 = auVar28._4_4_;
          auVar17._4_4_ = fVar26 * fVar26;
          fVar39 = auVar28._8_4_;
          auVar17._8_4_ = fVar39 * fVar39;
          fVar46 = auVar28._12_4_;
          auVar17._12_4_ = fVar46 * fVar46;
          auVar28 = vblendps_avx(auVar17,auVar52,8);
          auVar28 = vhaddps_avx(auVar28,auVar28);
          auVar16 = vhaddps_avx(auVar28,auVar28);
          auVar28 = vrsqrtps_avx(auVar16);
          fVar15 = auVar28._0_4_;
          fVar27 = auVar28._4_4_;
          fVar45 = auVar28._8_4_;
          fVar47 = auVar28._12_4_;
          auVar23._4_4_ = _DAT_145fc6f14;
          auVar23._0_4_ = _DAT_145fc6f14;
          auVar23._8_4_ = _DAT_145fc6f14;
          auVar23._12_4_ = _DAT_145fc6f14;
          auVar28 = vcmpps_avx(auVar23,auVar16,1);
          auVar29._0_4_ =
               auVar28._0_4_ &
               (uint)(((_DAT_145fc6f08 * fVar15 * fVar15 * auVar16._0_4_ - _DAT_145fc6f08) * fVar15
                      + fVar15) * fVar22);
          auVar29._4_4_ =
               auVar28._4_4_ &
               (uint)(((_DAT_145fc6f08 * fVar27 * fVar27 * auVar16._4_4_ - _DAT_145fc6f08) * fVar27
                      + fVar27) * fVar26);
          auVar29._8_4_ =
               auVar28._8_4_ &
               (uint)(((_DAT_145fc6f08 * fVar45 * fVar45 * auVar16._8_4_ - _DAT_145fc6f08) * fVar45
                      + fVar45) * fVar39);
          auVar29._12_4_ =
               auVar28._12_4_ &
               (uint)(((_DAT_145fc6f08 * fVar47 * fVar47 * auVar16._12_4_ - _DAT_145fc6f08) * fVar47
                      + fVar47) * fVar46);
          auVar28 = vshufps_avx(auVar29,auVar29,0xc9);
          auVar16 = vshufps_avx(auVar29,auVar29,0xd2);
          uVar56 = 0;
          uVar58 = 0;
          uVar60 = 0;
          auVar40._0_4_ = -(auVar16._0_4_ * (float)_DAT_146159bc0) + auVar28._0_4_ * _DAT_145fc6ed8;
          fVar51 = (float)(_DAT_146159bc0 >> 0x20);
          auVar40._4_4_ = -(auVar16._4_4_ * fVar51) + auVar28._4_4_ * 0.0;
          auVar40._8_4_ = -(auVar16._8_4_ * 0.0) + auVar28._8_4_ * 0.0;
          auVar40._12_4_ = -(auVar16._12_4_ * 0.0) + auVar28._12_4_ * 0.0;
          auVar17 = vshufps_avx(auVar40,auVar40,0xc9);
          auVar18 = vshufps_avx(auVar40,auVar40,0xd2);
          fVar39 = -(auVar28._0_4_ * auVar18._0_4_) + auVar17._0_4_ * auVar16._0_4_;
          fVar45 = -(auVar28._4_4_ * auVar18._4_4_) + auVar17._4_4_ * auVar16._4_4_;
          fVar46 = -(auVar28._8_4_ * auVar18._8_4_) + auVar17._8_4_ * auVar16._8_4_;
          fVar47 = -(auVar28._12_4_ * auVar18._12_4_) + auVar17._12_4_ * auVar16._12_4_;
          auVar30._0_4_ = fVar39 * fVar39;
          auVar30._4_4_ = fVar45 * fVar45;
          auVar30._8_4_ = fVar46 * fVar46;
          auVar30._12_4_ = fVar47 * fVar47;
          auVar28 = vblendps_avx(auVar30,auVar52,8);
          auVar28 = vhaddps_avx(auVar28,auVar28);
          auVar16 = vhaddps_avx(auVar28,auVar28);
          auVar28 = vrsqrtps_avx(auVar16);
          fVar22 = auVar28._0_4_;
          fVar15 = auVar28._4_4_;
          fVar26 = auVar28._8_4_;
          fVar27 = auVar28._12_4_;
          auVar28 = vcmpps_avx(auVar23,auVar16,1);
          auVar17 = vshufps_avx(auVar48,auVar48,0xc9);
          auVar31._0_4_ =
               (float)(auVar28._0_4_ &
                      (uint)(((_DAT_145fc6f08 * fVar22 * fVar22 * auVar16._0_4_ - _DAT_145fc6f08) *
                              fVar22 + fVar22) * fVar39));
          auVar31._4_4_ =
               (float)(auVar28._4_4_ &
                      (uint)(((_DAT_145fc6f08 * fVar15 * fVar15 * auVar16._4_4_ - _DAT_145fc6f08) *
                              fVar15 + fVar15) * fVar45));
          auVar31._8_4_ =
               (float)(auVar28._8_4_ &
                      (uint)(((_DAT_145fc6f08 * fVar26 * fVar26 * auVar16._8_4_ - _DAT_145fc6f08) *
                              fVar26 + fVar26) * fVar46));
          auVar31._12_4_ =
               (float)(auVar28._12_4_ &
                      (uint)(((_DAT_145fc6f08 * fVar27 * fVar27 * auVar16._12_4_ - _DAT_145fc6f08) *
                              fVar27 + fVar27) * fVar47));
          auVar28 = vshufps_avx(auVar31,auVar31,0xc9);
          auVar16 = vshufps_avx(auVar31,auVar31,0xd2);
          fVar39 = -((float)_DAT_146159bc0 * auVar16._0_4_) + auVar28._0_4_ * auVar17._0_4_;
          fVar45 = -(fVar51 * auVar16._4_4_) + auVar28._4_4_ * auVar17._4_4_;
          fVar46 = -(auVar16._8_4_ * 0.0) + auVar28._8_4_ * auVar17._8_4_;
          fVar47 = -(auVar16._12_4_ * 0.0) + auVar28._12_4_ * auVar17._12_4_;
          auVar35._0_4_ = fVar39 * fVar39;
          auVar35._4_4_ = fVar45 * fVar45;
          auVar35._8_4_ = fVar46 * fVar46;
          auVar35._12_4_ = fVar47 * fVar47;
          auVar28 = vblendps_avx(auVar35,auVar52,8);
          auVar28 = vhaddps_avx(auVar28,auVar28);
          auVar16 = vhaddps_avx(auVar28,auVar28);
          auVar17 = vrsqrtps_avx(auVar16);
          auVar28 = vcmpps_avx(auVar23,auVar16,1);
          fVar22 = auVar17._0_4_;
          fVar15 = auVar17._4_4_;
          fVar26 = auVar17._8_4_;
          fVar27 = auVar17._12_4_;
          auVar62._0_4_ =
               auVar28._0_4_ &
               (uint)(((_DAT_145fc6f08 * fVar22 * fVar22 * auVar16._0_4_ - _DAT_145fc6f08) * fVar22
                      + fVar22) * fVar39);
          auVar62._4_4_ =
               auVar28._4_4_ &
               (uint)(((_DAT_145fc6f08 * fVar15 * fVar15 * auVar16._4_4_ - _DAT_145fc6f08) * fVar15
                      + fVar15) * fVar45);
          auVar62._8_4_ =
               auVar28._8_4_ &
               (uint)(((_DAT_145fc6f08 * fVar26 * fVar26 * auVar16._8_4_ - _DAT_145fc6f08) * fVar26
                      + fVar26) * fVar46);
          auVar62._12_4_ =
               auVar28._12_4_ &
               (uint)(((_DAT_145fc6f08 * fVar27 * fVar27 * auVar16._12_4_ - _DAT_145fc6f08) * fVar27
                      + fVar27) * fVar47);
          auVar65 = ZEXT1664(auVar62);
          auVar18._0_4_ = auVar31._0_4_ * _DAT_14614f7f0;
          auVar18._4_4_ = auVar31._4_4_ * _UNK_14614f7f4;
          auVar18._8_4_ = auVar31._8_4_ * _UNK_14614f7f8;
          auVar18._12_4_ = auVar31._12_4_ * _UNK_14614f7fc;
          auVar28 = vblendps_avx(auVar18,auVar52,8);
          auVar28 = vhaddps_avx(auVar28,auVar28);
          auVar28 = vhaddps_avx(auVar28,auVar28);
          fVar22 = _DAT_145fc6ed8;
          fVar15 = _DAT_145fc6f80;
          if ((_DAT_145fc6f48 < auVar28._0_4_) && (fVar15 = 0.0, auVar28._0_4_ < _DAT_145fc6ed8)) {
            fVar15 = (float)func_0x000145f40740(auVar28._0_8_);
            auVar62 = auVar65._0_16_;
            auVar52 = auVar53._0_16_;
            uVar56 = uVar55;
            uVar58 = uVar57;
            uVar60 = uVar59;
          }
          auVar24._0_4_ = auVar62._0_4_ * *(float *)(uVar8 + 0x40);
          auVar24._4_4_ = auVar62._4_4_ * *(float *)(uVar8 + 0x44);
          auVar24._8_4_ = auVar62._8_4_ * *(float *)(uVar8 + 0x48);
          auVar24._12_4_ = auVar62._12_4_ * *(float *)(uVar8 + 0x4c);
          auVar32._0_12_ = ZEXT812(0);
          auVar32._12_4_ = 0;
          auVar28 = vblendps_avx(auVar24,auVar52,8);
          auVar28 = vhaddps_avx(auVar28,auVar28);
          auVar16 = vhaddps_avx(auVar28,auVar28);
          auVar28 = vcmpss_avx(auVar16,auVar32,0);
          auVar16 = vcmpss_avx(auVar16,auVar32,1);
          auVar33._4_4_ = _DAT_145fc6f48;
          auVar33._0_4_ = _DAT_145fc6f48;
          auVar33._8_4_ = _DAT_145fc6f48;
          auVar33._12_4_ = _DAT_145fc6f48;
          auVar36._0_4_ = ~auVar28._0_4_ & (uint)fVar22;
          auVar36._4_4_ = ~auVar28._4_4_ & uVar56;
          auVar36._8_4_ = ~auVar28._8_4_ & uVar58;
          auVar36._12_4_ = ~auVar28._12_4_ & uVar60;
          auVar28 = vblendvps_avx(auVar36,auVar33,auVar16);
          func_0x000142089d60(&uStack_2ec,&uStack_2f0,auVar28._0_4_ * fVar15);
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x228) >> 10 & 1) != 0) {
    auVar17 = vminss_avx(ZEXT416(_DAT_14616b1c4),ZEXT416(uStack_2ec));
    auVar16 = vminss_avx(ZEXT416(_DAT_14616b1c4),ZEXT416(uStack_2e4));
    auVar28 = vmaxss_avx(ZEXT416(_DAT_146165e70),ZEXT416(uStack_2f0));
    uStack_2e4 = auVar16._0_4_;
    auVar16 = vmaxss_avx(ZEXT416(_DAT_146165e70),ZEXT416(uStack_2e8));
    uStack_2ec = auVar17._0_4_;
    uStack_2f0 = auVar28._0_4_;
    uStack_2e8 = auVar16._0_4_;
  }
  if ((*(uint *)(param_1 + 0x228) >> 0x12 & 1) == 0) {
    auVar53 = ZEXT464(uStack_2ec);
    auVar28 = vinsertps_avx(ZEXT416(uStack_2ec),ZEXT416(uStack_2f0),0x10);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(uStack_2e4),0x20);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(uStack_2e8),0x30);
  }
  else {
    auVar28 = *(undefined1 (*) [16])(param_1 + 0x970);
    auVar53 = ZEXT1664(auVar28);
    uStack_2f0 = *(uint *)(param_1 + 0x974);
    uStack_2e4 = *(uint *)(param_1 + 0x978);
    uStack_2e8 = *(uint *)(param_1 + 0x97c);
    uStack_2ec = auVar28._0_4_;
  }
  auVar70 = ZEXT464(uStack_2f0);
  auVar66 = ZEXT1664(auVar28);
  auVar54 = ZEXT464(uStack_2e4);
  auVar65 = ZEXT464(uStack_2e8);
  cVar1 = *(char *)(lVar9 + 0xc);
  func_0x000144e43930(lVar12,&uStack_2d8);
  if (cVar1 != '\x04') {
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    auVar28 = vcmpps_avx(auVar66._0_16_,auVar19,4);
    uVar7 = vmovmskps_avx(auVar28);
    if ((char)uVar7 == '\0') {
      lVar12 = func_0x00014517ef70(*(undefined8 *)(_DAT_14a95dee0 + 0x20bb0),
                                   *(undefined4 *)(param_1 + 0x930));
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x14) & 0x1f) == 3)) {
        return;
      }
      FUN_142089d80(param_1);
      uStack_148 = CONCAT44(_UNK_14614f7f4,_DAT_14614f7f0);
      uStack_140 = CONCAT44(_UNK_14614f7fc,_UNK_14614f7f8);
      fStack_188 = 4.2039e-45;
      fStack_184 = (float)CONCAT13(fStack_184._3_1_,0x101);
      uStack_178 = 0xffffffff00000000;
      uStack_160 = (float)((uint)uStack_160._3_1_ << 0x18);
      uStack_160 = (float)CONCAT22(uStack_160._2_2_,0x100);
      uStack_170 = _DAT_14615b330;
      uStack_168 = _UNK_14615b338;
      fStack_15c = (float)((uint)fStack_15c & 0xffffff00);
      uStack_158 = vmovlps_avx(ZEXT416(_DAT_146159c54));
      uStack_118 = 1;
      uStack_108 = _DAT_145fc6ee0;
      uStack_100 = _UNK_145fc6ee8;
      uStack_f8 = 1;
      uStack_138 = uStack_148;
      uStack_130 = uStack_140;
      uStack_128 = uStack_148;
      uStack_120 = uStack_140;
      FUN_141236280(_DAT_14a95dee0 + 0x20ba0,&uStack_2dc);
      *(undefined4 *)(param_1 + 0x930) = uStack_2dc;
      return;
    }
  }
  auVar74._4_4_ = _UNK_14614f7f4;
  auVar74._0_4_ = _DAT_14614f7f0;
  auVar74._8_4_ = _UNK_14614f7f8;
  auVar74._12_4_ = _UNK_14614f7fc;
  auVar66 = ZEXT1664(auVar74);
  auVar79._8_8_ = 0;
  auVar79._0_8_ = _DAT_146159bc0;
  auVar80 = ZEXT1664(auVar79);
  auVar82 = ZEXT464((uint)_DAT_145fc6ed8);
  auVar28 = ZEXT416((uint)_DAT_145fc6ed8);
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar71);
  lVar9 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x20);
  fStack_2e0 = param_2;
  if (((lVar9 != 0) && (*(char *)(lVar9 + 0x10) == '\x06')) && (sStack_2d4 != -2)) {
    uVar6 = func_0x0001403dc2f0();
    auVar74 = auVar66._0_16_;
    auVar79 = auVar80._0_16_;
    auVar28 = auVar82._0_16_;
    if ((uVar6 != 0xffff) && (uVar6 < *(ushort *)(lVar9 + 0x9a))) {
      lVar9 = *(longlong *)(lVar9 + 0x78);
      lVar11 = (ulonglong)uVar6 * 0x40;
      auVar28 = *(undefined1 (*) [16])(lVar9 + lVar11);
      auVar79 = *(undefined1 (*) [16])(lVar9 + 0x10 + lVar11);
      auVar74 = *(undefined1 (*) [16])(lVar9 + 0x20 + lVar11);
    }
  }
  fVar22 = auVar28._0_4_;
  auVar41._0_4_ = fVar22 * fVar22;
  fVar26 = auVar28._4_4_;
  auVar41._4_4_ = fVar26 * fVar26;
  fVar39 = auVar28._8_4_;
  auVar41._8_4_ = fVar39 * fVar39;
  fVar46 = auVar28._12_4_;
  auVar41._12_4_ = fVar46 * fVar46;
  auVar72._0_12_ = ZEXT812(0);
  auVar72._12_4_ = 0;
  auVar80 = ZEXT1664(auVar72);
  fVar51 = *(float *)(lVar12 + 0x50);
  fVar2 = *(float *)(lVar12 + 0x54);
  fVar3 = *(float *)(lVar12 + 0x58);
  fVar4 = *(float *)(lVar12 + 0x5c);
  auVar28 = vblendps_avx(auVar72,*(undefined1 (*) [16])(lVar12 + 0x60),7);
  auVar16 = vblendps_avx(auVar72,*(undefined1 (*) [16])(lVar12 + 0x70),7);
  auVar17 = vblendps_avx(auVar41,auVar72,8);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  auVar18 = vhaddps_avx(auVar17,auVar17);
  auVar17 = vrsqrtps_avx(auVar18);
  fVar15 = auVar17._0_4_;
  fVar27 = auVar17._4_4_;
  fVar45 = auVar17._8_4_;
  fVar47 = auVar17._12_4_;
  auVar63._4_4_ = _DAT_146159bfc;
  auVar63._0_4_ = _DAT_146159bfc;
  auVar63._8_4_ = _DAT_146159bfc;
  auVar63._12_4_ = _DAT_146159bfc;
  auVar17 = vcmpps_avx(auVar63,auVar18,2);
  auVar66 = ZEXT1664(CONCAT412(_DAT_145fc6f10,
                               CONCAT48(_DAT_145fc6f10,CONCAT44(_DAT_145fc6f10,_DAT_145fc6f10))));
  auVar42._0_4_ =
       (float)(auVar17._0_4_ &
              (uint)(((fVar15 * fVar15 * auVar18._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar15 +
                     fVar15) * auVar18._0_4_));
  auVar42._4_4_ =
       (float)(auVar17._4_4_ &
              (uint)(((fVar27 * fVar27 * auVar18._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar27 +
                     fVar27) * auVar18._4_4_));
  auVar42._8_4_ =
       (float)(auVar17._8_4_ &
              (uint)(((fVar45 * fVar45 * auVar18._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar45 +
                     fVar45) * auVar18._8_4_));
  auVar42._12_4_ =
       (float)(auVar17._12_4_ &
              (uint)(((fVar47 * fVar47 * auVar18._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar47
                     + fVar47) * auVar18._12_4_));
  auVar17 = vrcpps_avx(auVar42);
  auVar64._0_4_ = _DAT_145fc6f10 ^ (uint)auVar42._0_4_;
  auVar64._4_4_ = _DAT_145fc6f10 ^ (uint)auVar42._4_4_;
  auVar64._8_4_ = _DAT_145fc6f10 ^ (uint)auVar42._8_4_;
  auVar64._12_4_ = _DAT_145fc6f10 ^ (uint)auVar42._12_4_;
  fVar15 = auVar17._0_4_;
  fVar27 = auVar17._4_4_;
  fVar45 = auVar17._8_4_;
  fVar47 = auVar17._12_4_;
  auVar17 = vcmpps_avx(auVar64,auVar42,0);
  auVar20._0_4_ = -((auVar42._0_4_ * fVar15 - _DAT_145fc6ed8) * fVar15) + fVar15;
  auVar20._4_4_ = -((auVar42._4_4_ * fVar27 - _DAT_145fc6ed8) * fVar27) + fVar27;
  auVar20._8_4_ = -((auVar42._8_4_ * fVar45 - _DAT_145fc6ed8) * fVar45) + fVar45;
  auVar20._12_4_ = -((auVar42._12_4_ * fVar47 - _DAT_145fc6ed8) * fVar47) + fVar47;
  auVar49._4_4_ = _DAT_14615b36c;
  auVar49._0_4_ = _DAT_14615b36c;
  auVar49._8_4_ = _DAT_14615b36c;
  auVar49._12_4_ = _DAT_14615b36c;
  auVar17 = vblendvps_avx(auVar20,auVar49,auVar17);
  fVar15 = auVar17._0_4_;
  auVar43._0_4_ = fVar22 * fVar15;
  fVar22 = auVar17._4_4_;
  auVar43._4_4_ = fVar26 * fVar22;
  fVar26 = auVar17._8_4_;
  auVar43._8_4_ = fVar39 * fVar26;
  fVar27 = auVar17._12_4_;
  auVar43._12_4_ = fVar46 * fVar27;
  auVar50._0_4_ = auVar79._0_4_ * fVar15;
  auVar50._4_4_ = auVar79._4_4_ * fVar22;
  auVar50._8_4_ = auVar79._8_4_ * fVar26;
  auVar50._12_4_ = auVar79._12_4_ * fVar27;
  auVar21._0_4_ = auVar74._0_4_ * fVar15;
  auVar21._4_4_ = auVar74._4_4_ * fVar22;
  auVar21._8_4_ = auVar74._8_4_ * fVar26;
  auVar21._12_4_ = auVar74._12_4_ * fVar27;
  auVar17 = vshufps_avx(auVar43,auVar43,0x55);
  auVar18 = vshufps_avx(auVar43,auVar43,0xaa);
  auVar23 = vshufps_avx(auVar50,auVar50,0x55);
  fVar39 = auVar28._0_4_;
  fVar45 = auVar28._4_4_;
  fVar46 = auVar28._8_4_;
  fVar47 = auVar28._12_4_;
  fVar22 = auVar16._0_4_;
  fVar73 = fVar22 * auVar18._0_4_ + fVar39 * auVar17._0_4_ + auVar43._0_4_ * fVar51;
  fVar15 = auVar16._4_4_;
  fVar76 = fVar15 * auVar18._4_4_ + fVar45 * auVar17._4_4_ + auVar43._0_4_ * fVar2;
  fVar26 = auVar16._8_4_;
  fVar77 = fVar26 * auVar18._8_4_ + fVar46 * auVar17._8_4_ + auVar43._0_4_ * fVar3;
  fVar27 = auVar16._12_4_;
  fVar78 = fVar27 * auVar18._12_4_ + fVar47 * auVar17._12_4_ + auVar43._0_4_ * fVar4;
  auVar28 = vshufps_avx(auVar50,auVar50,0xaa);
  auVar16 = vshufps_avx(auVar21,auVar21,0x55);
  auVar17 = vshufps_avx(auVar21,auVar21,0xaa);
  fVar61 = fVar73 * 0.0;
  fVar67 = fVar76 * 0.0;
  fVar68 = fVar77 * 0.0;
  fVar69 = fVar78 * 0.0;
  auVar44._0_4_ = fVar22 * auVar28._0_4_ + fVar39 * auVar23._0_4_ + auVar50._0_4_ * fVar51;
  auVar44._4_4_ = fVar15 * auVar28._4_4_ + fVar45 * auVar23._4_4_ + auVar50._0_4_ * fVar2;
  auVar44._8_4_ = fVar26 * auVar28._8_4_ + fVar46 * auVar23._8_4_ + auVar50._0_4_ * fVar3;
  auVar44._12_4_ = fVar27 * auVar28._12_4_ + fVar47 * auVar23._12_4_ + auVar50._0_4_ * fVar4;
  auVar34._0_4_ = fVar22 * auVar17._0_4_ + fVar39 * auVar16._0_4_ + auVar21._0_4_ * fVar51;
  auVar34._4_4_ = fVar15 * auVar17._4_4_ + fVar45 * auVar16._4_4_ + auVar21._0_4_ * fVar2;
  auVar34._8_4_ = fVar26 * auVar17._8_4_ + fVar46 * auVar16._8_4_ + auVar21._0_4_ * fVar3;
  auVar34._12_4_ = fVar27 * auVar17._12_4_ + fVar47 * auVar16._12_4_ + auVar21._0_4_ * fVar4;
  auVar28 = vblendps_avx(auVar44,auVar72,8);
  auVar83 = ZEXT1664(auVar28);
  auVar16 = vblendps_avx(auVar34,auVar72,8);
  auVar82 = ZEXT1664(auVar16);
  auStack_198._0_4_ = auVar16._0_4_ + auVar28._0_4_ * 0.0 + fVar61;
  auStack_198._4_4_ = auVar16._4_4_ + auVar28._4_4_ * 0.0 + fVar67;
  auStack_198._8_4_ = auVar16._8_4_ + auVar28._8_4_ * 0.0 + fVar68;
  auStack_198._12_4_ = auVar16._12_4_ + auVar28._12_4_ * 0.0 + fVar69;
  auVar28 = vshufpd_avx(auStack_198,auStack_198,1);
  if (_DAT_14617873c < auVar28._0_4_) {
    uStack_1a8 = CONCAT44(_UNK_14614f7f4,_DAT_14614f7f0);
    uStack_1a0 = CONCAT44(_UNK_14614f7fc,_UNK_14614f7f8);
    fStack_2e0 = fStack_2e0 * (float)uStack_2d0;
    FUN_1452a8bf0(&fStack_188);
    fVar22 = auVar80._0_4_;
    fVar15 = auVar80._4_4_;
    fVar26 = auVar80._8_4_;
    fVar27 = auVar80._12_4_;
    uStack_2d0 = CONCAT26(uStack_2d2,CONCAT24(sStack_2d4,uStack_2d8));
    lVar12 = 0;
    auVar75._0_4_ = auVar82._0_4_ * fVar22 + auVar83._0_4_ * fVar22 + fVar73;
    auVar75._4_4_ = auVar82._4_4_ * fVar15 + auVar83._4_4_ * fVar15 + fVar76;
    auVar75._8_4_ = auVar82._8_4_ * fVar26 + auVar83._8_4_ * fVar26 + fVar77;
    auVar75._12_4_ = auVar82._12_4_ * fVar27 + auVar83._12_4_ * fVar27 + fVar78;
    auVar28 = vshufps_avx(auVar75,auVar75,0x55);
    auVar16 = vshufps_avx(auVar75,auVar75,0xaa);
    auVar80 = ZEXT464((uint)fStack_2e0);
    auVar84 = ZEXT464(_DAT_145fc6f84);
    auVar37._0_4_ = auVar82._0_4_ * fVar22 + auVar83._0_4_ + fVar61;
    auVar37._4_4_ = auVar82._4_4_ * fVar15 + auVar83._4_4_ + fVar67;
    auVar37._8_4_ = auVar82._8_4_ * fVar26 + auVar83._8_4_ + fVar68;
    auVar37._12_4_ = auVar82._12_4_ * fVar27 + auVar83._12_4_ + fVar69;
    fVar22 = (float)((ulonglong)uStack_178 >> 0x20);
    fVar15 = (float)((ulonglong)uStack_170 >> 0x20);
    auVar82 = ZEXT464(_DAT_14615be20);
    auVar83 = ZEXT1664(CONCAT412(fStack_15c * auVar16._12_4_ +
                                 fVar15 * auVar28._12_4_ + fStack_17c * auVar75._0_4_,
                                 CONCAT48(uStack_160 * auVar16._8_4_ +
                                          (float)uStack_170 * auVar28._8_4_ +
                                          fStack_180 * auVar75._0_4_,
                                          CONCAT44(uStack_168._4_4_ * auVar16._4_4_ +
                                                   fVar22 * auVar28._4_4_ +
                                                   fStack_184 * auVar75._0_4_,
                                                   (float)uStack_168 * auVar16._0_4_ +
                                                   (float)uStack_178 * auVar28._0_4_ +
                                                   fStack_188 * auVar75._0_4_))));
    auVar28 = vshufps_avx(auVar37,auVar37,0x55);
    auVar16 = vshufps_avx(auVar37,auVar37,0xaa);
    auVar81 = ZEXT1664(CONCAT412(fStack_15c * auVar16._12_4_ +
                                 fVar15 * auVar28._12_4_ + fStack_17c * auVar37._0_4_,
                                 CONCAT48(uStack_160 * auVar16._8_4_ +
                                          (float)uStack_170 * auVar28._8_4_ +
                                          fStack_180 * auVar37._0_4_,
                                          CONCAT44(uStack_168._4_4_ * auVar16._4_4_ +
                                                   fVar22 * auVar28._4_4_ +
                                                   fStack_184 * auVar37._0_4_,
                                                   (float)uStack_168 * auVar16._0_4_ +
                                                   (float)uStack_178 * auVar28._0_4_ +
                                                   fStack_188 * auVar37._0_4_))));
    bVar5 = true;
    do {
      bVar14 = bVar5;
      lVar9 = _DAT_14a95dee0;
      if (auVar84._0_4_ <= auVar70._0_4_ - auVar53._0_4_) {
        FUN_144fe1540(_DAT_14a95dee0 + 0x20ba0,*(undefined4 *)(param_1 + 0x930 + lVar12 * 4));
        *(undefined4 *)(param_1 + 0x930 + lVar12 * 4) = 0;
      }
      else {
        fVar22 = auVar53._0_4_ - auVar70._0_4_;
        uVar71 = *(undefined4 *)(param_1 + 0x930 + lVar12 * 4);
        auVar25._0_4_ = auVar66._0_4_ ^ (uint)fVar22;
        auVar25._4_4_ = auVar66._4_4_;
        auVar25._8_4_ = auVar66._8_4_;
        auVar25._12_4_ = auVar66._12_4_;
        auVar28 = vmaxss_avx(auVar25,ZEXT416((uint)fVar22));
        auVar28 = vcmpss_avx(auVar28,auVar82._0_16_,1);
        auVar28 = vblendvps_avx(auVar53._0_16_,auVar70._0_16_,auVar28);
        auVar53 = ZEXT1664(auVar28);
        puVar13 = (undefined8 *)
                  func_0x00014517ef70(*(undefined8 *)(_DAT_14a95dee0 + 0x20bb0),uVar71);
        if ((puVar13 == (undefined8 *)0x0) || ((*(byte *)((longlong)puVar13 + 0x14) & 0x1f) != 0xf))
        {
          FUN_144fe1540(lVar9 + 0x20ba0,uVar71);
          uStack_288 = 0xf;
          uStack_284 = 0x101;
          uStack_282 = 0;
          lVar9 = lVar12 * 0x10;
          uStack_298 = *(undefined8 *)(&UNK_14653e420 + lVar9);
          uStack_290 = *(undefined8 *)(&UNK_14653e428 + lVar9);
          uStack_2a8 = *(undefined8 *)(&UNK_14616e520 + lVar9);
          uStack_2a0 = *(undefined8 *)(&UNK_14616e528 + lVar9);
          uStack_280 = _DAT_14615d1e0;
          uStack_278 = _DAT_14615d1e0;
          uStack_270 = _DAT_14615b330;
          uStack_268 = _UNK_14615b338;
          uStack_260 = 0x100;
          uStack_25e = 0;
          uStack_25c = 0;
          uStack_258 = vmovlps_avx(ZEXT416(_DAT_146159c54));
          uStack_248 = CONCAT44(_UNK_14614f7f4,_DAT_14614f7f0);
          uStack_240 = CONCAT44(_UNK_14614f7fc,_UNK_14614f7f8);
          uStack_238 = auVar53._0_4_;
          uStack_234 = auVar70._0_4_;
          uStack_230 = _DAT_1461615a0;
          uStack_228 = _UNK_1461615a8;
          uStack_220 = _UNK_1461615b0;
          uStack_218 = _UNK_1461615b8;
          uStack_210 = 0;
          uStack_208 = 0x7f7fffff;
          uStack_1b8 = 0;
          auStack_1f8 = ZEXT1232(ZEXT812(0));
          auVar65 = ZEXT1664(auVar65._0_16_);
          auVar54 = ZEXT1664(auVar54._0_16_);
          auVar80 = ZEXT1664(auVar80._0_16_);
          auVar70 = ZEXT1664(auVar70._0_16_);
          auVar66 = ZEXT1664(auVar66._0_16_);
          auVar53 = ZEXT1664(auVar53._0_16_);
          auVar82 = ZEXT1664(auVar82._0_16_);
          auVar83 = ZEXT1664(auVar83._0_16_);
          auVar81 = ZEXT1664(auVar81._0_16_);
          auVar84 = ZEXT1664(auVar84._0_16_);
          auStack_1d8 = auStack_1f8;
          func_0x000142089e00(&uStack_2dc,&uStack_288,uStack_2d0,&uStack_2a8,&uStack_298);
          *(undefined4 *)(param_1 + 0x930 + lVar12 * 4) = uStack_2dc;
          puVar13 = (undefined8 *)func_0x00014517ef70(*(undefined8 *)(_DAT_14a95dee0 + 0x20bb0));
          if (puVar13 == (undefined8 *)0x0) goto LAB_1401a72dc;
        }
        auStack_2b8 = auVar83._0_16_;
        auStack_2c8 = auVar81._0_16_;
        func_0x000143c9d7d0(puVar13,lVar12,auStack_2c8,auStack_2b8);
        fVar22 = *(float *)(puVar13 + 0x1e);
        fVar15 = *(float *)((longlong)puVar13 + 0xf4);
        if ((fVar22 == auVar53._0_4_) && (!NAN(fVar22) && !NAN(auVar53._0_4_))) {
          if ((fVar15 == auVar70._0_4_) && (!NAN(fVar15) && !NAN(auVar70._0_4_)))
          goto LAB_1401a72dc;
        }
        auVar28 = vmaxss_avx(ZEXT416((uint)fVar22),ZEXT416(*(uint *)(puVar13 + 0x1f)));
        auVar16 = vminss_avx(ZEXT416((uint)fVar15),ZEXT416(*(uint *)(puVar13 + 0x1f)));
        auVar17 = vminss_avx(ZEXT416((uint)(auVar80._0_4_ + auVar28._0_4_)),auVar53._0_16_);
        auVar16 = vmaxss_avx(ZEXT416((uint)(auVar16._0_4_ - auVar80._0_4_)),auVar70._0_16_);
        fVar22 = auVar17._0_4_ - auVar16._0_4_;
        auVar38._0_4_ = auVar66._0_4_ ^ (uint)fVar22;
        auVar38._4_4_ = auVar66._4_4_;
        auVar38._8_4_ = auVar66._8_4_;
        auVar38._12_4_ = auVar66._12_4_;
        auVar28 = vmaxss_avx(auVar38,ZEXT416((uint)fVar22));
        auVar28 = vcmpss_avx(auVar28,auVar82._0_16_,1);
        auVar28 = vblendvps_avx(auVar17,auVar16,auVar28);
        *(int *)(puVar13 + 0x1e) = auVar28._0_4_;
        *(float *)((longlong)puVar13 + 0xf4) = auVar16._0_4_;
        (**(code **)*puVar13)(puVar13);
      }
LAB_1401a72dc:
      lVar12 = 1;
      auVar70 = ZEXT1664(auVar65._0_16_);
      auVar53 = ZEXT1664(auVar54._0_16_);
      bVar5 = false;
    } while (bVar14);
  }
  return;
}

