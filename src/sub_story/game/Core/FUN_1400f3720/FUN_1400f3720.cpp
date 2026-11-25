// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f3720  size: 4898 bytes
// Name:    FUN_1400f3720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fbcfc0, FUN_144ec2d60, FUN_141f81750, FUN_144f854a0, FUN_144e40a00, FUN_14502f820, FUN_1453d0290, FUN_144d9d7a0, FUN_14525a3b0, FUN_144e2a530, FUN_1453325c0, FUN_145560210, FUN_144f51140, FUN_14515d960, FUN_1455db934, FUN_14528e7f0, FUN_14555fc30, FUN_141fc84a0, FUN_14553f3e0, FUN_1417fc310, FUN_144e2a3b0, FUN_14206cdc0, FUN_14532f530, FUN_14339f3a0, FUN_144fb3f40, FUN_144fcb040, FUN_1455db8cc, FUN_145caec00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f3720(longlong param_1,longlong param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ushort uVar8;
  bool bVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  char cVar14;
  undefined1 uVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  byte bVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  byte bVar31;
  byte bVar32;
  uint uVar33;
  undefined4 uVar34;
  longlong unaff_GS_OFFSET;
  bool bVar35;
  float fVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 auVar41 [64];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [64];
  uint uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [64];
  undefined1 auVar57 [16];
  undefined1 auVar58 [64];
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [64];
  uint in_stack_fffffffffffffb88;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  undefined1 auStack_3f8 [8];
  undefined8 uStack_3f0;
  longlong lStack_3e0;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  longlong lStack_3b0;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  undefined8 uStack_398;
  undefined8 uStack_390;
  float afStack_388 [5];
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  undefined1 auStack_350 [12];
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  undefined1 auStack_338 [16];
  float fStack_328;
  float fStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined1 *puStack_2f8;
  undefined8 uStack_2f0;
  int iStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  float fStack_2cc;
  undefined4 uStack_2c8;
  float fStack_2c4;
  byte bStack_2c0;
  byte bStack_2bf;
  byte bStack_2be;
  byte bStack_2bd;
  byte bStack_2bc;
  byte bStack_2bb;
  byte bStack_2ba;
  byte bStack_2b9;
  undefined1 uStack_2b8;
  byte bStack_2b7;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  longlong lStack_288;
  longlong lStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 uStack_258;
  uint uStack_254;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined1 uStack_239;
  undefined1 uStack_238;
  undefined1 uStack_237;
  byte bStack_236;
  byte bStack_235;
  undefined1 uStack_234;
  undefined1 uStack_233;
  undefined1 uStack_232;
  undefined1 uStack_231;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  byte bStack_22e;
  undefined1 uStack_22d;
  byte bStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined4 uStack_188;
  uint uStack_184;
  float fStack_180;
  undefined1 auStack_178 [16];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 *puStack_118;
  undefined1 auStack_110 [32];
  undefined8 uStack_f0;
  undefined1 extraout_var_02 [56];
  float fVar50;
  float fVar54;
  float fVar55;
  float fVar56;
  
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *(undefined2 *)(param_1 + 0x13d0) = 0;
  }
  if (DAT_14abbe2e0 != '\0') {
    return;
  }
  cVar14 = func_0x000144f7b6a0();
  if (cVar14 != '\0') {
    return;
  }
  if (DAT_14abbe2e1 != '\0') {
    return;
  }
  plVar3 = *(longlong **)(param_1 + 0x1160);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)((longlong)plVar3 + 0xfa) < 0xc) &&
     ((0xe60U >> (*(byte *)((longlong)plVar3 + 0xfa) & 0x1f) & 1) != 0)) {
    return;
  }
  iVar28 = (int)*(short *)(**(longlong **)(plVar3[4] + 0xf8) +
                          (longlong)*(short *)(param_1 + 0x11a0) * 2);
  cVar14 = FUN_14502f820(plVar3,*(undefined4 *)**(undefined8 **)(param_1 + 0x12e8));
  if (cVar14 == '\0') {
    *(undefined4 *)(param_1 + 0x13d4) = 0;
  }
  else if (((*(byte *)(param_1 + 0x1191) & 2) == 0) &&
          (fVar36 = (float)FUN_141f81750(*(undefined8 *)(param_1 + 0x1160),
                                         *(undefined4 *)**(undefined8 **)(param_1 + 0x12e8)),
          0.0 < fVar36)) {
    afStack_388[3] = 0.0;
    afStack_388[1] = 0.0;
    afStack_388[2] = 0.0;
    fVar36 = 0.0;
    if (1 < (byte)(*(char *)((longlong)plVar3 + 0xfa) - 7U)) {
      fVar36 = *(float *)(param_1 + 0x1298) * _DAT_145fc6f08;
    }
    in_stack_fffffffffffffb88 =
         func_0x000144e8f130(*(undefined4 *)(param_1 + 0x13d4),0,_DAT_146159bd4);
    lVar20 = FUN_141fc84a0(plVar3);
    afStack_388[0] = fVar36;
    FUN_14206cdc0(*(undefined8 *)(param_1 + 0x1160),iVar28,afStack_388,param_1,
                  in_stack_fffffffffffffb88,lVar20 == 0);
    *(float *)(param_1 + 0x13d4) = *(float *)(param_1 + 0x13d4) + _DAT_14abbef4c;
  }
  uVar19 = *(undefined4 *)((longlong)plVar3 + 0x9c);
  cVar14 = FUN_14528e7f0(uVar19);
  if (cVar14 != '\0') {
    return;
  }
  if ((char)*(ulonglong *)(param_1 + 0x1190) < '\0') {
    *(ulonglong *)(param_1 + 0x1190) = *(ulonglong *)(param_1 + 0x1190) & 0xffffffffffffff7f;
    return;
  }
  sVar1 = *(short *)(param_1 + 0x11a0);
  FUN_14555fc30(param_1,&uStack_398);
  lVar20 = func_0x000144e25990(uVar19);
  lStack_3e0 = func_0x000144eb3780(uVar19);
  plVar4 = (longlong *)plVar3[7];
  if (plVar4 == (longlong *)0x0) {
    bVar32 = 0;
  }
  else {
    auVar68._0_8_ = func_0x000144ee9db0(plVar4[4]);
    auVar68._8_56_ = extraout_var;
    auVar64 = vcmpss_avx(auVar68._0_16_,ZEXT416((uint)_DAT_145fc6ed8),0);
    bVar32 = auVar64[0] & 1;
  }
  iVar18 = FUN_144e2a3b0(uVar19);
  uVar15 = func_0x000144efcdd0(uVar19);
  fStack_3d8 = (float)CONCAT31(fStack_3d8._1_3_,uVar15);
  if (lStack_3e0 == 0) {
    bVar35 = false;
  }
  else {
    bVar35 = *(char *)(lStack_3e0 + 0x41) != '\0';
  }
  bVar16 = FUN_144e2a530(*(undefined8 *)(*(longlong *)(lVar20 + 0x18) + 0x170),
                         *(undefined1 *)(*(longlong *)(lVar20 + 0x18) + 0x1bc),iVar28);
  if (iVar18 == 3) {
    bVar17 = FUN_144f854a0((char)plVar3[6],uVar19);
  }
  else {
    bVar17 = 0;
  }
  bVar27 = 1;
  if (bVar32 != 0) {
    bVar27 = bVar16 | bVar17 | iVar18 != 3 & fStack_3d8._0_1_ | bVar35;
  }
  uVar19 = *(undefined4 *)((longlong)plVar3 + 0x9c);
  lVar21 = func_0x000144dc3fe0(uVar19);
  lVar22 = func_0x0001450572a0(uVar19);
  if ((lVar22 == 0) || (plVar5 = plVar4, (*(byte *)(lVar22 + 0x10) & 4) == 0)) {
    if ((bVar27 != 0) && ((lVar21 != 0 && (plVar4 != (longlong *)0x0)))) {
      plVar5 = *(longlong **)(lVar21 + 0x40);
      goto joined_r0x0001400f3aec;
    }
  }
  else {
joined_r0x0001400f3aec:
    if ((plVar5 != (longlong *)0x0) && ((int)plVar4[2] != 0)) {
      uStack_128 = *(undefined8 *)(param_1 + 0xf0);
      uStack_120 = *(undefined8 *)(param_1 + 0xf8);
      in_stack_fffffffffffffb88 = 0x441c4000;
      uStack_138 = uStack_398;
      uStack_130 = uStack_390;
      FUN_1453d0290(param_1 + 0x1360,&uStack_138,&uStack_128,*(undefined8 *)(param_1 + 0x128),
                    0x441c4000);
    }
  }
  lVar22 = plVar3[10];
  lVar10 = plVar3[0xb];
  auVar58._0_4_ = *(float *)(plVar3 + 8);
  fVar69 = *(float *)((longlong)plVar3 + 0x44);
  fVar70 = *(float *)(plVar3 + 9);
  fVar71 = *(float *)((longlong)plVar3 + 0x4c);
  uStack_3c8 = plVar3[0xc];
  uStack_3c0 = plVar3[0xd];
  fStack_3d8 = (float)plVar3[0xe];
  fStack_3d4 = (float)((ulonglong)plVar3[0xe] >> 0x20);
  fStack_3d0 = (float)plVar3[0xf];
  fStack_3cc = (float)((ulonglong)plVar3[0xf] >> 0x20);
  fStack_2e4 = (float)FUN_14553f3e0(param_1,&fStack_3a8);
  fVar36 = *(float *)(param_1 + 0x1298);
  auVar68 = ZEXT1264(ZEXT812(0));
  if (bVar27 != 0) {
    FUN_144fcb040((ulonglong)((uint)*(ushort *)(param_1 + 0x11a8) * 0x50) +
                  *(longlong *)(*(longlong *)(*(longlong *)(lVar20 + 0x18) + 0x1a8) + 0x28),
                  auStack_178);
    auVar64._12_4_ = 0;
    auVar64._0_12_ = stack0xfffffffffffffc0c;
    _auStack_3f8 = auVar64 << 0x20;
    fStack_408 = (float)lVar22;
    fStack_404 = (float)((ulonglong)lVar22 >> 0x20);
    fStack_400 = (float)lVar10;
    fStack_3fc = (float)((ulonglong)lVar10 >> 0x20);
    fVar50 = fStack_150 * (float)uStack_3c8 + fStack_154 * fStack_408 + auVar58._0_4_ * fStack_158;
    fVar54 = fStack_150 * uStack_3c8._4_4_ + fStack_154 * fStack_404 + fVar69 * fStack_158;
    fVar55 = fStack_150 * (float)uStack_3c0 + fStack_154 * fStack_400 + fVar70 * fStack_158;
    fVar56 = fStack_150 * uStack_3c0._4_4_ + fStack_154 * fStack_3fc + fVar71 * fStack_158;
    auVar53 = ZEXT1664(CONCAT412(fVar56,CONCAT48(fVar55,CONCAT44(fVar54,fVar50))));
    auVar66 = ZEXT1664(CONCAT412(-(fVar56 * fStack_2e4) + fStack_39c,
                                 CONCAT48(-(fVar55 * fStack_2e4) + fStack_3a0,
                                          CONCAT44(-(fVar54 * fStack_2e4) + fStack_3a4,
                                                   -(fVar50 * fStack_2e4) + fStack_3a8))));
    fVar50 = fStack_160;
    fVar54 = fStack_160;
    fVar55 = fStack_160;
    fVar56 = fStack_164;
    fVar59 = fStack_164;
    fVar60 = fStack_164;
    fVar61 = fStack_168;
    fVar62 = fStack_168;
    fVar63 = fStack_168;
    lVar20 = func_0x000144dd1230(*(undefined4 *)((longlong)plVar3 + 0x9c));
    auVar57._0_12_ = ZEXT812(0);
    auVar57._12_4_ = 0;
    auVar68 = ZEXT1264(ZEXT812(0));
    if ((lVar20 != 0) && ((*(byte *)(lVar20 + 0x10) & 1) != 0)) {
      auStack_350 = ZEXT812(0);
      fStack_344 = 0.0;
      puStack_118 = auStack_3f8;
      auStack_368 = auVar66._0_16_;
      uStack_358 = 0x3e4ccccd00000001;
      auStack_110 = ZEXT432(0) << 0x20;
      uStack_f0 = 0;
      auVar53 = ZEXT1664(auVar53._0_16_);
      auVar66 = ZEXT1664(auVar57);
      auVar49 = ZEXT1664(auStack_368);
      iVar28 = FUN_1453325c0(lVar20 + 0x10);
      auVar13 = _auStack_338;
      auVar57 = auVar66._0_16_;
      auVar68 = ZEXT1264(ZEXT812(0));
      if (iVar28 != 0) {
        auVar64 = vshufpd_avx(auVar49._0_16_,auVar49._0_16_,1);
        auStack_368._8_8_ = param_1;
        auStack_368._0_8_ = *(undefined8 *)(param_1 + 0x1160);
        fStack_340 = fVar54 * (float)uStack_3c0 + fVar59 * fStack_400 + fVar62 * fVar70;
        fStack_33c = fVar55 * uStack_3c0._4_4_ + fVar60 * fStack_3fc + fVar63 * fVar71;
        fStack_324 = (float)auStack_3f8._0_4_ - auVar64._0_4_;
        auVar68 = ZEXT464((uint)fStack_324);
        uStack_358 = CONCAT44(fStack_3a4,fStack_3a8);
        auStack_350._4_4_ = fStack_39c;
        auStack_350._0_4_ = fStack_3a0;
        auStack_350._8_4_ =
             fStack_160 * (float)uStack_3c8 + fStack_164 * fStack_408 + fStack_168 * auVar58._0_4_;
        fStack_344 = fVar50 * uStack_3c8._4_4_ + fVar56 * fStack_404 + fVar61 * fVar69;
        fStack_328 = fStack_2e4;
        auStack_338 = auVar53._0_16_;
        uStack_31c = auVar13._28_4_;
        uStack_320 = *(undefined4 *)(param_1 + 0x13d8);
        FUN_1417fc310();
        auVar57 = auVar66._0_16_;
      }
    }
    auVar64 = vmaxss_avx(auVar57,auVar68._0_16_);
    *(int *)(param_1 + 0x13d8) = auVar64._0_4_;
  }
  lVar20 = func_0x0001452cd380(*(undefined8 *)(param_1 + 0x110));
  if (lVar20 == 0) {
    *(byte *)(param_1 + 0x1190) = *(byte *)(param_1 + 0x1190) & 0xbf;
  }
  else {
    FUN_145caec00(param_1);
  }
  FUN_145560210(param_1,auStack_178,&puStack_118);
  auVar47._0_12_ = ZEXT812(0);
  auVar47._12_4_ = 0;
  auVar53 = ZEXT1664(auVar47);
  auVar64 = vcmpps_avx(auVar47,auStack_178,0);
  uVar19 = vmovmskps_avx(auVar64);
  if ((~(byte)uVar19 & 7) == 0) {
    uVar19 = FUN_14532f530(param_1);
    (**(code **)(*plVar3 + 0xe8))(plVar3,uVar19,auStack_178);
    auVar64 = vcmpps_avx(auVar53._0_16_,auStack_178,0);
    uVar19 = vmovmskps_avx(auVar64);
    if ((~(byte)uVar19 & 7) == 0) {
      return;
    }
  }
  lStack_3b0 = lVar21;
  lVar20 = func_0x000144db7a10(*(undefined4 *)((longlong)plVar3 + 0x9c));
  if (lVar20 == 0) {
    _auStack_3f8 = ZEXT812(0);
    register0x0000120c = 0;
  }
  else {
    FUN_144e40a00(lVar20,auStack_3f8);
  }
  auVar48._0_4_ = auStack_3f8._0_4_ * auStack_3f8._0_4_;
  auVar48._4_4_ = auStack_3f8._4_4_ * auStack_3f8._4_4_;
  auVar48._8_4_ = auStack_3f8._8_4_ * auStack_3f8._8_4_;
  auVar48._12_4_ = auStack_3f8._12_4_ * auStack_3f8._12_4_;
  auVar53 = ZEXT1664(auVar48);
  auVar52._0_12_ = ZEXT812(0);
  auVar52._12_4_ = 0;
  auVar66 = ZEXT1664(auVar52);
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_14a01fe48) {
    FUN_1455db8cc(&DAT_14a01fe48);
    auVar52 = auVar66._0_16_;
    auVar48 = auVar53._0_16_;
    if (_DAT_14a01fe48 == -1) {
      func_0x000140d993b0(0x14a01fe50);
      _DAT_14a01fe40 = 0x14a01fe50;
      FUN_1455db934(&DAT_14a01fe48);
      auVar52 = auVar66._0_16_;
      auVar48 = auVar53._0_16_;
    }
  }
  lVar21 = *(longlong *)(param_1 + 0x1168);
  auVar64 = vblendps_avx(auVar48,auVar52,8);
  lVar23 = *(longlong *)(param_1 + 0x1188);
  if (*(longlong *)(param_1 + 0x1188) == 0) {
    lVar23 = _DAT_14a01fe40;
  }
  auVar64 = vhaddps_avx(auVar64,auVar64);
  uVar6 = *(ulonglong *)(param_1 + 0x1198);
  iVar28 = *(int *)(lVar21 + 0x20);
  uVar51 = *(uint *)(_DAT_146dc9bc0 + 0x68);
  if (iVar28 == 0) {
    lVar26 = *(longlong *)(lVar21 + 0x28);
    uVar24 = 0xffffffff;
  }
  else {
    uVar24 = (uVar51 >> 0x10 ^ uVar51) * -0x7a143595;
    uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
    uVar24 = uVar24 >> 0x10 ^ uVar24;
    lVar26 = *(longlong *)(lVar21 + 0x28);
    uVar30 = uVar24 >> 7;
    bVar32 = (byte)uVar24;
    bVar16 = bVar32 & 0x7f;
    auVar42._0_8_ =
         CONCAT17(bVar32,CONCAT16(bVar32,CONCAT15(bVar32,CONCAT14(bVar32,CONCAT13(bVar32,CONCAT12(
                                                  bVar32,CONCAT11(bVar32,bVar32))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar42[8] = bVar16;
    auVar42[9] = bVar16;
    auVar42[10] = bVar16;
    auVar42[0xb] = bVar16;
    auVar42[0xc] = bVar16;
    auVar42[0xd] = bVar16;
    auVar42[0xe] = bVar16;
    auVar42[0xf] = bVar16;
    while( true ) {
      uVar30 = uVar30 & iVar28 - 1U;
      auVar57 = *(undefined1 (*) [16])(lVar26 + (ulonglong)uVar30 * 0x90);
      auVar47 = vpcmpeqb_avx(auVar57,auVar42);
      uVar8 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar47[0xf] >> 7) << 0xf;
      if (uVar8 != 0) {
        uVar33 = (uint)uVar8;
        do {
          uVar24 = 0;
          for (uVar45 = uVar33; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
            uVar24 = uVar24 + 1;
          }
          if (*(uint *)((ulonglong)uVar30 * 0x90 + lVar26 + 0x10 + (ulonglong)uVar24 * 8) == uVar51)
          {
            uVar24 = uVar24 | uVar30 << 4;
            goto LAB_1400f3f3b;
          }
          uVar33 = uVar33 - 1 & uVar33;
        } while (uVar33 != 0);
      }
      auVar57 = vpsignb_avx(auVar57,auVar57);
      uVar24 = 0xffffffff;
      if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar57 >> 0x4f,0) & 1) != 0) || (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar57 >> 0x6f,0) & 1) != 0) || (SUB161(auVar57 >> 0x77,0) & 1) != 0) ||
          auVar57[0xf] < '\0') break;
      uVar30 = uVar30 + 1;
    }
  }
