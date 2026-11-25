// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017ec10  size: 1127 bytes
// Name:    FUN_14017ec10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017f0a0, FUN_144ed1510, FUN_14017f2a0, FUN_14017f1c0, FUN_14017f080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017ec10(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined *unaff_XMM7_Qb;
  float fVar35;
  longlong lStack_68;
  longlong lStack_60;
  undefined *puStack_50;
  undefined *puStack_40;
  undefined1 auVar22 [16];
  
  if ((param_1[0xb] == 0) || (param_1[10] == 0)) {
    cVar10 = *(char *)((longlong)param_2 + 0x2c3);
    puStack_40 = unaff_XMM7_Qb;
    if (cVar10 == '\0') {
      puStack_40 = &UNK_1403974d4;
      FUN_140b6c9d0(param_2);
      cVar10 = *(char *)((longlong)param_2 + 0x2c3);
    }
    if (cVar10 == '\x01') {
      puStack_40 = &UNK_1403974ca;
      FUN_140070c80(param_2);
    }
    lVar14 = *param_2;
    if (*(short *)(lVar14 + 0x40) != 0) {
      plVar19 = param_2 + 1;
      uVar18 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar14 + 0x38) + uVar18 * 8);
        puStack_40 = &UNK_140397499;
        (**(code **)(*plVar2 + 0x18))(plVar2,plVar19);
        lVar14 = *param_2;
        uVar18 = uVar18 + 1;
        plVar19 = (longlong *)((longlong)plVar19 + 0xc);
      } while (uVar18 < *(ushort *)(lVar14 + 0x40));
    }
    *(undefined1 *)((longlong)param_2 + 0x2c3) = 3;
    *(undefined8 *)((longlong)param_2 + 0x3c4) = 0;
    *(undefined4 *)((longlong)param_2 + 0x3cc) = 0xffffffff;
    param_2[0x7a] = 0;
    puStack_50 = &UNK_140397597;
    func_0x0001403975f0();
    if (lRam000000014a942bf0 != 0 || lRam000000014a942be0 != 0) {
      puStack_50 = &UNK_1403975c1;
      (*pcRam000000014a942bf8)(&stack0xffffffffffffffd8,param_2);
    }
    *(undefined4 *)((longlong)param_2 + 0x3bc) = 0;
    puStack_50 = &UNK_1403975d3;
    uVar13 = func_0x000144e98420(param_2);
    puStack_50 = &UNK_1403975da;
    FUN_140397640(uVar13);
    return;
  }
  lVar14 = FUN_144ed1510(*param_3);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0x70) == 1)) {
    if (((*(float *)(lVar14 + 0x68) != 0.0) ||
        (((NAN(*(float *)(lVar14 + 0x68)) || (*(float *)(lVar14 + 0x6c) != _DAT_145fc6ed8)) ||
         (NAN(*(float *)(lVar14 + 0x6c)) || NAN(_DAT_145fc6ed8))))) ||
       (*(char *)(*(longlong *)(lVar14 + 0x88) + 0x2f0) == '\x01')) {
      *(undefined4 *)(lVar14 + 0x268) = 0;
      *(undefined8 *)(lVar14 + 0x60) = 0;
    }
    *(byte *)(lVar14 + 0x74) = *(byte *)(lVar14 + 0x74) | 4;
    uVar3 = *(undefined8 *)(lVar14 + 0x200);
    uVar4 = *(undefined8 *)(lVar14 + 0x208);
    uVar5 = *(undefined8 *)(lVar14 + 0x210);
    uVar6 = *(undefined8 *)(lVar14 + 0x218);
    uVar7 = *(undefined8 *)(lVar14 + 0x228);
    uVar8 = *(undefined8 *)(lVar14 + 0x230);
    uVar9 = *(undefined8 *)(lVar14 + 0x238);
    lVar15 = (ulonglong)*_DAT_14a943ab0 * 0x80;
    puVar1 = (undefined8 *)(lVar14 + 0x2a0 + lVar15);
    *puVar1 = *(undefined8 *)(lVar14 + 0x220);
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined8 *)(lVar14 + 0x280 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    uVar3 = *(undefined8 *)(lVar14 + 0x248);
    puVar1 = (undefined8 *)(lVar14 + 0x2c0 + lVar15);
    *puVar1 = *(undefined8 *)(lVar14 + 0x240);
    puVar1[1] = uVar3;
    uVar3 = *(undefined8 *)(lVar14 + 600);
    puVar1 = (undefined8 *)(lVar14 + 0x2d0 + lVar15);
    *puVar1 = *(undefined8 *)(lVar14 + 0x250);
    puVar1[1] = uVar3;
    *(undefined4 *)(lVar14 + 0x2ef + lVar15) = *(undefined4 *)(lVar14 + 0x26f);
    uVar3 = *(undefined8 *)(lVar14 + 0x268);
    puVar1 = (undefined8 *)(lVar14 + 0x2e0 + lVar15);
    *puVar1 = *(undefined8 *)(lVar14 + 0x260);
    puVar1[1] = uVar3;
    return;
  }
  if ((param_1[10] == 0) ||
     (lVar14 = FUN_14017f0a0(0x14a9246f0,*(undefined4 *)(param_1[10] + 0x1c)), lVar14 == 0)) {
    fVar32 = _DAT_145fc6ed8;
    if ((*(byte *)((longlong)param_2 + 0x3bc) & 0x10) == 0) {
      lStack_68 = param_2[0x48];
      lStack_60 = param_2[0x49];
      cVar10 = FUN_14017f1c0(param_1,param_3,&lStack_68,param_4,0x3f800000);
      fVar32 = _DAT_145fc6ed8;
      if (cVar10 == '\0') {
        return;
      }
    }
  }
  else {
    if (*(char *)(lVar14 + 4) != '\0') {
      return;
    }
    if ((*(byte *)((longlong)param_2 + 0x3bc) & 0x10) == 0) {
      lStack_68 = param_2[0x48];
      lStack_60 = param_2[0x49];
      cVar10 = FUN_14017f1c0(param_1,param_3,&lStack_68,param_4,*(undefined4 *)(lVar14 + 0xc));
      if (cVar10 == '\0') {
        return;
      }
    }
    if (*(char *)(lVar14 + 5) != '\0') goto LAB_14017ed67;
    fVar32 = *(float *)(lVar14 + 8);
  }
  uVar11 = *(int *)((longlong)param_2 + 0x2a4) * 0x2c9277b5 + 0xac564b05;
  uVar12 = (uVar11 >> (byte)(uVar11 >> 0x1c) + 4 ^ uVar11) * 0x108ef2d9;
  uVar11 = param_3[1];
  uVar11 = (uVar12 >> 0x16 ^ uVar12) + 0x9e3779b9 + (uVar11 >> 2) + uVar11 * 0x40 ^ uVar11;
  uVar12 = uVar11 * 0x19660d + 0x7110b0d0;
  uVar11 = uVar11 * 0x17385ca9 + 0xa3117a85;
  uVar11 = (uVar11 >> 0x10 ^ uVar11) * 0x19660d + (uVar12 >> 0x10 ^ uVar12);
  if (fVar32 * *(float *)(param_1 + 3) <
      (float)(uVar11 >> 9 ^ uVar11 >> 0x19 | 0x3f800000) + _DAT_145fc6f48) {
    return;
  }
