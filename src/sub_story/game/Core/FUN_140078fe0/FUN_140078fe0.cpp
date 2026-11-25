// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140078fe0  size: 576 bytes
// Name:    FUN_140078fe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e523e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140078fe0(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uStack_28;
  
  bVar3 = *(byte *)(param_1 + 0xc3);
  *(byte *)(param_1 + 0xc4) = bVar3;
  uVar5 = (bVar3 + 1) % (uint)*(byte *)(param_1 + 0xc2);
  *(char *)(param_1 + 0xc3) = (char)uVar5;
  uVar8 = (ulonglong)((uint)bVar3 * 0x30);
  bVar3 = *(byte *)(param_1 + 0x28 + uVar8);
  *(byte *)(param_1 + 0x28 + uVar8) = bVar3 & 0xf8 | bVar3 * '\x04' & 4 | 2;
  if (*(char *)(param_1 + 0xca) == '\x01') {
    bVar7 = *(char *)(param_1 + 0xc0) + 1;
    *(byte *)(param_1 + 0xc0) = bVar7;
    if (bVar7 < *(byte *)(param_1 + 0xc1)) {
      *(byte *)(param_1 + 0x28 + (ulonglong)(uVar5 * 0x30)) =
           *(byte *)(param_1 + 0x28 + (ulonglong)(uVar5 * 0x30)) & 0xef | bVar3 & 0x10;
    }
    else {
      FUN_144e523e0(&uStack_28,*(undefined4 *)(param_1 + 0xb0));
      if ((bVar3 & 0x10) == 0) {
        bVar3 = *(byte *)(param_1 + 0xa6);
        uStack_28 = (uStack_28 & 0xffffffff) * 0x5cdcfaa7 + (uStack_28 >> 0x20);
        bVar7 = *(byte *)(param_1 + 0xa7);
        uVar9 = (uint)bVar7;
        if (bVar3 < bVar7) {
          uVar9 = (uint)bVar3;
        }
        uVar6 = (uint)bVar7;
        if (bVar7 < bVar3) {
          uVar6 = (uint)bVar3;
        }
        fVar10 = (float)((uint)uStack_28 & 0x7fffff) *
                 (*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x94)) * _DAT_14615af54 +
                 *(float *)(param_1 + 0x94);
      }
      else {
        bVar3 = *(byte *)(param_1 + 0xa5);
        uVar4 = *(uint *)(param_1 + 0xa4);
        uVar9 = (uint)bVar3;
        if ((byte)uVar4 < bVar3) {
          uVar9 = uVar4;
        }
        uVar6 = (uint)bVar3;
        fVar10 = _DAT_145fc6ed8;
        if (bVar3 < (byte)uVar4) {
          uVar6 = uVar4;
        }
      }
      *(float *)(param_1 + 0xb8) = fVar10;
      *(char *)(param_1 + 0xc1) =
           (char)uVar9 +
           (char)((longlong)
                  (ulonglong)((int)(uStack_28 >> 0x20) + (int)uStack_28 * 0x5cdcfaa7 & 0x7fffffff) %
                 (longlong)(int)(((uVar6 & 0xff) - (uVar9 & 0xff)) + 1));
      *(byte *)(param_1 + 0x28 + (ulonglong)(uVar5 * 0x30)) =
           (*(byte *)(param_1 + 0x28 + (ulonglong)(uVar5 * 0x30)) & 0xef |
           *(byte *)(param_1 + 0x28 + uVar8) & 0x10) ^ 0x10;
      *(undefined1 *)(param_1 + 0xc0) = 0;
    }
    func_0x000144f4fae0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
    pbVar1 = (byte *)(param_1 + 0x28 + (ulonglong)(uVar5 * 0x30));
    *pbVar1 = *pbVar1 & 0xef;
  }
  if (*(char *)(param_1 + 0x116) == '\x01') {
    auVar13._4_4_ = _DAT_14615af0c;
    auVar13._0_4_ = _DAT_14615af0c;
    auVar13._8_4_ = _DAT_14615af0c;
    auVar13._12_4_ = _DAT_14615af0c;
    fVar10 = (float)*(undefined8 *)(param_1 + 0xf8);
    fVar11 = (float)((ulonglong)*(undefined8 *)(param_1 + 0xf8) >> 0x20);
    uVar8 = (_DAT_14ab7ef38 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_14ab7ef38 >> 0x20);
    _DAT_14ab7ef38 = (uVar8 & 0xffffffff) * 0x5cdcfaa7 + (uVar8 >> 0x20);
    auVar12._0_8_ = _DAT_14ab7ef38 & 0xffffffff;
    auVar12._8_8_ = 0;
    auVar12 = vpand_avx(auVar12,auVar13);
    auVar12 = vcvtdq2ps_avx(auVar12);
    auVar14._0_4_ = auVar12._0_4_ * (-(fVar10 * _DAT_14615af54) + _DAT_14615af54) + fVar10;
    auVar14._4_4_ = auVar12._4_4_ * (-(fVar11 * _DAT_14615af54) + _DAT_14615af54) + fVar11;
    auVar14._8_4_ = auVar12._8_4_ * (-(_DAT_14615af54 * 0.0) + _DAT_14615af54) + 0.0;
    auVar14._12_4_ = auVar12._12_4_ * (-(_DAT_14615af54 * 0.0) + _DAT_14615af54) + 0.0;
    uVar2 = vmovlps_avx(auVar14);
    *(undefined8 *)(param_1 + 0xf0) = uVar2;
  }
  return;
}

