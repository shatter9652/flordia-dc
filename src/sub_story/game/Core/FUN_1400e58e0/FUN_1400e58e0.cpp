// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e58e0  size: 976 bytes
// Name:    FUN_1400e58e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451ce040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e58e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  byte *pbVar1;
  undefined4 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar10 = _UNK_14614f7f8;
  *(undefined8 *)(param_3 + 0x100) = _DAT_14614f7f0;
  *(undefined8 *)(param_3 + 0x108) = uVar10;
  lVar12 = func_0x000144fa1050(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
  if (lVar12 == 0) {
    fVar14 = 0.0;
  }
  else {
    fVar14 = (float)FUN_1451ce040(*(undefined8 *)(lVar12 + 8));
    if ((param_5 == 0) && (0.0 < fVar14)) {
      bVar11 = true;
      goto LAB_1400e59f9;
    }
  }
  bVar11 = param_5 == 0;
  if ((((param_5 != 1) || (0.0 < fVar14)) && ((*(byte *)(param_3 + 0x110) & 4) == 0)) &&
     (((((*(byte *)(param_3 + 0x110) & 8) == 0 || ((*(byte *)(param_2 + 0x140) & 0x20) != 0)) &&
       ((*(byte *)(param_2 + 0x14d) & 8) == 0)) &&
      (((*(byte *)(param_1 + 0x91) & 4) == 0 && (*(char *)(param_1 + 0x60) != '\x02')))))) {
    if ((*(byte *)(param_2 + 0x140) & 0x20) == 0) {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0xb8 + (ulonglong)param_5 * 0x1b0);
      auVar9._4_4_ = uVar2;
      auVar9._0_4_ = uVar2;
      auVar9._8_4_ = uVar2;
      auVar9._12_4_ = uVar2;
      auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar9,4);
    }
    else {
      uVar2 = *(undefined4 *)(param_4 + 0x18);
      auVar15._4_4_ = uVar2;
      auVar15._0_4_ = uVar2;
      auVar15._8_4_ = uVar2;
      auVar15._12_4_ = uVar2;
      auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar15,4);
    }
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar15;
    if ((*(byte *)(param_2 + 0x141) & 1) == 0) {
      return;
    }
    pbVar1 = (byte *)(param_1 + 0xb0 + (ulonglong)param_5 * 8);
    *pbVar1 = *pbVar1 | 8;
    return;
  }
LAB_1400e59f9:
  if ((*(byte *)(param_2 + 0x120) & 0x20) == 0) {
    if ((*(byte *)(param_2 + 0x140) & 0x20) == 0) {
      if (((_DAT_14615af54 < (float)((uint)fVar14 & _DAT_145fc6f4c)) ||
          ((*(byte *)(param_3 + 0x110) & 0xc) != 0)) ||
         (((*(byte *)(param_2 + 0x14d) & 8) != 0 || (*(char *)(param_1 + 0x60) == '\x02')))) {
        uVar2 = *(undefined4 *)(param_4 + 0x18);
        auVar4._4_4_ = uVar2;
        auVar4._0_4_ = uVar2;
        auVar4._8_4_ = uVar2;
        auVar4._12_4_ = uVar2;
        auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar4,4);
      }
      else {
        lVar12 = *(longlong *)(param_1 + 0x188);
        if ((((*(byte *)(param_2 + 0x141) & 1) == 0) ||
            (lVar13 = (ulonglong)param_5 * 0x1b0, *(int *)(lVar12 + 0x170 + lVar13) != 1)) ||
           (*(float *)(lVar13 + lVar12 + 0xb8) <= *(float *)(param_4 + 0x18))) {
          uVar2 = *(undefined4 *)(lVar12 + 0xb8 + (ulonglong)param_5 * 0x1b0);
          auVar5._4_4_ = uVar2;
          auVar5._0_4_ = uVar2;
          auVar5._8_4_ = uVar2;
          auVar5._12_4_ = uVar2;
          auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar5,4);
        }
        else {
          auVar15 = vpermilps_avx(*(undefined1 (*) [16])(param_4 + 0x10),0xaa);
          auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar15,4);
        }
      }
    }
    else {
      uVar2 = *(undefined4 *)(param_4 + 0x18);
      auVar6._4_4_ = uVar2;
      auVar6._0_4_ = uVar2;
      auVar6._8_4_ = uVar2;
      auVar6._12_4_ = uVar2;
      auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar6,4);
    }
  }
  else if ((*(byte *)(param_2 + 0x141) & 1) == 0) {
    if (bVar11) {
      fVar14 = _DAT_145fc6f80 - fVar14;
    }
    fVar3 = *(float *)(*(longlong *)(param_1 + 0x188) + 0xb8 + (ulonglong)param_5 * 0x1b0);
    auVar15 = *(undefined1 (*) [16])
               (*(longlong *)(param_1 + 0x188) + 0xb0 + (ulonglong)param_5 * 0x1b0);
    if ((float)((uint)fVar14 & _DAT_145fc6f4c) < _DAT_145fc6f90) {
      auVar15 = vshufps_avx(auVar15,auVar15,0xaa);
      if (*(float *)(param_2 + 0xb8) + _DAT_14615cd04 < fVar3) {
        uVar2 = *(undefined4 *)(param_4 + 0x18);
        auVar16._4_4_ = uVar2;
        auVar16._0_4_ = uVar2;
        auVar16._8_4_ = uVar2;
        auVar16._12_4_ = uVar2;
        auVar15 = vminps_avx(auVar16,auVar15);
        auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar15,4);
      }
      else {
        auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar15,4);
      }
    }
    else if (fVar3 <= *(float *)(param_2 + 0xb8) + _DAT_1461622f4) {
      auVar15 = vshufps_avx(auVar15,auVar15,0xaa);
      auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar15,4);
    }
    else {
      uVar2 = *(undefined4 *)(param_4 + 0x18);
      auVar8._4_4_ = uVar2;
      auVar8._0_4_ = uVar2;
      auVar8._8_4_ = uVar2;
      auVar8._12_4_ = uVar2;
      auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar8,4);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_4 + 0x18);
    auVar7._4_4_ = uVar2;
    auVar7._0_4_ = uVar2;
    auVar7._8_4_ = uVar2;
    auVar7._12_4_ = uVar2;
    auVar15 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar7,4);
  }
  *(undefined1 (*) [16])(param_3 + 0xf0) = auVar15;
  return;
}

