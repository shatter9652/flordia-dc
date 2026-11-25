// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005c700  size: 3293 bytes
// Name:    FUN_14005c700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e9cbc0, FUN_144e9fbf0, FUN_14005d3e0, FUN_144e9b6c0, FUN_1453bd150, FUN_143a6f300, FUN_1413c5a10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14005c700(longlong *param_1,undefined1 (*param_2) [16],longlong *param_3,longlong *param_4,
             ulonglong *param_5,longlong *param_6)

{
  int *piVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong unaff_GS_OFFSET;
  bool bVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_03;
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar16 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [64];
  char cStack_15c;
  undefined1 auStack_158 [8];
  ulonglong uStack_150;
  longlong *plStack_148;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  longlong *plStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  longlong *plStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  ulonglong uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 aauStack_68 [2] [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  
  fVar29 = _DAT_145fc6edc;
  if ((char)param_6[2] == '\0') {
    fVar29 = _DAT_145fc6ed8;
  }
  auVar30 = ZEXT464((uint)fVar29);
  if ((*(char *)((longlong)param_6 + 0x33) == '\x01') &&
     ((*(char *)((longlong)param_6 + 0x31) != '\0' ||
      ((*param_4 != 0 && ((*(byte *)(*param_4 + 0x2a) & 0x80) != 0)))))) {
    auVar30 = ZEXT464((uint)_DAT_145fc6edc);
  }
  piVar1 = (int *)*param_6;
  if (((piVar1 != (int *)0x0) && (*piVar1 != -1)) && (piVar1[1] != 0xffff)) {
    lVar10 = func_0x000144f0eb80(*piVar1,(int)param_6[3]);
    *param_3 = lVar10;
    if (((lVar10 == 0) || (*(int *)(*(longlong *)(lVar10 + 0xe0) + 0x18) != *(int *)(*param_6 + 8)))
       || ((uVar8 = *(uint *)(*param_6 + 4), *(uint *)(lVar10 + 0xc4) <= uVar8 ||
           (cVar6 = FUN_144e9cbc0(param_6,(ulonglong)(uVar8 % 0x174) * 0x2c +
                                          *(longlong *)
                                           (*(longlong *)(*(longlong *)(lVar10 + 0x98) + 0x10) +
                                           (ulonglong)(uVar8 / 0x174 << 4))), cVar6 == '\0')))) {
      *param_6 = 0;
      *param_3 = 0;
    }
  }
  if (param_5 != (ulonglong *)0x0) {
    uVar3 = *(ulonglong *)(*param_2 + 8);
    *param_5 = *(ulonglong *)*param_2;
    param_5[1] = uVar3;
  }
  piVar1 = (int *)*param_6;
  if ((piVar1 == (int *)0x0) ||
     (lVar10 = *param_3, lVar10 == 0 || (piVar1[1] == 0xffff || *piVar1 == -1))) {
    if (((char)param_6[2] != '\x01') ||
       ((*param_3 == 0 || (iVar7 = *(int *)(*param_3 + 200), iVar7 == -1)))) {
      uStack_f8 = *(undefined8 *)*param_2;
      uStack_f0 = 0;
      iVar7 = func_0x000145104670();
      if (iVar7 == -1) {
        return 4;
      }
    }
    lVar10 = func_0x000144f0eb80(iVar7,(int)param_6[3]);
    *param_3 = lVar10;
    if (lVar10 == 0) {
      return 5;
    }
  }
  auVar26 = auVar30._0_16_;
  auVar25 = *param_2;
  uVar12 = 0xffffffff;
  if ((*(byte *)(lVar10 + 0x10) & 4) != 0) {
    uVar12 = *(undefined4 *)(lVar10 + 200);
  }
  piVar1 = (int *)*param_6;
  _auStack_158 = auVar25;
  if ((piVar1 != (int *)0x0) && (uVar8 = piVar1[1], uVar8 != 0xffff && *piVar1 != -1)) {
    auVar26._8_8_ = 0;
    auVar26._0_8_ = *(ulonglong *)*param_2;
    auVar25 = vinsertps_avx(auVar26,ZEXT416((uint)(*(float *)(*param_2 + 8) -
                                                  *(float *)(param_6 + 1))),0x20);
    auVar26 = vinsertps_avx(auVar26,ZEXT416((uint)(*(float *)(*param_2 + 8) + auVar30._0_4_)),0x20);
    aauStack_68[0] = vinsertps_avx(auVar25,ZEXT416(*(uint *)*param_2),0x30);
    auStack_78 = vinsertps_avx(auVar26,ZEXT416(*(uint *)*param_2),0x30);
    cVar6 = FUN_1453bd150(lVar10,auStack_78,aauStack_68,
                          (ulonglong)(uVar8 % 0x174) * 0x2c +
                          *(longlong *)
                           (*(longlong *)(*(longlong *)(lVar10 + 0x98) + 0x10) +
                           (ulonglong)(uVar8 / 0x174 << 4)),auStack_158);
    auVar26 = auVar30._0_16_;
    auVar30._8_56_ = extraout_var_01;
    auVar30._0_8_ = extraout_XMM0_Qa_01;
    auVar25 = auVar30._0_16_;
    if (cVar6 != '\0') {
      auVar25 = ZEXT416((uint)(float)uStack_150);
      fVar29 = *(float *)(*param_2 + 8) - (float)uStack_150;
      if ((_DAT_14615b7a0 < fVar29) &&
         (fVar29 < *(float *)((longlong)param_6 + 0x14) + _DAT_145fc6edc)) {
        uVar8 = *(uint *)(*param_6 + 4);
        if ((param_5 != (ulonglong *)0x0) && (*(char *)((longlong)param_6 + 0x11) == '\x01')) {
          *(float *)(param_5 + 1) = (float)uStack_150;
        }
        goto LAB_14005c8f5;
      }
    }
  }
  auVar25 = vinsertps_avx(auVar25,auVar26,0x2b);
  auVar30 = ZEXT1664(auVar25);
  if ((char)param_6[5] == '\x01') {
    auStack_88._0_4_ = auVar25._0_4_ + *(float *)*param_2;
    auStack_88._4_4_ = auVar25._4_4_ + *(float *)(*param_2 + 4);
    auStack_88._8_4_ = auVar25._8_4_ + *(float *)(*param_2 + 8);
    auStack_88._12_4_ = auVar25._12_4_ + *(float *)(*param_2 + 0xc);
    plStack_148 = (longlong *)CONCAT44(plStack_148._4_4_,uVar12);
    uVar8 = FUN_144e9b6c0(*param_3,auStack_88,auStack_158,(int)param_6[1]);
    auVar17._8_56_ = extraout_var;
    auVar17._0_8_ = extraout_XMM0_Qa;
    auVar25 = auVar17._0_16_;
    if (uVar8 == 0xffff) {
      uVar8 = 0xffff;
      bVar14 = false;
    }
    else {
      lVar10 = *(longlong *)
                (*(longlong *)(*(longlong *)(*param_3 + 0x98) + 0x10) +
                (ulonglong)(uVar8 / 0x174 << 4));
      lVar13 = (ulonglong)(uVar8 % 0x174) * 0x2c;
      cVar6 = FUN_144e9cbc0(param_6,lVar10 + lVar13);
      auVar18._8_56_ = extraout_var_00;
      auVar18._0_8_ = extraout_XMM0_Qa_00;
      auVar25 = auVar18._0_16_;
      uVar9 = 0xffff;
      if (cVar6 != '\0') {
        uVar9 = uVar8;
      }
      if (((*(byte *)(lVar10 + 8 + lVar13) & 0x80) == 0) ||
         (*(char *)((longlong)param_6 + 0x31) != '\0')) {
        bVar14 = uVar9 != 0xffff;
        if ((param_5 == (ulonglong *)0x0) || (uVar9 == 0xffff)) {
          if (uVar9 == 0xffff) goto LAB_14005cebf;
        }
        else {
          *param_5 = (ulonglong)auStack_158;
          param_5[1] = uStack_150;
        }
        fVar29 = (float)uStack_150 - *(float *)(*param_2 + 8);
        auVar22._0_4_ = (uint)fVar29 ^ _DAT_145fc6f10;
        auVar22._4_4_ = _DAT_145fc6f10;
        auVar22._8_4_ = _DAT_145fc6f10;
        auVar22._12_4_ = _DAT_145fc6f10;
        auVar25 = vmaxss_avx(auVar22,ZEXT416((uint)fVar29));
        if (auVar25._0_4_ <= _DAT_146159bd4) goto LAB_14005c8f5;
      }
      else {
        *(undefined1 *)((longlong)param_6 + 0x32) = 1;
        bVar14 = false;
LAB_14005cebf:
        uVar8 = 0xffff;
      }
    }
    uStack_13c = 0xffffffffffff;
    uStack_134 = 0;
    if ((*(char *)((longlong)param_6 + 0x29) == '\x01') && ((*(byte *)(*param_3 + 0x10) & 4) != 0))
    {
      uStack_98 = *(ulonglong *)*param_2;
      uStack_90 = *(undefined8 *)(*param_2 + 8);
      cVar6 = FUN_143a6f300(*param_3,&uStack_98,&uStack_13c,&uStack_128,
                            *(undefined1 *)((longlong)param_6 + 0x2a));
    }
    else {
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)((longlong)param_6 + 0x14)),0x2b);
      auStack_a8 = vsubps_avx(*param_2,auVar25);
      cVar6 = FUN_14005d3e0(auStack_a8,&uStack_13c,&uStack_128,(ulonglong)plStack_148 & 0xffffffff,
                            param_6);
    }
    auVar25 = auVar30._0_16_;
    if (cVar6 != '\0') {
      if (bVar14) {
        auVar4._8_8_ = uStack_120;
        auVar4._0_8_ = uStack_128;
        auVar23._0_12_ = ZEXT812(0);
        auVar23._12_4_ = 0;
        auVar26 = vsubps_avx(auVar4,*param_2);
        auVar15._0_4_ = auVar26._0_4_ * auVar26._0_4_;
        auVar15._4_4_ = auVar26._4_4_ * auVar26._4_4_;
        auVar15._8_4_ = auVar26._8_4_ * auVar26._8_4_;
        auVar15._12_4_ = auVar26._12_4_ * auVar26._12_4_;
        auVar26 = vblendps_avx(auVar15,auVar23,8);
        auVar26 = vhaddps_avx(auVar26,auVar26);
        auVar2 = vhaddps_avx(auVar26,auVar26);
        auVar26 = vrsqrtss_avx(auVar2,auVar2);
        fVar21 = auVar26._0_4_;
        auVar26 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar2,2);
        fVar29 = (float)uStack_150 - *(float *)(*param_2 + 8);
        auVar27._0_4_ = (uint)fVar29 ^ _DAT_145fc6f10;
        auVar27._4_4_ = _DAT_145fc6f10;
        auVar27._8_4_ = _DAT_145fc6f10;
        auVar27._12_4_ = _DAT_145fc6f10;
        auVar16 = vmaxss_avx(auVar27,ZEXT416((uint)fVar29));
        if (auVar16._0_4_ <=
            (float)(auVar26._0_4_ &
                   (uint)(((fVar21 * fVar21 * auVar2._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                           fVar21 + fVar21) * auVar2._0_4_))) goto LAB_14005cba5;
      }
      lVar10 = func_0x000144f0eb80(uStack_13c & 0xffffffff,(int)param_6[3]);
      auVar25 = auVar30._0_16_;
      *param_3 = lVar10;
      if (lVar10 == 0) {
        return 5;
      }
      uVar8 = uStack_13c._4_4_;
      if (param_5 != (ulonglong *)0x0) {
        *param_5 = uStack_128;
        param_5[1] = uStack_120;
      }
    }