LAB_1400f3f3b:
  auVar64 = vhaddps_avx(auVar64,auVar64);
  auVar53 = ZEXT1664(auVar64);
  bVar32 = (uint)(int)sVar1 < 0x30 & (byte)(0xfcfc00000000 >> ((ulonglong)(uint)(int)sVar1 & 0x3f));
  uVar30 = 0xffffffff;
  bVar35 = 0.0 < *(float *)(*(longlong *)
                             (*(longlong *)(lVar21 + 0x18) +
                             (ulonglong)
                             *(uint *)((ulonglong)(uVar24 >> 4) * 0x90 + lVar26 + 0x14 +
                                      (ulonglong)(uVar24 & 0xf) * 8) * 8) + 100);
  if (iVar28 != 0) {
    uVar24 = (uVar51 >> 0x10 ^ uVar51) * -0x7a143595;
    uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
    uVar24 = uVar24 >> 0x10 ^ uVar24;
    uVar33 = uVar24 >> 7;
    bVar16 = (byte)uVar24;
    bVar31 = bVar16 & 0x7f;
    auVar65._0_8_ =
         CONCAT17(bVar16,CONCAT16(bVar16,CONCAT15(bVar16,CONCAT14(bVar16,CONCAT13(bVar16,CONCAT12(
                                                  bVar16,CONCAT11(bVar16,bVar16))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar65[8] = bVar31;
    auVar65[9] = bVar31;
    auVar65[10] = bVar31;
    auVar65[0xb] = bVar31;
    auVar65[0xc] = bVar31;
    auVar65[0xd] = bVar31;
    auVar65[0xe] = bVar31;
    auVar65[0xf] = bVar31;
    while( true ) {
      uVar33 = uVar33 & iVar28 - 1U;
      auVar57 = *(undefined1 (*) [16])(lVar26 + (ulonglong)uVar33 * 0x90);
      auVar47 = vpcmpeqb_avx(auVar57,auVar65);
      uVar8 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar47[0xf] >> 7) << 0xf;
      if (uVar8 != 0) {
        uVar24 = (uint)uVar8;
        do {
          uVar45 = 0;
          for (uVar25 = uVar24; (uVar25 & 1) == 0; uVar25 = uVar25 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          if (*(uint *)((ulonglong)uVar33 * 0x90 + lVar26 + 0x10 + (ulonglong)uVar45 * 8) == uVar51)
          {
            uVar30 = uVar45 | uVar33 << 4;
            goto LAB_1400f4029;
          }
          uVar24 = uVar24 - 1 & uVar24;
        } while (uVar24 != 0);
      }
      auVar57 = vpsignb_avx(auVar57,auVar57);
      if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar57 >> 0x4f,0) & 1) != 0) || (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar57 >> 0x6f,0) & 1) != 0) || (SUB161(auVar57 >> 0x77,0) & 1) != 0) ||
          auVar57[0xf] < '\0') break;
      uVar33 = uVar33 + 1;
    }
  }
