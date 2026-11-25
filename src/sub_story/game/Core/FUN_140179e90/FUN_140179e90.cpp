// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140179e90  size: 3792 bytes
// Name:    FUN_140179e90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140d802a0, FUN_1455138c0, FUN_1450322f0, FUN_14551d470, FUN_140db6c50, FUN_145032800, FUN_145033590, FUN_145031fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140179e90(longlong param_1,char param_2,char param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 *puVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  float *pfVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  longlong *plVar23;
  byte bVar24;
  ulonglong uVar25;
  byte bVar26;
  char *pcVar27;
  float fVar28;
  float fVar37;
  float fVar38;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar39;
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
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar78;
  undefined1 auVar73 [16];
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [64];
  float fVar99;
  undefined1 auVar100 [16];
  float fVar102;
  undefined1 in_ZMM7 [64];
  undefined1 auVar101 [64];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 in_ZMM8 [64];
  float fVar107;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [64];
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  undefined1 auVar113 [16];
  float fVar114;
  float fVar121;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar119;
  float fVar120;
  undefined1 auVar118 [64];
  undefined1 auVar122 [16];
  undefined1 auVar123 [64];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  longlong *plStack_168;
  longlong *plStack_160;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 auStack_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined1 auStack_138 [8];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  
  auStack_c8 = in_ZMM8._0_16_;
  auStack_d8 = in_ZMM7._0_16_;
  _auStack_148 = ZEXT812(0);
  fStack_13c = 0.0;
  _auStack_138 = _auStack_148;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    puVar10 = (undefined4 *)FUN_1450322f0();
    uVar1 = *puVar10;
    auStack_148._4_4_ = uVar1;
    auStack_148._0_4_ = uVar1;
    fStack_140 = (float)uVar1;
    fStack_13c = (float)uVar1;
  }
  bVar20 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    plVar23 = (longlong *)0x0;
  }
  else {
    puVar10 = (undefined4 *)FUN_1450322f0();
    uVar1 = *puVar10;
    auStack_138._4_4_ = uVar1;
    auStack_138._0_4_ = uVar1;
    fStack_130 = (float)uVar1;
    fStack_12c = (float)uVar1;
    plVar23 = *(longlong **)(param_1 + 0x30);
  }
  lVar17 = *(longlong *)(param_1 + 0x38);
  lVar13 = *(longlong *)(param_1 + 8);
  bVar26 = *(byte *)(lVar17 + 0x18e);
  if (*(byte *)(lVar17 + 0x18e) == 0xff) {
    bVar26 = bVar20;
  }
  bVar18 = *(byte *)(lVar17 + 399);
  if (*(byte *)(lVar17 + 399) == 0xff) {
    bVar18 = bVar20;
  }
  if (lVar13 != 0) {
    bVar20 = bVar26 == 0 &
             *(byte *)(*(longlong *)(lVar13 + 0x420) + 0xc +
                      (ulonglong)((uint)*(ushort *)(lVar17 + 0x194) * 0x90));
  }
  lVar11 = *(longlong *)(param_1 + 0x10);
  if (lVar11 == 0) {
    bVar24 = 0;
  }
  else {
    bVar24 = bVar18 == 0 &
             *(byte *)(*(longlong *)(lVar11 + 0x420) + 0xc +
                      (ulonglong)((uint)*(ushort *)(lVar17 + 0x196) * 0x90));
  }
  plVar5 = *(longlong **)(param_1 + 0x28);
  if (lVar13 != 0) {
    FUN_14551d470(lVar13,plVar5[1]);
    lVar11 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar11 != 0) {
    FUN_14551d470(lVar11,*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8));
  }
  fVar109 = 0.0;
  fVar110 = 0.0;
  fVar111 = 0.0;
  fVar112 = 0.0;
  fVar80 = 0.0;
  fVar107 = 0.0;
  fVar99 = 0.0;
  fVar102 = 0.0;
  fVar61 = 0.0;
  fVar74 = 0.0;
  fVar76 = 0.0;
  fVar78 = 0.0;
  if (plVar5 != (longlong *)0x0 && bVar20 == 0) {
    if ((*(byte *)((longlong)plVar5 + 0x26e) & 2) == 0) {
      pfVar12 = (float *)(plVar5 + 0x1a);
      pfVar15 = (float *)(plVar5 + 0x1c);
    }
    else {
      pfVar12 = (float *)FUN_145031fd0(plVar5 + 0x60,bVar26);
      pfVar15 = pfVar12 + 4;
    }
    fVar61 = *pfVar12;
    fVar74 = pfVar12[1];
    fVar76 = pfVar12[2];
    fVar78 = pfVar12[3];
    fVar80 = *pfVar15;
    fVar107 = pfVar15[1];
    fVar99 = pfVar15[2];
    fVar102 = pfVar15[3];
  }
  _auStack_198 = ZEXT812(0);
  uStack_190._4_4_ = 0.0;
  if (plVar23 != (longlong *)0x0 && bVar24 == 0) {
    if ((*(byte *)((longlong)plVar23 + 0x26e) & 2) == 0) {
      pauVar14 = (undefined1 (*) [16])(plVar23 + 0x1a);
      pauVar16 = (undefined1 (*) [16])(plVar23 + 0x1c);
    }
    else {
      pauVar14 = (undefined1 (*) [16])FUN_145031fd0(plVar23 + 0x60,bVar18);
      pauVar16 = pauVar14 + 1;
    }
    _auStack_198 = *pauVar14;
    fVar109 = *(float *)*pauVar16;
    fVar110 = *(float *)(*pauVar16 + 4);
    fVar111 = *(float *)(*pauVar16 + 8);
    fVar112 = *(float *)(*pauVar16 + 0xc);
  }
  if (*(short *)(param_1 + 0x40) == 0) {
    auVar98 = ZEXT864(0);
  }
  else {
    plStack_160 = plVar5 + 0x60;
    plStack_168 = plVar23 + 0x60;
    pcVar27 = (char *)(lVar17 + 0x198);
    auVar118 = ZEXT1264(ZEXT812(0));
    uVar25 = 0;
    auVar98 = ZEXT864(0);
    do {
      bVar22 = bVar24;
      if (uVar25 != 0) {
        bVar21 = bVar20;
        if (plVar5 != (longlong *)0x0) {
          bVar19 = pcVar27[-10];
          lVar17 = *(longlong *)(param_1 + 8);
          bVar21 = 0;
          if (bVar19 == 0xff) {
            bVar19 = 0;
          }
          if (lVar17 != 0) {
            bVar21 = bVar19 == 0 &
                     *(byte *)(*(longlong *)(lVar17 + 0x420) + 0xc +
                              (ulonglong)((uint)*(ushort *)(pcVar27 + -4) * 0x90));
          }
          if ((pcVar27[-0xc] != '\x01') || (bVar21 != bVar20)) {
            if (bVar20 == 0) {
              if (-1 < (char)*(byte *)((longlong)plVar5 + 0x26e)) {
                if ((*(byte *)((longlong)plVar5 + 0x26e) & 2) == 0) {
                  uStack_188 = CONCAT44(fVar74,fVar61);
                  uStack_180 = CONCAT44(fVar78,fVar76);
                  (**(code **)(*plVar5 + 0x38))(plVar5,&uStack_188);
                  fStack_1a8 = fVar80;
                  fStack_1a4 = fVar107;
                  fStack_1a0 = fVar99;
                  fStack_19c = fVar102;
                  (**(code **)(*plVar5 + 0x40))(plVar5,&fStack_1a8);
                }
                else {
                  uStack_188 = CONCAT44(fVar74,fVar61);
                  uStack_180 = CONCAT44(fVar78,fVar76);
                  fStack_178 = fVar80;
                  fStack_174 = fVar107;
                  fStack_170 = fVar99;
                  fStack_16c = fVar102;
                  FUN_145032800(plStack_160,bVar26,&uStack_188);
                }
              }
              if (bVar21 != 0) {
                lVar17 = *(longlong *)(param_1 + 8);
                lVar13 = *(longlong *)(param_1 + 0x28);
                goto LAB_14017a2f6;
              }
            }
            else {
              lVar13 = *(longlong *)(param_1 + 0x28);
              if (bVar21 != 0) {
LAB_14017a2f6:
                FUN_14551d470(lVar17,*(undefined8 *)(lVar13 + 8));
                bVar26 = bVar19;
                bVar21 = 1;
                goto LAB_14017a162;
              }
              FUN_1455138c0(lVar17,*(undefined8 *)(lVar13 + 8));
            }
            if ((*(byte *)((longlong)plVar5 + 0x26e) & 2) == 0) {
              fVar61 = *(float *)(plVar5 + 0x1a);
              fVar74 = *(float *)((longlong)plVar5 + 0xd4);
              fVar76 = *(float *)(plVar5 + 0x1b);
              fVar78 = *(float *)((longlong)plVar5 + 0xdc);
              fVar80 = *(float *)(plVar5 + 0x1c);
              fVar107 = *(float *)((longlong)plVar5 + 0xe4);
              fVar99 = *(float *)(plVar5 + 0x1d);
              fVar102 = *(float *)((longlong)plVar5 + 0xec);
            }
            else {
              pfVar12 = (float *)FUN_145031fd0(plStack_160,bVar19);
              fVar61 = *pfVar12;
              fVar74 = pfVar12[1];
              fVar76 = pfVar12[2];
              fVar78 = pfVar12[3];
              fVar80 = pfVar12[4];
              fVar107 = pfVar12[5];
              fVar99 = pfVar12[6];
              fVar102 = pfVar12[7];
            }
            bVar26 = bVar19;
            bVar21 = 0;
          }
        }
LAB_14017a162:
        bVar20 = bVar21;
        if (plVar23 != (longlong *)0x0) {
          bVar21 = pcVar27[-9];
          lVar17 = *(longlong *)(param_1 + 0x10);
          bVar22 = 0;
          if (bVar21 == 0xff) {
            bVar21 = 0;
          }
          if (lVar17 != 0) {
            bVar22 = bVar21 == 0 &
                     *(byte *)(*(longlong *)(lVar17 + 0x420) + 0xc +
                              (ulonglong)((uint)*(ushort *)(pcVar27 + -2) * 0x90));
          }
          if ((pcVar27[-0xb] != '\x01') || (bVar22 != bVar24)) {
            if (bVar24 == 0) {
              if (-1 < (char)*(byte *)((longlong)plVar23 + 0x26e)) {
                if ((*(byte *)((longlong)plVar23 + 0x26e) & 2) == 0) {
                  uStack_188 = auStack_198;
                  uStack_180 = uStack_190;
                  (**(code **)(*plVar23 + 0x38))(plVar23,&uStack_188);
                  fStack_1a8 = fVar109;
                  fStack_1a4 = fVar110;
                  fStack_1a0 = fVar111;
                  fStack_19c = fVar112;
                  (**(code **)(*plVar23 + 0x40))(plVar23,&fStack_1a8);
                }
                else {
                  uStack_188 = auStack_198;
                  uStack_180 = uStack_190;
                  fStack_178 = fVar109;
                  fStack_174 = fVar110;
                  fStack_170 = fVar111;
                  fStack_16c = fVar112;
                  FUN_145032800(plStack_168,bVar18,&uStack_188);
                }
              }
              if (bVar22 != 0) {
                lVar17 = *(longlong *)(param_1 + 0x10);
                lVar13 = *(longlong *)(param_1 + 0x30);
                goto LAB_14017a384;
              }
            }
            else {
              lVar13 = *(longlong *)(param_1 + 0x30);
              if (bVar22 != 0) {
LAB_14017a384:
                FUN_14551d470(lVar17,*(undefined8 *)(lVar13 + 8));
                bVar22 = 1;
                bVar18 = bVar21;
                goto LAB_14017a3e4;
              }
              FUN_1455138c0(lVar17,*(undefined8 *)(lVar13 + 8));
            }
            if ((*(byte *)((longlong)plVar23 + 0x26e) & 2) == 0) {
              _auStack_198 = *(undefined1 (*) [16])(plVar23 + 0x1a);
              fVar109 = *(float *)(plVar23 + 0x1c);
              fVar110 = *(float *)((longlong)plVar23 + 0xe4);
              fVar111 = *(float *)(plVar23 + 0x1d);
              fVar112 = *(float *)((longlong)plVar23 + 0xec);
            }
            else {
              pauVar14 = (undefined1 (*) [16])FUN_145031fd0(plStack_168,bVar21);
              _auStack_198 = *pauVar14;
              fVar109 = *(float *)pauVar14[1];
              fVar110 = *(float *)(pauVar14[1] + 4);
              fVar111 = *(float *)(pauVar14[1] + 8);
              fVar112 = *(float *)(pauVar14[1] + 0xc);
            }
            bVar22 = 0;
            bVar18 = bVar21;
          }
        }
      }
LAB_14017a3e4:
      bVar24 = bVar22;
      auVar84 = auVar98._0_16_;
      if (*pcVar27 == '\0') {
        uVar3 = *(undefined2 *)(pcVar27 + -2);
        if (param_3 == '\0') {
          auVar51._8_8_ = 0;
          auVar51._0_8_ = *(ulonglong *)(pcVar27 + -0x24);
          uVar2 = *(uint *)(pcVar27 + -0x28);
          fVar114 = *(float *)(pcVar27 + -0x198);
          fVar119 = *(float *)(pcVar27 + -0x194);
          fVar120 = *(float *)(pcVar27 + -400);
          fVar121 = *(float *)(pcVar27 + -0x18c);
          fVar28 = *(float *)(pcVar27 + -0x188);
          fVar37 = *(float *)(pcVar27 + -0x184);
          fVar38 = *(float *)(pcVar27 + -0x180);
          fVar39 = *(float *)(pcVar27 + -0x17c);
          fVar62 = *(float *)(pcVar27 + -0x178);
          fVar75 = *(float *)(pcVar27 + -0x174);
          fVar77 = *(float *)(pcVar27 + -0x170);
          fVar79 = *(float *)(pcVar27 + -0x16c);
          uVar4 = *(undefined2 *)(pcVar27 + -4);
          auVar101 = ZEXT1664(CONCAT412(uVar2 ^ _DAT_145fc6f10,
                                        CONCAT48(uVar2 ^ _DAT_145fc6f10,
                                                 CONCAT44(uVar2 ^ _DAT_145fc6f10,
                                                          uVar2 ^ _DAT_145fc6f10))));
          auVar51 = vshufps_avx(auVar51,auVar51,4);
          auVar118 = ZEXT1664(auVar51);
          fStack_128 = fVar109;
          fStack_124 = fVar110;
          fStack_120 = fVar111;
          fStack_11c = fVar112;
          fStack_108 = fVar61;
          fStack_104 = fVar74;
          fStack_100 = fVar76;
          fStack_fc = fVar78;
          if (bVar20 == 0) {
            if (plVar5 == (longlong *)0x0) {
              auVar123 = ZEXT1664(CONCAT412(auVar51._12_4_ ^ _DAT_145fc6f10,
                                            CONCAT48(auVar51._8_4_ ^ _DAT_145fc6f10,
                                                     CONCAT44(auVar51._4_4_ ^ _DAT_145fc6f10,
                                                              auVar51._0_4_ ^ _DAT_145fc6f10))));
              auVar108 = ZEXT1264(ZEXT812(0));
              fVar61 = 0.0;
              auVar98 = ZEXT864(0);
            }
            else {
              auVar81._0_4_ = fVar114 * *(float *)(pcVar27 + -0x128);
              auVar81._4_4_ = fVar119 * *(float *)(pcVar27 + -0x124);
              auVar81._8_4_ = fVar120 * *(float *)(pcVar27 + -0x120);
              auVar81._12_4_ = fVar121 * *(float *)(pcVar27 + -0x11c);
              auVar29 = ZEXT816(0);
              fVar109 = *(float *)(pcVar27 + -0x148);
              fVar110 = *(float *)(pcVar27 + -0x144);
              fVar111 = *(float *)(pcVar27 + -0x140);
              fVar112 = *(float *)(pcVar27 + -0x13c);
              auVar63._0_4_ = *(float *)(pcVar27 + -0x158) * *(float *)(pcVar27 + -0x118);
              auVar63._4_4_ = *(float *)(pcVar27 + -0x154) * *(float *)(pcVar27 + -0x114);
              auVar63._8_4_ = *(float *)(pcVar27 + -0x150) * *(float *)(pcVar27 + -0x110);
              auVar63._12_4_ = *(float *)(pcVar27 + -0x14c) * *(float *)(pcVar27 + -0x10c);
              auVar42._0_4_ = *(float *)(pcVar27 + -0x158) * fVar80;
              auVar42._4_4_ = *(float *)(pcVar27 + -0x154) * fVar107;
              auVar42._8_4_ = *(float *)(pcVar27 + -0x150) * fVar99;
              auVar42._12_4_ = *(float *)(pcVar27 + -0x14c) * fVar102;
              auVar43 = vblendps_avx(auVar81,auVar29,8);
              auVar53 = vblendps_avx(auVar63,auVar29,8);
              auVar30 = vhaddps_avx(auVar43,auVar43);
              auVar43 = vblendps_avx(auVar42,auVar29,8);
              auVar53 = vhaddps_avx(auVar53,auVar53);
              auVar43 = vhaddps_avx(auVar43,auVar43);
              auVar63 = vhaddps_avx(auVar30,auVar30);
              auVar81 = vhaddps_avx(auVar53,auVar53);
              auVar44 = vhaddps_avx(auVar43,auVar43);
              auVar64._0_4_ = fVar28 * *(float *)(pcVar27 + -0x108);
              auVar64._4_4_ = fVar37 * *(float *)(pcVar27 + -0x104);
              auVar64._8_4_ = fVar38 * *(float *)(pcVar27 + -0x100);
              auVar64._12_4_ = fVar39 * *(float *)(pcVar27 + -0xfc);
              auVar53._0_4_ = fVar62 * *(float *)(pcVar27 + -0x108);
              auVar53._4_4_ = fVar75 * *(float *)(pcVar27 + -0x104);
              auVar53._8_4_ = fVar77 * *(float *)(pcVar27 + -0x100);
              auVar53._12_4_ = fVar79 * *(float *)(pcVar27 + -0xfc);
              auVar43 = vblendps_avx(auVar64,auVar29,8);
              auVar53 = vblendps_avx(auVar53,auVar29,8);
              auVar88._0_4_ = fVar28 * *(float *)(pcVar27 + -0xf8);
              auVar88._4_4_ = fVar37 * *(float *)(pcVar27 + -0xf4);
              auVar88._8_4_ = fVar38 * *(float *)(pcVar27 + -0xf0);
              auVar88._12_4_ = fVar39 * *(float *)(pcVar27 + -0xec);
              auVar82._0_4_ = fVar62 * *(float *)(pcVar27 + -0xf8);
              auVar82._4_4_ = fVar75 * *(float *)(pcVar27 + -0xf4);
              auVar82._8_4_ = fVar77 * *(float *)(pcVar27 + -0xf0);
              auVar82._12_4_ = fVar79 * *(float *)(pcVar27 + -0xec);
              auVar30 = vblendps_avx(auVar88,auVar29,8);
              auVar42 = vblendps_avx(auVar82,auVar29,8);
              auVar43 = vhaddps_avx(auVar43,auVar30);
              auVar53 = vhaddps_avx(auVar53,auVar42);
              auVar30 = vhaddps_avx(auVar43,auVar53);
              auVar105._0_4_ = *(float *)(pcVar27 + -0xd8) * fVar109;
              auVar105._4_4_ = *(float *)(pcVar27 + -0xd4) * fVar110;
              auVar105._8_4_ = *(float *)(pcVar27 + -0xd0) * fVar111;
              auVar105._12_4_ = *(float *)(pcVar27 + -0xcc) * fVar112;
              auVar43 = vblendps_avx(auVar105,auVar29,8);
              auVar83._0_4_ = fVar109 * *(float *)(pcVar27 + -0xe8);
              auVar83._4_4_ = fVar110 * *(float *)(pcVar27 + -0xe4);
              auVar83._8_4_ = fVar111 * *(float *)(pcVar27 + -0xe0);
              auVar83._12_4_ = fVar112 * *(float *)(pcVar27 + -0xdc);
              auVar53 = vblendps_avx(auVar83,auVar29,8);
              auVar42 = vhaddps_avx(auVar53,auVar43);
              fVar6 = *(float *)(pcVar27 + -0x138);
              fVar7 = *(float *)(pcVar27 + -0x134);
              fVar8 = *(float *)(pcVar27 + -0x130);
              fVar9 = *(float *)(pcVar27 + -300);
              auVar65._0_4_ = fVar6 * *(float *)(pcVar27 + -0xe8);
              auVar65._4_4_ = fVar7 * *(float *)(pcVar27 + -0xe4);
              auVar65._8_4_ = fVar8 * *(float *)(pcVar27 + -0xe0);
              auVar65._12_4_ = fVar9 * *(float *)(pcVar27 + -0xdc);
              auVar89._0_4_ = fVar6 * *(float *)(pcVar27 + -0xd8);
              auVar89._4_4_ = fVar7 * *(float *)(pcVar27 + -0xd4);
              auVar89._8_4_ = fVar8 * *(float *)(pcVar27 + -0xd0);
              auVar89._12_4_ = fVar9 * *(float *)(pcVar27 + -0xcc);
              auVar43 = vblendps_avx(auVar65,auVar29,8);
              auVar53 = vblendps_avx(auVar89,auVar29,8);
              auVar43 = vhaddps_avx(auVar43,auVar53);
              auVar43 = vhaddps_avx(auVar42,auVar43);
              auVar54._0_4_ = auVar43._0_4_ + auVar30._0_4_;
              auVar54._4_4_ = auVar43._4_4_ + auVar30._4_4_;
              auVar54._8_4_ = auVar43._8_4_ + auVar30._8_4_;
              auVar54._12_4_ = auVar43._12_4_ + auVar30._12_4_;
              auVar66._0_4_ = fVar114 * fVar61;
              auVar66._4_4_ = fVar119 * fVar74;
              auVar66._8_4_ = fVar120 * fVar76;
              auVar66._12_4_ = fVar121 * fVar78;
              auVar43 = vblendps_avx(auVar66,auVar29,8);
              auVar43 = vhaddps_avx(auVar43,auVar43);
              auVar43 = vhaddps_avx(auVar43,auVar43);
              auVar101 = ZEXT1664(CONCAT412(auVar44._12_4_ + (float)(uVar2 ^ _DAT_145fc6f10) +
                                            auVar43._12_4_,
                                            CONCAT48(auVar44._8_4_ + (float)(uVar2 ^ _DAT_145fc6f10)
                                                     + auVar43._8_4_,
                                                     CONCAT44(auVar44._4_4_ +
                                                              (float)(uVar2 ^ _DAT_145fc6f10) +
                                                              auVar43._4_4_,
                                                              auVar44._0_4_ +
                                                              (float)(uVar2 ^ _DAT_145fc6f10) +
                                                              auVar43._0_4_))));
              auVar43._0_4_ = fVar6 * fVar80;
              auVar43._4_4_ = fVar7 * fVar107;
              auVar43._8_4_ = fVar8 * fVar99;
              auVar43._12_4_ = fVar9 * fVar102;
              auVar67._0_4_ = fVar28 * fVar61;
              auVar67._4_4_ = fVar37 * fVar74;
              auVar67._8_4_ = fVar38 * fVar76;
              auVar67._12_4_ = fVar39 * fVar78;
              auVar30._0_4_ = fVar80 * fVar109;
              auVar30._4_4_ = fVar107 * fVar110;
              auVar30._8_4_ = fVar99 * fVar111;
              auVar30._12_4_ = fVar102 * fVar112;
              auVar43 = vblendps_avx(auVar43,auVar29,8);
              auVar53 = vblendps_avx(auVar67,auVar29,8);
              auVar30 = vblendps_avx(auVar30,auVar29,8);
              auVar30 = vhaddps_avx(auVar30,auVar43);
              auVar44._0_4_ = fVar62 * fVar61;
              auVar44._4_4_ = fVar75 * fVar74;
              auVar44._8_4_ = fVar77 * fVar76;
              auVar44._12_4_ = fVar79 * fVar78;
              auVar43 = vshufps_avx(auVar54,auVar54,0xff);
              auVar108 = ZEXT1664(auVar43);
              auVar43 = vblendps_avx(auVar44,auVar29,8);
              auVar98 = ZEXT1664(CONCAT412(auVar63._12_4_ + auVar81._12_4_,
                                           CONCAT48(auVar63._8_4_ + auVar81._8_4_,
                                                    CONCAT44(auVar63._4_4_ + auVar81._4_4_,
                                                             auVar63._0_4_ + auVar81._0_4_))));
              auVar43 = vhaddps_avx(auVar53,auVar43);
              auVar53 = vhaddps_avx(auVar30,auVar30);
              auVar43 = vhaddps_avx(auVar43,auVar43);
              auVar51 = vsubps_avx(auVar53,auVar51);
              auVar123 = ZEXT1664(CONCAT412(auVar51._12_4_ + auVar43._12_4_,
                                            CONCAT48(auVar51._8_4_ + auVar43._8_4_,
                                                     CONCAT44(auVar51._4_4_ + auVar43._4_4_,
                                                              auVar51._0_4_ + auVar43._0_4_))));
              fVar61 = auVar54._0_4_;
            }
          }
          else {
            FUN_140d802a0(*(undefined8 *)(param_1 + 8),uVar4,&uStack_188,&fStack_1a8);
            auVar84 = auVar98._0_16_;
            auVar52._0_12_ = ZEXT812(0);
            auVar52._12_4_ = 0;
            auVar98 = ZEXT1664(CONCAT412(fStack_1a8,
                                         CONCAT48(fStack_1a8,CONCAT44(fStack_1a8,fStack_1a8))));
            auVar108 = ZEXT1664(CONCAT412(fStack_1a0,
                                          CONCAT48(fStack_1a0,CONCAT44(fStack_1a0,fStack_1a0))));
            auVar40._0_4_ = fVar114 * (float)uStack_188;
            auVar40._4_4_ = fVar119 * uStack_188._4_4_;
            auVar40._8_4_ = fVar120 * (float)uStack_180;
            auVar40._12_4_ = fVar121 * uStack_180._4_4_;
            auVar51 = vblendps_avx(auVar40,auVar52,8);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar101 = ZEXT1664(CONCAT412(auVar51._12_4_ + auVar101._12_4_,
                                          CONCAT48(auVar51._8_4_ + auVar101._8_4_,
                                                   CONCAT44(auVar51._4_4_ + auVar101._4_4_,
                                                            auVar51._0_4_ + auVar101._0_4_))));
            auVar41._0_4_ = fVar62 * (float)uStack_188;
            auVar41._4_4_ = fVar75 * uStack_188._4_4_;
            auVar41._8_4_ = fVar77 * (float)uStack_180;
            auVar41._12_4_ = fVar79 * uStack_180._4_4_;
            auVar29._0_4_ = fVar28 * (float)uStack_188;
            auVar29._4_4_ = fVar37 * uStack_188._4_4_;
            auVar29._8_4_ = fVar38 * (float)uStack_180;
            auVar29._12_4_ = fVar39 * uStack_180._4_4_;
            auVar51 = vblendps_avx(auVar41,auVar52,8);
            auVar43 = vblendps_avx(auVar29,auVar52,8);
            auVar51 = vhaddps_avx(auVar43,auVar51);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar51 = vsubps_avx(auVar51,auVar118._0_16_);
            auVar123 = ZEXT1664(auVar51);
            fVar61 = fStack_1a4;
          }
          auVar30 = auVar108._0_16_;
          auVar53 = auVar98._0_16_;
          auVar51 = auVar101._0_16_;
          auVar43 = auVar123._0_16_;
          fVar74 = fVar61;
          fVar76 = fVar61;
          fVar78 = fVar61;
          fStack_158 = fVar80;
          fStack_154 = fVar107;
          fStack_150 = fVar99;
          fStack_14c = fVar102;
          _auStack_118 = auVar84;
          if (bVar24 == 0) {
            if (plVar23 == (longlong *)0x0) {
              auVar32._0_12_ = ZEXT812(0);
              auVar32._12_4_ = 0;
              fVar80 = 0.0;
              auVar84._0_12_ = ZEXT812(0);
              auVar84._12_4_ = 0;
              auVar118 = ZEXT1264(ZEXT812(0));
            }
            else {
              auVar122._0_12_ = ZEXT812(0);
              auVar122._12_4_ = 0;
              fVar107 = *(float *)(pcVar27 + -0x188);
              fVar99 = *(float *)(pcVar27 + -0x184);
              fVar102 = *(float *)(pcVar27 + -0x180);
              fVar109 = *(float *)(pcVar27 + -0x17c);
              fVar110 = *(float *)(pcVar27 + -0x178);
              fVar111 = *(float *)(pcVar27 + -0x174);
              fVar112 = *(float *)(pcVar27 + -0x170);
              fVar28 = *(float *)(pcVar27 + -0x16c);
              auVar33._0_4_ = *(float *)(pcVar27 + -200) * *(float *)(pcVar27 + -0x88);
              auVar33._4_4_ = *(float *)(pcVar27 + -0xc4) * *(float *)(pcVar27 + -0x84);
              auVar33._8_4_ = *(float *)(pcVar27 + -0xc0) * *(float *)(pcVar27 + -0x80);
              auVar33._12_4_ = *(float *)(pcVar27 + -0xbc) * *(float *)(pcVar27 + -0x7c);
              auVar45._0_4_ = *(float *)(pcVar27 + -0x198) * *(float *)(pcVar27 + -0x98);
              auVar45._4_4_ = *(float *)(pcVar27 + -0x194) * *(float *)(pcVar27 + -0x94);
              auVar45._8_4_ = *(float *)(pcVar27 + -400) * *(float *)(pcVar27 + -0x90);
              auVar45._12_4_ = *(float *)(pcVar27 + -0x18c) * *(float *)(pcVar27 + -0x8c);
              auVar116._0_4_ = *(float *)(pcVar27 + -0x68) * fVar107;
              auVar116._4_4_ = *(float *)(pcVar27 + -100) * fVar99;
              auVar116._8_4_ = *(float *)(pcVar27 + -0x60) * fVar102;
              auVar116._12_4_ = *(float *)(pcVar27 + -0x5c) * fVar109;
              auVar113._0_4_ = *(float *)(pcVar27 + -0x68) * fVar110;
              auVar113._4_4_ = *(float *)(pcVar27 + -100) * fVar111;
              auVar113._8_4_ = *(float *)(pcVar27 + -0x60) * fVar112;
              auVar113._12_4_ = *(float *)(pcVar27 + -0x5c) * fVar28;
              auVar84 = vblendps_avx(auVar33,auVar122,8);
              auVar51 = vblendps_avx(auVar45,auVar122,8);
              auVar43 = vblendps_avx(auVar116,auVar122,8);
              auVar42 = vblendps_avx(auVar113,auVar122,8);
              auVar84 = vhaddps_avx(auVar84,auVar84);
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar84 = vhaddps_avx(auVar84,auVar84);
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar32 = vsubps_avx(auVar84,auVar51);
              auVar85._0_4_ = fVar107 * *(float *)(pcVar27 + -0x78);
              auVar85._4_4_ = fVar99 * *(float *)(pcVar27 + -0x74);
              auVar85._8_4_ = fVar102 * *(float *)(pcVar27 + -0x70);
              auVar85._12_4_ = fVar109 * *(float *)(pcVar27 + -0x6c);
              auVar46._0_4_ = fVar110 * *(float *)(pcVar27 + -0x78);
              auVar46._4_4_ = fVar111 * *(float *)(pcVar27 + -0x74);
              auVar46._8_4_ = fVar112 * *(float *)(pcVar27 + -0x70);
              auVar46._12_4_ = fVar28 * *(float *)(pcVar27 + -0x6c);
              auVar84 = vblendps_avx(auVar85,auVar122,8);
              auVar51 = vblendps_avx(auVar46,auVar122,8);
              auVar51 = vhaddps_avx(auVar51,auVar42);
              auVar84 = vhaddps_avx(auVar84,auVar43);
              fVar75 = *(float *)(pcVar27 + -0xb8);
              fVar77 = *(float *)(pcVar27 + -0xb4);
              fVar79 = *(float *)(pcVar27 + -0xb0);
              fVar114 = *(float *)(pcVar27 + -0xac);
              auVar43 = vhaddps_avx(auVar84,auVar51);
              auVar103._0_4_ = fVar75 * *(float *)(pcVar27 + -0x48);
              auVar103._4_4_ = fVar77 * *(float *)(pcVar27 + -0x44);
              auVar103._8_4_ = fVar79 * *(float *)(pcVar27 + -0x40);
              auVar103._12_4_ = fVar114 * *(float *)(pcVar27 + -0x3c);
              auVar84 = vblendps_avx(auVar103,auVar122,8);
              auVar117._0_4_ = fVar75 * *(float *)(pcVar27 + -0x58);
              auVar117._4_4_ = fVar77 * *(float *)(pcVar27 + -0x54);
              auVar117._8_4_ = fVar79 * *(float *)(pcVar27 + -0x50);
              auVar117._12_4_ = fVar114 * *(float *)(pcVar27 + -0x4c);
              auVar51 = vblendps_avx(auVar117,auVar122,8);
              auVar42 = vhaddps_avx(auVar51,auVar84);
              fVar37 = *(float *)(pcVar27 + -0xa8);
              fVar38 = *(float *)(pcVar27 + -0xa4);
              fVar39 = *(float *)(pcVar27 + -0xa0);
              fVar62 = *(float *)(pcVar27 + -0x9c);
              auVar86._0_4_ = fVar37 * *(float *)(pcVar27 + -0x58);
              auVar86._4_4_ = fVar38 * *(float *)(pcVar27 + -0x54);
              auVar86._8_4_ = fVar39 * *(float *)(pcVar27 + -0x50);
              auVar86._12_4_ = fVar62 * *(float *)(pcVar27 + -0x4c);
              auVar94._0_4_ = fVar37 * *(float *)(pcVar27 + -0x48);
              auVar94._4_4_ = fVar38 * *(float *)(pcVar27 + -0x44);
              auVar94._8_4_ = fVar39 * *(float *)(pcVar27 + -0x40);
              auVar94._12_4_ = fVar62 * *(float *)(pcVar27 + -0x3c);
              auVar84 = vblendps_avx(auVar86,auVar122,8);
              auVar51 = vblendps_avx(auVar94,auVar122,8);
              auVar84 = vhaddps_avx(auVar84,auVar51);
              auVar84 = vhaddps_avx(auVar42,auVar84);
              auVar84 = vsubps_avx(auVar84,auVar43);
              auVar95._0_4_ = *(float *)(pcVar27 + -200) * fStack_128;
              auVar95._4_4_ = *(float *)(pcVar27 + -0xc4) * fStack_124;
              auVar95._8_4_ = *(float *)(pcVar27 + -0xc0) * fStack_120;
              auVar95._12_4_ = *(float *)(pcVar27 + -0xbc) * fStack_11c;
              fVar80 = auVar84._0_4_;
              auVar84 = vshufps_avx(auVar84,auVar84,0xff);
              auVar51 = vblendps_avx(auVar95,auVar122,8);
              auVar43 = vhaddps_avx(auVar51,auVar51);
              auVar90._0_4_ = (float)auStack_198._0_4_ * *(float *)(pcVar27 + -0x198);
              auVar90._4_4_ = (float)auStack_198._4_4_ * *(float *)(pcVar27 + -0x194);
              auVar90._8_4_ = (float)uStack_190 * *(float *)(pcVar27 + -400);
              auVar90._12_4_ = uStack_190._4_4_ * *(float *)(pcVar27 + -0x18c);
              auVar70._0_4_ = (float)auStack_198._0_4_ * fVar110;
              auVar70._4_4_ = (float)auStack_198._4_4_ * fVar111;
              auVar70._8_4_ = (float)uStack_190 * fVar112;
              auVar70._12_4_ = uStack_190._4_4_ * fVar28;
              auVar56._0_4_ = (float)auStack_198._0_4_ * fVar107;
              auVar56._4_4_ = (float)auStack_198._4_4_ * fVar99;
              auVar56._8_4_ = (float)uStack_190 * fVar102;
              auVar56._12_4_ = uStack_190._4_4_ * fVar109;
              auVar51 = vblendps_avx(auVar90,auVar122,8);
              auVar43 = vhaddps_avx(auVar43,auVar43);
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar96._0_4_ = auVar43._0_4_ + auVar101._0_4_;
              auVar96._4_4_ = auVar43._4_4_ + auVar101._4_4_;
              auVar96._8_4_ = auVar43._8_4_ + auVar101._8_4_;
              auVar96._12_4_ = auVar43._12_4_ + auVar101._12_4_;
              auVar51 = vhaddps_avx(auVar51,auVar51);
              auVar51 = vsubps_avx(auVar96,auVar51);
              auVar91._0_4_ = fVar37 * fStack_128;
              auVar91._4_4_ = fVar38 * fStack_124;
              auVar91._8_4_ = fVar39 * fStack_120;
              auVar91._12_4_ = fVar62 * fStack_11c;
              auVar97._0_4_ = fVar75 * fStack_128;
              auVar97._4_4_ = fVar77 * fStack_124;
              auVar97._8_4_ = fVar79 * fStack_120;
              auVar97._12_4_ = fVar114 * fStack_11c;
              auVar81 = ZEXT816(0) << 0x20;
              auVar118 = ZEXT864(0) << 0x20;
              auVar43 = vblendps_avx(auVar70,auVar81,8);
              auVar42 = vblendps_avx(auVar56,auVar81,8);
              auVar63 = vhaddps_avx(auVar42,auVar43);
              auVar43 = vblendps_avx(auVar91,auVar81,8);
              auVar42 = vblendps_avx(auVar97,auVar81,8);
              auVar43 = vhaddps_avx(auVar42,auVar43);
              auVar42 = vhaddps_avx(auVar63,auVar63);
              auVar43 = vhaddps_avx(auVar43,auVar43);
              auVar71._0_4_ = auVar123._0_4_ + auVar43._0_4_;
              auVar71._4_4_ = auVar123._4_4_ + auVar43._4_4_;
              auVar71._8_4_ = auVar123._8_4_ + auVar43._8_4_;
              auVar71._12_4_ = auVar123._12_4_ + auVar43._12_4_;
              auVar43 = vsubps_avx(auVar71,auVar42);
              fStack_f8 = fVar61;
              fStack_f4 = fVar61;
              fStack_f0 = fVar61;
              fStack_ec = fVar61;
            }
          }
          else {
            FUN_140d802a0(*(undefined8 *)(param_1 + 0x10),uVar3,&uStack_188,&fStack_1a8);
            auVar30 = auVar108._0_16_;
            auVar53 = auVar98._0_16_;
            auVar32._4_4_ = fStack_1a8;
            auVar32._0_4_ = fStack_1a8;
            auVar32._8_4_ = fStack_1a8;
            auVar32._12_4_ = fStack_1a8;
            auVar84._4_4_ = fStack_1a0;
            auVar84._0_4_ = fStack_1a0;
            auVar84._8_4_ = fStack_1a0;
            auVar84._12_4_ = fStack_1a0;
            auVar68._0_4_ = fVar114 * (float)uStack_188;
            auVar68._4_4_ = fVar119 * uStack_188._4_4_;
            auVar68._8_4_ = fVar120 * (float)uStack_180;
            auVar68._12_4_ = fVar121 * uStack_180._4_4_;
            auVar115._0_12_ = ZEXT812(0);
            auVar115._12_4_ = 0;
            auVar118 = ZEXT1664(auVar115);
            auVar51 = vblendps_avx(auVar68,auVar115,8);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar51 = vsubps_avx(auVar101._0_16_,auVar51);
            auVar69._0_4_ = fVar62 * (float)uStack_188;
            auVar69._4_4_ = fVar75 * uStack_188._4_4_;
            auVar69._8_4_ = fVar77 * (float)uStack_180;
            auVar69._12_4_ = fVar79 * uStack_180._4_4_;
            auVar55._0_4_ = fVar28 * (float)uStack_188;
            auVar55._4_4_ = fVar37 * uStack_188._4_4_;
            auVar55._8_4_ = fVar38 * (float)uStack_180;
            auVar55._12_4_ = fVar39 * uStack_180._4_4_;
            auVar43 = vblendps_avx(auVar69,auVar115,8);
            auVar42 = vblendps_avx(auVar55,auVar115,8);
            auVar43 = vhaddps_avx(auVar42,auVar43);
            auVar43 = vhaddps_avx(auVar43,auVar43);
            auVar43 = vsubps_avx(auVar123._0_16_,auVar43);
            fVar80 = fStack_1a4;
          }
          fVar109 = _DAT_145fc6ed8;
          fVar107 = *(float *)(pcVar27 + -0x18);
          auVar104._4_4_ = fVar107;
          auVar104._0_4_ = fVar107;
          auVar104._8_4_ = fVar107;
          auVar104._12_4_ = fVar107;
          fVar99 = *(float *)(pcVar27 + -0x10);
          fVar39 = auVar43._0_4_;
          auVar47._0_4_ = _DAT_14615a034 + auVar53._0_4_ + auVar32._0_4_;
          auVar47._4_4_ = _DAT_14615a034 + auVar53._4_4_ + auVar32._4_4_;
          auVar47._8_4_ = _DAT_14615a034 + auVar53._8_4_ + auVar32._8_4_;
          auVar47._12_4_ = _DAT_14615a034 + auVar53._12_4_ + auVar32._12_4_;
          auVar72._0_4_ = _DAT_14615a034 + fVar61 + fVar80;
          auVar72._4_4_ = _DAT_14615a034 + fVar74 + fVar80;
          auVar72._8_4_ = _DAT_14615a034 + fVar76 + fVar80;
          auVar72._12_4_ = _DAT_14615a034 + fVar78 + fVar80;
          auVar57._0_4_ = _DAT_14615a034 + auVar30._0_4_ + auVar84._0_4_;
          auVar57._4_4_ = _DAT_14615a034 + auVar30._4_4_ + auVar84._4_4_;
          auVar57._8_4_ = _DAT_14615a034 + auVar30._8_4_ + auVar84._8_4_;
          auVar57._12_4_ = _DAT_14615a034 + auVar30._12_4_ + auVar84._12_4_;
          fVar80 = *(float *)(pcVar27 + -0x14);
          auVar106._4_4_ = fVar80;
          auVar106._0_4_ = fVar80;
          auVar106._8_4_ = fVar80;
          auVar106._12_4_ = fVar80;
          auVar84 = vrcpps_avx(auVar47);
          fVar61 = auVar84._0_4_;
          fVar74 = auVar84._4_4_;
          fVar76 = auVar84._8_4_;
          fVar78 = auVar84._12_4_;
          fVar102 = *(float *)(pcVar27 + -0x1c);
          auVar34._4_4_ = fVar102;
          auVar34._0_4_ = fVar102;
          auVar34._8_4_ = fVar102;
          auVar34._12_4_ = fVar102;
          auVar48._0_4_ =
               auVar51._0_4_ * ((fVar61 * auVar47._0_4_ - _DAT_145fc6ed8) * fVar61 - fVar61) +
               fVar102;
          auVar48._4_4_ =
               auVar51._4_4_ * ((fVar74 * auVar47._4_4_ - _DAT_145fc6ed8) * fVar74 - fVar74) +
               fVar102;
          auVar48._8_4_ =
               auVar51._8_4_ * ((fVar76 * auVar47._8_4_ - _DAT_145fc6ed8) * fVar76 - fVar76) +
               fVar102;
          auVar48._12_4_ =
               auVar51._12_4_ * ((fVar78 * auVar47._12_4_ - _DAT_145fc6ed8) * fVar78 - fVar78) +
               fVar102;
          auVar84 = vrcpps_avx(auVar72);
          fVar110 = auVar84._0_4_;
          fVar61 = fVar110 * auVar72._0_4_ - _DAT_145fc6ed8;
          fVar111 = auVar84._4_4_;
          fVar74 = fVar111 * auVar72._4_4_ - _DAT_145fc6ed8;
          fVar112 = auVar84._8_4_;
          fVar76 = fVar112 * auVar72._8_4_ - _DAT_145fc6ed8;
          fVar37 = auVar84._12_4_;
          fVar78 = fVar37 * auVar72._12_4_ - _DAT_145fc6ed8;
          auVar84 = vmaxps_avx(auVar48,auVar118._0_16_);
          fVar102 = auVar84._0_4_;
          auVar92._0_4_ = fVar99 * fVar102;
          auVar92._4_4_ = fVar99 * auVar84._4_4_;
          auVar92._8_4_ = fVar99 * auVar84._8_4_;
          auVar92._12_4_ = fVar99 * auVar84._12_4_;
          auVar87._0_4_ = -(fVar102 * fVar99) - 0.0;
          auVar87._4_4_ = -(auVar84._4_4_ * fVar99) - 0.0;
          auVar87._8_4_ = -(auVar84._8_4_ * fVar99) - auVar118._8_4_;
          auVar87._12_4_ = -(auVar84._12_4_ * fVar99) - auVar118._12_4_;
          *(float *)(pcVar27 + -0x1c) = fVar102;
          auVar51 = vrcpps_avx(auVar57);
          fVar99 = auVar51._0_4_;
          fVar102 = auVar51._4_4_;
          fVar28 = auVar51._8_4_;
          fVar38 = auVar51._12_4_;
          auVar73._0_4_ = fVar39 * (fVar61 * fVar110 - fVar110) + fVar107;
          auVar73._4_4_ = fVar39 * (fVar74 * fVar111 - fVar111) + fVar107;
          auVar73._8_4_ = fVar39 * (fVar76 * fVar112 - fVar112) + fVar107;
          auVar73._12_4_ = fVar39 * (fVar78 * fVar37 - fVar37) + fVar107;
          auVar43 = vshufps_avx(auVar43,auVar43,0x55);
          auVar51 = vmaxps_avx(auVar73,auVar87);
          auVar100 = vsubps_avx(auVar84,auVar34);
          auVar98 = ZEXT1664(auVar100);
          auVar84 = vminps_avx(auVar51,auVar92);
          auVar51 = vsubps_avx(auVar84,auVar104);
          *(int *)(pcVar27 + -0x18) = auVar84._0_4_;
          auVar58._0_4_ =
               auVar43._0_4_ * ((fVar99 * auVar57._0_4_ - fVar109) * fVar99 - fVar99) + fVar80;
          auVar58._4_4_ =
               auVar43._4_4_ * ((fVar102 * auVar57._4_4_ - fVar109) * fVar102 - fVar102) + fVar80;
          auVar58._8_4_ =
               auVar43._8_4_ * ((fVar28 * auVar57._8_4_ - fVar109) * fVar28 - fVar28) + fVar80;
          auVar58._12_4_ =
               auVar43._12_4_ * ((fVar38 * auVar57._12_4_ - fVar109) * fVar38 - fVar38) + fVar80;
          auVar84 = vmaxps_avx(auVar58,auVar87);
          auVar84 = vminps_avx(auVar84,auVar92);
          auVar43 = vsubps_avx(auVar84,auVar106);
          *(int *)(pcVar27 + -0x14) = auVar84._0_4_;
          auVar84 = vunpcklps_avx(auVar51,auVar43);
          auVar101 = ZEXT1664(auVar84);
          fVar109 = fStack_128;
          fVar110 = fStack_124;
          fVar111 = fStack_120;
          fVar112 = fStack_11c;
          if (bVar20 == 0) {
            auVar98 = ZEXT1664(_auStack_118);
            fVar80 = fStack_158;
            fVar107 = fStack_154;
            fVar99 = fStack_150;
            fVar102 = fStack_14c;
            fVar61 = fStack_108;
            fVar74 = fStack_104;
            fVar76 = fStack_100;
            fVar78 = fStack_fc;
            goto LAB_14017aa3a;
          }
          FUN_140db6c50(*(undefined8 *)(param_1 + 8),&uStack_188,uVar4,auVar100._0_8_,auVar51._0_4_,
                        auVar43._0_4_);
          auVar100 = auVar98._0_16_;
          auVar84 = auVar101._0_16_;
          auVar98 = ZEXT1664(CONCAT412(auStack_148._12_4_ * uStack_180._4_4_ + fStack_10c,
                                       CONCAT48(auStack_148._8_4_ * (float)uStack_180 + fStack_110,
                                                CONCAT44(auStack_148._4_4_ * uStack_188._4_4_ +
                                                         (float)auStack_118._4_4_,
                                                         auStack_148._0_4_ * (float)uStack_188 +
                                                         (float)auStack_118._0_4_))));
          fVar80 = fStack_158;
          fVar107 = fStack_154;
          fVar99 = fStack_150;
          fVar102 = fStack_14c;
          fVar61 = fStack_108;
          fVar74 = fStack_104;
          fVar76 = fStack_100;
          fVar78 = fStack_fc;
        }
        else {
          if ((bVar20 != 0) || (bVar24 != 0)) {
            pcVar27[-0x1c] = '\0';
            pcVar27[-0x1b] = '\0';
            pcVar27[-0x1a] = '\0';
            pcVar27[-0x19] = '\0';
            pcVar27[-0x18] = '\0';
            pcVar27[-0x17] = '\0';
            pcVar27[-0x16] = '\0';
            pcVar27[-0x15] = '\0';
            pcVar27[-0x14] = '\0';
            pcVar27[-0x13] = '\0';
            pcVar27[-0x12] = '\0';
            pcVar27[-0x11] = '\0';
            goto LAB_14017abbb;
          }
          auVar31._8_8_ = 0;
          auVar31._0_8_ = *(ulonglong *)(pcVar27 + -0x18);
          uVar1 = *(undefined4 *)(pcVar27 + -0x1c);
          auVar100._4_4_ = uVar1;
          auVar100._0_4_ = uVar1;
          auVar100._8_4_ = uVar1;
          auVar100._12_4_ = uVar1;
          auVar84 = vshufps_avx(auVar31,auVar31,4);
LAB_14017aa3a:
          if (plVar5 != (longlong *)0x0) {
            fVar79 = auVar84._0_4_;
            auVar51 = vshufps_avx(auVar84,auVar84,0x55);
            fVar28 = auVar51._0_4_ * *(float *)(pcVar27 + -0xf8) +
                     fVar79 * *(float *)(pcVar27 + -0x108) +
                     auVar100._0_4_ * *(float *)(pcVar27 + -0x128);
            fVar37 = auVar51._4_4_ * *(float *)(pcVar27 + -0xf4) +
                     fVar79 * *(float *)(pcVar27 + -0x104) +
                     auVar100._4_4_ * *(float *)(pcVar27 + -0x124);
            fVar38 = auVar51._8_4_ * *(float *)(pcVar27 + -0xf0) +
                     fVar79 * *(float *)(pcVar27 + -0x100) +
                     auVar100._8_4_ * *(float *)(pcVar27 + -0x120);
            fVar39 = auVar51._12_4_ * *(float *)(pcVar27 + -0xec) +
                     fVar79 * *(float *)(pcVar27 + -0xfc) +
                     auVar100._12_4_ * *(float *)(pcVar27 + -0x11c);
            fVar62 = auVar51._0_4_ * *(float *)(pcVar27 + -0xd8) +
                     fVar79 * *(float *)(pcVar27 + -0xe8) +
                     auVar100._0_4_ * *(float *)(pcVar27 + -0x118);
            fVar75 = auVar51._4_4_ * *(float *)(pcVar27 + -0xd4) +
                     fVar79 * *(float *)(pcVar27 + -0xe4) +
                     auVar100._4_4_ * *(float *)(pcVar27 + -0x114);
            fVar77 = auVar51._8_4_ * *(float *)(pcVar27 + -0xd0) +
                     fVar79 * *(float *)(pcVar27 + -0xe0) +
                     auVar100._8_4_ * *(float *)(pcVar27 + -0x110);
            fVar79 = auVar51._12_4_ * *(float *)(pcVar27 + -0xcc) +
                     fVar79 * *(float *)(pcVar27 + -0xdc) +
                     auVar100._12_4_ * *(float *)(pcVar27 + -0x10c);
            auVar49._0_4_ = fVar28 * fVar28;
            auVar49._4_4_ = fVar37 * fVar37;
            auVar49._8_4_ = fVar38 * fVar38;
            auVar49._12_4_ = fVar39 * fVar39;
            auVar59._0_4_ = fVar62 * fVar62;
            auVar59._4_4_ = fVar75 * fVar75;
            auVar59._8_4_ = fVar77 * fVar77;
            auVar59._12_4_ = fVar79 * fVar79;
            auVar51 = vblendps_avx(auVar49,auVar118._0_16_,8);
            auVar43 = vblendps_avx(auVar59,auVar118._0_16_,8);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar43 = vhaddps_avx(auVar43,auVar43);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar43 = vhaddps_avx(auVar43,auVar43);
            auVar98 = ZEXT1664(CONCAT412((auVar43._12_4_ + auVar51._12_4_) * fStack_13c +
                                         auVar98._12_4_,
                                         CONCAT48((auVar43._8_4_ + auVar51._8_4_) * fStack_140 +
                                                  auVar98._8_4_,
                                                  CONCAT44((auVar43._4_4_ + auVar51._4_4_) *
                                                           (float)auStack_148._4_4_ + auVar98._4_4_,
                                                           (auVar43._0_4_ + auVar51._0_4_) *
                                                           (float)auStack_148._0_4_ + auVar98._0_4_)
                                                 )));
            fVar80 = fVar80 + fVar62;
            fVar107 = fVar107 + fVar75;
            fVar99 = fVar99 + fVar77;
            fVar102 = fVar102 + fVar79;
            fVar61 = fVar61 + fVar28;
            fVar74 = fVar74 + fVar37;
            fVar76 = fVar76 + fVar38;
            fVar78 = fVar78 + fVar39;
          }
        }
        fVar28 = auVar84._0_4_;
        if (bVar24 == 0) {
          if (plVar23 != (longlong *)0x0) {
            auVar84 = vshufps_avx(auVar84,auVar84,0x55);
            fVar37 = auVar84._0_4_ * *(float *)(pcVar27 + -0x68) +
                     fVar28 * *(float *)(pcVar27 + -0x78) +
                     auVar100._0_4_ * *(float *)(pcVar27 + -0x98);
            fVar38 = auVar84._4_4_ * *(float *)(pcVar27 + -100) +
                     fVar28 * *(float *)(pcVar27 + -0x74) +
                     auVar100._4_4_ * *(float *)(pcVar27 + -0x94);
            fVar39 = auVar84._8_4_ * *(float *)(pcVar27 + -0x60) +
                     fVar28 * *(float *)(pcVar27 + -0x70) +
                     auVar100._8_4_ * *(float *)(pcVar27 + -0x90);
            fVar62 = auVar84._12_4_ * *(float *)(pcVar27 + -0x5c) +
                     fVar28 * *(float *)(pcVar27 + -0x6c) +
                     auVar100._12_4_ * *(float *)(pcVar27 + -0x8c);
            fVar75 = auVar84._0_4_ * *(float *)(pcVar27 + -0x48) +
                     fVar28 * *(float *)(pcVar27 + -0x58) +
                     auVar100._0_4_ * *(float *)(pcVar27 + -0x88);
            fVar77 = auVar84._4_4_ * *(float *)(pcVar27 + -0x44) +
                     fVar28 * *(float *)(pcVar27 + -0x54) +
                     auVar100._4_4_ * *(float *)(pcVar27 + -0x84);
            fVar79 = auVar84._8_4_ * *(float *)(pcVar27 + -0x40) +
                     fVar28 * *(float *)(pcVar27 + -0x50) +
                     auVar100._8_4_ * *(float *)(pcVar27 + -0x80);
            fVar28 = auVar84._12_4_ * *(float *)(pcVar27 + -0x3c) +
                     fVar28 * *(float *)(pcVar27 + -0x4c) +
                     auVar100._12_4_ * *(float *)(pcVar27 + -0x7c);
            auVar50._0_4_ = fVar37 * fVar37;
            auVar50._4_4_ = fVar38 * fVar38;
            auVar50._8_4_ = fVar39 * fVar39;
            auVar50._12_4_ = fVar62 * fVar62;
            auVar60._0_4_ = fVar75 * fVar75;
            auVar60._4_4_ = fVar77 * fVar77;
            auVar60._8_4_ = fVar79 * fVar79;
            auVar60._12_4_ = fVar28 * fVar28;
            fVar109 = fVar109 + fVar75;
            fVar110 = fVar110 + fVar77;
            fVar111 = fVar111 + fVar79;
            fVar112 = fVar112 + fVar28;
            auVar84 = vblendps_avx(auVar50,auVar118._0_16_,8);
            auVar51 = vblendps_avx(auVar60,auVar118._0_16_,8);
            auVar84 = vhaddps_avx(auVar84,auVar84);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar84 = vhaddps_avx(auVar84,auVar84);
            auVar51 = vhaddps_avx(auVar51,auVar51);
            auVar98 = ZEXT1664(CONCAT412((auVar51._12_4_ + auVar84._12_4_) * fStack_12c +
                                         auVar98._12_4_,
                                         CONCAT48((auVar51._8_4_ + auVar84._8_4_) * fStack_130 +
                                                  auVar98._8_4_,
                                                  CONCAT44((auVar51._4_4_ + auVar84._4_4_) *
                                                           (float)auStack_138._4_4_ + auVar98._4_4_,
                                                           (auVar51._0_4_ + auVar84._0_4_) *
                                                           (float)auStack_138._0_4_ + auVar98._0_4_)
                                                 )));
            auStack_198._0_4_ = fVar37 + (float)auStack_198._0_4_;
            auStack_198._4_4_ = fVar38 + (float)auStack_198._4_4_;
            uStack_190._0_4_ = fVar39 + (float)uStack_190;
            uStack_190._4_4_ = fVar62 + uStack_190._4_4_;
          }
        }
        else {
          uVar1 = vextractps_avx(auVar84,1);
          FUN_140db6c50(*(undefined8 *)(param_1 + 0x10),&uStack_188,uVar3,auVar100._0_8_,fVar28,
                        uVar1);
          auVar98 = ZEXT1664(CONCAT412(auStack_138._12_4_ * uStack_180._4_4_ + auVar98._12_4_,
                                       CONCAT48(auStack_138._8_4_ * (float)uStack_180 +
                                                auVar98._8_4_,
                                                CONCAT44(auStack_138._4_4_ * uStack_188._4_4_ +
                                                         auVar98._4_4_,
                                                         auStack_138._0_4_ * (float)uStack_188 +
                                                         auVar98._0_4_))));
        }
        if (param_2 != '\0') {
          auVar35._8_8_ = 0;
          auVar35._0_8_ = *(ulonglong *)(pcVar27 + -0x18);
          auVar84 = vmovlhps_avx(ZEXT416(*(uint *)(pcVar27 + -0x1c)),auVar35);
          auVar51 = vshufps_avx(auVar84,auVar35,0xd8);
          auVar84 = vinsertps_avx(auVar51,ZEXT416(*(uint *)(pcVar27 + -0x1c)),0x30);
          **(undefined1 (**) [16])(pcVar27 + -0x38) = auVar84;
          auVar84 = *(undefined1 (*) [16])(*(longlong *)(pcVar27 + -0x38) + 0x10);
          auVar36._0_4_ = auVar84._0_4_ + auVar51._0_4_;
          auVar36._4_4_ = auVar84._4_4_ + auVar51._4_4_;
          auVar36._8_4_ = auVar84._8_4_ + auVar51._8_4_;
          auVar36._12_4_ = auVar84._12_4_ + auVar51._12_4_;
          auVar84 = vblendps_avx(auVar36,auVar84,8);
          *(undefined1 (*) [16])(*(longlong *)(pcVar27 + -0x38) + 0x10) = auVar84;
        }
      }
LAB_14017abbb:
      uVar25 = uVar25 + 1;
      pcVar27 = pcVar27 + 0x1a0;
    } while (uVar25 < *(ushort *)(param_1 + 0x40));
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1455138c0(*(longlong *)(param_1 + 8),*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1455138c0(*(longlong *)(param_1 + 0x10),*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8));
  }
  if ((plVar5 != (longlong *)0x0 && bVar20 == 0) && (-1 < (char)*(byte *)((longlong)plVar5 + 0x26e))
     ) {
    if ((*(byte *)((longlong)plVar5 + 0x26e) & 2) == 0) {
      uStack_188 = CONCAT44(fVar74,fVar61);
      uStack_180 = CONCAT44(fVar78,fVar76);
      (**(code **)(*plVar5 + 0x38))(plVar5);
      fStack_1a8 = fVar80;
      fStack_1a4 = fVar107;
      fStack_1a0 = fVar99;
      fStack_19c = fVar102;
      (**(code **)(*plVar5 + 0x40))(plVar5);
    }
    else {
      uStack_188 = CONCAT44(fVar74,fVar61);
      uStack_180 = CONCAT44(fVar78,fVar76);
      fStack_178 = fVar80;
      fStack_174 = fVar107;
      fStack_170 = fVar99;
      fStack_16c = fVar102;
      FUN_145032800(plVar5 + 0x60,bVar26);
    }
  }
  if ((plVar23 != (longlong *)0x0 && bVar24 == 0) &&
     (-1 < (char)*(byte *)((longlong)plVar23 + 0x26e))) {
    if ((*(byte *)((longlong)plVar23 + 0x26e) & 2) == 0) {
      uStack_188 = auStack_198;
      uStack_180 = uStack_190;
      (**(code **)(*plVar23 + 0x38))(plVar23);
      fStack_1a8 = fVar109;
      fStack_1a4 = fVar110;
      fStack_1a0 = fVar111;
      fStack_19c = fVar112;
      (**(code **)(*plVar23 + 0x40))(plVar23);
    }
    else {
      uStack_188 = auStack_198;
      uStack_180 = uStack_190;
      fStack_178 = fVar109;
      fStack_174 = fVar110;
      fStack_170 = fVar111;
      fStack_16c = fVar112;
      FUN_145032800(plVar23 + 0x60,bVar18);
    }
  }
  uVar93 = auVar98._0_8_;
  if (param_2 != '\0') {
    FUN_145033590(*(undefined8 *)(param_1 + 0x20));
    uVar93 = auVar98._0_8_;
  }
  return uVar93;
}

