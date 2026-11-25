// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140046740  size: 2779 bytes
// Name:    FUN_140046740
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140047380, FUN_140047220, FUN_1400479b0, FUN_144e60830, FUN_140047530, FUN_144f41620, FUN_144e60790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_140046740(longlong *param_1,longlong param_2,float param_3,undefined4 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  bool bVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  bool bVar20;
  byte bVar21;
  ulonglong uVar22;
  longlong unaff_GS_OFFSET;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [64];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  longlong lVar65;
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 auStack_178 [16];
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  longlong lStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  
  uVar15 = _DAT_145fc6f54;
  uVar23 = _DAT_145fc6f50;
  plVar1 = param_1 + 0x15;
  auVar59._0_12_ = ZEXT812(0);
  auVar59._12_4_ = 0;
  auVar24._0_12_ = ZEXT812(0);
  auVar24._12_4_ = 0;
  *param_1 = param_2;
  auStack_178._0_4_ = param_4;
  param_1[1] = 0;
  param_1[0x17] = (longlong)&UNK_14652cdc0;
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar59;
  param_1[0x1b] = (longlong)&UNK_14652cdc0;
  *(undefined1 (*) [16])(param_1 + 0x1c) = auVar59;
  param_1[0x1f] = (longlong)&UNK_14652cdc0;
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar59;
  param_1[0x23] = (longlong)&UNK_14652cdc0;
  *(undefined1 (*) [16])(param_1 + 0x24) = auVar59;
  param_1[0x27] = (longlong)&UNK_14652cdc0;
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar59;
  param_1[0x2b] = (longlong)&UNK_14652cdc0;
  param_1[0x2f] = 0;
  *(undefined1 (*) [32])(param_1 + 0x31) = ZEXT1632(auVar24);
  *(undefined1 (*) [32])(param_1 + 0x35) = ZEXT1632(auVar24);
  *(undefined1 (*) [32])(param_1 + 0x39) = ZEXT1632(auVar24);
  *(undefined1 (*) [16])(param_1 + 0x2c) = auVar59;
  *(undefined4 *)(param_1 + 0x3e) = uVar23;
  *(undefined4 *)((longlong)param_1 + 500) = uVar23;
  *(undefined4 *)(param_1 + 0x3f) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uVar23;
  *(undefined4 *)(param_1 + 0x40) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x204) = uVar15;
  *(undefined4 *)(param_1 + 0x41) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x20c) = uVar15;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 (*) [16])(param_1 + 0x46) = auVar59;
  *(undefined1 (*) [16])((longlong)param_1 + 0x254) = auVar59;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x4e) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x274) = uVar23;
  *(undefined4 *)(param_1 + 0x4f) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x27c) = uVar23;
  *(undefined4 *)(param_1 + 0x50) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x284) = uVar15;
  *(undefined4 *)(param_1 + 0x51) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x28c) = uVar15;
  *(undefined4 *)(param_1 + 0x52) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x294) = uVar23;
  *(undefined4 *)(param_1 + 0x53) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x29c) = uVar23;
  *(undefined4 *)(param_1 + 0x54) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = uVar15;
  *(undefined4 *)(param_1 + 0x55) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = uVar15;
  *(undefined4 *)(param_1 + 0x56) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar23;
  *(undefined4 *)(param_1 + 0x57) = uVar23;
  *(undefined4 *)((longlong)param_1 + 700) = uVar23;
  *(undefined4 *)(param_1 + 0x58) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = uVar15;
  *(undefined4 *)(param_1 + 0x59) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = uVar15;
  *(undefined4 *)(param_1 + 0x5a) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = uVar23;
  *(undefined4 *)(param_1 + 0x5b) = uVar23;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uVar23;
  *(undefined4 *)(param_1 + 0x5c) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar15;
  *(undefined4 *)(param_1 + 0x5d) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar15;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  auVar46 = ZEXT1664(auVar59);
  uVar19 = FUN_144f41620(plVar1);
  *(undefined1 *)(param_1 + 0x14) = uVar19;
  lVar65 = _DAT_145fc6f60;
  uVar2 = *(uint *)(param_2 + 0x6f0);
  uVar3 = *(uint *)(param_2 + 0x6d0);
  fVar55 = *(float *)(param_2 + 0xc0);
  fVar56 = *(float *)(param_2 + 0xc4);
  fVar57 = *(float *)(param_2 + 200);
  fVar58 = *(float *)(param_2 + 0xcc);
  fVar51 = *(float *)(param_2 + 0xd0);
  fVar52 = *(float *)(param_2 + 0xd4);
  fVar53 = *(float *)(param_2 + 0xd8);
  fVar54 = *(float *)(param_2 + 0xdc);
  fVar61 = *(float *)(param_2 + 0xf0);
  fVar62 = *(float *)(param_2 + 0xf4);
  fVar63 = *(float *)(param_2 + 0xf8);
  fVar64 = *(float *)(param_2 + 0xfc);
  auStack_138 = ZEXT416(*(uint *)(param_2 + 0x6f4));
  fStack_17c = *(float *)(param_2 + 0x6d4);
  uStack_108 = *(undefined8 *)(param_2 + 0xe0);
  uStack_100 = *(undefined8 *)(param_2 + 0xe8);
  param_1[2] = _DAT_145fc6f60;
  lVar6 = *(longlong *)(param_2 + 0x5e8);
  lVar7 = *(longlong *)(param_2 + 0x5f0);
  lVar8 = *(longlong *)(param_2 + 0x5f8);
  lVar9 = *(longlong *)(param_2 + 0x5c0);
  lVar10 = *(longlong *)(param_2 + 0x5c8);
  lVar11 = *(longlong *)(param_2 + 0x5d0);
  lVar12 = *(longlong *)(param_2 + 0x5d8);
  param_1[8] = *(longlong *)(param_2 + 0x5e0);
  param_1[9] = lVar6;
  param_1[10] = lVar7;
  param_1[0xb] = lVar8;
  param_1[4] = lVar9;
  param_1[5] = lVar10;
  param_1[6] = lVar11;
  param_1[7] = lVar12;
  lVar6 = *(longlong *)(param_2 + 0x608);
  lVar7 = *(longlong *)(param_2 + 0x610);
  lVar8 = *(longlong *)(param_2 + 0x618);
  lVar9 = *(longlong *)(param_2 + 0x620);
  lVar10 = *(longlong *)(param_2 + 0x628);
  lVar11 = *(longlong *)(param_2 + 0x630);
  lVar12 = *(longlong *)(param_2 + 0x638);
  param_1[0xc] = *(longlong *)(param_2 + 0x600);
  param_1[0xd] = lVar6;
  param_1[0xe] = lVar7;
  param_1[0xf] = lVar8;
  param_1[0x10] = lVar9;
  param_1[0x11] = lVar10;
  param_1[0x12] = lVar11;
  param_1[0x13] = lVar12;
  param_1[1] = *(longlong *)(param_2 + 0xf0);
  *(float *)((longlong)param_1 + 0xa4) = param_3 * param_3;
  auVar67 = ZEXT464(uVar2);
  auVar69 = ZEXT464(uVar3);
  auVar60 = ZEXT1664(auVar46._0_16_);
  FUN_140047530(param_1 + 0x31,param_2);
  *(undefined1 *)(param_1 + 0x42) = 0;
  FUN_1400479b0(auStack_128,param_2);
  auVar59 = auVar60._0_16_;
  auStack_f8 = auVar69._0_16_;
  param_1[0x3e] = auStack_128._0_8_;
  param_1[0x3f] = auStack_128._8_8_;
  param_1[0x40] = lStack_118;
  param_1[0x41] = lStack_110;
  param_1[0x3d] = lVar65;
  iVar17 = _DAT_1476b41dc;
  iVar16 = _DAT_1476b41d8;
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x40);
  auVar46 = ZEXT1664(auVar24);
  auVar68 = ZEXT464(*(uint *)(param_1 + 0x3e));
  auVar32 = ZEXT416(*(uint *)(param_1 + 0x3e));
  auVar66 = ZEXT464(*(uint *)((longlong)param_1 + 500));
  auVar26 = ZEXT416(*(uint *)((longlong)param_1 + 500));
  fVar48 = _DAT_1476b41e0;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    auVar26 = auVar66._0_16_;
    auVar59 = auVar60._0_16_;
    auVar24 = auVar46._0_16_;
    auVar32 = auVar68._0_16_;
    auStack_f8 = auVar69._0_16_;
  }
  uVar22 = (ulonglong)
           *(uint *)((ulonglong)
                     ((*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12d8) & 6) != 0) * 0x10
                    + 0x1476b41f4);
  fVar49 = *(float *)(uVar22 * 8 + 0x1476b4220);
  fVar50 = *(float *)(uVar22 * 8 + 0x1476b4224);
  auVar32 = vcmpps_avx(ZEXT416((uint)fVar49),auVar32,2);
  auVar26 = vcmpps_avx(ZEXT416((uint)fVar50),auVar26,2);
  auVar27 = vmovshdup_avx(auVar24);
  fVar47 = auStack_f8._0_4_;
  *(byte *)(param_1 + 0x42) =
       auVar27._0_4_ <= fVar48 * (float)(iVar17 + -1) + fVar50 &
       auVar24._0_4_ <= fVar48 * (float)(iVar16 + -1) + fVar49 & auVar32[0] & auVar26[0];
  auVar32._0_4_ = -((float)uStack_108 * fVar47) + fVar51 * auVar59._0_4_ + fVar55 * 0.0 + fVar61;
  auVar32._4_4_ = -(uStack_108._4_4_ * fVar47) + fVar52 * auVar59._4_4_ + fVar56 * 0.0 + fVar62;
  auVar32._8_4_ = -((float)uStack_100 * fVar47) + fVar53 * auVar59._8_4_ + fVar57 * 0.0 + fVar63;
  auVar32._12_4_ = -(uStack_100._4_4_ * fVar47) + fVar54 * auVar59._12_4_ + fVar58 * 0.0 + fVar64;
  *(undefined1 (*) [16])(param_1 + 0x44) = auVar32;
  fVar48 = (float)uStack_108;
  fVar49 = uStack_108._4_4_;
  fVar50 = (float)uStack_100;
  fVar47 = uStack_100._4_4_;
  uVar23 = func_0x000145404520();
  *(undefined4 *)(param_1 + 0x46) = uVar23;
  uVar4 = _UNK_1461640a8;
  auVar46 = ZEXT1664(auStack_138);
  auVar69 = ZEXT1664(auVar67._0_16_);
  *(undefined8 *)((longlong)param_1 + 0x234) = _DAT_1461640a0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = uVar4;
  *(longlong *)((longlong)param_1 + 0x244) = _DAT_145fc6f60;
  *(undefined8 *)((longlong)param_1 + 0x254) = param_6;
  uVar4 = param_5[1];
  bVar20 = true;
  *(undefined8 *)((longlong)param_1 + 0x25c) = *param_5;
  *(undefined8 *)((longlong)param_1 + 0x264) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x26c) = auStack_178._0_4_;
  uVar2 = _DAT_145fc6f10;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  uStack_168 = auStack_138._0_4_ ^ uVar2;
  uStack_164 = auStack_138._4_4_ ^ uVar2;
  uStack_160 = auStack_138._8_4_ ^ uVar2;
  uStack_15c = auStack_138._12_4_ ^ uVar2;
  auStack_148._0_4_ = auVar67._0_4_ ^ uVar2;
  auStack_148._4_4_ = auVar67._4_4_ ^ uVar2;
  auStack_148._8_4_ = auVar67._8_4_ ^ uVar2;
  auStack_148._12_4_ = auVar67._12_4_ ^ uVar2;
  auVar26._4_4_ = _DAT_145fc6f48;
  auVar26._0_4_ = _DAT_145fc6f48;
  auVar26._8_4_ = _DAT_145fc6f48;
  auVar26._12_4_ = _DAT_145fc6f48;
  auStack_158 = vblendps_avx(auVar26,auStack_148,1);
  auStack_178 = vblendps_avx(auVar26,auVar67._0_16_,1);
  while (bVar20) {
    fVar70 = (float)auStack_f8._0_4_;
    fVar71 = (float)auStack_f8._0_4_;
    fVar72 = (float)auStack_f8._0_4_;
    fVar73 = (float)auStack_f8._0_4_;
    bVar18 = true;
    do {
      bVar14 = bVar18;
      auVar27._4_4_ = uStack_164;
      auVar27._0_4_ = uStack_168;
      auVar27._8_4_ = uStack_160;
      auVar27._12_4_ = uStack_15c;
      auVar67 = ZEXT1664(auVar69._0_16_);
      if (!bVar14) {
        auVar27 = auVar46._0_16_;
      }
      auVar60 = ZEXT1664(auVar27);
      auVar24 = vinsertps_avx(auStack_158,auVar27,0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416((uint)auStack_148._0_4_),0x30);
      auVar25._0_4_ = fVar70 * auVar24._0_4_;
      auVar25._4_4_ = fVar71 * auVar24._4_4_;
      auVar25._8_4_ = fVar72 * auVar24._8_4_;
      auVar25._12_4_ = fVar73 * auVar24._12_4_;
      auVar24 = vshufps_avx(auVar25,auVar25,0x55);
      auVar59 = vshufps_avx(auVar25,auVar25,0xaa);
      auVar44._0_4_ =
           fVar48 * auVar59._0_4_ + fVar51 * auVar24._0_4_ + fVar55 * auVar25._0_4_ + fVar61;
      auVar44._4_4_ =
           fVar49 * auVar59._4_4_ + fVar52 * auVar24._4_4_ + fVar56 * auVar25._0_4_ + fVar62;
      auVar44._8_4_ =
           fVar50 * auVar59._8_4_ + fVar53 * auVar24._8_4_ + fVar57 * auVar25._0_4_ + fVar63;
      auVar44._12_4_ =
           fVar47 * auVar59._12_4_ + fVar54 * auVar24._12_4_ + fVar58 * auVar25._0_4_ + fVar64;
      auVar46 = ZEXT1664(auVar44);
      auVar26 = vshufpd_avx(auVar44,auVar44,1);
      auVar59 = vmovshdup_avx(auVar44);
      auVar69 = ZEXT1664(auVar59);
      auVar24 = vminss_avx(ZEXT416(*(uint *)(param_1 + 2)),auVar26);
      *(int *)(param_1 + 2) = auVar24._0_4_;
      auVar24 = vmaxss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x14)),auVar26);
      *(int *)((longlong)param_1 + 0x14) = auVar24._0_4_;
      fVar37 = _DAT_1476b41e0;
      auVar24 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x3d)),auVar26);
      *(int *)(param_1 + 0x3d) = auVar24._0_4_;
      auVar24 = vmaxss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x1ec)),auVar26);
      *(int *)((longlong)param_1 + 0x1ec) = auVar24._0_4_;
      auVar24 = ZEXT816(0) << 0x20;
      if ((char)param_1[0x14] == '\x01') {
        auVar66._0_8_ = FUN_140047380(plVar1,CONCAT44(auVar59._0_4_,auVar44._0_4_));
        auVar66._8_56_ = extraout_var;
        auVar24 = auVar66._0_16_;
      }
      auVar32 = auVar67._0_16_;
      auVar26 = auVar60._0_16_;
      auVar24 = vmaxss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x234)),auVar24);
      *(int *)((longlong)param_1 + 0x234) = auVar24._0_4_;
      if ((char)param_1[0x42] == '\x01') {
        fStack_180 = 0.0;
        FUN_144e60790(auVar46._0_8_,auVar69._0_8_,&fStack_180,0,0,1,0);
        bVar21 = FUN_140047220(plVar1,CONCAT44(auVar59._0_4_,auVar44._0_4_));
        fVar5 = fVar37 * *(float *)((longlong)param_1 + (ulonglong)bVar21 * 4 + 0x25c);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = *(ulonglong *)((longlong)param_1 + 0x23c);
        auVar26 = ZEXT416((uint)(fVar5 + fStack_180));
        auVar59 = vinsertps_avx(auVar30,auVar26,0x10);
        auVar32 = ZEXT416((uint)(fStack_180 - fVar5));
        auVar24 = vblendps_avx(auVar30,auVar32,1);
        auVar26 = vinsertps_avx(auVar32,auVar26,0x1c);
        auVar24 = vcmpps_avx(auVar59,auVar24,1);
        auVar24 = vblendvps_avx(auVar26,auVar30,auVar24);
        uVar4 = vmovlps_avx(auVar24);
        *(undefined8 *)((longlong)param_1 + 0x23c) = uVar4;
        auStack_128 = ZEXT816(0) << 0x20;
        fStack_184 = 0.0;
        FUN_144e60830(auVar46._0_8_,auVar69._0_8_,&fStack_184,0,auStack_128,1,0,0xccbebc20);
        auVar32 = auVar67._0_16_;
        auVar26 = auVar60._0_16_;
        auVar42._8_8_ = 0;
        auVar42._0_8_ = *(ulonglong *)((longlong)param_1 + 0x244);
        fVar37 = (float)(auStack_128._8_4_ & _DAT_145fc6f4c) * _DAT_145fc6f88 * _DAT_14abbef4c +
                 fVar37 * *(float *)((longlong)param_1 + 0x264);
        auVar27 = ZEXT416((uint)(fStack_184 - fVar37));
        auVar24 = vblendps_avx(auVar42,auVar27,1);
        auVar25 = ZEXT416((uint)(fVar37 + fStack_184));
        auVar59 = vinsertps_avx(auVar42,auVar25,0x10);
        auVar27 = vinsertps_avx(auVar27,auVar25,0x1c);
        auVar24 = vcmpps_avx(auVar59,auVar24,1);
        auVar24 = vblendvps_avx(auVar27,auVar42,auVar24);
        uVar4 = vmovlps_avx(auVar24);
        *(undefined8 *)((longlong)param_1 + 0x244) = uVar4;
      }
      auVar69 = ZEXT1664(auVar32);
      auVar24 = vinsertps_avx(auStack_178,auVar26,0x10);
      auVar24 = vinsertps_avx(auVar24,auVar32,0x30);
      auVar28._0_4_ = fVar70 * auVar24._0_4_;
      auVar28._4_4_ = fVar71 * auVar24._4_4_;
      auVar28._8_4_ = fVar72 * auVar24._8_4_;
      auVar28._12_4_ = fVar73 * auVar24._12_4_;
      auVar24 = vshufps_avx(auVar28,auVar28,0x55);
      auVar59 = vshufps_avx(auVar28,auVar28,0xaa);
      auVar45._0_4_ =
           fVar48 * auVar59._0_4_ + fVar51 * auVar24._0_4_ + fVar55 * auVar28._0_4_ + fVar61;
      auVar45._4_4_ =
           fVar49 * auVar59._4_4_ + fVar52 * auVar24._4_4_ + fVar56 * auVar28._0_4_ + fVar62;
      auVar45._8_4_ =
           fVar50 * auVar59._8_4_ + fVar53 * auVar24._8_4_ + fVar57 * auVar28._0_4_ + fVar63;
      auVar45._12_4_ =
           fVar47 * auVar59._12_4_ + fVar54 * auVar24._12_4_ + fVar58 * auVar28._0_4_ + fVar64;
      auVar67 = ZEXT1664(auVar45);
      auVar26 = vshufpd_avx(auVar45,auVar45,1);
      auVar59 = vmovshdup_avx(auVar45);
      auVar46 = ZEXT1664(auVar59);
      auVar24 = vminss_avx(ZEXT416(*(uint *)(param_1 + 2)),auVar26);
      *(int *)(param_1 + 2) = auVar24._0_4_;
      auVar24 = vmaxss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x14)),auVar26);
      *(int *)((longlong)param_1 + 0x14) = auVar24._0_4_;
      fVar37 = _DAT_1476b41e0;
      auVar24 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x3d)),auVar26);
      *(int *)(param_1 + 0x3d) = auVar24._0_4_;
      auVar24 = vmaxss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x1ec)),auVar26);
      *(int *)((longlong)param_1 + 0x1ec) = auVar24._0_4_;
      auVar24 = ZEXT816(0) << 0x20;
      if ((char)param_1[0x14] == '\x01') {
        auVar60._0_8_ = FUN_140047380(plVar1,CONCAT44(auVar59._0_4_,auVar45._0_4_));
        auVar60._8_56_ = extraout_var_00;
        auVar24 = auVar60._0_16_;
      }
      auVar60 = ZEXT1264(ZEXT812(0));
      auVar24 = vmaxss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x234)),auVar24);
      *(int *)((longlong)param_1 + 0x234) = auVar24._0_4_;
      if ((char)param_1[0x42] == '\x01') {
        fStack_180 = 0.0;
        FUN_144e60790(auVar67._0_8_,auVar46._0_8_,&fStack_180,0,0,1,0);
        bVar21 = FUN_140047220(plVar1,CONCAT44(auVar59._0_4_,auVar45._0_4_));
        fVar5 = fVar37 * *(float *)((longlong)param_1 + (ulonglong)bVar21 * 4 + 0x25c);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = *(ulonglong *)((longlong)param_1 + 0x23c);
        auVar26 = ZEXT416((uint)(fVar5 + fStack_180));
        auVar59 = vinsertps_avx(auVar31,auVar26,0x10);
        auVar32 = ZEXT416((uint)(fStack_180 - fVar5));
        auVar24 = vblendps_avx(auVar31,auVar32,1);
        auVar26 = vinsertps_avx(auVar32,auVar26,0x1c);
        auVar24 = vcmpps_avx(auVar59,auVar24,1);
        auVar24 = vblendvps_avx(auVar26,auVar31,auVar24);
        uVar4 = vmovlps_avx(auVar24);
        *(undefined8 *)((longlong)param_1 + 0x23c) = uVar4;
        fStack_184 = 0.0;
        auStack_128 = auVar60._0_16_;
        FUN_144e60830(auVar67._0_8_,auVar46._0_8_,&fStack_184,0,auStack_128,1,0,0xccbebc20);
        auVar43._8_8_ = 0;
        auVar43._0_8_ = *(ulonglong *)((longlong)param_1 + 0x244);
        fVar37 = (float)(auStack_128._8_4_ & _DAT_145fc6f4c) * _DAT_145fc6f88 * _DAT_14abbef4c +
                 fVar37 * *(float *)((longlong)param_1 + 0x264);
        auVar26 = ZEXT416((uint)(fStack_184 - fVar37));
        auVar24 = vblendps_avx(auVar43,auVar26,1);
        auVar32 = ZEXT416((uint)(fVar37 + fStack_184));
        auVar59 = vinsertps_avx(auVar43,auVar32,0x10);
        auVar26 = vinsertps_avx(auVar26,auVar32,0x1c);
        auVar24 = vcmpps_avx(auVar59,auVar24,1);
        auVar24 = vblendvps_avx(auVar26,auVar43,auVar24);
        uVar4 = vmovlps_avx(auVar24);
        *(undefined8 *)((longlong)param_1 + 0x244) = uVar4;
      }
      auVar46 = ZEXT1664(auStack_138);
      bVar20 = false;
      bVar18 = false;
    } while (bVar14);
  }
  auVar13._4_4_ = uStack_164;
  auVar13._0_4_ = uStack_168;
  auVar13._8_4_ = uStack_160;
  auVar13._12_4_ = uStack_15c;
  auVar24 = vinsertps_avx(auStack_158,auVar13,0x10);
  auVar24 = vinsertps_avx(auVar24,auStack_148,0x30);
  auVar33._0_4_ = fStack_17c * auVar24._0_4_;
  auVar33._4_4_ = fStack_17c * auVar24._4_4_;
  auVar33._8_4_ = fStack_17c * auVar24._8_4_;
  auVar33._12_4_ = fStack_17c * auVar24._12_4_;
  auVar24 = vshufps_avx(auVar33,auVar33,0x55);
  auVar59 = vshufps_avx(auVar33,auVar33,0xaa);
  auVar38._0_4_ = fVar48 * auVar59._0_4_ + fVar51 * auVar24._0_4_ + fVar55 * auVar33._0_4_ + fVar61;
  auVar38._4_4_ = fVar49 * auVar59._4_4_ + fVar52 * auVar24._4_4_ + fVar56 * auVar33._0_4_ + fVar62;
  auVar38._8_4_ = fVar50 * auVar59._8_4_ + fVar53 * auVar24._8_4_ + fVar57 * auVar33._0_4_ + fVar63;
  auVar38._12_4_ =
       fVar47 * auVar59._12_4_ + fVar54 * auVar24._12_4_ + fVar58 * auVar33._0_4_ + fVar64;
  auVar24 = vshufpd_avx(auVar38,auVar38,1);
  auVar26 = vminss_avx(ZEXT416(*(uint *)(param_1 + 2)),auVar24);
  auVar59 = vmaxss_avx(ZEXT416(*(uint *)((longlong)param_1 + 0x14)),auVar24);
  auVar24 = vinsertps_avx(auStack_178,auVar13,0x10);
  auVar24 = vinsertps_avx(auVar24,auVar69._0_16_,0x30);
  auVar34._0_4_ = fStack_17c * auVar24._0_4_;
  auVar34._4_4_ = fStack_17c * auVar24._4_4_;
  auVar34._8_4_ = fStack_17c * auVar24._8_4_;
  auVar34._12_4_ = fStack_17c * auVar24._12_4_;
  auVar24 = vshufps_avx(auVar34,auVar34,0x55);
  auVar32 = vshufps_avx(auVar34,auVar34,0xaa);
  auVar39._0_4_ = fVar48 * auVar32._0_4_ + fVar51 * auVar24._0_4_ + fVar55 * auVar34._0_4_ + fVar61;
  auVar39._4_4_ = fVar49 * auVar32._4_4_ + fVar52 * auVar24._4_4_ + fVar56 * auVar34._0_4_ + fVar62;
  auVar39._8_4_ = fVar50 * auVar32._8_4_ + fVar53 * auVar24._8_4_ + fVar57 * auVar34._0_4_ + fVar63;
  auVar39._12_4_ =
       fVar47 * auVar32._12_4_ + fVar54 * auVar24._12_4_ + fVar58 * auVar34._0_4_ + fVar64;
  auVar24 = vshufpd_avx(auVar39,auVar39,1);
  auVar26 = vminss_avx(auVar26,auVar24);
  auVar59 = vmaxss_avx(auVar59,auVar24);
  auVar24 = vinsertps_avx(auStack_158,auVar46._0_16_,0x10);
  auVar24 = vinsertps_avx(auVar24,auStack_148,0x30);
  auVar35._0_4_ = fStack_17c * auVar24._0_4_;
  auVar35._4_4_ = fStack_17c * auVar24._4_4_;
  auVar35._8_4_ = fStack_17c * auVar24._8_4_;
  auVar35._12_4_ = fStack_17c * auVar24._12_4_;
  auVar24 = vshufps_avx(auVar35,auVar35,0x55);
  auVar32 = vshufps_avx(auVar35,auVar35,0xaa);
  auVar40._0_4_ = fVar48 * auVar32._0_4_ + fVar51 * auVar24._0_4_ + fVar55 * auVar35._0_4_ + fVar61;
  auVar40._4_4_ = fVar49 * auVar32._4_4_ + fVar52 * auVar24._4_4_ + fVar56 * auVar35._0_4_ + fVar62;
  auVar40._8_4_ = fVar50 * auVar32._8_4_ + fVar53 * auVar24._8_4_ + fVar57 * auVar35._0_4_ + fVar63;
  auVar40._12_4_ =
       fVar47 * auVar32._12_4_ + fVar54 * auVar24._12_4_ + fVar58 * auVar35._0_4_ + fVar64;
  auVar24 = vshufpd_avx(auVar40,auVar40,1);
  auVar26 = vminss_avx(auVar26,auVar24);
  auVar59 = vmaxss_avx(auVar59,auVar24);
  auVar24 = vinsertps_avx(auStack_178,auVar46._0_16_,0x10);
  auVar24 = vinsertps_avx(auVar24,auVar69._0_16_,0x30);
  auVar36._0_4_ = fStack_17c * auVar24._0_4_;
  auVar36._4_4_ = fStack_17c * auVar24._4_4_;
  auVar36._8_4_ = fStack_17c * auVar24._8_4_;
  auVar36._12_4_ = fStack_17c * auVar24._12_4_;
  auVar24 = vshufps_avx(auVar36,auVar36,0x55);
  auVar32 = vshufps_avx(auVar36,auVar36,0xaa);
  auVar41._0_4_ = fVar48 * auVar32._0_4_ + fVar51 * auVar24._0_4_ + fVar55 * auVar36._0_4_ + fVar61;
  auVar41._4_4_ = fVar49 * auVar32._4_4_ + fVar52 * auVar24._4_4_ + fVar56 * auVar36._0_4_ + fVar62;
  auVar41._8_4_ = fVar50 * auVar32._8_4_ + fVar53 * auVar24._8_4_ + fVar57 * auVar36._0_4_ + fVar63;
  auVar41._12_4_ =
       fVar47 * auVar32._12_4_ + fVar54 * auVar24._12_4_ + fVar58 * auVar36._0_4_ + fVar64;
  auVar24 = vshufpd_avx(auVar41,auVar41,1);
  auVar26 = vminss_avx(auVar26,auVar24);
  auVar24 = vmaxss_avx(auVar59,auVar24);
  *(int *)(param_1 + 2) = auVar26._0_4_;
  *(int *)((longlong)param_1 + 0x14) = auVar24._0_4_;
  auVar24 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x40),*(undefined1 (*) [16])(param_1 + 0x3e)
                      );
  auVar29._0_4_ = auVar24._0_4_ * _DAT_145fc6edc;
  auVar29._4_4_ = auVar24._4_4_ * _DAT_145fc6edc;
  auVar29._8_4_ = auVar24._8_4_ * _DAT_145fc6edc;
  auVar29._12_4_ = auVar24._12_4_ * _DAT_145fc6edc;
  auVar24 = vmovshdup_avx(auVar29);
  auVar24 = vmaxss_avx(auVar29,auVar24);
  fVar51 = auVar24._0_4_ * *(float *)(param_1 + 0x4d);
  *(float *)((longlong)param_1 + 0x24c) = *(float *)((longlong)param_1 + 0x254) - fVar51;
  *(float *)(param_1 + 0x4a) = fVar51 + *(float *)((longlong)param_1 + 0x254);
  return param_1;
}