LAB_1400f4029:
  uVar19 = *(undefined4 *)(lVar23 + 0x14);
  auVar64 = vrsqrtss_avx(auVar64,auVar64);
  auVar66 = ZEXT1664(auVar64);
  uVar34 = *(undefined4 *)((longlong)plVar3 + 0x9c);
  bVar9 = 0.0 < *(float *)(*(longlong *)
                            (*(longlong *)(lVar21 + 0x18) +
                            (ulonglong)
                            *(uint *)(lVar26 + (ulonglong)(uVar30 >> 4) * 0x90 + 0x14 +
                                     (ulonglong)(uVar30 & 0xf) * 8) * 8) + 0x68);
  lVar21 = func_0x000144ec8c40(uVar34);
  uVar46 = *(undefined4 *)(lVar21 + 0xa8);
  uVar2 = *(undefined4 *)(lVar21 + 0x7c);
  lVar21 = plVar3[4];
  lVar23 = func_0x000144fe37f0(uVar34);
  if (*(int *)(lVar23 + 0x30) == 0) {
LAB_1400f415f:
    lVar29 = 0;
  }
  else {
    lVar26 = *(longlong *)(lVar23 + 0x38);
    uVar24 = (uVar51 >> 0x10 ^ uVar51) * -0x7a143595;
    uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
    uVar24 = uVar24 >> 0x10 ^ uVar24;
    uVar30 = uVar24 >> 7;
    bVar16 = (byte)uVar24;
    bVar31 = bVar16 & 0x7f;
    lVar29 = 0;
    auVar38._0_8_ =
         CONCAT17(bVar16,CONCAT16(bVar16,CONCAT15(bVar16,CONCAT14(bVar16,CONCAT13(bVar16,CONCAT12(
                                                  bVar16,CONCAT11(bVar16,bVar16))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar38[8] = bVar31;
    auVar38[9] = bVar31;
    auVar38[10] = bVar31;
    auVar38[0xb] = bVar31;
    auVar38[0xc] = bVar31;
    auVar38[0xd] = bVar31;
    auVar38[0xe] = bVar31;
    auVar38[0xf] = bVar31;
    while( true ) {
      uVar30 = uVar30 & *(int *)(lVar23 + 0x30) - 1U;
      auVar64 = *(undefined1 (*) [16])(lVar26 + (ulonglong)uVar30 * 0x90);
      auVar57 = vpcmpeqb_avx(auVar64,auVar38);
      uVar8 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar57[0xf] >> 7) << 0xf;
      if (uVar8 != 0) {
        uVar24 = (uint)uVar8;
        do {
          uVar33 = 0;
          for (uVar45 = uVar24; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
            uVar33 = uVar33 + 1;
          }
          if (*(uint *)((ulonglong)uVar30 * 0x90 + lVar26 + 0x10 + (ulonglong)uVar33 * 8) == uVar51)
          {
            uVar51 = uVar30 << 4 | uVar33;
            if (uVar51 == 0xffffffff) goto LAB_1400f415f;
            lVar29 = *(longlong *)
                      (*(longlong *)(lVar23 + 0x28) +
                      (ulonglong)
                      *(uint *)(lVar26 + (ulonglong)(uVar51 >> 4) * 0x90 + 0x14 +
                               (ulonglong)(uVar33 & 0xf) * 8) * 8);
            goto LAB_1400f4162;
          }
          uVar24 = uVar24 - 1 & uVar24;
        } while (uVar24 != 0);
      }
      auVar64 = vpsignb_avx(auVar64,auVar64);
      if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar64 >> 0x3f,0) & 1) != 0) || (SUB161(auVar64 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar64 >> 0x4f,0) & 1) != 0) || (SUB161(auVar64 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar64 >> 0x5f,0) & 1) != 0) || (SUB161(auVar64 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar64 >> 0x6f,0) & 1) != 0) || (SUB161(auVar64 >> 0x77,0) & 1) != 0) ||
          auVar64[0xf] < '\0') break;
      uVar30 = uVar30 + 1;
    }
  }