LAB_14005cba5:
    if (uVar8 != 0xffff) goto LAB_14005c8f5;
    uVar8 = 0xffff;
    if ((*(float *)((longlong)param_6 + 0xc) == 0.0) && (!NAN(*(float *)((longlong)param_6 + 0xc))))
    goto LAB_14005c8f5;
    auStack_b8 = vsubps_avx(*param_2,auVar25);
    uVar9 = FUN_1413c5a10(*param_3,auStack_b8,auStack_158);
    uVar8 = uVar9;
    if ((uVar9 == 0xffff) || (*(char *)((longlong)param_6 + 0x2a) == '\0')) goto LAB_14005ccc1;
    uVar11 = *(uint *)(*(longlong *)
                        (*(longlong *)(*(longlong *)(*param_3 + 0x98) + 0x10) +
                        (ulonglong)(uVar9 / 0x174 << 4)) + 0x18 + (ulonglong)(uVar9 % 0x174) * 0x2c)
             & 0x400;
LAB_14005d2d4:
    uVar8 = 0xffff;
    if (uVar11 == 0) {
      uVar8 = uVar9;
    }
    if ((param_5 == (ulonglong *)0x0) || (uVar11 != 0)) goto LAB_14005c8f5;
  }
  else {
    lVar10 = *param_3;
    auVar26 = *param_2;
    if ((*(float *)((longlong)param_6 + 0xc) != 0.0) || (NAN(*(float *)((longlong)param_6 + 0xc))))
    {
      auStack_c8 = vsubps_avx(auVar26,auVar25);
      plStack_148 = param_4;
      plStack_130 = param_3;
      plStack_110 = param_1;
      uVar8 = FUN_1413c5a10(lVar10,auStack_c8,auStack_158);
      auVar19._8_56_ = extraout_var_02;
      auVar19._0_8_ = extraout_XMM0_Qa_02;
      auVar25 = auVar19._0_16_;
      if (uVar8 == 0xffff) {
LAB_14005d0ea:
        cStack_15c = '\0';
        uVar8 = 0xffff;
      }
      else {
        cStack_15c = FUN_144e9cbc0(param_6,(ulonglong)(uVar8 % 0x174) * 0x2c +
                                           *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)(*plStack_130 + 0x98) + 0x10) +
                                            (ulonglong)(uVar8 / 0x174 << 4)));
        auVar20._8_56_ = extraout_var_03;
        auVar20._0_8_ = extraout_XMM0_Qa_03;
        auVar25 = auVar20._0_16_;
        if ((param_5 == (ulonglong *)0x0) || (cStack_15c == '\0')) {
          if (cStack_15c == '\0') goto LAB_14005d0ea;
        }
        else {
          *param_5 = (ulonglong)auStack_158;
          param_5[1] = uStack_150;
        }
        fVar29 = (float)uStack_150 - *(float *)(*param_2 + 8);
        auVar25._0_4_ = (uint)fVar29 ^ _DAT_145fc6f10;
        auVar25._4_4_ = _DAT_145fc6f10;
        auVar25._8_4_ = _DAT_145fc6f10;
        auVar25._12_4_ = _DAT_145fc6f10;
        auVar25 = vmaxss_avx(auVar25,ZEXT416((uint)fVar29));
        param_4 = plStack_148;
        param_3 = plStack_130;
        param_1 = plStack_110;
        if (auVar25._0_4_ <= _DAT_146159bd4) goto LAB_14005c8f5;
      }
      uStack_13c = 0xffffffffffff;
      uStack_134 = 0;
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)((longlong)param_6 + 0x14)),0x2b);
      auStack_d8 = vsubps_avx(*param_2,auVar25);
      cVar6 = FUN_14005d3e0(auStack_d8,&uStack_13c,&uStack_128,uVar12,param_6);
      auVar25 = auVar30._0_16_;
      if (cVar6 != '\0') {
        if (cStack_15c != '\0') {
          auVar2._8_8_ = uStack_120;
          auVar2._0_8_ = uStack_128;
          auVar24._0_12_ = ZEXT812(0);
          auVar24._12_4_ = 0;
          auVar26 = vsubps_avx(auVar2,*param_2);
          auVar16._0_4_ = auVar26._0_4_ * auVar26._0_4_;
          auVar16._4_4_ = auVar26._4_4_ * auVar26._4_4_;
          auVar16._8_4_ = auVar26._8_4_ * auVar26._8_4_;
          auVar16._12_4_ = auVar26._12_4_ * auVar26._12_4_;
          auVar26 = vblendps_avx(auVar16,auVar24,8);
          auVar26 = vhaddps_avx(auVar26,auVar26);
          auVar2 = vhaddps_avx(auVar26,auVar26);
          auVar26 = vrsqrtss_avx(auVar2,auVar2);
          fVar21 = auVar26._0_4_;
          auVar26 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar2,2);
          fVar29 = (float)uStack_150 - *(float *)(*param_2 + 8);
          auVar28._0_4_ = (uint)fVar29 ^ _DAT_145fc6f10;
          auVar28._4_4_ = _DAT_145fc6f10;
          auVar28._8_4_ = _DAT_145fc6f10;
          auVar28._12_4_ = _DAT_145fc6f10;
          auVar16 = vmaxss_avx(auVar28,ZEXT416((uint)fVar29));
          if (auVar16._0_4_ <=
              (float)(auVar26._0_4_ &
                     (uint)(((fVar21 * fVar21 * auVar2._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                             fVar21 + fVar21) * auVar2._0_4_))) goto LAB_14005d20f;
        }
        lVar10 = func_0x000144f0eb80(uStack_13c & 0xffffffff,(int)param_6[3]);
        auVar25 = auVar30._0_16_;
        *plStack_130 = lVar10;
        if (lVar10 == 0) {
          return 5;
        }
        uVar8 = uStack_13c._4_4_;
        if (param_5 != (ulonglong *)0x0) {
          *param_5 = uStack_128;
          param_5[1] = uStack_120;
        }
      }
