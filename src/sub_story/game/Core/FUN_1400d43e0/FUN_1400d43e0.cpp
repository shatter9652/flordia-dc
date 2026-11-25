// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d43e0  size: 3898 bytes
// Name:    FUN_1400d43e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450128a0, FUN_145012860, FUN_144f64050, FUN_144db6f00, FUN_1400e7500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d43e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,int param_7,uint param_8)

{
  uint uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  longlong *plVar20;
  int iVar21;
  float fVar22;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar28;
  short sVar29;
  short sVar38;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
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
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [64];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [64];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  undefined1 auVar92 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [64];
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
  ulonglong uStack_1a8;
  longlong lStack_1a0;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
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
  
  auStack_198._4_4_ = _DAT_145fc6f10;
  auStack_198._0_4_ = _DAT_145fc6f10;
  auStack_198._8_4_ = _DAT_145fc6f10;
  auStack_198._12_4_ = _DAT_145fc6f10;
  cVar10 = *(char *)(param_1 + 0x60);
  iVar21 = 0;
  iVar15 = param_8 + 4;
  uStack_1a8 = (ulonglong)(param_8 + 2);
  lStack_1a0 = param_2 + 0x10;
  lStack_1b0 = param_4;
  do {
    if (iVar21 == 0) {
      uVar12 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),iVar15);
      FUN_145012860(&fStack_1f8,param_2,uVar12,param_8);
      fStack_1f8 = 14975.719;
      fStack_1f4 = 1.4013e-45;
      lVar16 = *(longlong *)(CONCAT44(fStack_1ec,fStack_1f0) + 0x3b30);
      iVar13 = func_0x0001450141d0(&fStack_1f8);
      puVar19 = &UNK_14669fed0;
LAB_1400d45ea:
      iVar13 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar16 + 0x10) + 0x80),
                                   *(undefined4 *)(puVar19 + (longlong)iVar13 * 4));
      plVar20 = (longlong *)CONCAT44(fStack_1ec,fStack_1f0);
    }
    else {
      if (iVar21 != 1) {
        uVar12 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),iVar15);
        FUN_145012860(&fStack_1f8,param_2,uVar12,param_8);
        fStack_1f8 = 14975.719;
        fStack_1f4 = 1.4013e-45;
        lVar16 = *(longlong *)(CONCAT44(fStack_1ec,fStack_1f0) + 0x3b30);
        iVar13 = func_0x0001450141d0(&fStack_1f8);
        puVar19 = &UNK_14669fec8;
        goto LAB_1400d45ea;
      }
      uVar12 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),iVar15);
      FUN_145012860(&fStack_1f8,param_2,uVar12,param_8);
      fStack_1f8 = 14975.719;
      fStack_1f4 = 1.4013e-45;
      plVar6 = (longlong *)CONCAT44(fStack_1ec,fStack_1f0);
      iVar13 = (**(code **)(*plVar6 + 0x20))
                         (plVar6,*(undefined4 *)(&UNK_14669f8e0 + (longlong)(int)fStack_1e0 * 4));
      plVar20 = (longlong *)0x0;
      if (iVar13 != -1) {
        plVar20 = plVar6;
      }
    }
    lVar16 = (ulonglong)*(uint *)(param_5 + 4) * 0x10;
    *(uint *)(param_5 + 4) = *(uint *)(param_5 + 4) + 1;
    *(longlong **)(param_5 + 8 + lVar16) = plVar20;
    *(int *)(param_5 + 0x10 + lVar16) = iVar13;
    if (iVar21 == 2) {
      FUN_144db6f00(lStack_1a0,&fStack_1f8,*(undefined4 *)(param_1 + 0x168 + uStack_1a8 * 4));
      fVar22 = *(float *)(param_3 + 0xe4);
      auVar79 = ZEXT1664(CONCAT412(fStack_1ec,CONCAT48(fStack_1f0,CONCAT44(fStack_1f4,fStack_1f8))))
      ;
      iVar14 = func_0x000144e05fa0(plVar20[1]);
      auVar76 = auVar79._0_16_;
      if (iVar13 == iVar14) {
        auVar35 = ZEXT816(0);
        fVar42 = fVar22;
      }
      else {
        uVar12 = (**(code **)(*plVar20 + 0xf0))(plVar20,iVar13);
        fVar42 = fVar22;
        (**(code **)(*plVar20 + 0x108))(plVar20,uVar12,&fStack_1f8);
        auVar76 = auVar79._0_16_;
        auVar35._4_4_ = fStack_1e4;
        auVar35._0_4_ = fStack_1e8;
        auVar35._8_4_ = fStack_1e0;
        auVar35._12_4_ = fStack_1dc;
        fVar22 = *(float *)(param_3 + 0xe4);
      }
      auVar76 = vshufpd_avx(auVar76,auVar76,1);
      auVar67 = vshufpd_avx(auVar35,auVar35,1);
      auVar76 = vmaxss_avx(ZEXT416((uint)(fVar22 * auVar67._0_4_ - fVar42 * auVar76._0_4_)),
                           ZEXT416(_DAT_14615b49c));
      fVar22 = auVar76._0_4_;
    }
    else if ((((*(byte *)(param_3 + 0xe1) & 0x40) == 0) && (*(longlong *)(param_3 + 8) != 0)) &&
            ((cVar10 == '\x02' || ((*(byte *)(param_3 + 0x140) & 8) == 0)))) {
      FUN_144db6f00(lStack_1a0,&fStack_1f8,*(undefined4 *)(param_1 + 0x168 + uStack_1a8 * 4));
      auVar79 = ZEXT464(*(uint *)(param_3 + 0xe4));
      auVar85 = ZEXT1664(CONCAT412(fStack_1ec,CONCAT48(fStack_1f0,CONCAT44(fStack_1f4,fStack_1f8))))
      ;
      iVar14 = func_0x000144e05fa0(plVar20[1]);
      fVar22 = auVar79._0_4_;
      auVar76 = auVar85._0_16_;
      if (iVar13 == iVar14) {
        auVar41 = ZEXT816(0);
        fVar42 = fVar22;
      }
      else {
        uVar12 = (**(code **)(*plVar20 + 0xf0))(plVar20,iVar13);
        (**(code **)(*plVar20 + 0x108))(plVar20,uVar12,&fStack_1f8);
        fVar22 = auVar79._0_4_;
        auVar76 = auVar85._0_16_;
        auVar41._4_4_ = fStack_1e4;
        auVar41._0_4_ = fStack_1e8;
        auVar41._8_4_ = fStack_1e0;
        auVar41._12_4_ = fStack_1dc;
        fVar42 = *(float *)(param_3 + 0xe4);
      }
      auVar67 = vshufpd_avx(auVar41,auVar41,1);
      auVar76 = vshufpd_avx(auVar76,auVar76,1);
      fVar22 = fVar42 * auVar67._0_4_ - fVar22 * auVar76._0_4_;
    }
    else {
      iVar14 = func_0x000144e05fa0(plVar20[1]);
      if (iVar13 == iVar14) {
        fVar22 = 0.0;
        fVar42 = 0.0;
        fVar43 = 0.0;
        fVar44 = 0.0;
      }
      else {
        uVar12 = (**(code **)(*plVar20 + 0xf0))(plVar20,iVar13);
        (**(code **)(*plVar20 + 0x108))(plVar20,uVar12,&fStack_1f8);
        fVar22 = fStack_1e8;
        fVar42 = fStack_1e4;
        fVar43 = fStack_1e0;
        fVar44 = fStack_1dc;
      }
      (**(code **)(*plVar20 + 0x88))(plVar20,&fStack_1f8);
      auVar67._4_4_ = fStack_1e4;
      auVar67._0_4_ = fStack_1e8;
      auVar67._8_4_ = fStack_1e0;
      auVar67._12_4_ = fStack_1dc;
      auVar76 = vshufps_avx(auVar67,auStack_1d8,0x33);
      auVar76 = vshufps_avx(auVar67,auVar76,0x2f);
      auVar79 = ZEXT1664(CONCAT412(fVar44 * (auVar76._12_4_ + _DAT_145fc6ed8),
                                   CONCAT48(fVar43 * (auVar76._8_4_ + _DAT_145fc6ed8),
                                            CONCAT44(fVar42 * (auVar76._4_4_ + _DAT_145fc6ed8),
                                                     fVar22 * (auVar76._0_4_ + _DAT_145fc6ed8)))));
      (**(code **)(*plVar20 + 0x88))(plVar20,&uStack_148);
      fVar22 = auVar79._0_4_;
      auVar67 = auVar79._0_16_;
      auVar76 = vshufps_avx(auVar67,auVar67,0x55);
      auVar67 = vshufps_avx(auVar67,auVar67,0xaa);
      auVar52._0_4_ =
           auVar67._0_4_ * fStack_128 +
           auVar76._0_4_ * fStack_138 + fVar22 * (float)uStack_148 + fStack_118;
      auVar52._4_4_ =
           auVar67._4_4_ * fStack_124 +
           auVar76._4_4_ * fStack_134 + fVar22 * uStack_148._4_4_ + fStack_114;
      auVar52._8_4_ =
           auVar67._8_4_ * fStack_120 +
           auVar76._8_4_ * fStack_130 + fVar22 * fStack_140 + fStack_110;
      auVar52._12_4_ =
           auVar67._12_4_ * fStack_11c +
           auVar76._12_4_ * fStack_12c + fVar22 * fStack_13c + fStack_10c;
      auVar76 = vshufpd_avx(auVar52,auVar52,1);
      fVar22 = auVar76._0_4_ - *(float *)(param_3 + 0xb8);
    }
    uVar1 = *(uint *)(param_5 + 0x3c);
    *(uint *)(param_5 + 0x3c) = uVar1 + 1;
    *(float *)(param_5 + 0x40 + (ulonglong)uVar1 * 4) = fVar22;
    iVar14 = func_0x000144e05fa0(plVar20[1]);
    if (iVar13 == iVar14) {
      fVar22 = 0.0;
      fVar42 = 0.0;
      fVar43 = 0.0;
      fVar44 = 0.0;
      auVar76 = _DAT_145fc6ee0;
    }
    else {
      uVar12 = (**(code **)(*plVar20 + 0xf0))(plVar20,iVar13);
      (**(code **)(*plVar20 + 0x108))(plVar20,uVar12,&fStack_1f8);
      auVar76._4_4_ = fStack_1f4;
      auVar76._0_4_ = fStack_1f8;
      auVar76._8_4_ = fStack_1f0;
      auVar76._12_4_ = fStack_1ec;
      fVar22 = fStack_1e8;
      fVar42 = fStack_1e4;
      fVar43 = fStack_1e0;
      fVar44 = fStack_1dc;
    }
    auVar30._0_4_ = auVar76._0_4_ + auVar76._0_4_;
    auVar30._4_4_ = auVar76._4_4_ + auVar76._4_4_;
    auVar30._8_4_ = auVar76._8_4_ + auVar76._8_4_;
    auVar30._12_4_ = auVar76._12_4_ + auVar76._12_4_;
    auVar67 = vshufps_avx(auVar76,auVar76,0xff);
    auVar52 = vshufps_avx(auVar76,auVar76,0xc9);
    auVar76 = vshufps_avx(auVar76,auVar76,0xd2);
    auVar41 = vshufps_avx(auVar30,auVar30,0xc9);
    auVar35 = vshufps_avx(auVar30,auVar30,0xd2);
    auVar82._0_4_ = auVar76._0_4_ * auVar30._0_4_ + auVar41._0_4_ * auVar67._0_4_;
    auVar82._4_4_ = auVar76._4_4_ * auVar30._4_4_ + auVar41._4_4_ * auVar67._4_4_;
    auVar82._8_4_ = auVar76._8_4_ * auVar30._8_4_ + auVar41._8_4_ * auVar67._8_4_;
    auVar82._12_4_ = auVar76._12_4_ * auVar30._12_4_ + auVar41._12_4_ * auVar67._12_4_;
    auVar45._0_4_ = -(auVar67._0_4_ * auVar35._0_4_) + auVar52._0_4_ * auVar30._0_4_;
    auVar45._4_4_ = -(auVar67._4_4_ * auVar35._4_4_) + auVar52._4_4_ * auVar30._4_4_;
    auVar45._8_4_ = -(auVar67._8_4_ * auVar35._8_4_) + auVar52._8_4_ * auVar30._8_4_;
    auVar45._12_4_ = -(auVar67._12_4_ * auVar35._12_4_) + auVar52._12_4_ * auVar30._12_4_;
    auVar46._0_4_ =
         -(auVar35._0_4_ * auVar76._0_4_) - (auVar52._0_4_ * auVar41._0_4_ - _DAT_145fc6ed8);
    auVar46._4_4_ =
         -(auVar35._4_4_ * auVar76._4_4_) - (auVar52._4_4_ * auVar41._4_4_ - _DAT_145fc6ed8);
    auVar46._8_4_ =
         -(auVar35._8_4_ * auVar76._8_4_) - (auVar52._8_4_ * auVar41._8_4_ - _DAT_145fc6ed8);
    auVar46._12_4_ =
         -(auVar35._12_4_ * auVar76._12_4_) - (auVar52._12_4_ * auVar41._12_4_ - _DAT_145fc6ed8);
    auVar76 = vblendps_avx(auVar82,auVar45,2);
    auVar67 = vblendps_avx(auVar46,auVar82,2);
    auVar52 = vblendps_avx(auVar45,auVar46,2);
    auVar52 = vblendps_avx(auVar82,auVar52,3);
    auVar93 = ZEXT1664(auVar52);
    auVar67 = vblendps_avx(auVar45,auVar67,3);
    auVar79 = ZEXT1664(auVar67);
    auVar76 = vblendps_avx(auVar46,auVar76,3);
    auVar85 = ZEXT1664(auVar76);
    fVar96 = _DAT_145fc6ed8;
    fVar69 = _DAT_145fc6ed8;
    fVar70 = _DAT_145fc6ed8;
    fVar71 = _DAT_145fc6ed8;
    (**(code **)(*plVar20 + 0x88))(plVar20,&fStack_1f8);
    lVar16 = lStack_1b0;
    auVar5._4_4_ = fStack_1e4;
    auVar5._0_4_ = fStack_1e8;
    auVar5._8_4_ = fStack_1e0;
    auVar5._12_4_ = fStack_1dc;
    auVar47._0_12_ = ZEXT812(0);
    auVar47._12_4_ = 0;
    iVar21 = iVar21 + 1;
    lVar17 = (ulonglong)*(uint *)(param_5 + 0x54) * 0x30;
    *(uint *)(param_5 + 0x54) = *(uint *)(param_5 + 0x54) + 1;
    fVar9 = _DAT_14615a290;
    auVar76 = vshufps_avx(auStack_1d8,auVar5,0x33);
    auVar76 = vshufps_avx(auVar5,auVar76,0x8f);
    auVar89._0_4_ = fVar22 * (auVar76._0_4_ + fVar96);
    auVar89._4_4_ = fVar42 * (auVar76._4_4_ + fVar69);
    auVar89._8_4_ = fVar43 * (auVar76._8_4_ + fVar70);
    auVar89._12_4_ = fVar44 * (auVar76._12_4_ + fVar71);
    fVar22 = auVar79._0_4_;
    auVar31._0_4_ = fVar22 * fVar22;
    fVar43 = auVar79._4_4_;
    auVar31._4_4_ = fVar43 * fVar43;
    fVar2 = auVar79._8_4_;
    auVar31._8_4_ = fVar2 * fVar2;
    fVar94 = auVar79._12_4_;
    auVar31._12_4_ = fVar94 * fVar94;
    auVar76 = vblendps_avx(auVar31,auVar47,8);
    auVar76 = vhaddps_avx(auVar76,auVar76);
    auVar67 = vhaddps_avx(auVar76,auVar76);
    auVar76 = vrsqrtps_avx(auVar67);
    fVar42 = auVar76._0_4_;
    fVar44 = auVar76._4_4_;
    fVar91 = auVar76._8_4_;
    fVar95 = auVar76._12_4_;
    auVar55._4_4_ = _DAT_146159bfc;
    auVar55._0_4_ = _DAT_146159bfc;
    auVar55._8_4_ = _DAT_146159bfc;
    auVar55._12_4_ = _DAT_146159bfc;
    auVar76 = vcmpps_avx(auVar55,auVar67,2);
    auVar75._0_4_ =
         (float)(auVar76._0_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar42 * fVar42 * auVar67._0_4_) + _DAT_145fc6edc) *
                        fVar42 + fVar42) * auVar67._0_4_));
    auVar75._4_4_ =
         (float)(auVar76._4_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar44 * fVar44 * auVar67._4_4_) + _DAT_145fc6edc) *
                        fVar44 + fVar44) * auVar67._4_4_));
    auVar75._8_4_ =
         (float)(auVar76._8_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar91 * fVar91 * auVar67._8_4_) + _DAT_145fc6edc) *
                        fVar91 + fVar91) * auVar67._8_4_));
    auVar75._12_4_ =
         (float)(auVar76._12_4_ &
                (uint)(((-(_DAT_145fc6edc * fVar95 * fVar95 * auVar67._12_4_) + _DAT_145fc6edc) *
                        fVar95 + fVar95) * auVar67._12_4_));
    auVar48._0_4_ = (uint)auVar75._0_4_ ^ auStack_198._0_4_;
    auVar48._4_4_ = (uint)auVar75._4_4_ ^ auStack_198._4_4_;
    auVar48._8_4_ = (uint)auVar75._8_4_ ^ auStack_198._8_4_;
    auVar48._12_4_ = (uint)auVar75._12_4_ ^ auStack_198._12_4_;
    auVar76 = vrcpps_avx(auVar75);
    fVar44 = auVar76._0_4_;
    fVar91 = auVar76._4_4_;
    fVar95 = auVar76._8_4_;
    fVar42 = auVar76._12_4_;
    auVar56._0_4_ = -((auVar75._0_4_ * fVar44 - fVar96) * fVar44) + fVar44;
    auVar56._4_4_ = -((auVar75._4_4_ * fVar91 - fVar69) * fVar91) + fVar91;
    auVar56._8_4_ = -((auVar75._8_4_ * fVar95 - fVar70) * fVar95) + fVar95;
    auVar56._12_4_ = -((auVar75._12_4_ * fVar42 - fVar71) * fVar42) + fVar42;
    auVar76 = vcmpps_avx(auVar75,auVar48,0);
    auVar49._4_4_ = _DAT_14615b36c;
    auVar49._0_4_ = _DAT_14615b36c;
    auVar49._8_4_ = _DAT_14615b36c;
    auVar49._12_4_ = _DAT_14615b36c;
    auVar76 = vblendvps_avx(auVar56,auVar49,auVar76);
    fVar42 = auVar76._0_4_;
    auVar50._0_4_ = fVar22 * fVar42;
    fVar22 = auVar76._4_4_;
    auVar50._4_4_ = fVar43 * fVar22;
    fVar43 = auVar76._8_4_;
    auVar50._8_4_ = fVar2 * fVar43;
    fVar44 = auVar76._12_4_;
    auVar50._12_4_ = fVar94 * fVar44;
    auVar57._0_4_ = auVar93._0_4_ * fVar42;
    auVar57._4_4_ = auVar93._4_4_ * fVar22;
    auVar57._8_4_ = auVar93._8_4_ * fVar43;
    auVar57._12_4_ = auVar93._12_4_ * fVar44;
    auVar77._0_4_ = auVar85._0_4_ * fVar42;
    auVar77._4_4_ = auVar85._4_4_ * fVar22;
    auVar77._8_4_ = auVar85._8_4_ * fVar43;
    auVar77._12_4_ = auVar85._12_4_ * fVar44;
    auVar76 = vshufps_avx(auVar50,auVar50,0x55);
    auVar67 = vshufps_avx(auVar50,auVar50,0xaa);
    auVar52 = vshufps_avx(auVar57,auVar57,0xaa);
    auVar41 = vshufps_avx(auVar57,auVar57,0x55);
    fVar22 = auStack_1d8._0_4_;
    auVar32._0_4_ = fVar22 * auVar67._0_4_ + fStack_1e8 * auVar76._0_4_ + fStack_1f8 * auVar50._0_4_
    ;
    fVar42 = auStack_1d8._4_4_;
    auVar32._4_4_ = fVar42 * auVar67._4_4_ + fStack_1e4 * auVar76._4_4_ + fStack_1f4 * auVar50._0_4_
    ;
    fVar43 = auStack_1d8._8_4_;
    auVar32._8_4_ = fVar43 * auVar67._8_4_ + fStack_1e0 * auVar76._8_4_ + fStack_1f0 * auVar50._0_4_
    ;
    fVar44 = auStack_1d8._12_4_;
    auVar32._12_4_ =
         fVar44 * auVar67._12_4_ + fStack_1dc * auVar76._12_4_ + fStack_1ec * auVar50._0_4_;
    auVar76 = vshufps_avx(auVar77,auVar77,0x55);
    auVar67 = vshufps_avx(auVar77,auVar77,0xaa);
    auVar58._0_4_ = fVar22 * auVar52._0_4_ + fStack_1e8 * auVar41._0_4_ + fStack_1f8 * auVar57._0_4_
    ;
    auVar58._4_4_ = fVar42 * auVar52._4_4_ + fStack_1e4 * auVar41._4_4_ + fStack_1f4 * auVar57._0_4_
    ;
    auVar58._8_4_ = fVar43 * auVar52._8_4_ + fStack_1e0 * auVar41._8_4_ + fStack_1f0 * auVar57._0_4_
    ;
    auVar58._12_4_ =
         fVar44 * auVar52._12_4_ + fStack_1dc * auVar41._12_4_ + fStack_1ec * auVar57._0_4_;
    auVar52 = vshufps_avx(auVar89,auVar89,0xaa);
    auVar92._0_4_ = fVar22 * auVar67._0_4_ + fStack_1e8 * auVar76._0_4_ + fStack_1f8 * auVar77._0_4_
    ;
    auVar92._4_4_ = fVar42 * auVar67._4_4_ + fStack_1e4 * auVar76._4_4_ + fStack_1f4 * auVar77._0_4_
    ;
    auVar92._8_4_ = fVar43 * auVar67._8_4_ + fStack_1e0 * auVar76._8_4_ + fStack_1f0 * auVar77._0_4_
    ;
    auVar92._12_4_ =
         fVar44 * auVar67._12_4_ + fStack_1dc * auVar76._12_4_ + fStack_1ec * auVar77._0_4_;
    auVar76 = vshufps_avx(auVar89,auVar89,0x55);
    auVar51._0_4_ =
         fVar22 * auVar52._0_4_ +
         fStack_1e8 * auVar76._0_4_ + fStack_1f8 * auVar89._0_4_ + auStack_1c8._0_4_;
    auVar51._4_4_ =
         fVar42 * auVar52._4_4_ +
         fStack_1e4 * auVar76._4_4_ + fStack_1f4 * auVar89._0_4_ + auStack_1c8._4_4_;
    auVar51._8_4_ =
         fVar43 * auVar52._8_4_ +
         fStack_1e0 * auVar76._8_4_ + fStack_1f0 * auVar89._0_4_ + auStack_1c8._8_4_;
    auVar51._12_4_ =
         fVar44 * auVar52._12_4_ +
         fStack_1dc * auVar76._12_4_ + fStack_1ec * auVar89._0_4_ + auStack_1c8._12_4_;
    auVar39._0_4_ = auVar75._0_4_ + _DAT_145fc6f48;
    auVar39._4_4_ = auVar75._4_4_ + _DAT_145fc6f48;
    auVar39._8_4_ = auVar75._8_4_ + _DAT_145fc6f48;
    auVar39._12_4_ = auVar75._12_4_ + _DAT_145fc6f48;
    auVar76 = vblendps_avx(auVar32,auVar58,2);
    auVar41 = vinsertps_avx(auVar58,auVar39,0x30);
    auVar35 = vinsertps_avx(auVar92,auVar39,0xb0);
    auVar52 = vshufps_avx(auVar58,auVar58,0x55);
    auVar76 = vblendps_avx(auVar35,auVar76,3);
    auVar67 = vshufps_avx(auVar76,auVar76,0x49);
    auVar4 = vshufps_avx(auVar76,auVar76,0x92);
    auVar5 = vshufps_avx(auVar76,auVar76,0x24);
    auVar83._0_4_ = auVar4._0_4_ + auVar67._0_4_;
    auVar83._4_4_ = auVar4._4_4_ + auVar67._4_4_;
    auVar83._8_4_ = auVar4._8_4_ + auVar67._8_4_;
    auVar83._12_4_ = auVar4._12_4_ + auVar67._12_4_;
    auVar88._0_4_ = auVar83._0_4_ + auVar5._0_4_;
    auVar88._4_4_ = auVar83._4_4_ + auVar5._4_4_;
    auVar88._8_4_ = auVar83._8_4_ + auVar5._8_4_;
    auVar88._12_4_ = auVar83._12_4_ + auVar5._12_4_;
    auVar4 = vsubps_avx(auVar76,auVar83);
    auVar76 = vblendps_avx(auVar32,auVar41,3);
    auVar76 = vblendps_avx(auVar76,auVar92,2);
    auVar67 = vshufps_avx(auVar76,auVar76,9);
    auVar76 = vblendps_avx(auVar4,auVar88,8);
    auVar90._0_4_ = auVar76._0_4_ + fVar96;
    auVar90._4_4_ = auVar76._4_4_ + fVar69;
    auVar90._8_4_ = auVar76._8_4_ + fVar70;
    auVar90._12_4_ = auVar76._12_4_ + fVar71;
    auVar76 = vrsqrtps_avx(auVar90);
    fVar22 = auVar76._0_4_;
    fVar42 = auVar76._4_4_;
    fVar43 = auVar76._8_4_;
    fVar44 = auVar76._12_4_;
    auVar76 = vblendps_avx(auVar41,auVar92,3);
    auVar76 = vshufps_avx(auVar76,auVar32,0x12);
    auVar86._0_4_ = auVar76._0_4_ + auVar67._0_4_;
    auVar86._4_4_ = auVar76._4_4_ + auVar67._4_4_;
    auVar86._8_4_ = auVar76._8_4_ + auVar67._8_4_;
    auVar86._12_4_ = auVar76._12_4_ + auVar67._12_4_;
    auVar5 = vsubps_avx(auVar76,auVar67);
    auVar78._0_4_ =
         ((-(_DAT_145fc6edc * fVar22 * fVar22 * auVar90._0_4_) + _DAT_145fc6edc) * fVar22 + fVar22)
         * _DAT_145fc6edc;
    auVar78._4_4_ =
         ((-(_DAT_145fc6edc * fVar42 * fVar42 * auVar90._4_4_) + _DAT_145fc6edc) * fVar42 + fVar42)
         * _DAT_145fc6edc;
    auVar78._8_4_ =
         ((-(_DAT_145fc6edc * fVar43 * fVar43 * auVar90._8_4_) + _DAT_145fc6edc) * fVar43 + fVar43)
         * _DAT_145fc6edc;
    auVar78._12_4_ =
         ((-(_DAT_145fc6edc * fVar44 * fVar44 * auVar90._12_4_) + _DAT_145fc6edc) * fVar44 + fVar44)
         * _DAT_145fc6edc;
    auVar76 = vblendps_avx(auVar86,auVar5,1);
    auVar67 = vblendps_avx(auVar86,auVar5,2);
    auVar76 = vshufps_avx(auVar76,auVar76,0x18);
    auVar67 = vshufpd_avx(auVar67,auVar67,1);
    auVar76 = vblendps_avx(auVar76,auVar90,1);
    auVar67 = vblendps_avx(auVar67,auVar90,2);
    auVar72._0_4_ = auVar76._0_4_ * auVar78._0_4_;
    auVar72._4_4_ = auVar76._4_4_ * auVar78._0_4_;
    auVar72._8_4_ = auVar76._8_4_ * auVar78._0_4_;
    auVar72._12_4_ = auVar76._12_4_ * auVar78._0_4_;
    auVar76 = vshufps_avx(auVar78,auVar78,0x55);
    auVar80._0_4_ = auVar76._0_4_ * auVar67._0_4_;
    auVar80._4_4_ = auVar76._4_4_ * auVar67._4_4_;
    auVar80._8_4_ = auVar76._8_4_ * auVar67._8_4_;
    auVar80._12_4_ = auVar76._12_4_ * auVar67._12_4_;
    auVar84._4_4_ = auVar32._0_4_;
    auVar84._0_4_ = auVar32._0_4_;
    auVar84._8_4_ = auVar32._0_4_;
    auVar84._12_4_ = auVar32._0_4_;
    auVar76 = vcmpps_avx(auVar84,auVar52,1);
    auVar67 = vblendvps_avx(auVar72,auVar80,auVar76);
    auVar76 = vshufps_avx(auVar86,auVar5,0xa1);
    auVar87._4_4_ = _DAT_14615a290;
    auVar87._0_4_ = _DAT_14615a290;
    auVar87._8_4_ = _DAT_14615a290;
    auVar87._12_4_ = _DAT_14615a290;
    auVar4 = vshufps_avx(auVar78,auVar78,0xaa);
    auVar76 = vblendps_avx(auVar76,auVar90,4);
    auVar73._0_4_ = auVar4._0_4_ * auVar76._0_4_;
    auVar73._4_4_ = auVar4._4_4_ * auVar76._4_4_;
    auVar73._8_4_ = auVar4._8_4_ * auVar76._8_4_;
    auVar73._12_4_ = auVar4._12_4_ * auVar76._12_4_;
    auVar4 = vshufps_avx(auVar92,auVar92,0xaa);
    auVar76 = vcmpps_avx(auVar52,auVar4,1);
    auVar52 = vcmpps_avx(auVar84,auVar4,1);
    auVar59._0_4_ = auVar52._0_4_ & auVar76._0_4_;
    auVar59._4_4_ = auVar52._4_4_ & auVar76._4_4_;
    auVar59._8_4_ = auVar52._8_4_ & auVar76._8_4_;
    auVar59._12_4_ = auVar52._12_4_ & auVar76._12_4_;
    auVar76 = vblendps_avx(auVar51,auStack_1c8,8);
    auVar67 = vblendvps_avx(auVar67,auVar73,auVar59);
    auVar33._0_4_ =
         auVar35._0_4_ * auVar35._0_4_ +
         auVar41._0_4_ * auVar41._0_4_ + auVar32._0_4_ * auVar32._0_4_;
    auVar33._4_4_ =
         auVar35._4_4_ * auVar35._4_4_ +
         auVar41._4_4_ * auVar41._4_4_ + auVar32._4_4_ * auVar32._4_4_;
    auVar33._8_4_ =
         auVar35._8_4_ * auVar35._8_4_ +
         auVar41._8_4_ * auVar41._8_4_ + auVar32._8_4_ * auVar32._8_4_;
    auVar33._12_4_ =
         auVar35._12_4_ * auVar35._12_4_ +
         auVar41._12_4_ * auVar41._12_4_ + auVar32._12_4_ * auVar32._12_4_;
    auVar52 = vrcpps_avx(auVar87);
    auVar41 = vrsqrtps_avx(auVar33);
    fVar91 = auVar52._0_4_;
    fVar94 = auVar52._4_4_;
    fVar95 = auVar52._8_4_;
    fVar96 = auVar52._12_4_;
    fVar22 = auVar41._0_4_;
    fVar42 = auVar41._4_4_;
    fVar43 = auVar41._8_4_;
    fVar44 = auVar41._12_4_;
    fVar91 = (-(fVar91 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar91 + fVar91;
    fVar94 = (-(fVar94 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar94 + fVar94;
    fVar95 = (-(fVar95 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar95 + fVar95;
    fVar96 = (-(fVar96 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar96 + fVar96;
    auVar63._0_4_ = auVar76._0_4_ * fVar91;
    auVar63._4_4_ = auVar76._4_4_ * fVar94;
    auVar63._8_4_ = auVar76._8_4_ * fVar95;
    auVar63._12_4_ = auVar76._12_4_ * fVar96;
    auVar52 = vroundps_avx(auVar63,3);
    auVar81._0_4_ = -(auVar52._0_4_ * _DAT_14615a290) + auVar76._0_4_;
    auVar81._4_4_ = -(auVar52._4_4_ * _DAT_14615a290) + auVar76._4_4_;
    auVar81._8_4_ = -(auVar52._8_4_ * _DAT_14615a290) + auVar76._8_4_;
    auVar81._12_4_ = -(auVar52._12_4_ * _DAT_14615a290) + auVar76._12_4_;
    auVar64._0_4_ = (int)auVar52._0_4_;
    auVar64._4_4_ = (int)auVar52._4_4_;
    auVar64._8_4_ = (int)auVar52._8_4_;
    auVar64._12_4_ = (int)auVar52._12_4_;
    auVar76 = vpackssdw_avx(auVar64,auVar64);
    sVar29 = auVar76._0_2_;
    auVar4._0_2_ = sVar29 + auStack_1c8._0_2_;
    sVar38 = auVar76._2_2_;
    auVar4._2_2_ = sVar38 + auStack_1c8._2_2_;
    auVar4._4_2_ = sVar29 + auStack_1c8._4_2_;
    auVar4._6_2_ = sVar38 + auStack_1c8._6_2_;
    auVar4._8_2_ = sVar29 + auStack_1c8._8_2_;
    auVar4._10_2_ = sVar38 + auStack_1c8._10_2_;
    auVar4._12_2_ = sVar29 + auStack_1c8._12_2_;
    auVar4._14_2_ = sVar38 + auStack_1c8._14_2_;
    auVar76 = vblendps_avx(auVar51,auVar81,3);
    auVar41 = vshufps_avx(auVar78,auVar78,0xff);
    auVar76 = vblendps_avx(auVar76,auVar4,8);
    auVar52 = vpunpckhwd_avx(auVar76,auVar76);
    auVar52 = vpsrad_avx(auVar52,0x10);
    auVar52 = vcvtdq2ps_avx(auVar52);
    auVar52 = vshufpd_avx(auVar52,auVar52,3);
    auVar53._0_4_ = auVar52._0_4_ * _DAT_146159c90 + auVar76._0_4_;
    auVar53._4_4_ = auVar52._4_4_ * _UNK_146159c94 + auVar76._4_4_;
    auVar53._8_4_ = auVar52._8_4_ * _UNK_146159c98 + auVar76._8_4_;
    auVar53._12_4_ = auVar52._12_4_ * _UNK_146159c9c + auVar76._12_4_;
    auVar76 = vblendps_avx(auVar5,auVar90,8);
    auVar23._0_4_ = auVar41._0_4_ * auVar76._0_4_;
    auVar23._4_4_ = auVar41._4_4_ * auVar76._4_4_;
    auVar23._8_4_ = auVar41._8_4_ * auVar76._8_4_;
    auVar23._12_4_ = auVar41._12_4_ * auVar76._12_4_;
    auVar76 = vcmpps_avx(ZEXT816(0) << 0x20,auVar88,1);
    auVar65._0_4_ = auVar76._0_4_;
    auVar65._4_4_ = auVar65._0_4_;
    auVar65._8_4_ = auVar65._0_4_;
    auVar65._12_4_ = auVar65._0_4_;
    auVar76 = vblendvps_avx(auVar67,auVar23,auVar65);
    *(undefined1 (*) [16])(param_5 + 0x60 + lVar17) = auVar76;
    fVar2 = _DAT_145fc6edc;
    auVar60._0_4_ = fVar91 * auVar53._0_4_;
    auVar60._4_4_ = fVar94 * auVar53._4_4_;
    auVar60._8_4_ = fVar95 * auVar53._8_4_;
    auVar60._12_4_ = fVar96 * auVar53._12_4_;
    auVar76 = vroundps_avx(auVar60,3);
    auVar66._0_4_ = -(auVar76._0_4_ * fVar9) + auVar53._0_4_;
    auVar66._4_4_ = -(auVar76._4_4_ * fVar9) + auVar53._4_4_;
    auVar66._8_4_ = -(auVar76._8_4_ * fVar9) + auVar53._8_4_;
    auVar66._12_4_ = -(auVar76._12_4_ * fVar9) + auVar53._12_4_;
    auVar61._0_4_ = (int)auVar76._0_4_;
    auVar61._4_4_ = (int)auVar76._4_4_;
    auVar61._8_4_ = (int)auVar76._8_4_;
    auVar61._12_4_ = (int)auVar76._12_4_;
    auVar67 = vpackssdw_avx(auVar61,auVar61);
    auVar76 = vblendps_avx(auVar53,auVar66,3);
    auVar76 = vinsertps_avx(auVar76,auVar67,0x30);
    *(undefined1 (*) [16])(param_5 + 0x70 + lVar17) = auVar76;
    auVar62._4_4_ = _DAT_146159bfc;
    auVar62._0_4_ = _DAT_146159bfc;
    auVar62._8_4_ = _DAT_146159bfc;
    auVar62._12_4_ = _DAT_146159bfc;
    auVar76 = vcmpps_avx(auVar62,auVar33,2);
    auVar34._0_4_ =
         auVar76._0_4_ &
         (uint)(((-(fVar2 * fVar22 * fVar22 * auVar33._0_4_) + fVar2) * fVar22 + fVar22) *
               auVar33._0_4_);
    auVar34._4_4_ =
         auVar76._4_4_ &
         (uint)(((-(fVar2 * fVar42 * fVar42 * auVar33._4_4_) + fVar2) * fVar42 + fVar42) *
               auVar33._4_4_);
    auVar34._8_4_ =
         auVar76._8_4_ &
         (uint)(((-(fVar2 * fVar43 * fVar43 * auVar33._8_4_) + fVar2) * fVar43 + fVar43) *
               auVar33._8_4_);
    auVar34._12_4_ =
         auVar76._12_4_ &
         (uint)(((-(fVar2 * fVar44 * fVar44 * auVar33._12_4_) + fVar2) * fVar44 + fVar44) *
               auVar33._12_4_);
    *(undefined1 (*) [16])(param_5 + 0x80 + lVar17) = auVar34;
  } while (iVar21 != 3);
  if ((*(int *)(param_1 + 0x380) < param_7) ||
     ((*(byte *)(param_1 + 0xb0 + (ulonglong)param_8 * 8) & 2) != 0)) {
    FUN_1400e7500(*(undefined8 *)(param_1 + 0x188),param_2,param_8);
    if (((*(byte *)(param_1 + 0xb0 + (ulonglong)param_8 * 8) & 2) != 0) ||
       (*(int *)(param_1 + 0x380) == 0)) {
      FUN_144f64050(param_1 + 0x2a0,param_8);
    }
    uVar12 = 2;
    if ((param_7 != 2) &&
       ((((*(byte *)(param_3 + 0x140) & 8) == 0 || ((*(byte *)(param_3 + 0x120) & 0x20) == 0)) ||
        (uVar12 = 1, (*(byte *)(param_3 + 0x141) & 1) == 0)))) {
      uVar12 = 0;
    }
    *(undefined4 *)(lVar16 + 0x170) = uVar12;
  }
  *(byte *)(param_5 + 0x110) = *(byte *)(param_5 + 0x110) & 0xe0;
  uVar18 = *(undefined8 *)(param_3 + 200);
  *(undefined8 *)(param_5 + 0x100) = *(undefined8 *)(param_3 + 0xc0);
  *(undefined8 *)(param_5 + 0x108) = uVar18;
  uVar12 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),iVar15);
  FUN_145012860(&puStack_108,param_2,uVar12,param_8);
  puStack_108 = &UNK_14669fee0;
  lVar17 = plStack_100[0x766];
  iVar21 = func_0x0001450141d0(&puStack_108);
  iVar21 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar17 + 0x10) + 0x80),
                               *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar21 * 4));
  plVar20 = plStack_100;
  iVar13 = func_0x000144e05fa0(plStack_100[1]);
  auVar79 = ZEXT1264(ZEXT812(0));
  fVar22 = 0.0;
  fVar42 = 0.0;
  fVar43 = 0.0;
  fVar44 = 0.0;
  if (iVar21 != iVar13) {
    uVar12 = (**(code **)(*plVar20 + 0xf0))(plVar20,iVar21);
    (**(code **)(*plVar20 + 0x108))(plVar20,uVar12,&fStack_1f8);
    fVar22 = fStack_1e8;
    fVar42 = fStack_1e4;
    fVar43 = fStack_1e0;
    fVar44 = fStack_1dc;
  }
  (**(code **)(*plVar20 + 0x88))(plVar20,&fStack_1f8);
  auVar7._4_4_ = fStack_1e4;
  auVar7._0_4_ = fStack_1e8;
  auVar7._8_4_ = fStack_1e0;
  auVar7._12_4_ = fStack_1dc;
  auVar76 = vshufps_avx(auVar7,auStack_1d8,0x33);
  auVar76 = vshufps_avx(auVar7,auVar76,0x2f);
  auVar85 = ZEXT1664(CONCAT412(fVar44 * (auVar76._12_4_ + _DAT_145fc6ed8),
                               CONCAT48(fVar43 * (auVar76._8_4_ + _DAT_145fc6ed8),
                                        CONCAT44(fVar42 * (auVar76._4_4_ + _DAT_145fc6ed8),
                                                 fVar22 * (auVar76._0_4_ + _DAT_145fc6ed8)))));
  (**(code **)(*plVar20 + 0x88))(plVar20,&uStack_148);
  auVar8._4_4_ = fStack_114;
  auVar8._0_4_ = fStack_118;
  auVar8._8_4_ = fStack_110;
  auVar8._12_4_ = fStack_10c;
  fVar22 = auVar85._0_4_;
  auVar67 = auVar85._0_16_;
  auVar76 = vshufps_avx(auVar67,auVar67,0x55);
  auVar67 = vshufps_avx(auVar67,auVar67,0xaa);
  auVar24._0_4_ =
       auVar67._0_4_ * fStack_128 +
       auVar76._0_4_ * fStack_138 + fVar22 * (float)uStack_148 + fStack_118;
  auVar24._4_4_ =
       auVar67._4_4_ * fStack_124 +
       auVar76._4_4_ * fStack_134 + fVar22 * uStack_148._4_4_ + fStack_114;
  auVar24._8_4_ =
       auVar67._8_4_ * fStack_120 + auVar76._8_4_ * fStack_130 + fVar22 * fStack_140 + fStack_110;
  auVar24._12_4_ =
       auVar67._12_4_ * fStack_11c + auVar76._12_4_ * fStack_12c + fVar22 * fStack_13c + fStack_10c;
  auVar76 = vblendps_avx(auVar24,auVar8,8);
  auVar40._0_4_ = fVar91 * auVar76._0_4_;
  auVar40._4_4_ = fVar94 * auVar76._4_4_;
  auVar40._8_4_ = fVar95 * auVar76._8_4_;
  auVar40._12_4_ = fVar96 * auVar76._12_4_;
  auVar67 = vroundps_avx(auVar40,3);
  auVar54._0_4_ = auVar67._0_4_ * _DAT_14615ad78 + auVar76._0_4_;
  auVar54._4_4_ = auVar67._4_4_ * _DAT_14615ad78 + auVar76._4_4_;
  auVar54._8_4_ = auVar67._8_4_ * _DAT_14615ad78 + auVar76._8_4_;
  auVar54._12_4_ = auVar67._12_4_ * _DAT_14615ad78 + auVar76._12_4_;
  auVar36._0_4_ = (int)auVar67._0_4_;
  auVar36._4_4_ = (int)auVar67._4_4_;
  auVar36._8_4_ = (int)auVar67._8_4_;
  auVar36._12_4_ = (int)auVar67._12_4_;
  auVar76 = vblendps_avx(auVar24,auVar54,3);
  auVar67 = vpackssdw_avx(auVar36,auVar36);
  sVar29 = auVar67._0_2_;
  auVar3._0_2_ = sVar29 + SUB42(fStack_118,0);
  sVar38 = auVar67._2_2_;
  auVar3._2_2_ = sVar38 + (short)((uint)fStack_118 >> 0x10);
  auVar3._4_2_ = sVar29 + SUB42(fStack_114,0);
  auVar3._6_2_ = sVar38 + (short)((uint)fStack_114 >> 0x10);
  auVar3._8_2_ = sVar29 + SUB42(fStack_110,0);
  auVar3._10_2_ = sVar38 + (short)((uint)fStack_110 >> 0x10);
  auVar3._12_2_ = sVar29 + SUB42(fStack_10c,0);
  auVar3._14_2_ = sVar38 + (short)((uint)fStack_10c >> 0x10);
  auVar76 = vpblendd_avx2(auVar76,auVar3,8);
  *(undefined1 (*) [16])(param_5 + 0xf0) = auVar76;
  auStack_158 = auVar79._0_16_;
  auVar67 = vblendps_avx(auVar76,auStack_158,4);
  *(undefined1 (*) [16])(param_5 + 0xf0) = auVar67;
  auVar76 = vsubps_avx(*(undefined1 (*) [16])(param_3 + 0xb0),auVar67);
  auStack_168 = vpsubw_avx(*(undefined1 (*) [16])(param_3 + 0xb0),auVar67);
  auVar52 = vblendps_avx(auVar76,auStack_168,8);
  auVar41 = vpunpckhwd_avx(auVar52,auVar52);
  auVar76 = *(undefined1 (*) [16])(param_5 + 0x100);
  auVar79 = ZEXT1664(auVar76);
  auVar41 = vpsrad_avx(auVar41,0x10);
  auVar41 = vcvtdq2ps_avx(auVar41);
  auVar41 = vshufpd_avx(auVar41,auVar41,3);
  auVar37._0_4_ = (auVar41._0_4_ * _DAT_146159c90 + auVar52._0_4_) * auVar76._0_4_;
  auVar37._4_4_ = (auVar41._4_4_ * _UNK_146159c94 + auVar52._4_4_) * auVar76._4_4_;
  auVar37._8_4_ = (auVar41._8_4_ * _UNK_146159c98 + auVar52._8_4_) * auVar76._8_4_;
  auVar37._12_4_ = (auVar41._12_4_ * _UNK_146159c9c + auVar52._12_4_) * auVar76._12_4_;
  auVar52 = vblendps_avx(auVar37,auStack_158,8);
  auVar52 = vhaddps_avx(auVar52,auVar52);
  auStack_178 = vhaddps_avx(auVar52,auVar52);
  auVar67 = vblendps_avx(auVar67,auStack_178,4);
  auVar76 = vdivps_avx(auVar67,auVar76);
  *(undefined1 (*) [16])(param_5 + 0xf0) = auVar67;
  auStack_188 = vshufps_avx(auVar76,auVar76,0xaa);
  if ((*(float *)(param_5 + 0x108) == 0.0) && (!NAN(*(float *)(param_5 + 0x108)))) {
    uVar12 = *(undefined4 *)(param_3 + 0xb8);
    auStack_188._4_4_ = uVar12;
    auStack_188._0_4_ = uVar12;
    auStack_188._8_4_ = uVar12;
    auStack_188._12_4_ = uVar12;
  }
  auVar76 = vblendps_avx(auVar67,auStack_188,4);
  *(undefined1 (*) [16])(param_5 + 0xf0) = auVar76;
  if (((((*(byte *)(param_3 + 0x140) & 8) == 0) &&
       ((*(longlong *)(param_3 + 8) == 0 ||
        ((*(byte *)(*(longlong *)(param_3 + 8) + 0x236) & 4) == 0)))) &&
      ((*(byte *)(param_3 + 0x141) & 4) == 0)) && (cVar10 = func_0x0001400ca280(), cVar10 == '\0'))
  {
    auVar25._0_12_ = ZEXT812(0);
    auVar25._12_4_ = 0;
    auVar76 = vcmpps_avx(auVar79._0_16_,auVar25,0);
    uVar12 = vmovmskps_avx(auVar76);
    if ((~(byte)uVar12 & 7) != 0) {
      bVar11 = (~*(byte *)(param_3 + 0x120) & 1) << 5;
      goto LAB_1400d5037;
    }
  }
  bVar11 = 0;
LAB_1400d5037:
  *(byte *)(param_5 + 0x110) = *(byte *)(param_5 + 0x110) & 0xdf | bVar11;
  uVar12 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),iVar15);
  FUN_145012860(&uStack_148,param_2,uVar12,param_8);
  uStack_148 = &UNK_14669fee0;
  lVar17 = *(longlong *)(CONCAT44(fStack_13c,fStack_140) + 0x3b30);
  iVar15 = func_0x0001450141d0(&uStack_148);
  iVar15 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar17 + 0x10) + 0x80),
                               *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar15 * 4));
  plVar20 = (longlong *)CONCAT44(fStack_13c,fStack_140);
  iVar21 = func_0x000144e05fa0(plVar20[1]);
  auVar79 = ZEXT1264(ZEXT812(0));
  auVar74._0_12_ = ZEXT812(0);
  auVar74._12_4_ = 0;
  if (iVar15 != iVar21) {
    uVar12 = (**(code **)(*plVar20 + 0xf0))(plVar20,iVar15);
    (**(code **)(*plVar20 + 0x108))(plVar20,uVar12,&fStack_1f8);
    auVar74._4_4_ = fStack_1e4;
    auVar74._0_4_ = fStack_1e8;
    auVar74._8_4_ = fStack_1e0;
    auVar74._12_4_ = fStack_1dc;
  }
  auVar85 = ZEXT1664(auVar74);
  uVar12 = FUN_1450128a0(**(undefined8 **)(param_2 + 0x3b30),5 - param_8);
  FUN_145012860(&puStack_108,param_2,uVar12,1 - param_8);
  puStack_108 = &UNK_14669fee0;
  lVar17 = plStack_100[0x766];
  iVar15 = func_0x0001450141d0(&puStack_108);
  iVar15 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar17 + 0x10) + 0x80),
                               *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar15 * 4));
  iVar21 = func_0x000144e05fa0(plStack_100[1]);
  auVar76 = auVar85._0_16_;
  auVar68 = auVar79._0_16_;
  if (iVar15 != iVar21) {
    uVar12 = (**(code **)(*plStack_100 + 0xf0))(plStack_100,iVar15);
    (**(code **)(*plStack_100 + 0x108))(plStack_100,uVar12,&fStack_1f8);
    auVar76 = auVar85._0_16_;
    auVar68._4_4_ = fStack_1e4;
    auVar68._0_4_ = fStack_1e8;
    auVar68._8_4_ = fStack_1e0;
    auVar68._12_4_ = fStack_1dc;
  }
  auVar76 = vcmpps_avx(auVar68,auVar76,1);
  *(byte *)(param_5 + 0x110) = *(byte *)(param_5 + 0x110) & 0xbf | (auVar76[4] & 1) << 6;
  if ((*(byte *)(param_3 + 0x14d) & 4) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = 2;
    if ((*(byte *)(param_6 + 4) & 1) == 0) {
      bVar11 = (0.0 < *(float *)(lVar16 + 0x174)) * '\x02';
    }
  }
  *(byte *)(lVar16 + 0x1a4) = (bVar11 * '\x02' | *(byte *)(lVar16 + 0x1a4) & 0xe9 | bVar11) ^ 4;
  lVar17 = *(longlong *)(param_3 + 8);
  if (lVar17 == 0) {
    uVar18 = 0xffffffff00000000;
    *(undefined8 *)(lVar16 + 0xa0) = 0;
  }
  else {
    *(ulonglong *)(lVar16 + 0xa0) = (ulonglong)*(ushort *)(lVar17 + 0x680);
    uVar18 = *(undefined8 *)(lVar17 + 0x688);
  }
  *(undefined8 *)(lVar16 + 0xa8) = uVar18;
  uVar12 = _DAT_145fc6f50;
  uVar26 = _DAT_145fc6f50;
  uVar27 = _DAT_145fc6f50;
  uVar28 = _DAT_145fc6f50;
  if ((*(byte *)(param_3 + 0x140) & 8) != 0) {
    uVar12 = *(undefined4 *)(lVar16 + 0x160);
    uVar26 = *(undefined4 *)(lVar16 + 0x164);
    uVar27 = *(undefined4 *)(lVar16 + 0x168);
    uVar28 = *(undefined4 *)(lVar16 + 0x16c);
  }
  *(undefined4 *)(lVar16 + 0x160) = uVar12;
  *(undefined4 *)(lVar16 + 0x164) = uVar26;
  *(undefined4 *)(lVar16 + 0x168) = uVar27;
  *(undefined4 *)(lVar16 + 0x16c) = uVar28;
  return;
}

