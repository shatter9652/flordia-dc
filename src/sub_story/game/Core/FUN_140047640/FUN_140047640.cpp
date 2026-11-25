// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047640  size: 865 bytes
// Name:    FUN_140047640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140047640(int param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_ZMM2 [64];
  float fVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  uVar9 = param_3 & 0xffffffff;
  iVar6 = func_0x0001453f7b90();
  fVar5 = _DAT_1461640e4;
  fVar4 = _DAT_1461640e0;
  fVar1 = _DAT_146163f30;
  fVar14 = _DAT_14615c5b0;
  fVar19 = _DAT_14615a130;
  if (param_1 == 1) {
    lVar7 = (longlong)iVar6 * 0x78;
    uVar10 = 0;
    do {
      uVar8 = *(uint *)(param_2 + uVar10 * 8);
      lVar11 = (ulonglong)(uVar8 & 1) * 0x38;
      if (*(int *)(lVar7 + 0x147b997a0 + lVar11) == 1) {
        lVar11 = lVar11 + lVar7 + 0x147b99770;
        uVar20 = *(uint *)(param_2 + 4 + uVar10 * 8);
        uVar8 = (int)uVar8 >> 1;
        uVar12 = (ulonglong)((uVar8 >> 3) + (uVar20 >> 3) * (*(uint *)(lVar11 + 0x34) >> 3));
        fVar14 = *(float *)(*(longlong *)(lVar11 + 0x10) + uVar12 * 8);
        fVar1 = *(float *)(*(longlong *)(lVar11 + 0x10) + 4 + uVar12 * 8);
        in_ZMM2 = ZEXT464((uint)fVar1);
        if ((fVar14 != fVar1) || (NAN(fVar14) || NAN(fVar1))) {
          fVar1 = (fVar1 - fVar14) * fVar19;
          in_ZMM2 = ZEXT464((uint)fVar1);
          fVar14 = (float)*(byte *)((ulonglong)(uVar8 & 7) +
                                   uVar12 * 0x40 + *(longlong *)(lVar11 + 0x28) +
                                   (ulonglong)(uVar20 & 7) * 8) * fVar1 + fVar14;
        }
      }
      else {
        fVar14 = 0.0;
      }
      *(float *)(param_4 + uVar10 * 4) = fVar14;
      uVar8 = _DAT_145fc6f4c;
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
    auVar15._4_4_ = _DAT_145fc6f70;
    auVar15._0_4_ = _DAT_145fc6f70;
    auVar15._8_4_ = _DAT_145fc6f70;
    auVar15._12_4_ = _DAT_145fc6f70;
    uVar10 = 0;
    auVar18 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
    do {
      uVar20 = *(uint *)(param_4 + uVar10 * 4);
      auVar21._0_4_ = uVar20 & uVar8;
      auVar21._4_4_ = uVar20 & uVar8;
      auVar21._8_4_ = uVar20 & uVar8;
      auVar21._12_4_ = uVar20 & uVar8;
      auVar21 = vcmpps_avx(auVar21,auVar15,0x11);
      auVar21 = auVar18 & ~auVar21;
      if ((((SUB161(auVar21 >> 0x1f,0) & 1) != 0 || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || auVar21[0xf] < '\0') {
        uVar20 = 0;
      }
      *(uint *)(param_4 + uVar10 * 4) = uVar20;
      uVar10 = uVar10 + 1;
    } while (uVar9 != uVar10);
  }
  else {
    lVar7 = (longlong)iVar6 * 0x40;
    if (param_1 == 0) {
      if (*(int *)(lVar7 + 0x147b996e0) == 1) {
        auVar18 = ZEXT416((uint)_DAT_1461640e4);
        uVar9 = 0;
        uVar8 = *(uint *)(lVar7 + 0x147b996e4);
        lVar11 = *(longlong *)(lVar7 + 0x147b996c0);
        do {
          uVar10 = *(ulonglong *)(param_2 + uVar9 * 8);
          uVar20 = (uint)(uVar10 >> 0x20);
          uVar12 = (ulonglong)((uVar20 >> 2) * (uVar8 >> 2) + ((uint)(uVar10 >> 2) & 0x3fffffff));
          uVar2 = *(ushort *)(lVar11 + uVar12 * 4);
          uVar3 = *(ushort *)(lVar11 + 2 + uVar12 * 4);
          fVar14 = (float)uVar2 * fVar4;
          fVar19 = fVar14 + fVar1;
          if (uVar2 != uVar3) {
            fVar19 = (float)*(byte *)((ulonglong)((uint)uVar10 & 3) +
                                     uVar12 * 0x10 + *(longlong *)(lVar7 + 0x147b996d8) +
                                     (ulonglong)(uVar20 & 3) * 4) *
                     (-((float)uVar3 * fVar4) + fVar14) * fVar5 + fVar19;
          }
          *(float *)(param_4 + uVar9 * 4) = fVar19;
          uVar9 = uVar9 + 1;
        } while ((param_3 & 0xffffffff) != uVar9);
      }
      else {
        func_0x000145f40580(param_4,0,uVar9 * 4);
        auVar18 = in_ZMM2._0_16_;
      }
      uVar8 = _DAT_145fc6f4c;
      auVar17._4_4_ = _DAT_145fc6f70;
      auVar17._0_4_ = _DAT_145fc6f70;
      auVar17._8_4_ = _DAT_145fc6f70;
      auVar17._12_4_ = _DAT_145fc6f70;
      uVar9 = 0;
      auVar18 = vpcmpeqd_avx(auVar18,auVar18);
      do {
        uVar20 = *(uint *)(param_4 + uVar9 * 4);
        auVar23._0_4_ = uVar20 & uVar8;
        auVar23._4_4_ = uVar20 & uVar8;
        auVar23._8_4_ = uVar20 & uVar8;
        auVar23._12_4_ = uVar20 & uVar8;
        auVar15 = vcmpps_avx(auVar23,auVar17,0x11);
        auVar15 = auVar18 & ~auVar15;
        if ((((SUB161(auVar15 >> 0x1f,0) & 1) != 0 || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || auVar15[0xf] < '\0') {
          uVar20 = 0;
        }
        *(uint *)(param_4 + uVar9 * 4) = uVar20;
        uVar9 = uVar9 + 1;
      } while ((param_3 & 0xffffffff) != uVar9);
    }
    else {
      if (*(int *)(lVar7 + 0x147b99908) == 1) {
        uVar10 = 0;
        uVar8 = *(uint *)(lVar7 + 0x147b9990c);
        lVar11 = *(longlong *)(lVar7 + 0x147b998e8);
        do {
          uVar12 = *(ulonglong *)(param_2 + uVar10 * 8);
          uVar20 = (uint)(uVar12 >> 0x20);
          uVar13 = (ulonglong)((uVar20 >> 3) * (uVar8 >> 3) + ((uint)(uVar12 >> 3) & 0x1fffffff));
          fVar19 = *(float *)(lVar11 + uVar13 * 8);
          fVar1 = *(float *)(lVar11 + 4 + uVar13 * 8);
          if ((fVar19 != fVar1) || (NAN(fVar19) || NAN(fVar1))) {
            fVar1 = (fVar1 - fVar19) * fVar14;
            fVar19 = (float)*(ushort *)
                             ((ulonglong)((uVar20 & 7) << 4) +
                              uVar13 * 0x80 + *(longlong *)(lVar7 + 0x147b99900) +
                             (ulonglong)((uint)uVar12 & 7) * 2) * fVar1 + fVar19;
          }
          auVar18 = ZEXT416((uint)fVar1);
          *(float *)(param_4 + uVar10 * 4) = fVar19;
          uVar10 = uVar10 + 1;
        } while (uVar9 != uVar10);
      }
      else {
        func_0x000145f40580(param_4,0,uVar9 * 4);
        auVar18 = in_ZMM2._0_16_;
      }
      uVar8 = _DAT_145fc6f4c;
      auVar16._4_4_ = _DAT_145fc6f70;
      auVar16._0_4_ = _DAT_145fc6f70;
      auVar16._8_4_ = _DAT_145fc6f70;
      auVar16._12_4_ = _DAT_145fc6f70;
      uVar10 = 0;
      auVar18 = vpcmpeqd_avx(auVar18,auVar18);
      do {
        uVar20 = *(uint *)(param_4 + uVar10 * 4);
        auVar22._0_4_ = uVar20 & uVar8;
        auVar22._4_4_ = uVar20 & uVar8;
        auVar22._8_4_ = uVar20 & uVar8;
        auVar22._12_4_ = uVar20 & uVar8;
        auVar15 = vcmpps_avx(auVar22,auVar16,0x11);
        auVar15 = auVar18 & ~auVar15;
        if ((((SUB161(auVar15 >> 0x1f,0) & 1) != 0 || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || auVar15[0xf] < '\0') {
          uVar20 = 0;
        }
        *(uint *)(param_4 + uVar10 * 4) = uVar20;
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
    }
  }
  return;
}

