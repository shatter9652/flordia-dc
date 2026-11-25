// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017df60  size: 327 bytes
// Name:    FUN_14017df60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14017df60(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong unaff_GS_OFFSET;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [64];
  
  uVar10 = (**(code **)(*_DAT_14a9b33c0 + 0x20))
                     (_DAT_14a9b33c0,
                      CONCAT44(*(undefined4 *)((longlong)param_2 + 0x5c),
                               *(undefined4 *)((longlong)param_2 + 0x4c)));
  *(int *)((longlong)param_2 + 0x5c) = (int)((ulonglong)uVar10 >> 0x20);
  *(int *)((longlong)param_2 + 0x4c) = (int)uVar10;
  switch((char)param_2[2]) {
  case '\0':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667b950;
    return param_2;
  case '\x01':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667b290;
    return param_2;
  case '\x02':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667bba0;
    if (param_2[0x11] != 0) {
      (**(code **)(*_DAT_14a9b33c0 + 0x28))(_DAT_14a9b33c0,param_2 + 0x11,1);
      *(int *)((longlong)param_2 + 0x5c) = (int)((ulonglong)param_2[0x11] >> 0x20);
      *(int *)((longlong)param_2 + 0x4c) = (int)param_2[0x11];
    }
    return param_2;
  case '\x03':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667b090;
    return param_2;
  case '\x04':
    FUN_14559f990();
    *param_2 = (longlong)&UNK_14667b510;
    FUN_145079e50(param_2 + 0x21);
    *(undefined2 *)(param_2 + 0x22) = 0;
    plVar11 = param_2 + 0x1f;
    if (*(char *)((longlong)param_2 + 0xda) == '\0') {
      *plVar11 = 0;
    }
    else if (*plVar11 != 0) {
      FUN_140038160(*param_1,plVar11);
      if (*plVar11 != 0) {
        FUN_1447caeb0(*plVar11,param_1);
      }
    }
    FUN_144da62a0(*param_1,param_2 + 0x1e);
    if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
      (**(code **)(*_DAT_14a9b33c0 + 0x28))(_DAT_14a9b33c0,param_2[0x1e],(char)param_2[0x24]);
    }
    plVar11 = param_2 + 0x23;
    FUN_144da62a0(*param_1,plVar11);
    bVar8 = *(byte *)((longlong)param_2 + 0x11);
    if ((bVar8 & 1) == 0) {
      if ((char)param_2[0x24] != '\0') {
        lVar12 = param_2[0x1e];
        uVar15 = 0;
        do {
          uVar10 = (**(code **)(*_DAT_14a9b33c0 + 0x78))
                             (_DAT_14a9b33c0,*(undefined8 *)(lVar12 + uVar15 * 8));
          lVar12 = param_2[0x1e];
          *(undefined8 *)(lVar12 + uVar15 * 8) = uVar10;
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(byte *)(param_2 + 0x24));
        bVar8 = *(byte *)((longlong)param_2 + 0x11);
      }
      *(byte *)((longlong)param_2 + 0x11) = bVar8 | 1;
    }
    if ((*plVar11 != 0) && (0 < *(int *)((longlong)param_2 + 0xd4))) {
      lVar12 = 0;
      do {
        bVar8 = *(byte *)(param_2[0x23] + lVar12);
        iVar9 = (**(code **)(*param_2 + 0x58))(param_2);
        if (iVar9 <= (int)(uint)bVar8) {
          *(undefined1 *)(*plVar11 + lVar12) = 0;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)((longlong)param_2 + 0xd4));
    }
    if (((char)param_2[2] == '\x04') && (param_2[0x21] == 0)) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        puVar14 = (undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448);
        uVar10 = *puVar14;
        if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        puVar14 = (undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448);
        uVar10 = *puVar14;
      }
      *puVar14 = 0;
      FUN_1456a6b70(param_2);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *puVar14 = uVar10;
    }
    return param_2;
  case '\x05':
    FUN_140834c60();
    *param_2 = (longlong)&UNK_14667b160;
    FUN_1453f5cd0(param_2 + 0x26);
    FUN_144da62a0(*param_1,param_2 + 0x27);
    FUN_144ec5700(*param_1,param_2 + 0x29);
    FUN_140834e60(param_2);
    fVar3 = *(float *)((longlong)param_2 + 0x2c);
    auVar16._4_4_ = fVar3;
    auVar16._0_4_ = fVar3;
    auVar16._8_4_ = fVar3;
    auVar16._12_4_ = fVar3;
    auVar18 = *(undefined1 (*) [16])(param_2 + 4);
    auVar26._0_4_ = fVar3 + auVar18._0_4_;
    auVar26._4_4_ = fVar3 + auVar18._4_4_;
    auVar26._8_4_ = fVar3 + auVar18._8_4_;
    auVar26._12_4_ = fVar3 + auVar18._12_4_;
    auVar17 = vsubps_avx(*(undefined1 (*) [16])(param_2 + 6),auVar16);
    auVar18 = vblendps_avx(auVar26,auVar18,8);
    auVar17 = vblendps_avx(auVar17,*(undefined1 (*) [16])(param_2 + 6),8);
    *(undefined1 (*) [16])(param_2 + 4) = auVar18;
    *(undefined1 (*) [16])(param_2 + 6) = auVar17;
    return param_2;
  case '\x06':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667b360;
    FUN_1447b67f0(param_2 + 0x12);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
      *(undefined1 *)((longlong)param_2 + 0x9c) = 0;
    }
    FUN_1453f5cd0(param_2 + 0x14);
    FUN_140038160(*param_1,param_2 + 0xe);
    if ((short)param_2[0x13] == 0) {
      auVar18 = ZEXT416(_DAT_145fc6f50);
    }
    else {
      auVar34 = ZEXT464(_DAT_145fc6f50);
      lVar12 = param_2[0xe];
      lVar13 = 0;
      uVar15 = 0;
      do {
        FUN_145034b60(lVar12 + lVar13);
        lVar12 = param_2[0xe];
        lVar13 = lVar13 + 8;
        lVar1 = uVar15 * 8;
        uVar15 = uVar15 + 1;
        auVar18 = vminss_avx(auVar34._0_16_,ZEXT416(*(uint *)(*(longlong *)(lVar12 + lVar1) + 0x2c))
                            );
        auVar34 = ZEXT1664(auVar18);
      } while (uVar15 < *(ushort *)(param_2 + 0x13));
    }
    auVar17 = vcmpss_avx(auVar18,ZEXT416(_DAT_145fc6f50),0);
    auVar19._4_4_ = _DAT_146159c24;
    auVar19._0_4_ = _DAT_146159c24;
    auVar19._8_4_ = _DAT_146159c24;
    auVar19._12_4_ = _DAT_146159c24;
    auVar18 = vblendvps_avx(auVar18,auVar19,auVar17);
    auVar34 = ZEXT1664(auVar18);
    if (((param_2[0x10] == 0) && (param_2[0xf] != 0)) ||
       (FUN_144da62a0(*param_1,param_2 + 0x10), param_2[0xf] != 0)) {
      FUN_144da62a0(*param_1,param_2 + 0xf);
    }
    FUN_144da62a0(*param_1,param_2 + 0x11);
    if (param_2[0x11] != 0) {
      *(byte *)((longlong)param_2 + 0x9c) = *(byte *)((longlong)param_2 + 0x9c) | 1;
    }
    uVar33 = auVar34._0_4_;
    auVar17._4_4_ = uVar33;
    auVar17._0_4_ = uVar33;
    auVar17._8_4_ = uVar33;
    auVar17._12_4_ = uVar33;
    auVar18._0_12_ = ZEXT812(0);
    auVar18._12_4_ = 0;
    auVar18 = vcmpps_avx(auVar18,auVar17,2);
    if (auVar18 == (undefined1  [16])0x0) {
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3d23d70a;
    }
    else {
      auVar18 = vblendps_avx(auVar17,*(undefined1 (*) [16])(param_2 + 4),7);
      *(undefined1 (*) [16])(param_2 + 4) = auVar18;
    }
    fVar3 = _DAT_145fc6f08;
    if ((short)param_2[0x13] != 0) {
      lVar12 = 0x20;
      uVar15 = 0;
      auVar18 = ZEXT816(0) << 0x20;
      do {
        lVar13 = param_2[0xf];
        uVar15 = uVar15 + 1;
        pfVar2 = (float *)(lVar13 + lVar12);
        fVar20 = *pfVar2;
        fVar23 = pfVar2[1];
        fVar24 = pfVar2[2];
        fVar25 = pfVar2[3];
        auVar17 = *(undefined1 (*) [16])(lVar13 + -0x10 + lVar12);
        auVar29._0_4_ = fVar20 * fVar20;
        auVar29._4_4_ = fVar23 * fVar23;
        auVar29._8_4_ = fVar24 * fVar24;
        auVar29._12_4_ = fVar25 * fVar25;
        auVar19 = vblendps_avx(auVar29,auVar18,8);
        auVar19 = vhaddps_avx(auVar19,auVar19);
        auVar19 = vhaddps_avx(auVar19,auVar19);
        auVar29 = vrsqrtps_avx(auVar19);
        fVar4 = auVar29._0_4_;
        fVar5 = auVar29._4_4_;
        fVar6 = auVar29._8_4_;
        fVar7 = auVar29._12_4_;
        auVar27._0_4_ = ((fVar3 * fVar4 * fVar4 * auVar19._0_4_ - fVar3) * fVar4 + fVar4) * fVar20;
        auVar27._4_4_ = ((fVar3 * fVar5 * fVar5 * auVar19._4_4_ - fVar3) * fVar5 + fVar5) * fVar23;
        auVar27._8_4_ = ((fVar3 * fVar6 * fVar6 * auVar19._8_4_ - fVar3) * fVar6 + fVar6) * fVar24;
        auVar27._12_4_ = ((fVar3 * fVar7 * fVar7 * auVar19._12_4_ - fVar3) * fVar7 + fVar7) * fVar25
        ;
        auVar19 = vshufps_avx(auVar17,auVar17,0xc9);
        auVar17 = vshufps_avx(auVar17,auVar17,0xd2);
        auVar29 = vshufps_avx(auVar27,auVar27,0xd2);
        *(undefined1 (*) [16])(lVar13 + lVar12) = auVar27;
        auVar27 = vshufps_avx(auVar27,auVar27,0xc9);
        fVar20 = -(auVar27._0_4_ * auVar17._0_4_) + auVar29._0_4_ * auVar19._0_4_;
        fVar23 = -(auVar27._4_4_ * auVar17._4_4_) + auVar29._4_4_ * auVar19._4_4_;
        fVar24 = -(auVar27._8_4_ * auVar17._8_4_) + auVar29._8_4_ * auVar19._8_4_;
        fVar25 = -(auVar27._12_4_ * auVar17._12_4_) + auVar29._12_4_ * auVar19._12_4_;
        auVar30._0_4_ = fVar20 * fVar20;
        auVar30._4_4_ = fVar23 * fVar23;
        auVar30._8_4_ = fVar24 * fVar24;
        auVar30._12_4_ = fVar25 * fVar25;
        auVar17 = vblendps_avx(auVar30,auVar18,8);
        auVar17 = vhaddps_avx(auVar17,auVar17);
        auVar17 = vhaddps_avx(auVar17,auVar17);
        auVar19 = vrsqrtps_avx(auVar17);
        fVar4 = auVar19._0_4_;
        fVar5 = auVar19._4_4_;
        fVar6 = auVar19._8_4_;
        fVar7 = auVar19._12_4_;
        auVar21._0_4_ = ((fVar3 * fVar4 * fVar4 * auVar17._0_4_ - fVar3) * fVar4 + fVar4) * fVar20;
        auVar21._4_4_ = ((fVar3 * fVar5 * fVar5 * auVar17._4_4_ - fVar3) * fVar5 + fVar5) * fVar23;
        auVar21._8_4_ = ((fVar3 * fVar6 * fVar6 * auVar17._8_4_ - fVar3) * fVar6 + fVar6) * fVar24;
        auVar21._12_4_ = ((fVar3 * fVar7 * fVar7 * auVar17._12_4_ - fVar3) * fVar7 + fVar7) * fVar25
        ;
        auVar17 = vshufps_avx(auVar21,auVar21,0xd2);
        *(undefined1 (*) [16])(lVar13 + -0x20 + lVar12) = auVar21;
        auVar19 = vshufps_avx(auVar21,auVar21,0xc9);
        pfVar2 = (float *)(lVar13 + -0x10 + lVar12);
        *pfVar2 = -(auVar29._0_4_ * auVar19._0_4_) + auVar17._0_4_ * auVar27._0_4_;
        pfVar2[1] = -(auVar29._4_4_ * auVar19._4_4_) + auVar17._4_4_ * auVar27._4_4_;
        pfVar2[2] = -(auVar29._8_4_ * auVar19._8_4_) + auVar17._8_4_ * auVar27._8_4_;
        pfVar2[3] = -(auVar29._12_4_ * auVar19._12_4_) + auVar17._12_4_ * auVar27._12_4_;
        lVar13 = param_2[0x10];
        pfVar2 = (float *)(lVar13 + lVar12);
        fVar20 = *pfVar2;
        fVar23 = pfVar2[1];
        fVar24 = pfVar2[2];
        fVar25 = pfVar2[3];
        auVar17 = *(undefined1 (*) [16])(lVar13 + -0x10 + lVar12);
        auVar31._0_4_ = fVar20 * fVar20;
        auVar31._4_4_ = fVar23 * fVar23;
        auVar31._8_4_ = fVar24 * fVar24;
        auVar31._12_4_ = fVar25 * fVar25;
        auVar19 = vblendps_avx(auVar31,auVar18,8);
        auVar19 = vhaddps_avx(auVar19,auVar19);
        auVar19 = vhaddps_avx(auVar19,auVar19);
        auVar29 = vrsqrtps_avx(auVar19);
        fVar4 = auVar29._0_4_;
        fVar5 = auVar29._4_4_;
        fVar6 = auVar29._8_4_;
        fVar7 = auVar29._12_4_;
        auVar28._0_4_ = ((fVar3 * fVar4 * fVar4 * auVar19._0_4_ - fVar3) * fVar4 + fVar4) * fVar20;
        auVar28._4_4_ = ((fVar3 * fVar5 * fVar5 * auVar19._4_4_ - fVar3) * fVar5 + fVar5) * fVar23;
        auVar28._8_4_ = ((fVar3 * fVar6 * fVar6 * auVar19._8_4_ - fVar3) * fVar6 + fVar6) * fVar24;
        auVar28._12_4_ = ((fVar3 * fVar7 * fVar7 * auVar19._12_4_ - fVar3) * fVar7 + fVar7) * fVar25
        ;
        auVar19 = vshufps_avx(auVar17,auVar17,0xc9);
        auVar17 = vshufps_avx(auVar17,auVar17,0xd2);
        auVar29 = vshufps_avx(auVar28,auVar28,0xd2);
        *(undefined1 (*) [16])(lVar13 + lVar12) = auVar28;
        auVar27 = vshufps_avx(auVar28,auVar28,0xc9);
        fVar20 = -(auVar27._0_4_ * auVar17._0_4_) + auVar29._0_4_ * auVar19._0_4_;
        fVar23 = -(auVar27._4_4_ * auVar17._4_4_) + auVar29._4_4_ * auVar19._4_4_;
        fVar24 = -(auVar27._8_4_ * auVar17._8_4_) + auVar29._8_4_ * auVar19._8_4_;
        fVar25 = -(auVar27._12_4_ * auVar17._12_4_) + auVar29._12_4_ * auVar19._12_4_;
        auVar32._0_4_ = fVar20 * fVar20;
        auVar32._4_4_ = fVar23 * fVar23;
        auVar32._8_4_ = fVar24 * fVar24;
        auVar32._12_4_ = fVar25 * fVar25;
        auVar17 = vblendps_avx(auVar32,auVar18,8);
        auVar17 = vhaddps_avx(auVar17,auVar17);
        auVar17 = vhaddps_avx(auVar17,auVar17);
        auVar19 = vrsqrtps_avx(auVar17);
        fVar4 = auVar19._0_4_;
        fVar5 = auVar19._4_4_;
        fVar6 = auVar19._8_4_;
        fVar7 = auVar19._12_4_;
        auVar22._0_4_ = ((fVar3 * fVar4 * fVar4 * auVar17._0_4_ - fVar3) * fVar4 + fVar4) * fVar20;
        auVar22._4_4_ = ((fVar3 * fVar5 * fVar5 * auVar17._4_4_ - fVar3) * fVar5 + fVar5) * fVar23;
        auVar22._8_4_ = ((fVar3 * fVar6 * fVar6 * auVar17._8_4_ - fVar3) * fVar6 + fVar6) * fVar24;
        auVar22._12_4_ = ((fVar3 * fVar7 * fVar7 * auVar17._12_4_ - fVar3) * fVar7 + fVar7) * fVar25
        ;
        auVar17 = vshufps_avx(auVar22,auVar22,0xd2);
        *(undefined1 (*) [16])(lVar13 + -0x20 + lVar12) = auVar22;
        auVar19 = vshufps_avx(auVar22,auVar22,0xc9);
        pfVar2 = (float *)(lVar13 + -0x10 + lVar12);
        *pfVar2 = -(auVar29._0_4_ * auVar19._0_4_) + auVar17._0_4_ * auVar27._0_4_;
        pfVar2[1] = -(auVar29._4_4_ * auVar19._4_4_) + auVar17._4_4_ * auVar27._4_4_;
        pfVar2[2] = -(auVar29._8_4_ * auVar19._8_4_) + auVar17._8_4_ * auVar27._8_4_;
        pfVar2[3] = -(auVar29._12_4_ * auVar19._12_4_) + auVar17._12_4_ * auVar27._12_4_;
        lVar12 = lVar12 + 0x40;
      } while (uVar15 < *(ushort *)(param_2 + 0x13));
    }
    return param_2;
  default:
    plVar11 = (longlong *)0x0;
    if (_DAT_149e4ec78 != 0 || _DAT_149e4ec68 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014017e042. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar11 = (longlong *)(*_DAT_149e4ec80)(&DAT_149e4ec68,param_2,param_1);
      return plVar11;
    }
    break;
  case '\b':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667b440;
    return param_2;
  case '\t':
    FUN_14007a940(param_2);
    plVar11 = (longlong *)&UNK_14667c1b0;
    *param_2 = (longlong)&UNK_14667c1b0;
    break;
  case '\n':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667b780;
    return param_2;
  case '\v':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667b6b0;
    FUN_144da62a0(*param_1,param_2 + 0x11);
    FUN_144da62a0(*param_1,param_2 + 0x12);
    return param_2;
  case '\r':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667baa0;
    return param_2;
  case '\x0e':
    FUN_14007a940();
    *param_2 = (longlong)&UNK_14667bc70;
    if (param_2[0x11] != 0) {
      (**(code **)(*_DAT_14a9b33c0 + 0x28))(_DAT_14a9b33c0,param_2 + 0x11,1);
      *(int *)((longlong)param_2 + 0x5c) = (int)((ulonglong)param_2[0x11] >> 0x20);
      *(int *)((longlong)param_2 + 0x4c) = (int)param_2[0x11];
    }
    return param_2;
  }
  return plVar11;
}

