// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d1530  size: 2879 bytes
// Name:    FUN_1400d1530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450128a0, FUN_145012860, FUN_144f64050, FUN_1434071d0, FUN_144db6f00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d1530(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,int param_7,uint param_8)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  float fVar12;
  bool bVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined *puVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  short sVar23;
  short sVar32;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [64];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [64];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined1 auVar83 [16];
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar84 [64];
  undefined1 auVar88 [16];
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  longlong lStack_1b0;
  undefined1 auStack_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  uint uStack_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined *puStack_108;
  longlong *plStack_100;
  
  cVar1 = *(char *)(param_1 + 0x60);
  iVar17 = param_8 + 2;
  lStack_1b0 = param_2 + 0x10;
  uStack_198 = _DAT_145fc6f10;
  uStack_194 = _DAT_145fc6f10;
  uStack_190 = _DAT_145fc6f10;
  uStack_18c = _DAT_145fc6f10;
  auVar35._4_4_ = _DAT_14615a290;
  auVar35._0_4_ = _DAT_14615a290;
  auVar35._8_4_ = _DAT_14615a290;
  auVar35._12_4_ = _DAT_14615a290;
  _auStack_1a8 = vrcpps_avx(auVar35);
  bVar13 = true;
  do {
    bVar11 = bVar13;
    if (bVar11) {
      uVar14 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),iVar17);
      FUN_145012860(&fStack_1f8,param_2,uVar14,param_8);
      fStack_1f8 = 14959.094;
      fStack_1f4 = 1.4013e-45;
      lVar18 = *(longlong *)(CONCAT44(fStack_1ec,fStack_1f0) + 0x3b30);
      iVar15 = func_0x0001450141d0(&fStack_1f8);
      puVar19 = &UNK_14669f8d8;
    }
    else {
      uVar14 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),iVar17);
      FUN_145012860(&fStack_1f8,param_2,uVar14,param_8);
      fStack_1f8 = 14959.094;
      fStack_1f4 = 1.4013e-45;
      lVar18 = *(longlong *)(CONCAT44(fStack_1ec,fStack_1f0) + 0x3b30);
      iVar15 = func_0x0001450141d0(&fStack_1f8);
      puVar19 = &UNK_14669f8d0;
    }
    iVar15 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar18 + 0x10) + 0x80),
                                 *(undefined4 *)(puVar19 + (longlong)iVar15 * 4));
    plVar8 = (longlong *)CONCAT44(fStack_1ec,fStack_1f0);
    lVar18 = (ulonglong)*(uint *)(param_5 + 4) * 0x10;
    *(uint *)(param_5 + 4) = *(uint *)(param_5 + 4) + 1;
    *(longlong **)(param_5 + 8 + lVar18) = plVar8;
    *(int *)(param_5 + 0x10 + lVar18) = iVar15;
    if ((((*(byte *)(param_3 + 0xe1) & 0x40) == 0) && (*(longlong *)(param_3 + 8) != 0)) &&
       ((cVar1 == '\x02' || ((*(byte *)(param_3 + 0x140) & 8) == 0)))) {
      FUN_144db6f00(lStack_1b0,&fStack_1f8,*(undefined4 *)(param_1 + 0x178));
      auVar69 = ZEXT464(*(uint *)(param_3 + 0xe4));
      auVar78 = ZEXT1664(CONCAT412(fStack_1ec,CONCAT48(fStack_1f0,CONCAT44(fStack_1f4,fStack_1f8))))
      ;
      fVar66 = *(float *)(*(longlong *)(*(longlong *)(param_3 + 8) + 0x928) + 0x28);
      iVar16 = func_0x000144e05fa0(plVar8[1]);
      auVar35 = auVar78._0_16_;
      fVar37 = auVar69._0_4_;
      if (iVar15 == iVar16) {
        auVar29 = ZEXT816(0);
        fVar38 = fVar37;
      }
      else {
        uVar14 = (**(code **)(*plVar8 + 0xf0))(plVar8,iVar15);
        (**(code **)(*plVar8 + 0x108))(plVar8,uVar14,&fStack_1f8);
        auVar35 = auVar78._0_16_;
        auVar29._4_4_ = fStack_1e4;
        auVar29._0_4_ = fStack_1e8;
        auVar29._8_4_ = fStack_1e0;
        auVar29._12_4_ = fStack_1dc;
        fVar37 = *(float *)(param_3 + 0xe4);
        fVar38 = auVar69._0_4_;
      }
      auVar35 = vshufpd_avx(auVar35,auVar35,1);
      auVar62 = vshufpd_avx(auVar29,auVar29,1);
      fVar66 = fVar37 * auVar62._0_4_ - (auVar35._0_4_ * fVar38 - fVar66);
    }
    else {
      iVar16 = func_0x000144e05fa0(plVar8[1]);
      if (iVar15 == iVar16) {
        fVar66 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
      }
      else {
        uVar14 = (**(code **)(*plVar8 + 0xf0))(plVar8,iVar15);
        (**(code **)(*plVar8 + 0x108))(plVar8,uVar14,&fStack_1f8);
        fVar66 = fStack_1e8;
        fVar37 = fStack_1e4;
        fVar38 = fStack_1e0;
        fVar39 = fStack_1dc;
      }
      (**(code **)(*plVar8 + 0x88))(plVar8,&fStack_1f8);
      auVar62._4_4_ = fStack_1e4;
      auVar62._0_4_ = fStack_1e8;
      auVar62._8_4_ = fStack_1e0;
      auVar62._12_4_ = fStack_1dc;
      auVar35 = vshufps_avx(auVar62,auStack_1d8,0x33);
      auVar35 = vshufps_avx(auVar62,auVar35,0x2f);
      auVar69 = ZEXT1664(CONCAT412((auVar35._12_4_ + _DAT_145fc6ed8) * fVar39,
                                   CONCAT48((auVar35._8_4_ + _DAT_145fc6ed8) * fVar38,
                                            CONCAT44((auVar35._4_4_ + _DAT_145fc6ed8) * fVar37,
                                                     (auVar35._0_4_ + _DAT_145fc6ed8) * fVar66))));
      (**(code **)(*plVar8 + 0x88))(plVar8,&fStack_148);
      fVar66 = auVar69._0_4_;
      auVar62 = auVar69._0_16_;
      auVar35 = vshufps_avx(auVar62,auVar62,0x55);
      auVar62 = vshufps_avx(auVar62,auVar62,0xaa);
      auVar47._0_4_ =
           auVar62._0_4_ * fStack_128 +
           auVar35._0_4_ * fStack_138 + fVar66 * fStack_148 + fStack_118;
      auVar47._4_4_ =
           auVar62._4_4_ * fStack_124 +
           auVar35._4_4_ * fStack_134 + fVar66 * fStack_144 + fStack_114;
      auVar47._8_4_ =
           auVar62._8_4_ * fStack_120 +
           auVar35._8_4_ * fStack_130 + fVar66 * fStack_140 + fStack_110;
      auVar47._12_4_ =
           auVar62._12_4_ * fStack_11c +
           auVar35._12_4_ * fStack_12c + fVar66 * fStack_13c + fStack_10c;
      auVar35 = vshufpd_avx(auVar47,auVar47,1);
      fVar66 = auVar35._0_4_ - *(float *)(param_3 + 0xb8);
    }
    uVar2 = *(uint *)(param_5 + 0x2c);
    *(uint *)(param_5 + 0x2c) = uVar2 + 1;
    *(float *)(param_5 + 0x30 + (ulonglong)uVar2 * 4) = fVar66;
    iVar16 = func_0x000144e05fa0(plVar8[1]);
    if (iVar15 == iVar16) {
      fVar66 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
      fVar39 = 0.0;
      auVar20 = _DAT_145fc6ee0;
    }
    else {
      uVar14 = (**(code **)(*plVar8 + 0xf0))(plVar8,iVar15);
      (**(code **)(*plVar8 + 0x108))(plVar8,uVar14,&fStack_1f8);
      auVar20._4_4_ = fStack_1f4;
      auVar20._0_4_ = fStack_1f8;
      auVar20._8_4_ = fStack_1f0;
      auVar20._12_4_ = fStack_1ec;
      fVar66 = fStack_1e8;
      fVar37 = fStack_1e4;
      fVar38 = fStack_1e0;
      fVar39 = fStack_1dc;
    }
    auVar24._0_4_ = auVar20._0_4_ + auVar20._0_4_;
    auVar24._4_4_ = auVar20._4_4_ + auVar20._4_4_;
    auVar24._8_4_ = auVar20._8_4_ + auVar20._8_4_;
    auVar24._12_4_ = auVar20._12_4_ + auVar20._12_4_;
    auVar35 = vshufps_avx(auVar20,auVar20,0xff);
    auVar62 = vshufps_avx(auVar20,auVar20,0xc9);
    auVar47 = vshufps_avx(auVar20,auVar20,0xd2);
    auVar29 = vshufps_avx(auVar24,auVar24,0xc9);
    auVar20 = vshufps_avx(auVar24,auVar24,0xd2);
    auVar67._0_4_ = auVar47._0_4_ * auVar24._0_4_ + auVar29._0_4_ * auVar35._0_4_;
    auVar67._4_4_ = auVar47._4_4_ * auVar24._4_4_ + auVar29._4_4_ * auVar35._4_4_;
    auVar67._8_4_ = auVar47._8_4_ * auVar24._8_4_ + auVar29._8_4_ * auVar35._8_4_;
    auVar67._12_4_ = auVar47._12_4_ * auVar24._12_4_ + auVar29._12_4_ * auVar35._12_4_;
    auVar40._0_4_ = -(auVar35._0_4_ * auVar20._0_4_) + auVar62._0_4_ * auVar24._0_4_;
    auVar40._4_4_ = -(auVar35._4_4_ * auVar20._4_4_) + auVar62._4_4_ * auVar24._4_4_;
    auVar40._8_4_ = -(auVar35._8_4_ * auVar20._8_4_) + auVar62._8_4_ * auVar24._8_4_;
    auVar40._12_4_ = -(auVar35._12_4_ * auVar20._12_4_) + auVar62._12_4_ * auVar24._12_4_;
    auVar41._0_4_ =
         -(auVar20._0_4_ * auVar47._0_4_) - (auVar62._0_4_ * auVar29._0_4_ - _DAT_145fc6ed8);
    auVar41._4_4_ =
         -(auVar20._4_4_ * auVar47._4_4_) - (auVar62._4_4_ * auVar29._4_4_ - _DAT_145fc6ed8);
    auVar41._8_4_ =
         -(auVar20._8_4_ * auVar47._8_4_) - (auVar62._8_4_ * auVar29._8_4_ - _DAT_145fc6ed8);
    auVar41._12_4_ =
         -(auVar20._12_4_ * auVar47._12_4_) - (auVar62._12_4_ * auVar29._12_4_ - _DAT_145fc6ed8);
    auVar35 = vblendps_avx(auVar67,auVar40,2);
    auVar62 = vblendps_avx(auVar41,auVar67,2);
    auVar47 = vblendps_avx(auVar40,auVar41,2);
    auVar35 = vblendps_avx(auVar41,auVar35,3);
    auVar78 = ZEXT1664(auVar35);
    auVar35 = vblendps_avx(auVar40,auVar62,3);
    auVar69 = ZEXT1664(auVar35);
    auVar35 = vblendps_avx(auVar67,auVar47,3);
    auVar84 = ZEXT1664(auVar35);
    fVar87 = _DAT_145fc6ed8;
    fVar63 = _DAT_145fc6ed8;
    fVar64 = _DAT_145fc6ed8;
    fVar65 = _DAT_145fc6ed8;
    (**(code **)(*plVar8 + 0x88))(plVar8,&fStack_1f8);
    auVar6._4_4_ = fStack_1e4;
    auVar6._0_4_ = fStack_1e8;
    auVar6._8_4_ = fStack_1e0;
    auVar6._12_4_ = fStack_1dc;
    auVar42._0_12_ = ZEXT812(0);
    auVar42._12_4_ = 0;
    lVar18 = (ulonglong)*(uint *)(param_5 + 0x44) * 0x30;
    *(uint *)(param_5 + 0x44) = *(uint *)(param_5 + 0x44) + 1;
    fVar12 = _DAT_14615a290;
    auVar35 = vshufps_avx(auStack_1d8,auVar6,0x33);
    auVar35 = vshufps_avx(auVar6,auVar35,0x8f);
    auVar80._0_4_ = fVar66 * (auVar35._0_4_ + fVar87);
    auVar80._4_4_ = fVar37 * (auVar35._4_4_ + fVar63);
    auVar80._8_4_ = fVar38 * (auVar35._8_4_ + fVar64);
    auVar80._12_4_ = fVar39 * (auVar35._12_4_ + fVar65);
    fVar66 = auVar69._0_4_;
    auVar25._0_4_ = fVar66 * fVar66;
    fVar38 = auVar69._4_4_;
    auVar25._4_4_ = fVar38 * fVar38;
    fVar3 = auVar69._8_4_;
    auVar25._8_4_ = fVar3 * fVar3;
    fVar85 = auVar69._12_4_;
    auVar25._12_4_ = fVar85 * fVar85;
    auVar35 = vblendps_avx(auVar25,auVar42,8);
    auVar35 = vhaddps_avx(auVar35,auVar35);
    auVar62 = vhaddps_avx(auVar35,auVar35);
    auVar35 = vrsqrtps_avx(auVar62);
    fVar37 = auVar35._0_4_;
    fVar39 = auVar35._4_4_;
    fVar82 = auVar35._8_4_;
    fVar86 = auVar35._12_4_;
    auVar50._4_4_ = _DAT_146159bfc;
    auVar50._0_4_ = _DAT_146159bfc;
    auVar50._8_4_ = _DAT_146159bfc;
    auVar50._12_4_ = _DAT_146159bfc;
    auVar35 = vcmpps_avx(auVar50,auVar62,2);
    auVar70._0_4_ =
         (float)(auVar35._0_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar37 * fVar37 * auVar62._0_4_) + _DAT_145fc6edc) *
                        fVar37 + fVar37) * auVar62._0_4_));
    auVar70._4_4_ =
         (float)(auVar35._4_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar39 * fVar39 * auVar62._4_4_) + _DAT_145fc6edc) *
                        fVar39 + fVar39) * auVar62._4_4_));
    auVar70._8_4_ =
         (float)(auVar35._8_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar82 * fVar82 * auVar62._8_4_) + _DAT_145fc6edc) *
                        fVar82 + fVar82) * auVar62._8_4_));
    auVar70._12_4_ =
         (float)(auVar35._12_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar86 * fVar86 * auVar62._12_4_) + _DAT_145fc6edc) *
                        fVar86 + fVar86) * auVar62._12_4_));
    auVar43._0_4_ = (uint)auVar70._0_4_ ^ uStack_198;
    auVar43._4_4_ = (uint)auVar70._4_4_ ^ uStack_194;
    auVar43._8_4_ = (uint)auVar70._8_4_ ^ uStack_190;
    auVar43._12_4_ = (uint)auVar70._12_4_ ^ uStack_18c;
    auVar35 = vrcpps_avx(auVar70);
    fVar39 = auVar35._0_4_;
    fVar82 = auVar35._4_4_;
    fVar86 = auVar35._8_4_;
    fVar37 = auVar35._12_4_;
    auVar51._0_4_ = -((auVar70._0_4_ * fVar39 - fVar87) * fVar39) + fVar39;
    auVar51._4_4_ = -((auVar70._4_4_ * fVar82 - fVar63) * fVar82) + fVar82;
    auVar51._8_4_ = -((auVar70._8_4_ * fVar86 - fVar64) * fVar86) + fVar86;
    auVar51._12_4_ = -((auVar70._12_4_ * fVar37 - fVar65) * fVar37) + fVar37;
    auVar35 = vcmpps_avx(auVar70,auVar43,0);
    auVar44._4_4_ = _DAT_14615b36c;
    auVar44._0_4_ = _DAT_14615b36c;
    auVar44._8_4_ = _DAT_14615b36c;
    auVar44._12_4_ = _DAT_14615b36c;
    auVar35 = vblendvps_avx(auVar51,auVar44,auVar35);
    fVar37 = auVar35._0_4_;
    auVar45._0_4_ = fVar66 * fVar37;
    fVar66 = auVar35._4_4_;
    auVar45._4_4_ = fVar38 * fVar66;
    fVar38 = auVar35._8_4_;
    auVar45._8_4_ = fVar3 * fVar38;
    fVar39 = auVar35._12_4_;
    auVar45._12_4_ = fVar85 * fVar39;
    auVar52._0_4_ = auVar84._0_4_ * fVar37;
    auVar52._4_4_ = auVar84._4_4_ * fVar66;
    auVar52._8_4_ = auVar84._8_4_ * fVar38;
    auVar52._12_4_ = auVar84._12_4_ * fVar39;
    auVar73._0_4_ = auVar78._0_4_ * fVar37;
    auVar73._4_4_ = auVar78._4_4_ * fVar66;
    auVar73._8_4_ = auVar78._8_4_ * fVar38;
    auVar73._12_4_ = auVar78._12_4_ * fVar39;
    auVar35 = vshufps_avx(auVar45,auVar45,0x55);
    auVar62 = vshufps_avx(auVar45,auVar45,0xaa);
    auVar47 = vshufps_avx(auVar52,auVar52,0xaa);
    auVar29 = vshufps_avx(auVar52,auVar52,0x55);
    fVar66 = auStack_1d8._0_4_;
    auVar26._0_4_ = fVar66 * auVar62._0_4_ + fStack_1e8 * auVar35._0_4_ + auVar45._0_4_ * fStack_1f8
    ;
    fVar37 = auStack_1d8._4_4_;
    auVar26._4_4_ = fVar37 * auVar62._4_4_ + fStack_1e4 * auVar35._4_4_ + auVar45._0_4_ * fStack_1f4
    ;
    fVar38 = auStack_1d8._8_4_;
    auVar26._8_4_ = fVar38 * auVar62._8_4_ + fStack_1e0 * auVar35._8_4_ + auVar45._0_4_ * fStack_1f0
    ;
    fVar39 = auStack_1d8._12_4_;
    auVar26._12_4_ =
         fVar39 * auVar62._12_4_ + fStack_1dc * auVar35._12_4_ + auVar45._0_4_ * fStack_1ec;
    auVar62 = vshufps_avx(auVar73,auVar73,0x55);
    auVar20 = vshufps_avx(auVar73,auVar73,0xaa);
    auVar53._0_4_ = fVar66 * auVar47._0_4_ + fStack_1e8 * auVar29._0_4_ + auVar52._0_4_ * fStack_1f8
    ;
    auVar53._4_4_ = fVar37 * auVar47._4_4_ + fStack_1e4 * auVar29._4_4_ + auVar52._0_4_ * fStack_1f4
    ;
    auVar53._8_4_ = fVar38 * auVar47._8_4_ + fStack_1e0 * auVar29._8_4_ + auVar52._0_4_ * fStack_1f0
    ;
    auVar53._12_4_ =
         fVar39 * auVar47._12_4_ + fStack_1dc * auVar29._12_4_ + auVar52._0_4_ * fStack_1ec;
    auVar47 = vshufps_avx(auVar80,auVar80,0xaa);
    auVar35 = vblendps_avx(auVar26,auVar53,2);
    auVar83._0_4_ = fVar66 * auVar20._0_4_ + fStack_1e8 * auVar62._0_4_ + auVar73._0_4_ * fStack_1f8
    ;
    auVar83._4_4_ = fVar37 * auVar20._4_4_ + fStack_1e4 * auVar62._4_4_ + auVar73._0_4_ * fStack_1f4
    ;
    auVar83._8_4_ = fVar38 * auVar20._8_4_ + fStack_1e0 * auVar62._8_4_ + auVar73._0_4_ * fStack_1f0
    ;
    auVar83._12_4_ =
         fVar39 * auVar20._12_4_ + fStack_1dc * auVar62._12_4_ + auVar73._0_4_ * fStack_1ec;
    auVar62 = vshufps_avx(auVar80,auVar80,0x55);
    auVar46._0_4_ =
         fVar66 * auVar47._0_4_ +
         fStack_1e8 * auVar62._0_4_ + fStack_1f8 * auVar80._0_4_ + auStack_1c8._0_4_;
    auVar46._4_4_ =
         fVar37 * auVar47._4_4_ +
         fStack_1e4 * auVar62._4_4_ + fStack_1f4 * auVar80._0_4_ + auStack_1c8._4_4_;
    auVar46._8_4_ =
         fVar38 * auVar47._8_4_ +
         fStack_1e0 * auVar62._8_4_ + fStack_1f0 * auVar80._0_4_ + auStack_1c8._8_4_;
    auVar46._12_4_ =
         fVar39 * auVar47._12_4_ +
         fStack_1dc * auVar62._12_4_ + fStack_1ec * auVar80._0_4_ + auStack_1c8._12_4_;
    auVar33._0_4_ = auVar70._0_4_ + _DAT_145fc6f48;
    auVar33._4_4_ = auVar70._4_4_ + _DAT_145fc6f48;
    auVar33._8_4_ = auVar70._8_4_ + _DAT_145fc6f48;
    auVar33._12_4_ = auVar70._12_4_ + _DAT_145fc6f48;
    auVar29 = vinsertps_avx(auVar53,auVar33,0x30);
    auVar20 = vinsertps_avx(auVar83,auVar33,0xb0);
    auVar47 = vshufps_avx(auVar53,auVar53,0x55);
    auVar35 = vblendps_avx(auVar20,auVar35,3);
    auVar62 = vshufps_avx(auVar35,auVar35,0x49);
    auVar5 = vshufps_avx(auVar35,auVar35,0x92);
    auVar6 = vshufps_avx(auVar35,auVar35,0x24);
    auVar74._0_4_ = auVar5._0_4_ + auVar62._0_4_;
    auVar74._4_4_ = auVar5._4_4_ + auVar62._4_4_;
    auVar74._8_4_ = auVar5._8_4_ + auVar62._8_4_;
    auVar74._12_4_ = auVar5._12_4_ + auVar62._12_4_;
    auVar62 = vblendps_avx(auVar26,auVar29,3);
    auVar62 = vblendps_avx(auVar62,auVar83,2);
    auVar62 = vshufps_avx(auVar62,auVar62,9);
    auVar81._0_4_ = auVar74._0_4_ + auVar6._0_4_;
    auVar81._4_4_ = auVar74._4_4_ + auVar6._4_4_;
    auVar81._8_4_ = auVar74._8_4_ + auVar6._8_4_;
    auVar81._12_4_ = auVar74._12_4_ + auVar6._12_4_;
    auVar35 = vsubps_avx(auVar35,auVar74);
    auVar35 = vblendps_avx(auVar35,auVar81,8);
    auVar68._0_4_ = fVar87 + auVar35._0_4_;
    auVar68._4_4_ = fVar63 + auVar35._4_4_;
    auVar68._8_4_ = fVar64 + auVar35._8_4_;
    auVar68._12_4_ = fVar65 + auVar35._12_4_;
    auVar35 = vrsqrtps_avx(auVar68);
    fVar66 = auVar35._0_4_;
    fVar37 = auVar35._4_4_;
    fVar38 = auVar35._8_4_;
    fVar39 = auVar35._12_4_;
    auVar35 = vblendps_avx(auVar29,auVar83,3);
    auVar35 = vshufps_avx(auVar35,auVar26,0x12);
    auVar79._0_4_ = auVar35._0_4_ + auVar62._0_4_;
    auVar79._4_4_ = auVar35._4_4_ + auVar62._4_4_;
    auVar79._8_4_ = auVar35._8_4_ + auVar62._8_4_;
    auVar79._12_4_ = auVar35._12_4_ + auVar62._12_4_;
    auVar6 = vsubps_avx(auVar35,auVar62);
    auVar75._0_4_ =
         ((-(_DAT_145fc6edc * fVar66 * fVar66 * auVar68._0_4_) + _DAT_145fc6edc) * fVar66 + fVar66)
         * _DAT_145fc6edc;
    auVar75._4_4_ =
         ((-(_DAT_145fc6edc * fVar37 * fVar37 * auVar68._4_4_) + _DAT_145fc6edc) * fVar37 + fVar37)
         * _DAT_145fc6edc;
    auVar75._8_4_ =
         ((-(_DAT_145fc6edc * fVar38 * fVar38 * auVar68._8_4_) + _DAT_145fc6edc) * fVar38 + fVar38)
         * _DAT_145fc6edc;
    auVar75._12_4_ =
         ((-(_DAT_145fc6edc * fVar39 * fVar39 * auVar68._12_4_) + _DAT_145fc6edc) * fVar39 + fVar39)
         * _DAT_145fc6edc;
    auVar35 = vblendps_avx(auVar79,auVar6,1);
    auVar62 = vblendps_avx(auVar79,auVar6,2);
    auVar35 = vshufps_avx(auVar35,auVar35,0x18);
    auVar62 = vshufpd_avx(auVar62,auVar62,1);
    auVar35 = vblendps_avx(auVar35,auVar68,1);
    auVar62 = vblendps_avx(auVar62,auVar68,2);
    auVar76._0_4_ = auVar75._0_4_ * auVar35._0_4_;
    auVar76._4_4_ = auVar75._0_4_ * auVar35._4_4_;
    auVar76._8_4_ = auVar75._0_4_ * auVar35._8_4_;
    auVar76._12_4_ = auVar75._0_4_ * auVar35._12_4_;
    auVar35 = vshufps_avx(auVar75,auVar75,0x55);
    auVar71._0_4_ = auVar35._0_4_ * auVar62._0_4_;
    auVar71._4_4_ = auVar35._4_4_ * auVar62._4_4_;
    auVar71._8_4_ = auVar35._8_4_ * auVar62._8_4_;
    auVar71._12_4_ = auVar35._12_4_ * auVar62._12_4_;
    auVar88._4_4_ = auVar26._0_4_;
    auVar88._0_4_ = auVar26._0_4_;
    auVar88._8_4_ = auVar26._0_4_;
    auVar88._12_4_ = auVar26._0_4_;
    auVar35 = vcmpps_avx(auVar88,auVar47,1);
    auVar62 = vblendvps_avx(auVar76,auVar71,auVar35);
    auVar35 = vshufps_avx(auVar79,auVar6,0xa1);
    auVar5 = vshufps_avx(auVar75,auVar75,0xaa);
    auVar35 = vblendps_avx(auVar35,auVar68,4);
    auVar72._0_4_ = auVar5._0_4_ * auVar35._0_4_;
    auVar72._4_4_ = auVar5._4_4_ * auVar35._4_4_;
    auVar72._8_4_ = auVar5._8_4_ * auVar35._8_4_;
    auVar72._12_4_ = auVar5._12_4_ * auVar35._12_4_;
    auVar5 = vshufps_avx(auVar83,auVar83,0xaa);
    auVar35 = vcmpps_avx(auVar47,auVar5,1);
    auVar47 = vcmpps_avx(auVar88,auVar5,1);
    auVar54._0_4_ = auVar47._0_4_ & auVar35._0_4_;
    auVar54._4_4_ = auVar47._4_4_ & auVar35._4_4_;
    auVar54._8_4_ = auVar47._8_4_ & auVar35._8_4_;
    auVar54._12_4_ = auVar47._12_4_ & auVar35._12_4_;
    auVar35 = vblendps_avx(auVar46,auStack_1c8,8);
    auVar62 = vblendvps_avx(auVar62,auVar72,auVar54);
    auVar27._0_4_ =
         auVar20._0_4_ * auVar20._0_4_ +
         auVar29._0_4_ * auVar29._0_4_ + auVar26._0_4_ * auVar26._0_4_;
    auVar27._4_4_ =
         auVar20._4_4_ * auVar20._4_4_ +
         auVar29._4_4_ * auVar29._4_4_ + auVar26._4_4_ * auVar26._4_4_;
    auVar27._8_4_ =
         auVar20._8_4_ * auVar20._8_4_ +
         auVar29._8_4_ * auVar29._8_4_ + auVar26._8_4_ * auVar26._8_4_;
    auVar27._12_4_ =
         auVar20._12_4_ * auVar20._12_4_ +
         auVar29._12_4_ * auVar29._12_4_ + auVar26._12_4_ * auVar26._12_4_;
    auVar47 = vrsqrtps_avx(auVar27);
    fVar66 = auVar47._0_4_;
    fVar37 = auVar47._4_4_;
    fVar38 = auVar47._8_4_;
    fVar39 = auVar47._12_4_;
    fVar82 = (-((float)auStack_1a8._0_4_ * _DAT_14615a290) + _DAT_145fc6ed8) *
             (float)auStack_1a8._0_4_ + (float)auStack_1a8._0_4_;
    fVar85 = (-((float)auStack_1a8._4_4_ * _DAT_14615a290) + _DAT_145fc6ed8) *
             (float)auStack_1a8._4_4_ + (float)auStack_1a8._4_4_;
    fVar86 = (-(fStack_1a0 * _DAT_14615a290) + _DAT_145fc6ed8) * fStack_1a0 + fStack_1a0;
    fVar87 = (-(fStack_19c * _DAT_14615a290) + _DAT_145fc6ed8) * fStack_19c + fStack_19c;
    auVar58._0_4_ = auVar35._0_4_ * fVar82;
    auVar58._4_4_ = auVar35._4_4_ * fVar85;
    auVar58._8_4_ = auVar35._8_4_ * fVar86;
    auVar58._12_4_ = auVar35._12_4_ * fVar87;
    auVar47 = vroundps_avx(auVar58,3);
    auVar77._0_4_ = -(auVar47._0_4_ * _DAT_14615a290) + auVar35._0_4_;
    auVar77._4_4_ = -(auVar47._4_4_ * _DAT_14615a290) + auVar35._4_4_;
    auVar77._8_4_ = -(auVar47._8_4_ * _DAT_14615a290) + auVar35._8_4_;
    auVar77._12_4_ = -(auVar47._12_4_ * _DAT_14615a290) + auVar35._12_4_;
    auVar59._0_4_ = (int)auVar47._0_4_;
    auVar59._4_4_ = (int)auVar47._4_4_;
    auVar59._8_4_ = (int)auVar47._8_4_;
    auVar59._12_4_ = (int)auVar47._12_4_;
    auVar35 = vpackssdw_avx(auVar59,auVar59);
    sVar23 = auVar35._0_2_;
    auVar5._0_2_ = sVar23 + auStack_1c8._0_2_;
    sVar32 = auVar35._2_2_;
    auVar5._2_2_ = sVar32 + auStack_1c8._2_2_;
    auVar5._4_2_ = sVar23 + auStack_1c8._4_2_;
    auVar5._6_2_ = sVar32 + auStack_1c8._6_2_;
    auVar5._8_2_ = sVar23 + auStack_1c8._8_2_;
    auVar5._10_2_ = sVar32 + auStack_1c8._10_2_;
    auVar5._12_2_ = sVar23 + auStack_1c8._12_2_;
    auVar5._14_2_ = sVar32 + auStack_1c8._14_2_;
    auVar35 = vblendps_avx(auVar46,auVar77,3);
    auVar29 = vshufps_avx(auVar75,auVar75,0xff);
    auVar35 = vblendps_avx(auVar35,auVar5,8);
    auVar47 = vpunpckhwd_avx(auVar35,auVar35);
    auVar47 = vpsrad_avx(auVar47,0x10);
    auVar47 = vcvtdq2ps_avx(auVar47);
    auVar47 = vshufpd_avx(auVar47,auVar47,3);
    auVar48._0_4_ = auVar47._0_4_ * _DAT_146159c90 + auVar35._0_4_;
    auVar48._4_4_ = auVar47._4_4_ * _UNK_146159c94 + auVar35._4_4_;
    auVar48._8_4_ = auVar47._8_4_ * _UNK_146159c98 + auVar35._8_4_;
    auVar48._12_4_ = auVar47._12_4_ * _UNK_146159c9c + auVar35._12_4_;
    auVar35 = vblendps_avx(auVar6,auVar68,8);
    auVar21._0_4_ = auVar29._0_4_ * auVar35._0_4_;
    auVar21._4_4_ = auVar29._4_4_ * auVar35._4_4_;
    auVar21._8_4_ = auVar29._8_4_ * auVar35._8_4_;
    auVar21._12_4_ = auVar29._12_4_ * auVar35._12_4_;
    auVar35 = vcmpps_avx(ZEXT816(0) << 0x20,auVar81,1);
    auVar60._0_4_ = auVar35._0_4_;
    auVar60._4_4_ = auVar60._0_4_;
    auVar60._8_4_ = auVar60._0_4_;
    auVar60._12_4_ = auVar60._0_4_;
    auVar35 = vblendvps_avx(auVar62,auVar21,auVar60);
    *(undefined1 (*) [16])(param_5 + 0x50 + lVar18) = auVar35;
    fVar3 = _DAT_145fc6edc;
    auVar55._0_4_ = fVar82 * auVar48._0_4_;
    auVar55._4_4_ = fVar85 * auVar48._4_4_;
    auVar55._8_4_ = fVar86 * auVar48._8_4_;
    auVar55._12_4_ = fVar87 * auVar48._12_4_;
    auVar35 = vroundps_avx(auVar55,3);
    auVar61._0_4_ = -(auVar35._0_4_ * fVar12) + auVar48._0_4_;
    auVar61._4_4_ = -(auVar35._4_4_ * fVar12) + auVar48._4_4_;
    auVar61._8_4_ = -(auVar35._8_4_ * fVar12) + auVar48._8_4_;
    auVar61._12_4_ = -(auVar35._12_4_ * fVar12) + auVar48._12_4_;
    auVar56._0_4_ = (int)auVar35._0_4_;
    auVar56._4_4_ = (int)auVar35._4_4_;
    auVar56._8_4_ = (int)auVar35._8_4_;
    auVar56._12_4_ = (int)auVar35._12_4_;
    auVar62 = vpackssdw_avx(auVar56,auVar56);
    auVar35 = vblendps_avx(auVar48,auVar61,3);
    auVar35 = vinsertps_avx(auVar35,auVar62,0x30);
    *(undefined1 (*) [16])(param_5 + 0x60 + lVar18) = auVar35;
    auVar57._4_4_ = _DAT_146159bfc;
    auVar57._0_4_ = _DAT_146159bfc;
    auVar57._8_4_ = _DAT_146159bfc;
    auVar57._12_4_ = _DAT_146159bfc;
    auVar35 = vcmpps_avx(auVar57,auVar27,2);
    auVar28._0_4_ =
         auVar35._0_4_ &
         (uint)(((-(fVar3 * fVar66 * fVar66 * auVar27._0_4_) + fVar3) * fVar66 + fVar66) *
               auVar27._0_4_);
    auVar28._4_4_ =
         auVar35._4_4_ &
         (uint)(((-(fVar3 * fVar37 * fVar37 * auVar27._4_4_) + fVar3) * fVar37 + fVar37) *
               auVar27._4_4_);
    auVar28._8_4_ =
         auVar35._8_4_ &
         (uint)(((-(fVar3 * fVar38 * fVar38 * auVar27._8_4_) + fVar3) * fVar38 + fVar38) *
               auVar27._8_4_);
    auVar28._12_4_ =
         auVar35._12_4_ &
         (uint)(((-(fVar3 * fVar39 * fVar39 * auVar27._12_4_) + fVar3) * fVar39 + fVar39) *
               auVar27._12_4_);
    *(undefined1 (*) [16])(param_5 + 0x70 + lVar18) = auVar28;
    bVar13 = false;
  } while (bVar11);
  if (((*(int *)(param_1 + 0x380) < param_7) ||
      ((*(byte *)(param_1 + 200 + (ulonglong)param_8 * 0x10) & 4) != 0)) &&
     ((FUN_1434071d0(*(undefined8 *)(param_1 + 0x198),param_2,param_8),
      (*(byte *)(param_1 + 200 + (ulonglong)param_8 * 0x10) & 4) != 0 ||
      (*(int *)(param_1 + 0x380) == 0)))) {
    FUN_144f64050(param_1 + 0x2a0,iVar17);
  }
  uVar7 = *(undefined8 *)(param_3 + 200);
  *(undefined8 *)(param_5 + 0xc0) = *(undefined8 *)(param_3 + 0xc0);
  *(undefined8 *)(param_5 + 200) = uVar7;
  uVar14 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),iVar17);
  FUN_145012860(&puStack_108,param_2,uVar14,param_8);
  puStack_108 = &UNK_14669bc60;
  lVar18 = plStack_100[0x766];
  iVar17 = func_0x0001450141d0(&puStack_108);
  iVar17 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar18 + 0x10) + 0x80),
                               *(undefined4 *)(&UNK_14669f8d8 + (longlong)iVar17 * 4));
  iVar15 = func_0x000144e05fa0(plStack_100[1]);
  auVar69 = ZEXT1264(ZEXT812(0));
  fVar66 = 0.0;
  fVar37 = 0.0;
  fVar38 = 0.0;
  fVar39 = 0.0;
  if (iVar17 != iVar15) {
    uVar14 = (**(code **)(*plStack_100 + 0xf0))(plStack_100,iVar17);
    (**(code **)(*plStack_100 + 0x108))(plStack_100,uVar14,&fStack_1f8);
    fVar66 = fStack_1e8;
    fVar37 = fStack_1e4;
    fVar38 = fStack_1e0;
    fVar39 = fStack_1dc;
  }
  (**(code **)(*plStack_100 + 0x88))(plStack_100,&fStack_1f8);
  auVar9._4_4_ = fStack_1e4;
  auVar9._0_4_ = fStack_1e8;
  auVar9._8_4_ = fStack_1e0;
  auVar9._12_4_ = fStack_1dc;
  auVar35 = vshufps_avx(auVar9,auStack_1d8,0x33);
  auVar35 = vshufps_avx(auVar9,auVar35,0x2f);
  auVar78 = ZEXT1664(CONCAT412(fVar39 * (auVar35._12_4_ + _DAT_145fc6ed8),
                               CONCAT48(fVar38 * (auVar35._8_4_ + _DAT_145fc6ed8),
                                        CONCAT44(fVar37 * (auVar35._4_4_ + _DAT_145fc6ed8),
                                                 fVar66 * (auVar35._0_4_ + _DAT_145fc6ed8)))));
  (**(code **)(*plStack_100 + 0x88))(plStack_100,&fStack_148);
  auVar10._4_4_ = fStack_114;
  auVar10._0_4_ = fStack_118;
  auVar10._8_4_ = fStack_110;
  auVar10._12_4_ = fStack_10c;
  fVar66 = auVar78._0_4_;
  auVar62 = auVar78._0_16_;
  auVar35 = vshufps_avx(auVar62,auVar62,0x55);
  auVar62 = vshufps_avx(auVar62,auVar62,0xaa);
  auVar22._0_4_ =
       auVar62._0_4_ * fStack_128 + auVar35._0_4_ * fStack_138 + fVar66 * fStack_148 + fStack_118;
  auVar22._4_4_ =
       auVar62._4_4_ * fStack_124 + auVar35._4_4_ * fStack_134 + fVar66 * fStack_144 + fStack_114;
  auVar22._8_4_ =
       auVar62._8_4_ * fStack_120 + auVar35._8_4_ * fStack_130 + fVar66 * fStack_140 + fStack_110;
  auVar22._12_4_ =
       auVar62._12_4_ * fStack_11c + auVar35._12_4_ * fStack_12c + fVar66 * fStack_13c + fStack_10c;
  auVar35 = vblendps_avx(auVar22,auVar10,8);
  auVar34._0_4_ = fVar82 * auVar35._0_4_;
  auVar34._4_4_ = fVar85 * auVar35._4_4_;
  auVar34._8_4_ = fVar86 * auVar35._8_4_;
  auVar34._12_4_ = fVar87 * auVar35._12_4_;
  auVar62 = vroundps_avx(auVar34,3);
  auVar49._0_4_ = auVar62._0_4_ * _DAT_14615ad78 + auVar35._0_4_;
  auVar49._4_4_ = auVar62._4_4_ * _DAT_14615ad78 + auVar35._4_4_;
  auVar49._8_4_ = auVar62._8_4_ * _DAT_14615ad78 + auVar35._8_4_;
  auVar49._12_4_ = auVar62._12_4_ * _DAT_14615ad78 + auVar35._12_4_;
  auVar30._0_4_ = (int)auVar62._0_4_;
  auVar30._4_4_ = (int)auVar62._4_4_;
  auVar30._8_4_ = (int)auVar62._8_4_;
  auVar30._12_4_ = (int)auVar62._12_4_;
  auVar35 = vblendps_avx(auVar22,auVar49,3);
  auVar62 = vpackssdw_avx(auVar30,auVar30);
  sVar23 = auVar62._0_2_;
  auVar4._0_2_ = sVar23 + SUB42(fStack_118,0);
  sVar32 = auVar62._2_2_;
  auVar4._2_2_ = sVar32 + (short)((uint)fStack_118 >> 0x10);
  auVar4._4_2_ = sVar23 + SUB42(fStack_114,0);
  auVar4._6_2_ = sVar32 + (short)((uint)fStack_114 >> 0x10);
  auVar4._8_2_ = sVar23 + SUB42(fStack_110,0);
  auVar4._10_2_ = sVar32 + (short)((uint)fStack_110 >> 0x10);
  auVar4._12_2_ = sVar23 + SUB42(fStack_10c,0);
  auVar4._14_2_ = sVar32 + (short)((uint)fStack_10c >> 0x10);
  auVar35 = vpblendd_avx2(auVar35,auVar4,8);
  *(undefined1 (*) [16])(param_5 + 0xb0) = auVar35;
  auVar62 = vblendps_avx(auVar35,auVar69._0_16_,4);
  *(undefined1 (*) [16])(param_5 + 0xb0) = auVar62;
  auVar47 = vsubps_avx(*(undefined1 (*) [16])(param_3 + 0xb0),auVar62);
  auVar35 = vpsubw_avx(*(undefined1 (*) [16])(param_3 + 0xb0),auVar62);
  auVar47 = vblendps_avx(auVar47,auVar35,8);
  auVar35 = vpunpckhwd_avx(auVar47,auVar47);
  auVar35 = vpsrad_avx(auVar35,0x10);
  auVar35 = vcvtdq2ps_avx(auVar35);
  auVar29 = vshufpd_avx(auVar35,auVar35,3);
  auVar35 = *(undefined1 (*) [16])(param_5 + 0xc0);
  auVar36._0_4_ = (auVar29._0_4_ * _DAT_146159c90 + auVar47._0_4_) * auVar35._0_4_;
  auVar36._4_4_ = (auVar29._4_4_ * _UNK_146159c94 + auVar47._4_4_) * auVar35._4_4_;
  auVar36._8_4_ = (auVar29._8_4_ * _UNK_146159c98 + auVar47._8_4_) * auVar35._8_4_;
  auVar36._12_4_ = (auVar29._12_4_ * _UNK_146159c9c + auVar47._12_4_) * auVar35._12_4_;
  auVar47 = vblendps_avx(auVar36,auVar69._0_16_,8);
  auVar47 = vhaddps_avx(auVar47,auVar47);
  auVar47 = vhaddps_avx(auVar47,auVar47);
  auVar62 = vblendps_avx(auVar62,auVar47,4);
  auVar35 = vdivps_avx(auVar62,auVar35);
  *(undefined1 (*) [16])(param_5 + 0xb0) = auVar62;
  auVar31 = vshufps_avx(auVar35,auVar35,0xaa);
  if ((*(float *)(param_5 + 200) == 0.0) && (!NAN(*(float *)(param_5 + 200)))) {
    uVar14 = *(undefined4 *)(param_3 + 0xb8);
    auVar31._4_4_ = uVar14;
    auVar31._0_4_ = uVar14;
    auVar31._8_4_ = uVar14;
    auVar31._12_4_ = uVar14;
  }
  auVar35 = vblendps_avx(auVar62,auVar31,4);
  *(undefined1 (*) [16])(param_5 + 0xb0) = auVar35;
  if ((*(byte *)(param_3 + 0x14d) & 4) == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
    if ((*(byte *)(param_6 + 0xc) & 1) == 0) {
      bVar13 = 0.0 < *(float *)(param_4 + 0x90);
    }
  }
  *(byte *)(param_4 + 0xa8) = *(byte *)(param_4 + 0xa8) & 0xfe | bVar13;
  return;
}