LAB_14005d20f:
      param_4 = plStack_148;
      param_3 = plStack_130;
      param_1 = plStack_110;
      if (uVar8 != 0xffff) goto LAB_14005c8f5;
      auVar26 = *param_2;
      lVar10 = *plStack_130;
    }
    auStack_e8._0_4_ = auVar26._0_4_ + auVar25._0_4_;
    auStack_e8._4_4_ = auVar26._4_4_ + auVar25._4_4_;
    auStack_e8._8_4_ = auVar26._8_4_ + auVar25._8_4_;
    auStack_e8._12_4_ = auVar26._12_4_ + auVar25._12_4_;
    uVar9 = FUN_144e9b6c0(lVar10,auStack_e8,auStack_158,(int)param_6[1]);
    uVar8 = uVar9;
    if (uVar9 != 0xffff) {
      if ((*(char *)((longlong)param_6 + 0x2a) == '\x01') &&
         (uVar8 = 0xffff,
         (*(byte *)(*(longlong *)
                     (*(longlong *)(*(longlong *)(*param_3 + 0x98) + 0x10) +
                     (ulonglong)(uVar9 / 0x174 << 4)) + 0x19 + (ulonglong)(uVar9 % 0x174) * 0x2c) &
         4) != 0)) goto LAB_14005c8f5;
      uVar8 = uVar9;
      if (*(char *)((longlong)param_6 + 0x2d) == '\x01') {
        uVar11 = *(uint *)(*(longlong *)
                            (*(longlong *)(*(longlong *)(*param_3 + 0x98) + 0x10) +
                            (ulonglong)(uVar9 / 0x174 << 4)) + 0x28 +
                          (ulonglong)(uVar9 % 0x174) * 0x2c) & 0x3e;
        goto LAB_14005d2d4;
      }
    }
