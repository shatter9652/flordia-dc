// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118100  size: 583 bytes
// Name:    FUN_140118100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14066cfc0, FUN_14066d030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140118100(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float *param_7,uint param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  uint auStack_d8 [4];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined2 uStack_b8;
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_73;
  undefined4 uStack_6b;
  undefined4 uStack_64;
  
  uVar8 = (uint)param_3;
  if (_DAT_1498f1470 != 0) {
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    else if ((*(char *)(_DAT_1498f1470 + 0x20) == '\x01') &&
            (*(char *)(_DAT_1498f1470 + 0x21) != '\x01')) {
      iVar4 = *(int *)(_DAT_1498f1470 + 0x14) + -1;
      if (-1 < iVar4) {
        iVar6 = 0;
        do {
          uVar5 = (uint)(iVar6 + iVar4) >> 1;
          uVar7 = (ulonglong)*(uint *)(*(longlong *)(_DAT_1498f1470 + 0x18) + (ulonglong)uVar5 * 4);
          uVar10 = _DAT_14ab83ec0 + uVar7;
          if (uVar7 != 0) {
            uVar7 = uVar10;
          }
          if (*(uint *)(uVar7 + 0x20) == uVar8) goto LAB_1401181e8;
          if (*(uint *)(uVar7 + 0x20) < uVar8) {
            iVar6 = uVar5 + 1;
          }
          else {
            iVar4 = uVar5 - 1;
          }
        } while (iVar6 <= iVar4);
      }
    }
    else if ((ulonglong)*(uint *)(_DAT_1498f1470 + 0x14) != 0) {
      lVar9 = 0;
      do {
        uVar7 = (ulonglong)*(uint *)(*(longlong *)(_DAT_1498f1470 + 0x18) + lVar9);
        uVar10 = _DAT_14ab83ec0 + uVar7;
        if (uVar7 != 0) {
          uVar7 = uVar10;
        }
        if (*(uint *)(uVar7 + 0x20) == uVar8) goto LAB_1401181e8;
        lVar9 = lVar9 + 4;
      } while ((ulonglong)*(uint *)(_DAT_1498f1470 + 0x14) << 2 != lVar9);
    }
  }
LAB_140118220:
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fStack_e8 = 0.0;
  fStack_e4 = 0.0;
  fStack_e0 = 0.0;
  uStack_dc = 0;
  cVar3 = FUN_14066cfc0(&fStack_e8,param_2,param_3,param_6);
  if (cVar3 != '\0') {
    auVar1 = *(undefined1 (*) [16])(param_7 + 4);
    auVar2 = *(undefined1 (*) [16])(param_7 + 8);
    auStack_a8._0_4_ = auVar1._0_4_ * fVar11 + fVar11 * *param_7 + auVar2._0_4_;
    auStack_a8._4_4_ = auVar1._4_4_ * fVar12 + fVar12 * param_7[1] + auVar2._4_4_;
    auStack_a8._8_4_ = auVar1._8_4_ * fVar13 + fVar13 * param_7[2] + auVar2._8_4_;
    auStack_a8._12_4_ = auVar1._12_4_ * fVar14 + fVar14 * param_7[3] + auVar2._12_4_;
    fStack_c8 = auVar2._0_4_ * fStack_e0 +
                auVar1._0_4_ * fStack_e4 + *param_7 * fStack_e8 + param_7[0xc];
    fStack_c4 = auVar2._4_4_ * fStack_e0 +
                auVar1._4_4_ * fStack_e4 + param_7[1] * fStack_e8 + param_7[0xd];
    fStack_c0 = auVar2._8_4_ * fStack_e0 +
                auVar1._8_4_ * fStack_e4 + param_7[2] * fStack_e8 + param_7[0xe];
    fStack_bc = auVar2._12_4_ * fStack_e0 +
                auVar1._12_4_ * fStack_e4 + param_7[3] * fStack_e8 + param_7[0xf];
    uStack_b8 = 0x507;
    uStack_90 = 0;
    uStack_84 = 0xffffffff;
    uStack_78 = 0x1010000;
    uStack_74 = 1;
    uStack_73 = 0;
    uStack_6b = 0;
    uStack_64 = 0x3f800000;
    uStack_80 = (ulonglong)param_8;
    uStack_98 = 0x3f800000;
    uStack_88 = (uint)((ulonglong)(param_1 - *_DAT_1498d79a8) /
                      (ulonglong)*(uint *)(_DAT_1498d79a8 + 1)) & 0x1ffff;
    uStack_88 = *(uint *)(_DAT_1498d79a8[5] + (ulonglong)uStack_88 * 4) & 0xfffe0000 | uStack_88;
    auStack_d8[0] = uVar8;
    FUN_14066d030(_DAT_14ab7ee48,param_4,param_5);
  }
  return;
LAB_1401181e8:
  if ((uVar10 != 0) && (*(char *)(uVar10 + 0x19) == '\x01')) {
    param_2 = param_2 & 0xffffffff;
    func_0x000140019da0(*(undefined4 *)(*(longlong *)(uVar10 + 0x10) + 0x30),auStack_d8,param_3,
                        param_6);
    param_3 = param_3 & 0xffffffff;
    uVar8 = auStack_d8[0];
  }
  goto LAB_140118220;
}

