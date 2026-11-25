// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014ede0  size: 1364 bytes
// Name:    FUN_14014ede0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140ba2f00, FUN_14501c0e0, FUN_140150700, FUN_14014f6f0, FUN_14014f820, FUN_14014f760, FUN_14014f340, FUN_1401117e0, FUN_140150730, FUN_144e3f9a0, FUN_144f57850, FUN_14014fb20, FUN_1456a9d20, FUN_144d9d7a0, FUN_1450df6c0, FUN_145270110, FUN_141363ea0, FUN_140d896e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14014ede0(longlong *param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulonglong in_stack_ffffffffffffff18;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return 0;
  }
  if (((~*(uint *)(lVar4 + 0xa4) & 0x7ffe) == 0) ||
     (cVar2 = FUN_144d9d7a0(*(uint *)(lVar4 + 0xa0),*(uint *)(lVar4 + 0xa0) >> 0x10), cVar2 == '\0')
     ) {
    if ((*(byte *)(lVar4 + 0xb0) & 2) == 0) {
      cVar2 = FUN_144e3f9a0(*(undefined4 *)(lVar4 + 0x9c));
    }
    else {
      cVar2 = '\x01';
    }
    if (((param_2 & 1) == 0) && (cVar2 != '\0')) {
      auStack_d8._0_8_ = lVar4;
      FUN_14014f820(auStack_d8);
      if (auStack_d8._0_8_ == 0) {
        return 1;
      }
      lVar4 = *param_1;
      lVar6 = func_0x000144e98ba0(*(undefined4 *)(lVar4 + 0x9c));
      if (lVar6 != 0) {
        cVar2 = FUN_140150700(lVar6);
        if (cVar2 != '\0') {
          return 1;
        }
        lVar4 = *param_1;
      }
    }
  }
  cVar2 = FUN_14014f6f0(lVar4);
  lVar4 = *param_1;
  if (cVar2 != '\0') {
    uVar7 = func_0x000144e3bfa0();
    cVar2 = func_0x000144e8f490(uVar7,_DAT_1492d79dc);
    if ((cVar2 != '\0') || (cVar2 = func_0x000144e8f490(uVar7,_DAT_14999ee54), cVar2 != '\0')) {
      return 1;
    }
    cVar2 = func_0x000144f9f020(*(undefined4 *)(lVar4 + 0x9c));
    if (cVar2 != '\0') {
      return 1;
    }
  }
  FUN_14501c0e0(lVar4);
  plVar1 = (longlong *)*param_1;
  uVar3 = *(uint *)((longlong)plVar1 + 0xb4) >> 1 & 0x1f;
  if (uVar3 == 0x17) {
    if ((param_2 & 0x40) != 0) {
      return 2;
    }
    uVar3 = *(uint *)(plVar1 + 0x1a) & 0xffff;
    lVar4 = 0;
    if ((~*(uint *)(_DAT_14a9ec948[5] + (ulonglong)uVar3 * 4) & *(uint *)(_DAT_14a9ec948 + 6)) == 0)
    {
      lVar4 = (ulonglong)(uVar3 * (int)_DAT_14a9ec948[1]) + *_DAT_14a9ec948;
    }
    if (((char)param_2 < '\0') && ((*(byte *)((longlong)plVar1 + 0x102) & 4) == 0)) {
      FUN_1456a9d20();
    }
    else {
      func_0x000142742750(lVar4,*(uint *)(plVar1 + 0x1a) >> 0x12);
    }
  }
  else {
    if (uVar3 != 0x1b) {
      lVar4 = func_0x0001451a30d0(*(undefined4 *)((longlong)plVar1 + 0x9c));
      if (lVar4 == 0) {
        if ((param_2 & 2) != 0) {
          FUN_140ba2f00(plVar1,9,0,0);
          *(byte *)((longlong)plVar1 + 0x34) = *(byte *)((longlong)plVar1 + 0x34) & 0xfd;
          (**(code **)(*plVar1 + 0x1a0))(plVar1);
          return 0;
        }
        return 0;
      }
      auStack_d8 = *(undefined1 (*) [16])(plVar1 + 8);
      auStack_c8 = *(undefined1 (*) [16])(plVar1 + 10);
      auStack_b8 = *(undefined1 (*) [16])(plVar1 + 0xc);
      auStack_a8 = *(undefined1 (*) [16])(plVar1 + 0xe);
      uVar3 = *(uint *)(lVar4 + 0x18);
      uVar7 = *(undefined8 *)(lVar4 + 0x10);
      uVar5 = func_0x000144e3bfa0(plVar1);
      lVar4 = func_0x000144e8f430(uVar5,_DAT_14925497c);
      if ((param_2 & 1) != 0 && lVar4 != 0) {
        auVar16._8_8_ = 0;
        auVar16._0_8_ = *(ulonglong *)(lVar4 + 0xc);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = *(ulonglong *)(lVar4 + 0x2c);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = *(ulonglong *)(lVar4 + 0x24);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = *(ulonglong *)(lVar4 + 0x18);
        auVar10 = vmovlhps_avx(ZEXT416(*(uint *)(lVar4 + 8)),auVar16);
        auVar10 = vshufps_avx(auVar10,auVar16,0xd8);
        auStack_d8 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(lVar4 + 8)),0x30);
        auVar10 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(lVar4 + 0x34)),0x20);
        auVar10 = vinsertps_avx(auVar10,auVar8,0x30);
        auVar21._4_4_ = _DAT_14615a290;
        auVar21._0_4_ = _DAT_14615a290;
        auVar21._8_4_ = _DAT_14615a290;
        auVar21._12_4_ = _DAT_14615a290;
        auVar8 = vrcpps_avx(auVar21);
        fVar14 = auVar8._0_4_;
        fVar17 = auVar8._4_4_;
        fVar18 = auVar8._8_4_;
        fVar19 = auVar8._12_4_;
        auVar23._0_4_ =
             ((-(fVar14 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar14 + fVar14) * auVar10._0_4_;
        auVar23._4_4_ =
             ((-(fVar17 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar17 + fVar17) * auVar10._4_4_;
        auVar23._8_4_ =
             ((-(fVar18 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar18 + fVar18) * auVar10._8_4_;
        auVar23._12_4_ =
             ((-(fVar19 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar19 + fVar19) * auVar10._12_4_;
        auVar8 = vroundps_avx(auVar23,3);
        auVar22._0_4_ = -(auVar8._0_4_ * _DAT_14615a290) + auVar10._0_4_;
        auVar22._4_4_ = -(auVar8._4_4_ * _DAT_14615a290) + auVar10._4_4_;
        auVar22._8_4_ = -(auVar8._8_4_ * _DAT_14615a290) + auVar10._8_4_;
        auVar22._12_4_ = -(auVar8._12_4_ * _DAT_14615a290) + auVar10._12_4_;
        auVar10 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(lVar4 + 0x34)),0x20);
        auVar20._0_4_ = (int)auVar8._0_4_;
        auVar20._4_4_ = (int)auVar8._4_4_;
        auVar20._8_4_ = (int)auVar8._8_4_;
        auVar20._12_4_ = (int)auVar8._12_4_;
        auVar8 = vpackssdw_avx(auVar20,auVar20);
        auStack_a8 = vinsertps_avx(auVar10,auVar8,0x30);
        auVar10 = vshufps_avx(ZEXT416(*(uint *)(lVar4 + 0x14)),auVar13,0x4c);
        auVar8 = vshufps_avx(ZEXT416(*(uint *)(lVar4 + 0x20)),auVar9,0x4c);
        auStack_c8 = vshufps_avx(auVar10,auVar10,0x78);
        auStack_b8 = vshufps_avx(auVar8,auVar8,0x78);
      }
      lVar4 = func_0x000144fbbe70(*(undefined4 *)(*param_1 + 0x9c));
      if ((lVar4 != 0) &&
         (cVar2 = FUN_1401117e0(CONCAT71((int7)((ulonglong)*(longlong *)(lVar4 + 0x50) >> 8),
                                         *(undefined1 *)(*(longlong *)(lVar4 + 0x50) + 0xd)),
                                *(undefined1 *)(lVar4 + 0x7e)), cVar2 != '\0')) {
        FUN_14014f760(lVar4,&uStack_98);
        auVar10._4_4_ = _DAT_14615a290;
        auVar10._0_4_ = _DAT_14615a290;
        auVar10._8_4_ = _DAT_14615a290;
        auVar10._12_4_ = _DAT_14615a290;
        auVar10 = vrcpps_avx(auVar10);
        auStack_d8._8_8_ = uStack_90;
        auStack_d8._0_8_ = uStack_98;
        fVar14 = auVar10._0_4_;
        fVar17 = auVar10._4_4_;
        fVar18 = auVar10._8_4_;
        fVar19 = auVar10._12_4_;
        auVar15._0_4_ =
             ((-(fVar14 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar14 + fVar14) * auStack_68._0_4_;
        auVar15._4_4_ =
             ((-(fVar17 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar17 + fVar17) * auStack_68._4_4_;
        auVar15._8_4_ =
             ((-(fVar18 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar18 + fVar18) * auStack_68._8_4_;
        auVar15._12_4_ =
             ((-(fVar19 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar19 + fVar19) * auStack_68._12_4_;
        auVar8 = vroundps_avx(auVar15,3);
        auVar11._0_4_ = -(auVar8._0_4_ * _DAT_14615a290) + auStack_68._0_4_;
        auVar11._4_4_ = -(auVar8._4_4_ * _DAT_14615a290) + auStack_68._4_4_;
        auVar11._8_4_ = -(auVar8._8_4_ * _DAT_14615a290) + auStack_68._8_4_;
        auVar11._12_4_ = -(auVar8._12_4_ * _DAT_14615a290) + auStack_68._12_4_;
        auVar10 = vblendps_avx(auStack_68,auVar11,3);
        auVar12._0_4_ = (int)auVar8._0_4_;
        auVar12._4_4_ = (int)auVar8._4_4_;
        auVar12._8_4_ = (int)auVar8._8_4_;
        auVar12._12_4_ = (int)auVar8._12_4_;
        auVar8 = vpackssdw_avx(auVar12,auVar12);
        auStack_a8 = vinsertps_avx(auVar10,auVar8,0x30);
        auStack_c8 = vblendps_avx(ZEXT816(0) << 0x20,auStack_88,7);
        auStack_b8 = vblendps_avx(ZEXT816(0) << 0x20,auStack_78,7);
      }
      cVar2 = FUN_144d9d7a0(uVar3,uVar3 >> 0x10);
      if (cVar2 == '\0') goto LAB_14014ef2f;
      lVar4 = FUN_144f57850(uVar3);
      if (lVar4 != 0) {
        if ((uVar3 < 0xfffc0000 & (byte)(uVar3 >> 0x10)) == 0) {
          if (-1 < (char)*(byte *)(lVar4 + 0x3fc)) goto LAB_14014f119;
        }
        else if ((*(byte *)(lVar4 + 0x3fc) & 0x10) == 0) goto LAB_14014f119;
LAB_14014ef2f:
        FUN_14014f340(*param_1);
        lVar4 = *param_1;
        if (param_3 == '\0') {
          FUN_14014fb20(lVar4,10);
          FUN_140150730(*param_1,param_2,auStack_d8,uVar3,uVar7);
          return 0;
        }
        lVar6 = func_0x000144fbbe70(*(undefined4 *)(lVar4 + 0x9c));
        if (lVar6 == 0) {
          return 0;
        }
        cVar2 = FUN_1401117e0(CONCAT71((int7)((ulonglong)*(longlong *)(lVar6 + 0x50) >> 8),
                                       *(undefined1 *)(*(longlong *)(lVar6 + 0x50) + 0xd)),
                              *(undefined1 *)(lVar6 + 0x7e));
        if (cVar2 == '\0') {
          return 0;
        }
        FUN_145270110(lVar4,auStack_d8,0,0,in_stack_ffffffffffffff18 & 0xffffffffffffff00);
        return 0;
      }
LAB_14014f119:
      if ((param_2 & 0x40) == 0) {
        lVar4 = *param_1;
        cVar2 = func_0x000144fbbe40(*(undefined4 *)(lVar4 + 0xb4),*(undefined4 *)(lVar4 + 0xcc));
        if (cVar2 == '\0') {
          FUN_141363ea0(lVar4,1);
        }
        else {
          FUN_1450df6c0(lVar4,0);
        }
        *param_1 = 0;
        return 0;
      }
      return 2;
    }
    if ((param_2 & 0x40) != 0) {
      return 2;
    }
    FUN_140d896e0(plVar1);
  }
  FUN_1450df6c0(*param_1,0);
  return 0;
}

