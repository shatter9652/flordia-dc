// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ae920  size: 239 bytes
// Name:    FUN_1400ae920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ae920(longlong param_1,undefined1 (*param_2) [16])

{
  float *pfVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  float fVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar4 = *(int *)param_2[8];
  *(int *)param_2[8] = iVar4 + 1;
  uVar7 = *(undefined8 *)(*param_2 + 8);
  *(undefined8 *)param_2[iVar4] = *(undefined8 *)*param_2;
  *(undefined8 *)(param_2[iVar4] + 8) = uVar7;
  fVar8 = _DAT_145fc6ed8;
  iVar4 = *(int *)param_2[8];
  if (1 < (longlong)iVar4) {
    lVar11 = 0x10;
    auVar14 = *param_2;
    do {
      uVar2 = *(undefined4 *)(*param_2 + lVar11 + 4);
      auVar15._4_4_ = uVar2;
      auVar15._0_4_ = uVar2;
      auVar15._8_4_ = uVar2;
      auVar15._12_4_ = uVar2;
      auVar3 = *(undefined1 (*) [16])(*param_2 + lVar11);
      auVar6 = vshufps_avx(auVar14,auVar14,0x55);
      auVar5 = vcmpps_avx(auVar6,auVar15,1);
      if (auVar5 == (undefined1  [16])0x0) {
        auVar5 = vcmpps_avx(auVar15,auVar6,1);
        if (auVar5 != (undefined1  [16])0x0) {
          auVar5 = vmovlhps_avx(auVar3,auVar14);
          lVar12 = 0xa0;
          piVar9 = (int *)(param_1 + 0x120);
          goto LAB_1400ae9be;
        }
      }
      else {
        auVar5 = vmovlhps_avx(auVar14,auVar3);
        lVar12 = 0x10;
        piVar9 = (int *)(param_1 + 0x90);
LAB_1400ae9be:
        auVar14 = vsubps_avx(auVar3,auVar14);
        fVar13 = auVar14._0_4_;
        auVar6 = vshufps_avx(auVar14,auVar14,0x55);
        auVar14 = vrcpps_avx(auVar6);
        lVar10 = (longlong)*piVar9 * 0x20;
        *piVar9 = *piVar9 + 1;
        *(undefined1 (*) [16])(lVar10 + lVar12 + param_1) = auVar5;
        fVar16 = auVar14._0_4_;
        fVar17 = auVar14._4_4_;
        fVar18 = auVar14._8_4_;
        fVar19 = auVar14._12_4_;
        pfVar1 = (float *)(lVar10 + 0x10 + lVar12 + param_1);
        *pfVar1 = (-((fVar16 * auVar6._0_4_ - fVar8) * fVar16) + fVar16) * fVar13;
        pfVar1[1] = (-((fVar17 * auVar6._4_4_ - fVar8) * fVar17) + fVar17) * fVar13;
        pfVar1[2] = (-((fVar18 * auVar6._8_4_ - fVar8) * fVar18) + fVar18) * fVar13;
        pfVar1[3] = (-((fVar19 * auVar6._12_4_ - fVar8) * fVar19) + fVar19) * fVar13;
      }
      lVar11 = lVar11 + 0x10;
      auVar14 = auVar3;
    } while ((longlong)iVar4 * 0x10 != lVar11);
  }
  return;
}

