// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014da20  size: 2186 bytes
// Name:    FUN_14014da20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140d383a0, FUN_144f013e0, FUN_1401e7170, FUN_140bc95a0, FUN_144e737c0, FUN_142cfbb20, FUN_1404f56c0, FUN_140bc3240, FUN_140133280, FUN_140070560, FUN_140133500, FUN_144e92640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14014da20(longlong param_1,char param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 auStack_86 [14];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  
  lVar15 = *(longlong *)(param_1 + 8);
  if (lVar15 == 0) {
    return 0;
  }
  uVar1 = *(undefined4 *)(lVar15 + 0x9c);
  lVar11 = func_0x000144da6540(uVar1);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)(lVar11 + 0x10c8);
  }
  lVar12 = func_0x000144da6540(uVar1);
  if (lVar12 == 0) {
    return 0;
  }
  lVar12 = *(longlong *)(lVar12 + 0x10b0);
  if (lVar12 == 0 || lVar11 == 0) {
    return 0;
  }
  uVar10 = *(uint *)(lVar11 + 0x14f0);
  uVar16 = (ulonglong)uVar10 & 0x1ffff;
  if ((uVar16 == 0x1ffff) ||
     (plVar2 = *(longlong **)((ulonglong)(uVar10 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
     plVar2 == (longlong *)0x0)) {
    lVar14 = 0;
  }
  else {
    uVar19 = *(uint *)(plVar2[5] + uVar16 * 4);
    lVar14 = 0;
    if (uVar10 >> 0x16 == (uVar19 >> 0x11 & 0x3ff) &&
        (uVar19 & *(uint *)(plVar2 + 6)) == *(uint *)(plVar2 + 6)) {
      lVar14 = (ulonglong)(uint)((int)plVar2[1] * (int)uVar16) + *plVar2;
    }
  }
  lVar13 = func_0x00014504fd40(lVar15);
  if ((lVar13 != 0) &&
     (cVar5 = FUN_144e737c0(*(undefined8 *)(lVar13 + 0x70),*(undefined8 *)(lVar13 + 0x78),5),
     cVar5 != '\0')) {
    return 0;
  }
  if (lVar14 != 0) {
    return lVar14;
  }
  lVar14 = func_0x000144da6540(uVar1);
  if (lVar14 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(longlong *)(lVar14 + 0x10a8);
  }
  if ((param_4 == '\0') && (bVar8 = *(byte *)(lVar14 + 0xcb3), (bVar8 & 1) == 0)) {
    bVar6 = 0;
LAB_14014db9b:
    if ((bVar6 != 0) || ((bVar8 & 0x10) != 0)) goto LAB_14014dba8;
  }
  else {
    lVar13 = FUN_1404f56c0(*(undefined8 *)(lVar15 + 0x20),uVar1);
    if (lVar13 == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = (*(byte *)(*(longlong *)(lVar13 + 0x10) + 0x35e) & 8) >> 3;
    }
    if (param_4 == '\0') {
      bVar8 = *(byte *)(lVar14 + 0xcb3);
      goto LAB_14014db9b;
    }
LAB_14014dba8:
    uVar10 = *(uint *)(lVar11 + 0xfc0);
    uVar16 = CONCAT71((int7)((ulonglong)lVar14 >> 8),*(undefined1 *)(lVar11 + 0x1010));
    cVar5 = func_0x00014501bbd0((ulonglong)uVar10,uVar16 & 0xffffffff);
    if ((cVar5 == '\0') ||
       ((((uVar17 = (ulonglong)uVar10 & 0x1ffff, uVar17 == 0x1ffff ||
          (plVar2 = *(longlong **)((ulonglong)(uVar10 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
          plVar2 == (longlong *)0x0)) ||
         (uVar19 = *(uint *)(plVar2[5] + uVar17 * 4), (uVar19 >> 0x11 & 0x3ff) != uVar10 >> 0x16))
        || (((uVar19 & *(uint *)(plVar2 + 6)) != *(uint *)(plVar2 + 6) || (*plVar2 == 0)))))) {
      lVar14 = *(longlong *)(lVar12 + 0x1000);
      if (lVar14 == 0) {
        lVar14 = *(longlong *)(lVar12 + 0x4e0);
        if (lVar14 == 0) {
          lVar14 = *(longlong *)(lVar12 + 0xf80);
          if ((lVar14 == 0) || (*(char *)(lVar14 + 0x30) != '\x03')) goto LAB_14014dce7;
          if (param_2 != '\0') {
            return lVar14;
          }
          bVar8 = *(byte *)(lVar12 + 0xfe1);
        }
        else {
          if (param_2 != '\0') {
            return lVar14;
          }
          bVar8 = *(byte *)(lVar12 + 0xfe0);
        }
      }
      else {
        if (param_2 != '\0') {
          return lVar14;
        }
        bVar8 = *(byte *)(lVar12 + 0xfe2);
      }
    }
    else {
      lVar14 = *plVar2 + (ulonglong)(uint)((int)uVar17 * (int)plVar2[1]);
      if (param_2 != '\0') {
        return lVar14;
      }
      cVar5 = func_0x00014501bbd0(uVar10,uVar16 & 0xffffffff);
      if (cVar5 == '\0') goto LAB_14014dce7;
      bVar8 = *(byte *)(lVar11 + 0x1028) & 4;
    }
    if (bVar8 != 0) {
      return lVar14;
    }
  }
LAB_14014dce7:
  if (*(longlong *)(lVar12 + 0x1020) != 0) {
    return *(longlong *)(lVar12 + 0x1020);
  }
  if (param_3 != '\0') {
    return 0;
  }
  lVar11 = func_0x000144fa1860(uVar1);
  lVar12 = func_0x000144da10f0(uVar1);
  if (lVar11 == 0) {
    return 0;
  }
  if (lVar12 == 0) {
    return 0;
  }
  if ((*(ulonglong *)(lVar11 + 0xe48) & 0x20000) == 0) {
    return 0;
  }
  if (_DAT_14ab769a0 != 0) {
    return 0;
  }
  lVar11 = func_0x000144f3ea40(*(undefined8 *)(lVar12 + 0x650),0x10);
  iVar9 = FUN_144e92640(lVar12 + 0x120,0x162);
  if (lVar11 == 0) {
    return 0;
  }
  if (iVar9 != -1) {
    return 0;
  }
  lVar11 = *(longlong *)(lVar11 + 0x318);
  if (lVar11 == 0) {
    return 0;
  }
  lVar14 = func_0x000144ef6280(*(undefined4 *)(lVar11 + 0x9c));
  cVar5 = FUN_140d383a0(lVar15,lVar11);
  if (((cVar5 == '\0') && (cVar5 = FUN_140bc95a0(*(undefined8 *)(param_1 + 8)), cVar5 == '\0')) &&
     (cVar5 = FUN_142cfbb20(*(undefined8 *)(param_1 + 8)), cVar5 == '\0')) {
    if (lVar14 == 0) {
      return 0;
    }
    if (((*(byte *)(lVar14 + 0x3c) & 8) == 0) && ((*(byte *)(lVar14 + 200) & 8) == 0)) {
      return 0;
    }
  }
  lVar15 = FUN_144f013e0(*(undefined4 *)(lVar11 + 0x9c));
  if (lVar15 == 0) {
LAB_14014dfa6:
    bVar4 = false;
  }
  else {
    FUN_140133280(&uStack_88,1);
    lVar15 = FUN_140070560(lVar15);
    FUN_140133500(uStack_88,uStack_87);
    if (lVar15 == 0) goto LAB_14014dfa6;
    if (*(char *)(lVar15 + 0x30) == '\x03') {
      cVar5 = FUN_1401e7170(lVar15,*(undefined8 *)(param_1 + 8));
      bVar4 = true;
      if (cVar5 == '\0') {
        lVar14 = func_0x000144da10f0(*(undefined4 *)(lVar15 + 0x9c));
        if (((lVar14 != 0) &&
            (lVar14 = func_0x000144f3ea40(*(undefined8 *)(lVar14 + 0x650),0x169), lVar14 != 0)) &&
           (uVar10 = *(uint *)(lVar14 + 0x418), uVar10 != 0x1ffff)) {
          uVar19 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar10 & 0x1ffff) * 4);
          if (((((~uVar19 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
               ((uVar19 & 0x7fe0000) == (uVar10 & 0xfffe0000))) && (*_DAT_14abb6918 != 0)) &&
             (lVar14 = *(longlong *)(param_1 + 8),
             *_DAT_14abb6918 + (ulonglong)((uVar10 & 0x1ffff) * (int)_DAT_14abb6918[1]) == lVar14))
          {
            uStack_68 = *(undefined8 *)(lVar14 + 0x70);
            uStack_60 = *(undefined8 *)(lVar14 + 0x78);
            func_0x000144dc3790(&uStack_68,&uStack_88);
            uStack_78 = *(undefined8 *)(lVar15 + 0x70);
            uStack_70 = *(undefined8 *)(lVar15 + 0x78);
            func_0x000144dc3790(&uStack_78,auStack_58);
            auVar3[1] = uStack_87;
            auVar3[0] = uStack_88;
            auVar3._2_14_ = auStack_86;
            auVar22._0_12_ = ZEXT812(0);
            auVar22._12_4_ = 0;
            auVar3 = vsubps_avx(auVar3,auStack_58);
            auVar20._0_4_ = auVar3._0_4_ * auVar3._0_4_;
            auVar20._4_4_ = auVar3._4_4_ * auVar3._4_4_;
            auVar20._8_4_ = auVar3._8_4_ * auVar3._8_4_;
            auVar20._12_4_ = auVar3._12_4_ * auVar3._12_4_;
            auVar3 = vblendps_avx(auVar20,auVar22,8);
            auVar3 = vhaddps_avx(auVar3,auVar3);
            auVar20 = vhaddps_avx(auVar3,auVar3);
            auVar3 = vrsqrtss_avx(auVar20,auVar20);
            fVar21 = auVar3._0_4_;
            auVar3 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar20,2);
            if ((float)(auVar3._0_4_ &
                       (uint)(((fVar21 * fVar21 * auVar20._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                               fVar21 + fVar21) * auVar20._0_4_)) < _DAT_146159cc0)
            goto LAB_14014dfad;
          }
        }
        goto LAB_14014dfa6;
      }
    }
    else {
      bVar4 = false;
    }
  }
LAB_14014dfad:
  if (_DAT_14ab769a0 == 0) {
    cVar5 = '\0';
  }
  else {
    cVar7 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                          *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8));
    cVar5 = '\x01';
    if ((((cVar7 == '\0') &&
         (cVar7 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                                *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8)), cVar7 == '\0')) &&
        ((cVar7 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                                *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8)), cVar7 == '\0' &&
         ((cVar7 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                                 *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8)), cVar7 == '\0' &&
          (cVar7 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                                 *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8)), cVar7 == '\0')))))) &&
       ((cVar7 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                               *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8)), cVar7 == '\0' &&
        (cVar7 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                               *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8)), cVar7 == '\0')))) {
      cVar5 = FUN_140bc3240(*(undefined4 *)(_DAT_14a9b3e18 + 0xbf4),
                            *(undefined8 *)(_DAT_14a9b3e18 + 0xbf8));
    }
  }
  lVar15 = *(longlong *)(param_1 + 8);
  lVar14 = func_0x000144da6540(*(undefined4 *)(lVar15 + 0x9c));
  if (*(int *)(*(longlong *)(lVar14 + 0x1078) + 0x1a0) +
      *(int *)(*(longlong *)(lVar14 + 0x1078) + 0x1ac) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = FUN_1401e7170(lVar15,0);
    bVar8 = bVar8 ^ 1;
  }
  if (bVar4 || bVar8 != 0) {
    return 0;
  }
  lVar15 = func_0x0001407f0910(*(undefined8 *)(lVar12 + 0x650));
  if (cVar5 != '\0' || lVar15 != 0) {
    return 0;
  }
  lVar15 = func_0x000144da10f0(*(undefined4 *)(lVar11 + 0x9c));
  uVar10 = FUN_144e92640(lVar15 + 0x120,0x85);
  if ((uVar10 != 0xffffffff) && (lVar12 = (longlong)*(int *)(lVar15 + 0x1a4), 0 < lVar12)) {
    puVar18 = (uint *)(lVar15 + 0x1ac);
    lVar14 = 0;
    do {
      if (((puVar18[-1] ^ uVar10 & 0xffff0000) < 0x100) &&
         (uVar19 = *puVar18, (uVar19 & 0x7fffffff) == 0x4210d548)) goto LAB_14014e1c4;
      lVar14 = lVar14 + 1;
      puVar18 = puVar18 + 4;
    } while (lVar12 != lVar14);
    puVar18 = (uint *)(lVar15 + 0x1ac);
    lVar13 = 0;
    lVar14 = 0;
    do {
      if (((puVar18[-1] ^ uVar10 & 0xffff0000) < 0x100) &&
         (uVar19 = *puVar18, (uVar19 & 0x7fffffff) == 0x6f175677)) goto LAB_14014e1c4;
      lVar14 = lVar14 + 1;
      puVar18 = puVar18 + 4;
    } while (lVar12 != lVar14);
    goto LAB_14014e23c;
  }
LAB_14014e239:
  lVar13 = 0;
LAB_14014e23c:
  if (lVar13 == *(longlong *)(param_1 + 8)) {
    return 0;
  }
  return lVar11;
LAB_14014e1c4:
  if (-1 < (int)uVar19) {
    uVar10 = *(uint *)(lVar15 + 0x1b0 + lVar14 * 0x10);
    uVar16 = (ulonglong)uVar10 & 0x1ffff;
    if ((uVar16 != 0x1ffff) &&
       (plVar2 = *(longlong **)((ulonglong)(uVar10 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar2 != (longlong *)0x0)) {
      uVar19 = *(uint *)(plVar2[5] + uVar16 * 4);
      lVar13 = 0;
      if (uVar10 >> 0x16 == (uVar19 >> 0x11 & 0x3ff) &&
          (uVar19 & *(uint *)(plVar2 + 6)) == *(uint *)(plVar2 + 6)) {
        lVar13 = (ulonglong)(uint)((int)plVar2[1] * (int)uVar16) + *plVar2;
      }
      goto LAB_14014e23c;
    }
  }
  goto LAB_14014e239;
}

