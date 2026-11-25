// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140199c50  size: 934 bytes
// Name:    FUN_140199c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e9fbf0, FUN_145053c40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140199c50(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  
  lVar2 = *param_3;
  cVar3 = func_0x000145053980(lVar2);
  if (cVar3 == '\0') {
    uVar7 = *(uint *)(lVar2 + 0x1d4);
    if ((((((((((uVar7 & 2) != 0) || ((*(byte *)(param_2 + 0x19) & 2) == 0)) &&
             (((uVar7 & 4) != 0 || ((*(byte *)(param_2 + 0x19) & 2) != 0)))) &&
            (((uVar7 & 8) == 0 || ((*(byte *)(param_2 + 8) & 0x80) == 0)))) &&
           (((uVar7 & 0x10) == 0 || ((*(byte *)(param_2 + 8) & 0x80) != 0)))) &&
          (((uVar7 & 0x20) == 0 ||
           (((*(byte *)(param_2 + 8) & 0x80) != 0 && ((*(byte *)(param_2 + 0x1a) & 8) != 0)))))) &&
         (((uVar7 & 0x40) == 0 || ((*(byte *)(param_2 + 8) & 4) != 0)))) &&
        ((((-1 < (char)uVar7 || ((*(byte *)(param_2 + 0x19) & 4) == 0)) &&
          (((uVar7 >> 8 & 1) == 0 || ((*(byte *)(param_2 + 8) & 8) != 0)))) &&
         ((((uVar7 >> 0x14 & 1) == 0 || ((*(byte *)(param_2 + 8) & 8) == 0)) &&
          (((uVar7 >> 9 & 1) == 0 || ((*(byte *)(param_2 + 0x19) & 0x10) != 0)))))))) &&
       (((((((uVar7 >> 0x13 & 1) == 0 || ((*(byte *)(param_2 + 0x19) & 0x10) == 0)) &&
           (((uVar7 >> 10 & 1) == 0 || ((*(byte *)(param_2 + 0x1b) & 1) == 0)))) &&
          (((uVar7 >> 0xb & 1) == 0 || ((*(byte *)(param_2 + 0x1b) & 4) == 0)))) &&
         (((uVar7 >> 0xc & 1) == 0 || ((*(byte *)(param_2 + 0x19) & 0x20) == 0)))) &&
        ((((uVar7 >> 0x15 & 1) == 0 || ((*(byte *)(param_2 + 0x20) & 0x3f) != 0)) &&
         (((uVar7 >> 0x17 & 1) == 0 || ((*(byte *)(param_2 + 0x1a) & 1) == 0)))))))) {
      if ((uVar7 & 1) != 0) {
        lVar5 = param_3[1];
        *(undefined2 *)(lVar5 + 0x1ca070) = 0;
        FUN_145053c40(*(undefined8 *)(lVar5 + 0x1ca040),param_2 + 0xc,lVar5 + 0x1ca068,
                      *(undefined2 *)(lVar5 + 0x1ca072),(uVar7 >> 0xd & 1) == 0,0);
      }
      if ((param_1 != 0) && (fVar22 = *(float *)(lVar2 + 0x1e4), _DAT_145fc6f48 < fVar22)) {
        pfVar4 = (float *)func_0x000144ea0c70(*(undefined4 *)(param_2 + 0x24));
        auVar16._0_12_ = ZEXT812(0);
        auVar16._12_4_ = 0;
        auVar12._0_4_ = *pfVar4 * _DAT_14614f7f0;
        auVar12._4_4_ = pfVar4[1] * _UNK_14614f7f4;
        auVar12._8_4_ = pfVar4[2] * _UNK_14614f7f8;
        auVar12._12_4_ = pfVar4[3] * _UNK_14614f7fc;
        auVar12 = vblendps_avx(auVar12,auVar16,8);
        auVar12 = vhaddps_avx(auVar12,auVar12);
        auVar12 = vhaddps_avx(auVar12,auVar12);
        if (auVar12._0_4_ < fVar22) {
          return 0;
        }
      }
      lVar5 = FUN_144e9fbf0(param_3[1],param_2,0);
      if (((lVar5 != 0) && (0.0 < *(float *)(lVar2 + 0x1ec))) &&
         (*(int *)(lVar5 + 0xc) != *(int *)(param_3[1] + 0x1ca060))) {
        uVar7 = *(uint *)(param_2 + 4) & 0xf;
        if (uVar7 != 0) {
          uVar6 = (ulonglong)(*(uint *)(param_2 + 4) >> 4 & 0xfffff);
          lVar8 = uVar6 * 0xc + 4;
          do {
            iVar9 = (int)((uVar6 & 0xffffffff) * 0x80180181 >> 0x20);
            uVar10 = *(uint *)(*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) +
                                (ulonglong)((((uint)((int)uVar6 - iVar9) >> 1) + iVar9 >> 10) << 4))
                              + lVar8 + (uVar6 / 0x555) * -0x3ffc);
            uVar11 = uVar10 >> 0x10 & 0xff;
            uVar10 = uVar10 >> 0x18;
            if (uVar11 < uVar10) {
              uVar10 = uVar11;
            }
            if ((float)uVar10 * _DAT_14615b724 * (float)uVar10 * _DAT_14615b724 <
                *(float *)(lVar2 + 0x1ec)) {
              *(int *)(lVar5 + 0xc) = *(int *)(param_3[1] + 0x1ca060);
              break;
            }
            lVar8 = lVar8 + 0xc;
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      if ((param_2 != 0) && (fVar22 = *(float *)(lVar2 + 500), 0.0 < fVar22)) {
        auVar13._4_4_ = fVar22;
        auVar13._0_4_ = fVar22;
        auVar13._8_4_ = fVar22;
        auVar13._12_4_ = fVar22;
        fVar22 = (float)(int)*(short *)(param_2 + 0x14) - *(float *)(lVar2 + 0xe8);
        auVar17._4_4_ = fVar22;
        auVar17._0_4_ = fVar22;
        auVar17._8_4_ = fVar22;
        auVar17._12_4_ = fVar22;
        auVar12 = vcmpps_avx(auVar17,auVar13,5);
        if ((((SUB161(auVar12 >> 0x1f,0) & 1) == 0 && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar12 >> 0x5f,0) & 1) == 0) && -1 < auVar12[0xf]) {
          return 0;
        }
      }
      if (param_2 == 0) {
        return 1;
      }
      fVar22 = *(float *)(lVar2 + 0x1f0);
      if (fVar22 <= 0.0) {
        return 1;
      }
      fVar15 = (float)(int)*(short *)(param_2 + 0x16);
      auVar19._4_4_ = fVar15;
      auVar19._0_4_ = fVar15;
      auVar19._8_4_ = fVar15;
      auVar19._12_4_ = fVar15;
      uVar1 = *(undefined4 *)(lVar2 + 0xe8);
      auVar18._4_4_ = uVar1;
      auVar18._0_4_ = uVar1;
      auVar18._8_4_ = uVar1;
      auVar18._12_4_ = uVar1;
      auVar12 = vcmpps_avx(auVar19,auVar18,5);
      if ((((SUB161(auVar12 >> 0x1f,0) & 1) == 0 && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar12 >> 0x5f,0) & 1) == 0) && -1 < auVar12[0xf]) {
        auVar12 = vsubps_avx(auVar18,auVar19);
        auVar21._4_4_ = fVar22;
        auVar21._0_4_ = fVar22;
        auVar21._8_4_ = fVar22;
        auVar21._12_4_ = fVar22;
        auVar12 = vcmpps_avx(auVar21,auVar12,5);
        if ((((SUB161(auVar12 >> 0x1f,0) & 1) == 0 && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar12 >> 0x5f,0) & 1) == 0) && -1 < auVar12[0xf]) {
          return 0;
        }
      }
      auVar20._0_4_ = (float)(int)*(short *)(param_2 + 0x14);
      auVar20._4_4_ = auVar20._0_4_;
      auVar20._8_4_ = auVar20._0_4_;
      auVar20._12_4_ = auVar20._0_4_;
      auVar12 = vcmpps_avx(auVar18,auVar20,5);
      if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
        return 1;
      }
      auVar12 = vsubps_avx(auVar20,auVar18);
      auVar14._4_4_ = fVar22;
      auVar14._0_4_ = fVar22;
      auVar14._8_4_ = fVar22;
      auVar14._12_4_ = fVar22;
      auVar12 = vcmpps_avx(auVar14,auVar12,5);
      if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
        return 1;
      }
    }
  }
  return 0;
}