LAB_14017ed67:
  iVar16 = *param_3;
  if (iVar16 == 0) {
    FUN_14017f080(param_3,param_1);
    iVar16 = *param_3;
  }
  lVar14 = FUN_144ed1510(iVar16);
  if (lVar14 != 0) {
    iVar17 = param_3[1] * 0x19660d;
    iVar16 = param_3[1] * 0x17385ca9;
    uVar20 = (iVar16 + 0x890e19edU >> 0x10 ^ iVar16 + 0x890e19edU) * 0x19660d +
             (iVar17 + 0x3056c064U >> 0x10 ^ iVar17 + 0x3056c064U);
    uVar21 = (iVar16 + 0xc69b189dU >> 0x10 ^ iVar16 + 0xc69b189dU) * 0x19660d +
             (iVar17 + 0x2227b1fcU >> 0x10 ^ iVar17 + 0x2227b1fcU);
    auVar26._4_4_ = _DAT_145fc6ed8;
    auVar26._0_4_ = _DAT_145fc6ed8;
    auVar26._8_4_ = _DAT_145fc6ed8;
    auVar26._12_4_ = _DAT_145fc6ed8;
    uVar12 = iVar16 + 0xefc238c1U >> 0x10 ^ iVar16 + 0xefc238c1U;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = param_1[0xf];
    auVar25 = vpshufb_avx(auVar22,_DAT_1461650a0);
    uVar11 = uVar12 * 0x19660d + (iVar17 + 0xd092113eU >> 0x10 ^ iVar17 + 0xd092113eU);
    uVar12 = uVar11 * 0x19660d + uVar12;
    auVar22 = vpmovzxbd_avx(auVar22);
    auVar22 = vcvtdq2ps_avx(auVar22);
    auVar25 = vcvtdq2ps_avx(auVar25);
    auVar23._4_4_ = uVar12 >> 0x10 ^ uVar12;
    auVar23._0_4_ = uVar11 >> 0x10 ^ uVar11;
    fVar32 = auVar22._0_4_ * _DAT_14615a130;
    fVar33 = auVar22._4_4_ * _DAT_14615a130;
    fVar34 = auVar22._8_4_ * _DAT_14615a130;
    fVar35 = auVar22._12_4_ * _DAT_14615a130;
    auVar23._8_8_ = 0;
    auVar22 = vpsrld_avx(auVar23,9);
    auVar22 = vpor_avx(auVar22,auVar26);
    auVar24._0_4_ = auVar22._0_4_ + _DAT_145fc6f48;
    auVar24._4_4_ = auVar22._4_4_ + _DAT_145fc6f48;
    auVar24._8_4_ = auVar22._8_4_ + _DAT_145fc6f48;
    auVar24._12_4_ = auVar22._12_4_ + _DAT_145fc6f48;
    auVar23 = vmovshdup_avx(auVar24);
    auVar31._0_4_ = -(auVar24._0_4_ * (-(_DAT_14615a130 * auVar25._0_4_) + fVar32)) + fVar32;
    auVar31._4_4_ = -(auVar24._0_4_ * (-(_DAT_14615a130 * auVar25._4_4_) + fVar33)) + fVar33;
    auVar31._8_4_ = -(auVar24._0_4_ * (-(_DAT_14615a130 * auVar25._8_4_) + fVar34)) + fVar34;
    auVar31._12_4_ = -(auVar24._0_4_ * (-(_DAT_14615a130 * auVar25._12_4_) + fVar35)) + fVar35;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = param_1[0xf];
    auVar22 = vpsrld_avx(auVar29,0x18);
    auVar22 = vcvtdq2ps_avx(auVar22);
    auVar27._0_4_ = auVar22._0_4_ * _DAT_14615a130;
    auVar27._4_4_ = auVar22._4_4_ * _DAT_14615a130;
    auVar27._8_4_ = auVar22._8_4_ * _DAT_14615a130;
    auVar27._12_4_ = auVar22._12_4_ * _DAT_14615a130;
    auVar22 = vmovshdup_avx(auVar27);
    auVar22 = vinsertps_avx(auVar31,ZEXT416((uint)(auVar23._0_4_ * (auVar22._0_4_ - auVar27._0_4_) +
                                                  auVar27._0_4_)),0x30);
    auVar30._4_4_ = _DAT_146159f68;
    auVar30._0_4_ = _DAT_146159f68;
    auVar30._8_4_ = _DAT_146159f68;
    auVar30._12_4_ = _DAT_146159f68;
    auVar28._0_4_ = _DAT_146159f68 * auVar22._0_4_ + _DAT_145fc6edc;
    auVar28._4_4_ = _DAT_146159f68 * auVar22._4_4_ + _DAT_145fc6edc;
    auVar28._8_4_ = _DAT_146159f68 * auVar22._8_4_ + _DAT_145fc6edc;
    auVar28._12_4_ = _DAT_146159f68 * auVar22._12_4_ + _DAT_145fc6edc;
    auVar22 = vmaxps_avx(auVar28,ZEXT816(0) << 0x20);
    auVar22 = vminps_avx(auVar22,auVar30);
    auVar25._0_4_ = (int)auVar22._0_4_;
    auVar25._4_4_ = (int)auVar22._4_4_;
    auVar25._8_4_ = (int)auVar22._8_4_;
    auVar25._12_4_ = (int)auVar22._12_4_;
    auVar22 = vpshufb_avx(auVar25,_DAT_145fc6410);
    FUN_14017f2a0(lVar14,param_2,param_5,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14),
                  (*(float *)((longlong)param_1 + 0x6c) - *(float *)(param_1 + 0xd)) *
                  ((float)(uVar20 >> 9 ^ uVar20 >> 0x19 | 0x3f800000) + _DAT_145fc6f48) +
                  *(float *)(param_1 + 0xd),
                  (*(float *)((longlong)param_1 + 0x74) - *(float *)(param_1 + 0xe)) *
                  ((float)(uVar21 >> 9 ^ uVar21 >> 0x19 | 0x3f800000) + _DAT_145fc6f48) +
                  *(float *)(param_1 + 0xe),auVar22._0_4_);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014017efec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}