LAB_14005ccc1:
    uVar9 = uVar8;
    if (param_5 == (ulonglong *)0x0) goto LAB_14005c8f5;
  }
  uVar8 = uVar9;
  *param_5 = (ulonglong)auStack_158;
  param_5[1] = uStack_150;
LAB_14005c8f5:
  if (*param_3 == 0) {
    return 5;
  }
  if (uVar8 != 0xffff) {
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(*param_3 + 0x98) + 0x10) +
              (ulonglong)(uVar8 / 0x174 << 4));
    lVar13 = (ulonglong)(uVar8 % 0x174) * 0x2c + lVar10;
    *param_4 = lVar13;
    if ((lVar10 != 0) && ((*(byte *)(lVar13 + 9) & 0x80) == 0)) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar10 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      uVar8 = *(uint *)(lVar10 + 0x12d8);
      if ((uVar8 & 1) != 0) {
        return 0;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        uVar8 = *(uint *)(lVar10 + 0x12d8);
      }
      if ((uVar8 & 8) != 0) {
        return 0;
      }
      if (*param_1 == 0) {
        return 0;
      }
      lVar10 = FUN_144e9fbf0(*param_1,*param_4,0);
      if (param_5 == (ulonglong *)0x0) {
        plStack_148 = param_4;
        fVar29 = _DAT_14614f7f0;
        fVar21 = _UNK_14614f7f4;
        fVar31 = _UNK_14614f7f8;
        fVar32 = _UNK_14614f7fc;
        while( true ) {
          if (lVar10 == 0) {
            return 0;
          }
          if ((*(byte *)(lVar10 + 0x11) & 4) == 0) {
            return 0;
          }
          lVar10 = func_0x000145120140(*(undefined4 *)(*param_1 + 0x168060));
          *param_3 = lVar10;
          if (lVar10 == 0) break;
          auStack_108._0_4_ = fVar29 + *(float *)*param_2;
          auStack_108._4_4_ = fVar21 + *(float *)(*param_2 + 4);
          auStack_108._8_4_ = fVar31 + *(float *)(*param_2 + 8);
          auStack_108._12_4_ = fVar32 + *(float *)(*param_2 + 0xc);
          uVar8 = FUN_144e9b6c0(lVar10,auStack_108,auStack_158,(int)param_6[1]);
          plVar5 = plStack_148;
          if (uVar8 == 0xffff) {
            return 9;
          }
          lVar10 = (ulonglong)(uVar8 % 0x174) * 0x2c +
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(*param_3 + 0x98) + 0x10) +
                    (ulonglong)(uVar8 / 0x174 << 4));
          *plStack_148 = lVar10;
          lVar10 = FUN_144e9fbf0(*param_1,lVar10,0);
          if (*plVar5 == 0) {
            return 9;
          }
          if ((*(byte *)(*plVar5 + 9) & 0x80) != 0) {
            return 9;
          }
        }
      }
      else {
        while( true ) {
          if (lVar10 == 0) {
            return 0;
          }
          if ((*(byte *)(lVar10 + 0x11) & 4) == 0) {
            return 0;
          }
          lVar10 = func_0x000145120140(*(undefined4 *)(*param_1 + 0x168060));
          *param_3 = lVar10;
          if (lVar10 == 0) break;
          auStack_108._0_4_ = *(float *)*param_2 + _DAT_14614f7f0;
          auStack_108._4_4_ = *(float *)(*param_2 + 4) + _UNK_14614f7f4;
          auStack_108._8_4_ = *(float *)(*param_2 + 8) + _UNK_14614f7f8;
          auStack_108._12_4_ = *(float *)(*param_2 + 0xc) + _UNK_14614f7fc;
          uVar8 = FUN_144e9b6c0(lVar10,auStack_108,auStack_158,(int)param_6[1]);
          if (uVar8 == 0xffff) {
            return 9;
          }
          if (*(char *)((longlong)param_6 + 0x11) == '\x01') {
            *(float *)(param_5 + 1) = (float)uStack_150;
          }
          lVar10 = (ulonglong)(uVar8 % 0x174) * 0x2c +
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(*param_3 + 0x98) + 0x10) +
                    (ulonglong)(uVar8 / 0x174 << 4));
          *param_4 = lVar10;
          lVar10 = FUN_144e9fbf0(*param_1,lVar10,0);
          if (*param_4 == 0) {
            return 9;
          }
          if ((*(byte *)(*param_4 + 9) & 0x80) != 0) {
            return 9;
          }
        }
      }
    }
  }
  return 9;
}