LAB_1400f4162:
  bVar16 = ~bVar32 & (byte)(((uint)uVar6 & 4) >> 2);
  if (1 < *(byte *)((longlong)plVar3 + 0xfa) - 7) {
    if (bVar16 == 0) {
      uVar51 = *(uint *)(lVar29 + 0x208) & 4;
    }
    else {
      uVar51 = *(uint *)(lVar29 + 0x208) & 8;
    }
    if (uVar51 != 0) {
      bVar31 = *(byte *)(**(longlong **)(lVar21 + 0xf8) + 0x6fe) & 1;
      goto LAB_1400f41d4;
    }
  }
  bVar31 = 0;
LAB_1400f41d4:
  fVar50 = auVar53._0_4_ * auVar66._0_4_ * auVar66._0_4_;
  fVar54 = _DAT_145fc6f08;
  afStack_388[4] = auVar58._0_4_;
  fStack_374 = fVar69;
  fStack_370 = fVar70;
  fStack_36c = fVar71;
  uVar37 = FUN_144f51140(param_1 + 0xae0);
  auVar49 = ZEXT464(*(uint *)(param_1 + 0xbbc));
  auVar44._0_4_ = *(float *)(param_1 + 0x13b0) * *(float *)(param_1 + 0x13b0);
  auVar44._4_4_ = *(float *)(param_1 + 0x13b4) * *(float *)(param_1 + 0x13b4);
  auVar44._8_4_ = *(float *)(param_1 + 0x13b8) * *(float *)(param_1 + 0x13b8);
  auVar44._12_4_ = *(float *)(param_1 + 0x13bc) * *(float *)(param_1 + 0x13bc);
  auVar64 = vblendps_avx(auVar44,ZEXT816(0) << 0x20,8);
  auVar67 = ZEXT1664(auVar64);
  if ((lVar20 != 0) &&
     ((*(char *)((longlong)plVar4 + 0x156) == '\x01' || ((*(byte *)(lVar20 + 0x222) & 8) != 0)))) {
    lVar21 = func_0x00014515d910(uVar34);
    auVar64 = auVar67._0_16_;
    if (lVar21 != 0) {
      func_0x000144e43930(plVar4,auStack_368);
      auVar58._0_4_ =
           (float)(**(code **)(*plVar4 + 0x38))
                            (plVar4,auStack_368._0_8_,0,0,in_stack_fffffffffffffb88 & 0xffffff00);
      auVar64 = auVar67._0_16_;
      uVar34 = *(undefined4 *)((longlong)plVar3 + 0x9c);
      auVar39._0_4_ = (auVar58._0_4_ * *(float *)(lVar20 + 0x448)) / (float)*(int *)(lVar21 + 0x94);
      auVar39._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar57 = vmaxss_avx(auVar39,auVar49._0_16_);
      auVar49 = ZEXT1664(auVar57);
    }
  }
  fVar69 = fVar54 * fVar50 + _DAT_145fc6edc;
  auVar64 = vhaddps_avx(auVar64,auVar64);
  auVar67 = ZEXT1664(auVar64);
  lVar20 = func_0x000144ec2d10(uVar34);
  auStack_350._8_4_ = 0;
  uStack_198 = 0xffffffff00000000;
  auStack_368._8_8_ = param_1 + 0x1390;
  auStack_368._0_8_ = param_1;
  uStack_358 = FUN_14525a3b0(plVar3);
  uStack_2d4 = auVar68._0_4_;
  auVar58._0_4_ = auVar66._0_4_;
  auVar57 = auVar67._0_16_;
  auVar64 = auVar53._0_16_;
  auStack_350._8_4_ = param_3;
  auStack_350._0_8_ = param_1 + 0x13d0;
  uStack_308 = uStack_148;
  uStack_300 = uStack_140;
  puStack_2f8 = puStack_118;
  uStack_2f0 = auStack_110._0_8_;
  iStack_2e8 = (int)*(short *)(param_1 + 0x11a0);
  fStack_2e0 = fVar36;
  uStack_2dc = uVar19;
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_14a01fe48) {
    auVar67 = ZEXT1664(auVar64);
    auVar58 = ZEXT1664(auVar66._0_16_);
    auVar66 = ZEXT1664(auVar57);
    auVar68 = ZEXT1664(auVar68._0_16_);
    auVar53._0_8_ = FUN_1455db8cc(&DAT_14a01fe48);
    uStack_2d4 = auVar68._0_4_;
    auVar57 = auVar66._0_16_;
    auVar64 = auVar67._0_16_;
    auVar53._8_56_ = extraout_var_01;
    auStack_178 = auVar53._0_16_;
    if (_DAT_14a01fe48 == -1) {
      func_0x000140d993b0(0x14a01fe50);
      _DAT_14a01fe40 = 0x14a01fe50;
      auVar41._0_8_ = FUN_1455db934(&DAT_14a01fe48);
      uStack_2d4 = auVar68._0_4_;
      auVar57 = auVar66._0_16_;
      auVar64 = auVar67._0_16_;
      auVar41._8_56_ = extraout_var_02;
      auStack_178 = auVar41._0_16_;
    }
  }
  iVar28 = _DAT_14a01fe48;
  auVar12._4_4_ = fStack_3d4;
  auVar12._0_4_ = fStack_3d8;
  auVar12._8_4_ = fStack_3d0;
  auVar12._12_4_ = fStack_3cc;
  auVar47 = vpunpckhwd_avx(auStack_178,auVar12);
  auVar57 = vhaddps_avx(auVar57,auVar57);
  lVar21 = *(longlong *)(param_1 + 0x1188);
  if (*(longlong *)(param_1 + 0x1188) == 0) {
    lVar21 = _DAT_14a01fe40;
  }
  auVar52 = vrsqrtss_avx(auVar57,auVar57);
  auVar65 = vpsrad_avx(auVar47,0x10);
  auVar48 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar64,2);
  auVar42 = ZEXT416((uint)(*(float *)(param_1 + 0x1290) * *(float *)(lVar21 + 0x14)));
  auVar47 = vcmpss_avx(auVar42,(undefined1  [16])0x0,1);
  auVar47 = vblendvps_avx(auVar42,ZEXT416((uint)(-(*(float *)(param_1 + 0x1290) *
                                                  *(float *)(lVar21 + 0x14)) - 0.0)),auVar47);
  uStack_2d8 = auVar47._0_4_;
  uStack_2d0 = *(undefined4 *)(param_1 + 0xbd4 + (ulonglong)DAT_149e497f4 * 4);
  uVar7 = *(undefined8 *)(param_1 + 0x1310);
  auVar68 = ZEXT1664(auVar48);
  auVar53 = ZEXT464((uint)((fVar69 * auVar58._0_4_ + auVar58._0_4_) * auVar64._0_4_));
  auVar66 = ZEXT1664(auVar57);
  auVar67 = ZEXT1664(auVar65);
  auVar41 = ZEXT1664(ZEXT416(_DAT_146159bfc));
  auVar72 = ZEXT1664(auVar52);
  auVar58._0_4_ = (float)func_0x000144fb3fa0(uVar7);
  fStack_2cc = (float)FUN_144fb3f40(uVar7);
  fStack_2cc = auVar58._0_4_ - fStack_2cc;
  uStack_2c8 = func_0x0001453d03f0(*(undefined4 *)(param_1 + 0x13dc));
  uVar51 = auVar68._0_4_;
  uVar24 = auVar53._0_4_;
  auVar64 = auVar67._0_16_;
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < iVar28) {
    FUN_1455db8cc(&DAT_14a01fe48);
    uVar51 = auVar68._0_4_;
    uVar24 = auVar53._0_4_;
    auVar64 = auVar67._0_16_;
    iVar28 = _DAT_14a01fe48;
    if (_DAT_14a01fe48 == -1) {
      func_0x000140d993b0(0x14a01fe50);
      _DAT_14a01fe40 = 0x14a01fe50;
      FUN_1455db934(&DAT_14a01fe48);
      uVar51 = auVar68._0_4_;
      uVar24 = auVar53._0_4_;
      auVar64 = auVar67._0_16_;
      iVar28 = _DAT_14a01fe48;
    }
  }
  auVar64 = vcvtdq2ps_avx(auVar64);
  uVar51 = uVar51 & uVar24;
  lVar21 = *(longlong *)(param_1 + 0x1188);
  if (*(longlong *)(param_1 + 0x1188) == 0) {
    lVar21 = _DAT_14a01fe40;
  }
  uVar24 = *(uint *)(lVar21 + 0x14);
  auVar68 = ZEXT464(uVar24);
  auVar58._0_4_ = auVar66._0_4_ * auVar72._0_4_ * auVar72._0_4_;
  auVar64 = vshufpd_avx(auVar64,auVar64,3);
  auVar53 = ZEXT1664(auVar64);
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < iVar28) {
    FUN_1455db8cc(&DAT_14a01fe48);
    uVar24 = auVar68._0_4_;
    auVar64 = auVar53._0_16_;
    if (_DAT_14a01fe48 == -1) {
      func_0x000140d993b0(0x14a01fe50);
      _DAT_14a01fe40 = 0x14a01fe50;
      FUN_1455db934(&DAT_14a01fe48);
      uVar24 = auVar68._0_4_;
      auVar64 = auVar53._0_16_;
    }
  }
  auVar47 = auVar41._0_16_;
  auVar57 = auVar66._0_16_;
  bStack_2c0 = (byte)((uVar6 & 0xffffffff) >> 1) & 1;
  bStack_2bd = (byte)(uVar6 >> 6) & 1;
  fStack_278 = auVar64._0_4_ * _DAT_146159c90 + fStack_3d8;
  fStack_274 = auVar64._4_4_ * _UNK_146159c94 + fStack_3d4;
  fStack_270 = auVar64._8_4_ * _UNK_146159c98 + fStack_3d0;
  fStack_26c = auVar64._12_4_ * _UNK_146159c9c + fStack_3cc;
  lVar21 = *(longlong *)(param_1 + 0x1188);
  if (*(longlong *)(param_1 + 0x1188) == 0) {
    lVar21 = _DAT_14a01fe40;
  }
  fStack_2c4 = (float)(uVar24 ^ _DAT_145fc6f10) * *(float *)(lVar21 + 0x10);
  auVar58._4_60_ = auVar72._4_60_;
  auVar58._0_4_ = (auVar58._0_4_ * fVar54 + _DAT_145fc6edc) * auVar72._0_4_ + auVar72._0_4_;
  auVar68 = ZEXT1664(auVar58._0_16_);
  bStack_2bb = (byte)(*(uint *)(param_1 + 0x1198) >> 0x12) & 1;
  uVar6 = *(ulonglong *)(param_1 + 0x1190);
  bStack_2ba = (byte)(uVar6 >> 0x18) & 1;
  bStack_2b9 = (byte)(uVar6 >> 0x26) & 1;
  uStack_2a8 = CONCAT44(fStack_374,afStack_388[4]);
  uStack_2a0 = CONCAT44(fStack_36c,fStack_370);
  uStack_2b8 = *(float *)(param_1 + 0x12d0) < _DAT_145fc6ed8;
  bStack_2b7 = (byte)(uVar6 >> 0x20) & 1;
  uStack_2b0 = *(undefined8 *)(param_1 + 0x1160);
  lStack_288 = uStack_3c8;
  lStack_280 = uStack_3c0;
  uStack_268 = auStack_3f8;
  uStack_260 = uStack_3f0;
  uStack_254 = (uint)*(byte *)((longlong)plVar3 + 0xfa);
  uStack_250 = (undefined4)plVar3[0x14];
  uVar24 = _DAT_145fc6f10;
  uVar30 = _DAT_145fc6f10;
  uVar33 = _DAT_145fc6f10;
  uVar45 = _DAT_145fc6f10;
  bStack_2bf = bVar32;
  bStack_2be = bVar16;
  bStack_2bc = bVar31;
  lStack_298 = lVar22;
  lStack_290 = lVar10;
  uStack_258 = uVar2;
  uStack_24c = uVar51;
  if (lVar20 == 0) {
    uStack_248 = 0;
  }
  else {
    auVar67._0_8_ = FUN_144ec2d60(lVar20);
    auVar47 = auVar41._0_16_;
    auVar58._0_4_ = auVar68._0_4_;
    auVar57 = auVar66._0_16_;
    auVar67._8_56_ = extraout_var_00;
    auVar43._0_4_ = (uint)auVar67._0_8_ ^ uVar24;
    auVar43._4_4_ = (uint)((ulonglong)auVar67._0_8_ >> 0x20) ^ uVar30;
    auVar43._8_4_ = extraout_var_00._0_4_ ^ uVar33;
    auVar43._12_4_ = extraout_var_00._4_4_ ^ uVar45;
    auVar64 = vmaxss_avx(auVar43,auVar67._0_16_);
    uStack_248 = auVar64._0_4_;
  }
  auVar58._0_4_ = auVar58._0_4_ * auVar57._0_4_;
  auVar68 = ZEXT464((uint)auVar58._0_4_);
  auVar64 = vcmpss_avx(auVar47,auVar57,2);
  uVar51 = auVar64._0_4_;
  auVar53 = ZEXT1664(auVar64);
  uStack_240 = *(undefined4 *)(param_2 + 8);
  uStack_239 = 0;
  bStack_235 = *(byte *)((longlong)plVar3 + 0x34) & 1;
  plVar4 = *(longlong **)((ulonglong)*(byte *)(plVar3 + 6) * 8 + 0x14abbe7c0);
  uStack_233 = 0;
  uVar25 = (uint)((ulonglong)((longlong)plVar3 - *plVar4) / (ulonglong)*(uint *)(plVar4 + 1));
  uStack_234 = (*(uint *)(*(longlong *)((ulonglong)*(byte *)(plVar3 + 6) * 0x10 + 0x14ab75fb0) +
                         (ulonglong)((uVar25 & 0x3fffffff) >> 3) * 4) >> ((uVar25 & 7) << 2) & 1) !=
               0;
  uStack_244 = uVar46;
  uStack_238 = bVar35;
  uStack_237 = bVar9;
  bStack_236 = bVar27;
  if (lStack_3e0 != 0) {
    lVar21 = func_0x000144eb37f0(lStack_3e0 + 0x40);
    auVar58._0_4_ = auVar68._0_4_;
    uVar51 = auVar53._0_4_;
    if (lVar21 == 0) {
      uStack_233 = 0;
    }
    else {
      uStack_233 = func_0x000144e52850(*(undefined4 *)(lVar21 + 0x9c));
      auVar58._0_4_ = auVar68._0_4_;
      uVar51 = auVar53._0_4_;
    }
  }
  uStack_232 = _DAT_14ab760c8 == plVar3;
  uVar51 = uVar51 & (uint)auVar58._0_4_;
  uStack_231 = FUN_14515d960();
  if ((~*(uint *)((longlong)plVar3 + 0xa4) & 0x7ffe) == 0) {
    uStack_230 = 0;
  }
  else {
    uStack_230 = FUN_144d9d7a0(*(uint *)(plVar3 + 0x14),*(uint *)(plVar3 + 0x14) >> 0x10);
  }
  auVar11._8_8_ = extraout_XMM0_Qb;
  auVar11._0_8_ = uVar37;
  uStack_22f = *(char *)((longlong)plVar3 + 0xfa) == '\a';
  auVar40._0_4_ = (uint)uVar37 ^ uVar24;
  auVar40._4_4_ = (uint)((ulonglong)uVar37 >> 0x20) ^ uVar30;
  auVar40._8_4_ = (uint)extraout_XMM0_Qb ^ uVar33;
  auVar40._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20) ^ uVar45;
  if (lVar20 == 0) {
    bStack_22e = 0;
  }
  else {
    bStack_22e = *(byte *)(lVar20 + 0xfc) >> 1 & 1;
  }
  auVar64 = vmaxss_avx(auVar40,auVar11);
  auVar68 = ZEXT1664(auVar64);
  fVar36 = auVar49._0_4_ / fVar36;
  if (lStack_3b0 == 0) {
    uStack_22d = 0;
  }
  else {
    uStack_22d = *(undefined1 *)(lStack_3b0 + 0xa0);
  }
  uStack_228 = *(undefined8 *)(param_1 + 0x110);
  uStack_218 = uStack_398;
  uStack_210 = uStack_390;
  uStack_208 = *(undefined8 *)(param_1 + 0xb0);
  uStack_200 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1f8 = *(undefined8 *)(param_1 + 0xf0);
  uStack_1f0 = *(undefined8 *)(param_1 + 0xf8);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x13b0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x13b8);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x13c0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x13c8);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x1360);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x1368);
  auStack_1b8 = *(undefined1 (*) [16])(param_1 + 0x1370);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x120);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x128);
  uStack_198 = *(undefined8 *)(param_1 + 0x118);
  uStack_190 = vextractps_avx(auStack_1b8,3);
  bStack_22c = bVar17;
  uStack_18c = FUN_144fbcfc0(*(undefined4 *)(param_1 + 0x220),*(undefined8 *)(param_1 + 0x290),0);
  uStack_18b = 0.0 < *(float *)(param_1 + 0x137c);
  uStack_188 = auVar68._0_4_;
  uStack_184 = uVar51;
  fStack_180 = fVar36;
  FUN_14339f3a0(auStack_368);
  return;
}

