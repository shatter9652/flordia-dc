// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9050  size: 1558 bytes
// Name:    FUN_1400f9050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f9670, FUN_144f991c0, FUN_144e23920, FUN_14296bb30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f9050(uint *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong unaff_GS_OFFSET;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  uint uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  uint uStack_58;
  undefined8 uStack_54;
  undefined8 uStack_48;
  
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  lVar6 = func_0x000144f03110();
  if (lVar6 == 0) {
LAB_1400f907f:
    lVar8 = 0;
  }
  else {
    uVar9 = *(uint *)(lVar6 + 0x50);
    if (uVar9 == 0x1ffff) {
LAB_1400f94d8:
      lVar8 = 0;
    }
    else {
      uVar5 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar9 & 0x1ffff) * 4);
      if (((~uVar5 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
         ((uVar5 & 0x7fe0000) != (uVar9 & 0xfffe0000))) goto LAB_1400f94d8;
      lVar8 = (ulonglong)((uVar9 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
    }
    if (lVar8 != 0) {
      param_2 = lVar8;
    }
    lVar6 = FUN_14296bb30(*(undefined8 *)(lVar6 + 8));
    if ((lVar6 == 0) || (cVar4 = FUN_144e23920(*(undefined4 *)(lVar6 + 0x9c)), cVar4 != '\0'))
    goto LAB_1400f907f;
    uStack_88 = *(undefined8 *)(param_2 + 0x70);
    uStack_80 = *(undefined8 *)(param_2 + 0x78);
    func_0x000144dc3790(&uStack_88,auStack_68);
    uStack_98 = *(undefined8 *)(lVar6 + 0x70);
    uStack_90 = *(undefined8 *)(lVar6 + 0x78);
    func_0x000144dc3790(&uStack_98,auStack_78);
    auVar13._0_12_ = ZEXT812(0);
    auVar13._12_4_ = 0;
    auVar11 = vsubps_avx(auStack_78,auStack_68);
    auVar12._0_4_ = auVar11._0_4_ * auVar11._0_4_;
    auVar12._4_4_ = auVar11._4_4_ * auVar11._4_4_;
    auVar12._8_4_ = auVar11._8_4_ * auVar11._8_4_;
    auVar12._12_4_ = auVar11._12_4_ * auVar11._12_4_;
    auVar11 = vblendps_avx(auVar12,auVar13,8);
    auVar14._4_4_ = _DAT_14615ada0;
    auVar14._0_4_ = _DAT_14615ada0;
    auVar14._8_4_ = _DAT_14615ada0;
    auVar14._12_4_ = _DAT_14615ada0;
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar11 = vhaddps_avx(auVar11,auVar11);
    auVar11 = vcmpps_avx(auVar11,auVar14,5);
    lVar8 = 0;
    if ((((SUB161(auVar11 >> 0x1f,0) & 1) == 0 && (SUB161(auVar11 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar11 >> 0x5f,0) & 1) == 0) && -1 < auVar11[0xf]) {
      lVar8 = lVar6;
    }
  }
  lVar6 = func_0x000144fa1860(uVar1);
  lVar7 = func_0x000145226dc0(uVar1);
  iVar10 = 0;
  bVar3 = 0;
  if (lVar7 != 0) {
    bVar3 = func_0x000144e238f0(uVar1);
    bVar3 = bVar3 ^ 1;
  }
  if (lVar6 != 0) {
    iVar10 = *(int *)(lVar6 + 0x10d0);
  }
  if ((*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                8) == '\0') &&
     (func_0x0001455db994(),
     *(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8
              ) == '\0')) {
    func_0x0001455db994();
    auStack_d8._0_12_ = ZEXT812(0);
    auStack_d8._12_4_ = 0;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    auStack_d8._0_12_ = ZEXT812(0);
    auStack_d8._12_4_ = 0;
  }
  auStack_c8._0_12_ = ZEXT812(0);
  auStack_c8._12_4_ = 0;
  uStack_b8 = uStack_b8 & 0xffffff00;
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  lVar7 = FUN_144f991c0(uVar1);
  if ((lVar7 == 0) || ((*(int *)(lVar7 + 4) != 1 && (*(int *)(lVar7 + 8) != 1)))) {
    uVar9 = 0;
    if (bVar3 != 0) {
      uVar9 = 0x200;
    }
    if (iVar10 == 0) {
      lVar7 = func_0x000144e591d0(uVar1);
      if (lVar7 == 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(lVar7 + 0x121);
      }
      if ((cVar4 != '\0') || ((*(uint *)(param_2 + 0xe8) & 0x380000) == 0x180000)) {
LAB_1400f935d:
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
          lVar6 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
          param_1[4] = 0;
          param_1[5] = 0;
          param_1[6] = uVar9;
          goto LAB_1400f9617;
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = uVar9;
        goto LAB_1400f9391;
      }
    }
    else if (iVar10 == 2) goto LAB_1400f935d;
    if ((lVar6 == 0) ||
       (uVar5 = func_0x000144dc06c0(*(undefined4 *)(lVar6 + 0x10e4)), _DAT_147bb9710 <= uVar5)) {
      FUN_1400f9670(&uStack_58,param_2,lVar8);
      uStack_a8 = *(undefined8 *)(param_2 + 0x70);
      uStack_a0 = *(undefined8 *)(param_2 + 0x78);
      func_0x000144dc3790(&uStack_a8,auStack_c8);
      lVar8 = func_0x000144da10f0(*(undefined4 *)(param_2 + 0x9c));
      uStack_58 = lVar8 == 0 | uStack_58;
      if (lVar6 != 0) {
        *(uint *)(lVar6 + 0x10f0) = uStack_58;
        *(undefined8 *)(lVar6 + 0x10f4) = uStack_54;
        *(undefined8 *)(lVar6 + 0x1100) = uStack_48;
        *(uint *)(lVar6 + 0x1108) = uVar9;
        *(undefined8 *)(lVar6 + 0x110c) = 0;
        *(undefined8 *)(lVar6 + 0x1114) = auStack_d8._8_8_;
        *(undefined4 *)(lVar6 + 0x111c) = 0;
        *(undefined8 *)(lVar6 + 0x1120) = auStack_c8._0_8_;
        *(undefined8 *)(lVar6 + 0x1128) = auStack_c8._8_8_;
        *(uint *)(lVar6 + 0x1130) = uStack_b8;
        *(undefined4 *)(lVar6 + 0x1134) = 0;
        *(undefined4 *)(lVar6 + 0x10e4) = _DAT_14abbef40;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar6 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
        *param_1 = uStack_58;
        *(undefined8 *)(param_1 + 1) = uStack_54;
        *(undefined8 *)(param_1 + 4) = uStack_48;
        param_1[6] = uVar9;
        cVar4 = *(char *)(lVar6 + 8);
        param_1[7] = 0;
        param_1[8] = 0;
        *(undefined8 *)(param_1 + 9) = auStack_d8._8_8_;
        if (cVar4 == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        *param_1 = uStack_58;
        *(undefined8 *)(param_1 + 1) = uStack_54;
        *(undefined8 *)(param_1 + 4) = uStack_48;
        param_1[6] = uVar9;
        param_1[7] = 0;
        param_1[8] = 0;
        *(undefined8 *)(param_1 + 9) = auStack_d8._8_8_;
      }
      param_1[0xb] = 0;
      param_1[0x10] = uStack_b8;
      *(undefined8 *)(param_1 + 0xc) = auStack_c8._0_8_;
      *(undefined8 *)(param_1 + 0xe) = auStack_c8._8_8_;
      param_1[0x11] = 0;
    }
    else {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        cVar4 = *(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
        ;
        *param_1 = *(uint *)(lVar6 + 0x10f0);
        uVar2 = *(undefined8 *)(lVar6 + 0x10fc);
        *(undefined8 *)(param_1 + 1) = *(undefined8 *)(lVar6 + 0x10f4);
        *(undefined8 *)(param_1 + 3) = uVar2;
        param_1[5] = *(uint *)(lVar6 + 0x1104);
        uVar2 = *(undefined8 *)(lVar6 + 0x1110);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(lVar6 + 0x1108);
        *(undefined8 *)(param_1 + 8) = uVar2;
        param_1[10] = *(uint *)(lVar6 + 0x1118);
        if (cVar4 == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        *param_1 = *(uint *)(lVar6 + 0x10f0);
        uVar2 = *(undefined8 *)(lVar6 + 0x10fc);
        *(undefined8 *)(param_1 + 1) = *(undefined8 *)(lVar6 + 0x10f4);
        *(undefined8 *)(param_1 + 3) = uVar2;
        param_1[5] = *(uint *)(lVar6 + 0x1104);
        uVar2 = *(undefined8 *)(lVar6 + 0x1110);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(lVar6 + 0x1108);
        *(undefined8 *)(param_1 + 8) = uVar2;
        param_1[10] = *(uint *)(lVar6 + 0x1118);
      }
      param_1[0xb] = *(uint *)(lVar6 + 0x111c);
      uVar2 = *(undefined8 *)(lVar6 + 0x1128);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar6 + 0x1120);
      *(undefined8 *)(param_1 + 0xe) = uVar2;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar6 + 0x1130);
    }
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar6 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
LAB_1400f9617:
      cVar4 = *(char *)(lVar6 + 8);
      param_1[7] = 0;
      param_1[8] = 0;
      *(undefined8 *)(param_1 + 9) = auStack_d8._8_8_;
      if (cVar4 == '\0') {
        func_0x0001455db994();
      }
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
LAB_1400f9391:
      param_1[7] = 0;
      param_1[8] = 0;
      *(undefined8 *)(param_1 + 9) = auStack_d8._8_8_;
    }
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    param_1[0x11] = 0;
    *(undefined1 (*) [16])(param_1 + 0xb) = auVar11;
    *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  }
  return;
}

