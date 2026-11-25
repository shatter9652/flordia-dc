// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400763f0  size: 1779 bytes
// Name:    FUN_1400763f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ee3e10, FUN_144db6f00, FUN_144ee4200, FUN_1453c6260, FUN_144db6f30, FUN_140076af0, FUN_144ee3c10, FUN_144db6f60, FUN_140076b90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400763f0(longlong *param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  short *psVar1;
  ushort *puVar2;
  byte *pbVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint7 uVar19;
  int iVar20;
  longlong unaff_GS_OFFSET;
  bool bVar21;
  bool bVar22;
  float fVar23;
  float fVar32;
  float fVar33;
  undefined1 auVar24 [16];
  float fVar34;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar45;
  float fVar46;
  undefined1 auVar44 [16];
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [64];
  float fVar54;
  undefined1 auVar55 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [64];
  float fVar60;
  float fVar62;
  float fVar63;
  undefined1 auVar61 [16];
  float fVar64;
  undefined1 auVar65 [16];
  float fVar66;
  undefined1 in_ZMM11 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [16];
  undefined1 in_ZMM14 [64];
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 in_ZMM15 [64];
  byte bStack_17d;
  undefined4 uStack_17c;
  longlong lStack_178;
  ulonglong uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  ulonglong uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [12];
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [96];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [15];
  undefined1 uStack_59;
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM15._0_16_;
  _auStack_68 = in_ZMM14._0_16_;
  auStack_78 = in_ZMM13._0_16_;
  auStack_98._0_16_ = in_ZMM11._0_16_;
  if (((*(byte *)((longlong)param_1 + 0x54) & 2) == 0) || (*param_1 == 0)) {
    return;
  }
  auVar25 = *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x10) + 0x10);
  auVar53 = ZEXT1664(auVar25);
  auVar25 = vshufps_avx(auVar25,*(undefined1 (*) [16])(*(longlong *)(param_2 + 0x10) + 0x20),0x33);
  auVar56 = ZEXT1664(auVar25);
  cVar6 = (**(code **)(*param_3 + 0xb0))(param_3);
  auVar55 = auVar56._0_16_;
  auVar25 = auVar53._0_16_;
  if (cVar6 == '\0') {
    uStack_17c = 0;
  }
  else {
    uStack_17c = (**(code **)(*param_3 + 0x568))(param_3);
    auVar55 = auVar56._0_16_;
    auVar25 = auVar53._0_16_;
  }
  uVar13 = *(short *)((longlong)param_1 + 0x22) - *(ushort *)(param_1 + 4);
  if (uVar13 == 0) {
    return;
  }
  auVar25 = vshufps_avx(auVar25,auVar55,0x2f);
  auVar53 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                               CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
  lStack_178 = param_1[1];
  auVar67 = ZEXT1664(CONCAT412(_DAT_146159bfc,
                               CONCAT48(_DAT_146159bfc,CONCAT44(_DAT_146159bfc,_DAT_146159bfc))));
  lVar18 = 0;
  auVar56 = ZEXT1264(ZEXT812(0));
  fVar54 = auVar25._0_4_ + _DAT_145fc6ed8;
  fVar57 = auVar25._4_4_ + _DAT_145fc6ed8;
  fVar58 = auVar25._8_4_ + _DAT_145fc6ed8;
  fVar59 = auVar25._12_4_ + _DAT_145fc6ed8;
  lVar12 = (ulonglong)((uint)*(ushort *)(param_1 + 4) * 0x50) + 0x44 +
           *(longlong *)(param_1[2] + 0x20);
  lStack_138 = (ulonglong)uVar13 * 0x50;
  uStack_150 = 0;
  do {
    uStack_170 = (ulonglong)*(ushort *)(lVar12 + lVar18);
    if (uStack_170 != 0xffff) {
      uVar17 = *(uint *)(lVar12 + -0x28 + lVar18);
      cVar6 = (**(code **)(*param_3 + 0xb0))(param_3);
      if ((cVar6 != '\0') &&
         (sVar7 = FUN_144ee3c10(param_3,(int)*(short *)(lVar12 + -4 + lVar18)), sVar7 != -1)) {
        uVar17 = *(uint *)(*(longlong *)(param_3[0x35] + 0x20) + 0xc + (longlong)sVar7 * 0x70);
        if (uVar17 == 0) {
          uVar17 = *(uint *)(*(longlong *)(param_3[0x35] + 0x20) + (longlong)sVar7 * 0x70 + 8);
        }
      }
      uVar15 = (ulonglong)uVar17;
      bStack_17d = 0;
      FUN_144ee4200(param_4,uVar15 + 0x8255246c00000000,&bStack_17d);
      auVar69 = ZEXT1664(auVar53._0_16_);
      if (bStack_17d == 0) {
        cVar6 = FUN_144ee3e10(param_4,uVar15 + 0x4410c15b00000000,auStack_168);
        auVar25 = _auStack_168;
        if (cVar6 == '\0') {
          auVar25 = auVar53._0_16_;
        }
        auVar69 = ZEXT1664(auVar25);
        iVar20 = (int)*(short *)(lVar12 + -4 + lVar18);
        FUN_144db6f60(param_2,&fStack_148,iVar20);
        FUN_144db6f00(param_2,auStack_f8,iVar20);
        FUN_144db6f30(param_2,auStack_128,iVar20);
        auVar55._12_4_ = fStack_11c;
        auVar55._0_12_ = auStack_128;
        fVar66 = *(float *)(lVar12 + -0x38 + lVar18);
        auVar44._0_4_ = auStack_128._0_4_ + auStack_128._0_4_;
        auVar44._4_4_ = auStack_128._4_4_ + auStack_128._4_4_;
        auVar44._8_4_ = auStack_128._8_4_ + auStack_128._8_4_;
        auVar44._12_4_ = fStack_11c + fStack_11c;
        auVar25 = vshufps_avx(auVar55,auVar55,0xc9);
        auVar55 = vshufps_avx(auVar55,auVar55,0xd2);
        auVar26 = vshufps_avx(auVar44,auVar44,0xc9);
        auVar27 = vshufps_avx(auVar44,auVar44,0xd2);
        auVar35._0_4_ = auVar55._0_4_ * auVar44._0_4_ + auVar26._0_4_ * fStack_11c;
        auVar35._4_4_ = auVar55._4_4_ * auVar44._4_4_ + auVar26._4_4_ * fStack_11c;
        auVar35._8_4_ = auVar55._8_4_ * auVar44._8_4_ + auVar26._8_4_ * fStack_11c;
        auVar35._12_4_ = auVar55._12_4_ * auVar44._12_4_ + auVar26._12_4_ * fStack_11c;
        auVar40._0_4_ = -(fStack_11c * auVar27._0_4_) + auVar25._0_4_ * auVar44._0_4_;
        auVar40._4_4_ = -(fStack_11c * auVar27._4_4_) + auVar25._4_4_ * auVar44._4_4_;
        auVar40._8_4_ = -(fStack_11c * auVar27._8_4_) + auVar25._8_4_ * auVar44._8_4_;
        auVar40._12_4_ = -(fStack_11c * auVar27._12_4_) + auVar25._12_4_ * auVar44._12_4_;
        auVar24._0_4_ =
             -(auVar27._0_4_ * auVar55._0_4_) - (auVar25._0_4_ * auVar26._0_4_ - auVar53._0_4_);
        auVar24._4_4_ =
             -(auVar27._4_4_ * auVar55._4_4_) - (auVar25._4_4_ * auVar26._4_4_ - auVar53._4_4_);
        auVar24._8_4_ =
             -(auVar27._8_4_ * auVar55._8_4_) - (auVar25._8_4_ * auVar26._8_4_ - auVar53._8_4_);
        auVar24._12_4_ =
             -(auVar27._12_4_ * auVar55._12_4_) - (auVar25._12_4_ * auVar26._12_4_ - auVar53._12_4_)
        ;
        auVar25 = vblendps_avx(auVar40,auVar24,2);
        auVar55 = vblendps_avx(auVar24,auVar35,2);
        auVar25 = vblendps_avx(auVar35,auVar25,3);
        auVar55 = vblendps_avx(auVar40,auVar55,3);
        auVar26 = vblendps_avx(auVar35,auVar40,2);
        auVar26 = vblendps_avx(auVar24,auVar26,3);
        fVar49 = fStack_144 * fVar54 * auVar25._0_4_;
        fVar50 = fStack_144 * fVar57 * auVar25._4_4_;
        fVar51 = fStack_144 * fVar58 * auVar25._8_4_;
        fVar52 = fStack_144 * fVar59 * auVar25._12_4_;
        fVar71 = fStack_148 * fVar54 * auVar55._0_4_;
        fVar72 = fStack_148 * fVar57 * auVar55._4_4_;
        fVar73 = fStack_148 * fVar58 * auVar55._8_4_;
        fVar74 = fStack_148 * fVar59 * auVar55._12_4_;
        auVar25 = *(undefined1 (*) [16])(lVar12 + -0x44 + lVar18);
        fVar23 = fStack_140 * fVar54 * auVar26._0_4_;
        fVar32 = fStack_140 * fVar57 * auVar26._4_4_;
        fVar33 = fStack_140 * fVar58 * auVar26._8_4_;
        fVar34 = fStack_140 * fVar59 * auVar26._12_4_;
        auVar61._0_4_ = auVar25._0_4_ + auVar25._0_4_;
        auVar61._4_4_ = auVar25._4_4_ + auVar25._4_4_;
        auVar61._8_4_ = auVar25._8_4_ + auVar25._8_4_;
        auVar61._12_4_ = auVar25._12_4_ + auVar25._12_4_;
        auVar55 = vshufps_avx(auVar25,auVar25,0xc9);
        auVar25 = vshufps_avx(auVar25,auVar25,0xd2);
        auVar26 = vshufps_avx(auVar61,auVar61,0xc9);
        auVar70._0_4_ = auVar25._0_4_ * auVar61._0_4_ + fVar66 * auVar26._0_4_;
        auVar70._4_4_ = auVar25._4_4_ * auVar61._4_4_ + fVar66 * auVar26._4_4_;
        auVar70._8_4_ = auVar25._8_4_ * auVar61._8_4_ + fVar66 * auVar26._8_4_;
        auVar70._12_4_ = auVar25._12_4_ * auVar61._12_4_ + fVar66 * auVar26._12_4_;
        auVar27 = vshufps_avx(auVar61,auVar61,0xd2);
        auVar65._0_4_ = -(fVar66 * auVar27._0_4_) + auVar55._0_4_ * auVar61._0_4_;
        auVar65._4_4_ = -(fVar66 * auVar27._4_4_) + auVar55._4_4_ * auVar61._4_4_;
        auVar65._8_4_ = -(fVar66 * auVar27._8_4_) + auVar55._8_4_ * auVar61._8_4_;
        auVar65._12_4_ = -(fVar66 * auVar27._12_4_) + auVar55._12_4_ * auVar61._12_4_;
        auVar48._0_4_ =
             -(auVar27._0_4_ * auVar25._0_4_) - (auVar55._0_4_ * auVar26._0_4_ - auVar53._0_4_);
        auVar48._4_4_ =
             -(auVar27._4_4_ * auVar25._4_4_) - (auVar55._4_4_ * auVar26._4_4_ - auVar53._4_4_);
        auVar48._8_4_ =
             -(auVar27._8_4_ * auVar25._8_4_) - (auVar55._8_4_ * auVar26._8_4_ - auVar53._8_4_);
        auVar48._12_4_ =
             -(auVar27._12_4_ * auVar25._12_4_) - (auVar55._12_4_ * auVar26._12_4_ - auVar53._12_4_)
        ;
        auVar25 = vshufps_avx(auVar70,auVar70,0x55);
        auVar55 = vshufps_avx(auVar65,auVar65,0xaa);
        auVar26 = vshufps_avx(auVar48,auVar48,0x55);
        auVar27 = vshufps_avx(auVar65,auVar65,0x55);
        fVar43 = fVar23 * auVar55._0_4_ + fVar49 * auVar25._0_4_ + fVar71 * auVar48._0_4_;
        fVar45 = fVar32 * auVar55._4_4_ + fVar50 * auVar25._4_4_ + fVar72 * auVar48._0_4_;
        fVar46 = fVar33 * auVar55._8_4_ + fVar51 * auVar25._8_4_ + fVar73 * auVar48._0_4_;
        fVar47 = fVar34 * auVar55._12_4_ + fVar52 * auVar25._12_4_ + fVar74 * auVar48._0_4_;
        auVar25 = vshufps_avx(auVar70,auVar70,0xaa);
        fVar60 = fVar23 * auVar25._0_4_ + fVar49 * auVar26._0_4_ + fVar71 * auVar65._0_4_;
        fVar62 = fVar32 * auVar25._4_4_ + fVar50 * auVar26._4_4_ + fVar72 * auVar65._0_4_;
        fVar63 = fVar33 * auVar25._8_4_ + fVar51 * auVar26._8_4_ + fVar73 * auVar65._0_4_;
        fVar64 = fVar34 * auVar25._12_4_ + fVar52 * auVar26._12_4_ + fVar74 * auVar65._0_4_;
        auVar25 = vshufps_avx(auVar48,auVar48,0xaa);
        fVar66 = fVar23 * auVar25._0_4_ + fVar49 * auVar27._0_4_ + fVar71 * auVar70._0_4_;
        fVar23 = fVar32 * auVar25._4_4_ + fVar50 * auVar27._4_4_ + fVar72 * auVar70._0_4_;
        fVar32 = fVar33 * auVar25._8_4_ + fVar51 * auVar27._8_4_ + fVar73 * auVar70._0_4_;
        fVar33 = fVar34 * auVar25._12_4_ + fVar52 * auVar27._12_4_ + fVar74 * auVar70._0_4_;
        auVar25._0_4_ = fVar66 * fVar66;
        auVar25._4_4_ = fVar23 * fVar23;
        auVar25._8_4_ = fVar32 * fVar32;
        auVar25._12_4_ = fVar33 * fVar33;
        auVar27 = auVar56._0_16_;
        auVar25 = vblendps_avx(auVar25,auVar27,8);
        auVar25 = vhaddps_avx(auVar25,auVar25);
        auVar55 = vhaddps_avx(auVar25,auVar25);
        auVar25 = vrsqrtps_avx(auVar55);
        fVar66 = auVar25._0_4_;
        fVar23 = auVar25._4_4_;
        fVar32 = auVar25._8_4_;
        fVar33 = auVar25._12_4_;
        auVar24 = auVar67._0_16_;
        auVar25 = vcmpps_avx(auVar24,auVar55,2);
        auVar26._0_4_ =
             auVar25._0_4_ &
             (uint)(((_DAT_145fc6f08 * fVar66 * fVar66 * auVar55._0_4_ - _DAT_145fc6f08) * fVar66 +
                    fVar66) * auVar55._0_4_);
        auVar26._4_4_ =
             auVar25._4_4_ &
             (uint)(((_DAT_145fc6f08 * fVar23 * fVar23 * auVar55._4_4_ - _DAT_145fc6f08) * fVar23 +
                    fVar23) * auVar55._4_4_);
        auVar26._8_4_ =
             auVar25._8_4_ &
             (uint)(((_DAT_145fc6f08 * fVar32 * fVar32 * auVar55._8_4_ - _DAT_145fc6f08) * fVar32 +
                    fVar32) * auVar55._8_4_);
        auVar26._12_4_ =
             auVar25._12_4_ &
             (uint)(((_DAT_145fc6f08 * fVar33 * fVar33 * auVar55._12_4_ - _DAT_145fc6f08) * fVar33 +
                    fVar33) * auVar55._12_4_);
        auVar36._0_4_ = fVar60 * fVar60;
        auVar36._4_4_ = fVar62 * fVar62;
        auVar36._8_4_ = fVar63 * fVar63;
        auVar36._12_4_ = fVar64 * fVar64;
        auVar25 = vblendps_avx(auVar36,auVar27,8);
        auVar25 = vhaddps_avx(auVar25,auVar25);
        auVar55 = vhaddps_avx(auVar25,auVar25);
        auVar25 = vrsqrtps_avx(auVar55);
        fVar66 = auVar25._0_4_;
        fVar23 = auVar25._4_4_;
        fVar32 = auVar25._8_4_;
        fVar33 = auVar25._12_4_;
        auVar25 = vcmpps_avx(auVar24,auVar55,2);
        auVar37._0_4_ =
             auVar25._0_4_ &
             (uint)(((_DAT_145fc6f08 * fVar66 * fVar66 * auVar55._0_4_ - _DAT_145fc6f08) * fVar66 +
                    fVar66) * auVar55._0_4_);
        auVar37._4_4_ =
             auVar25._4_4_ &
             (uint)(((_DAT_145fc6f08 * fVar23 * fVar23 * auVar55._4_4_ - _DAT_145fc6f08) * fVar23 +
                    fVar23) * auVar55._4_4_);
        auVar37._8_4_ =
             auVar25._8_4_ &
             (uint)(((_DAT_145fc6f08 * fVar32 * fVar32 * auVar55._8_4_ - _DAT_145fc6f08) * fVar32 +
                    fVar32) * auVar55._8_4_);
        auVar37._12_4_ =
             auVar25._12_4_ &
             (uint)(((_DAT_145fc6f08 * fVar33 * fVar33 * auVar55._12_4_ - _DAT_145fc6f08) * fVar33 +
                    fVar33) * auVar55._12_4_);
        auVar41._0_4_ = fVar43 * fVar43;
        auVar41._4_4_ = fVar45 * fVar45;
        auVar41._8_4_ = fVar46 * fVar46;
        auVar41._12_4_ = fVar47 * fVar47;
        auVar25 = vblendps_avx(auVar41,auVar27,8);
        auVar25 = vhaddps_avx(auVar25,auVar25);
        auVar55 = vhaddps_avx(auVar25,auVar25);
        auVar25 = vrsqrtps_avx(auVar55);
        fVar66 = auVar25._0_4_;
        fVar23 = auVar25._4_4_;
        fVar32 = auVar25._8_4_;
        fVar33 = auVar25._12_4_;
        auVar25 = vcmpps_avx(auVar24,auVar55,2);
        auVar42._0_4_ =
             auVar25._0_4_ &
             (uint)(((_DAT_145fc6f08 * fVar66 * fVar66 * auVar55._0_4_ - _DAT_145fc6f08) * fVar66 +
                    fVar66) * auVar55._0_4_);
        auVar42._4_4_ =
             auVar25._4_4_ &
             (uint)(((_DAT_145fc6f08 * fVar23 * fVar23 * auVar55._4_4_ - _DAT_145fc6f08) * fVar23 +
                    fVar23) * auVar55._4_4_);
        auVar42._8_4_ =
             auVar25._8_4_ &
             (uint)(((_DAT_145fc6f08 * fVar32 * fVar32 * auVar55._8_4_ - _DAT_145fc6f08) * fVar32 +
                    fVar32) * auVar55._8_4_);
        auVar42._12_4_ =
             auVar25._12_4_ &
             (uint)(((_DAT_145fc6f08 * fVar33 * fVar33 * auVar55._12_4_ - _DAT_145fc6f08) * fVar33 +
                    fVar33) * auVar55._12_4_);
        auVar25 = vunpcklps_avx(auVar42,auVar26);
        auVar25 = vunpcklps_avx(auVar25,auVar37);
        auVar68._0_4_ = auVar69._0_4_ * auVar25._0_4_;
        auVar68._4_4_ = auVar69._4_4_ * auVar25._4_4_;
        auVar68._8_4_ = auVar69._8_4_ * auVar25._8_4_;
        auVar68._12_4_ = auVar69._12_4_ * auVar25._12_4_;
        auVar69 = ZEXT1664(auVar68);
        auVar27._4_4_ = _DAT_146159ef4;
        auVar27._0_4_ = _DAT_146159ef4;
        auVar27._8_4_ = _DAT_146159ef4;
        auVar27._12_4_ = _DAT_146159ef4;
        auVar25 = vcmpps_avx(auVar27,auVar68,1);
        uVar8 = vmovmskps_avx(auVar25);
        if ((~(byte)uVar8 & 7) != 0) {
          bStack_17d = 1;
        }
      }
      lVar4 = lStack_178;
      lVar11 = *(longlong *)(lStack_178 + 0x88);
      if ((bStack_17d & 1) == 0) {
        if (lVar11 != 0) {
          func_0x000144ee3d30(*(undefined8 *)(lVar12 + -0x24 + lVar18),
                              *(undefined2 *)(lVar12 + -0xc + lVar18),auStack_168);
          *(undefined8 *)(lVar11 + 8 + (ulonglong)(uint)((int)uStack_170 << 4)) = uStack_130;
        }
        if ((char)uStack_17c != '\0') {
          _auStack_168 = auVar56._0_16_;
          FUN_144ee3e10(param_4,uVar15 | 0xeb6a847b00000000,auStack_168);
          uVar15 = uStack_170;
          cVar6 = func_0x0001400761a0(param_1);
          if (cVar6 == '\0') {
            auVar28._0_4_ = auVar69._0_4_ + _DAT_146159ef0;
            auVar28._4_4_ = auVar69._4_4_ + _DAT_146159ef0;
            auVar28._8_4_ = auVar69._8_4_ + _DAT_146159ef0;
            auVar28._12_4_ = auVar69._12_4_ + _DAT_146159ef0;
            auVar38._0_4_ = auVar69._0_4_ + _DAT_146159ef4;
            auVar38._4_4_ = auVar69._4_4_ + _DAT_146159ef4;
            auVar38._8_4_ = auVar69._8_4_ + _DAT_146159ef4;
            auVar38._12_4_ = auVar69._12_4_ + _DAT_146159ef4;
            auVar25 = vcmpps_avx(auVar28,auVar53._0_16_,2);
            auVar55 = vcmpps_avx(auVar53._0_16_,auVar38,2);
            auVar29._0_4_ = auVar25._0_4_ & auVar55._0_4_;
            auVar29._4_4_ = auVar25._4_4_ & auVar55._4_4_;
            auVar29._8_4_ = auVar25._8_4_ & auVar55._8_4_;
            auVar29._12_4_ = auVar25._12_4_ & auVar55._12_4_;
            uVar8 = vmovmskps_avx(auVar29);
            if ((~(byte)uVar8 & 7) == 0) {
              auVar39._0_4_ = (float)auStack_168._0_4_ + _DAT_146159ef0;
              auVar39._4_4_ = (float)auStack_168._4_4_ + _DAT_146159ef0;
              auVar39._8_4_ = (float)uStack_160 + _DAT_146159ef0;
              auVar39._12_4_ = uStack_160._4_4_ + _DAT_146159ef0;
              auVar30._0_4_ = (float)auStack_168._0_4_ + _DAT_146159ef4;
              auVar30._4_4_ = (float)auStack_168._4_4_ + _DAT_146159ef4;
              auVar30._8_4_ = (float)uStack_160 + _DAT_146159ef4;
              auVar30._12_4_ = uStack_160._4_4_ + _DAT_146159ef4;
              auVar25 = vcmpps_avx(auVar39,auVar56._0_16_,2);
              auVar55 = vcmpps_avx(auVar56._0_16_,auVar30,2);
              auVar31._0_4_ = auVar25._0_4_ & auVar55._0_4_;
              auVar31._4_4_ = auVar25._4_4_ & auVar55._4_4_;
              auVar31._8_4_ = auVar25._8_4_ & auVar55._8_4_;
              auVar31._12_4_ = auVar25._12_4_ & auVar55._12_4_;
              uVar8 = vmovmskps_avx(auVar31);
              if ((~(byte)uVar8 & 7) == 0) goto LAB_1400768d6;
            }
          }
          auStack_108 = auVar69._0_16_;
          FUN_140076af0(param_1,uVar15 & 0xffffffff,auStack_108);
          uStack_118 = auStack_168;
          uStack_110 = uStack_160;
          FUN_140076b90(param_1,uVar15 & 0xffffffff,&uStack_118);
          uVar9 = func_0x000144ee3be0(*param_1);
          uStack_150 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
        }
      }
      else {
        if ((lVar11 == 0) || ((*(byte *)(lStack_178 + 0x9c) & 1) == 0)) {
          FUN_1453c6260(lStack_178,0xffffffffffffffff,0xffffffffffffffff,0);
          lVar11 = *(longlong *)(lVar4 + 0x88);
        }
        *(undefined8 *)(lVar11 + 8 + (ulonglong)(uint)((int)uStack_170 << 4)) = 0;
      }
    }
LAB_1400768d6:
    lVar18 = lVar18 + 0x50;
  } while (lStack_138 != lVar18);
  if ((uStack_150 & 1) == 0) {
    return;
  }
  lVar12 = *param_1;
  uVar14 = 0;
  uVar17 = 0xffffffff;
  lVar18 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar15 = uVar14;
  if (*(short *)(lVar18 + 0x12e8) != 0) goto code_r0x0001402b3d7b;
  psVar1 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370);
  sVar7 = *psVar1;
  if (sVar7 == 0) {
    auStack_98._8_8_ = &UNK_1402b3c2c;
    FUN_1400716e0(0x14a95deb8);
    sVar7 = *psVar1;
  }
  *psVar1 = sVar7 + 1;
  lVar11 = *(longlong *)(lVar12 + 0x38);
  uVar15 = 0;
  if (lVar11 == 0) goto code_r0x0001402b3d7b;
  puVar2 = (ushort *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
  uVar13 = *puVar2;
  uVar17 = (uint)uVar13;
  cVar6 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
  if ((ulonglong)uVar13 == 0) {
    uVar17 = 0;
code_r0x0001402b3d10:
    *puVar2 = (short)uVar17 + 1;
    if (cVar6 == '\0') {
      auStack_98._8_8_ = &UNK_1402b3d22;
      func_0x0001455db994();
    }
  }
  else {
    uStack_59 = 0;
    lVar4 = *(longlong *)(lVar11 + 0xa8);
    uVar19 = (uint7)((ulonglong)lVar4 >> 8);
    if (cVar6 == '\0') {
      uVar14 = 0;
      plVar10 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
      cVar6 = '\0';
      do {
        if (cVar6 == '\0') {
          auStack_98._8_8_ = &UNK_1402b3cdc;
          func_0x0001455db994();
          cVar6 = *(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8);
        }
        if (*plVar10 == lVar4) goto code_r0x0001402b3d5b;
        uVar17 = (uint)*puVar2;
        uVar14 = uVar14 + 1;
        plVar10 = plVar10 + 2;
      } while (uVar14 < *puVar2);
      uVar14 = CONCAT71(uVar19,uStack_59);
      goto code_r0x0001402b3d10;
    }
    uVar14 = 0;
    plVar10 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
    do {
      if (*plVar10 == lVar4) goto code_r0x0001402b3d5b;
      uVar14 = uVar14 + 1;
      plVar10 = plVar10 + 2;
    } while (uVar13 != uVar14);
    uVar14 = (ulonglong)uVar19 << 8;
    *puVar2 = uVar13 + 1;
  }
  lVar11 = *(longlong *)(lVar11 + 0xa8);
  lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  *(longlong *)(lVar4 + 0x12f0 + (ulonglong)(uVar17 << 4)) = lVar11;
  *(undefined2 *)(lVar4 + 0x12f8 + (ulonglong)(uVar17 << 4)) = 1;
  auStack_98._8_8_ = &UNK_1402b3d59;
  FUN_1400716e0(lVar11 + 8);
  uVar15 = uVar14;
code_r0x0001402b3d7b:
  lVar11 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x20);
  if ((*(char *)(lVar11 + 0x10) == '\x06') && (*(short *)(lVar11 + 0x9a) != 0)) {
    auStack_98._8_8_ = &UNK_1402b3da2;
    FUN_1450354d0(lVar11);
    auStack_98._8_8_ = &UNK_1402b3dad;
    FUN_145035af0(lVar11,uVar15 & 0xffffffff);
    auStack_98._8_8_ = &UNK_1402b3dba;
    FUN_144f5b4e0(lVar11,auStack_58);
    if (*(int *)(lVar12 + 0x10) != 0) {
      if (*(longlong *)(lVar12 + 0x38) != 0) {
        pbVar3 = (byte *)(*(longlong *)(lVar12 + 0x38) + 0xcf);
        *pbVar3 = *pbVar3 | 1;
      }
      *(byte *)(lVar12 + 0x18) = *(byte *)(lVar12 + 0x18) | 4;
      if (*(short *)(lVar12 + 0x13c) == -1) {
        auStack_98._8_8_ = &UNK_1402b3ded;
        FUN_1420f2150(_DAT_14abbf348,lVar12);
      }
    }
  }
  if (*(short *)(lVar18 + 0x12e8) == 0) {
    if (-1 < (int)uVar17) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        auStack_98._8_8_ = &UNK_1402b3e20;
        func_0x0001455db994();
      }
      lVar12 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      psVar1 = (short *)(lVar12 + 0x12f8 + (ulonglong)uVar17 * 0x10);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 == 0) {
        lVar12 = *(longlong *)(lVar12 + 0x12f0 + (ulonglong)uVar17 * 0x10);
        lVar18 = *(longlong *)(lVar12 + 0x20);
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar11 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
        }
        else {
          lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          *(undefined1 *)(lVar4 + 0x1440) = 1;
          auStack_98._8_8_ = &UNK_1402b3f4a;
          lVar11 = FUN_1400063f0();
          *(longlong *)(lVar4 + 0x1438) = lVar11;
        }
        if (lVar11 != lVar18) {
          auStack_98._8_8_ = &UNK_1402b3e85;
          FUN_1402c59f0(lVar12 + 8);
        }
        psVar1 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
        *psVar1 = *psVar1 + -1;
      }
    }
    psVar1 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370);
    *psVar1 = *psVar1 + -1;
    lVar12 = _DAT_14a95ded0;
    if (*psVar1 == 0) {
      if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
        lVar18 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
      }
      else {
        lVar11 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        *(undefined1 *)(lVar11 + 0x1440) = 1;
        auStack_98._8_8_ = &UNK_1402b3f26;
        lVar18 = FUN_1400063f0();
        *(longlong *)(lVar11 + 0x1438) = lVar18;
      }
      lVar11 = _DAT_14a95ded0;
      if (lVar18 != lVar12) {
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar12 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
        }
        else {
          lVar18 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          *(undefined1 *)(lVar18 + 0x1440) = 1;
          stack0xffffffffffffffa0 = &UNK_1402c5b66;
          lVar12 = FUN_1400063f0();
          *(longlong *)(lVar18 + 0x1438) = lVar12;
        }
        if (lVar12 != lVar11) {
          LOCK();
          uVar17 = uRam000000014a95deb8 - 1;
          UNLOCK();
          uVar16 = uRam000000014a95deb8 - 1;
          uRam000000014a95deb8 = uVar17;
          if ((char)uVar16 == '\0') {
            if ((uVar16 & 0xff0000) == 0) {
              if ((uVar16 & 0xff00) != 0) {
                do {
                  LOCK();
                  bVar21 = uVar17 != uRam000000014a95deb8;
                  uVar16 = uVar17 & 0xffff00ff;
                  if (bVar21) {
                    uVar17 = uRam000000014a95deb8;
                    uVar16 = uRam000000014a95deb8;
                  }
                  uRam000000014a95deb8 = uVar16;
                  UNLOCK();
                } while (bVar21);
                uVar17 = uVar17 >> 8 & 0xff;
                if (uVar17 != 0) {
                  lVar12 = lRam000000014a95dec0;
                  do {
                    while (-1 < lVar12) {
                      LOCK();
                      lVar18 = lVar12;
                      lVar11 = lVar12 + ((ulonglong)uVar17 << 0x20);
                      if (lVar12 != lRam000000014a95dec0) {
                        lVar18 = lRam000000014a95dec0;
                        lVar11 = lRam000000014a95dec0;
                      }
                      lRam000000014a95dec0 = lVar11;
                      UNLOCK();
                      bVar21 = lVar12 == lVar18;
                      lVar12 = lVar18;
                      if (bVar21) {
                        return;
                      }
                    }
                    stack0xffffffffffffffa0 = &UNK_1402c5b3f;
                    cVar6 = FUN_1400062d0(0x14a95dec0,uVar17,&stack0xffffffffffffffc8);
                  } while (cVar6 == '\0');
                }
              }
            }
            else {
              do {
                if ((uVar16 & 0xff0000) == 0) {
                  return;
                }
                LOCK();
                bVar21 = uVar16 != uRam000000014a95deb8;
                uVar17 = uVar16;
                uVar5 = uVar16 - 0x10000;
                if (bVar21) {
                  uVar17 = uRam000000014a95deb8;
                  uVar5 = uRam000000014a95deb8;
                }
                uRam000000014a95deb8 = uVar5;
                UNLOCK();
                lVar12 = lRam000000014a95dec8;
                if (!bVar21) {
                  do {
                    while (lVar12 < 0) {
                      stack0xffffffffffffffa0 = &UNK_1402c5aa3;
                      cVar6 = FUN_1400062d0(0x14a95dec8,1,&stack0xffffffffffffffc8);
                      uVar17 = uVar16;
                      if (cVar6 != '\0') goto code_r0x0001402c5ac2;
                    }
                    LOCK();
                    lVar18 = lVar12;
                    lVar11 = lVar12 + 0x100000000;
                    if (lVar12 != lRam000000014a95dec8) {
                      lVar18 = lRam000000014a95dec8;
                      lVar11 = lRam000000014a95dec8;
                    }
                    lRam000000014a95dec8 = lVar11;
                    UNLOCK();
                    bVar22 = lVar12 != lVar18;
                    uVar17 = uVar16;
                    lVar12 = lVar18;
                  } while (bVar22);
                }
code_r0x0001402c5ac2:
                uVar16 = uVar17;
              } while (bVar21);
            }
          }
        }
        return;
      }
    }
  }
  return;
code_r0x0001402b3d5b:
  uVar17 = (uint)uVar14 & 0xffff;
  uVar15 = CONCAT71(uVar19,uStack_59);
  psVar1 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f8 + uVar14 * 0x10);
  *psVar1 = *psVar1 + 1;
  goto code_r0x0001402b3d7b;
}

