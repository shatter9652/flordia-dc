// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140177940  size: 179 bytes
// Name:    FUN_140177940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452fe1d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140177940(undefined8 param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  if ((*(byte *)(*(longlong *)(param_2 + 0x20) + 0x40e) & 0x10) == 0) {
    bVar10 = false;
  }
  else {
    FUN_1452fe1d0(param_1,auStack_28);
    uStack_48 = *(undefined8 *)(param_2 + 0x70);
    uStack_40 = *(undefined8 *)(param_2 + 0x78);
    func_0x000144dc3790(&uStack_48,auStack_38);
    fVar6 = *(float *)(param_2 + 0x50);
    fVar7 = *(float *)(param_2 + 0x54);
    fVar8 = *(float *)(param_2 + 0x58);
    fVar9 = *(float *)(param_2 + 0x5c);
    auVar13._0_12_ = ZEXT812(0);
    auVar13._12_4_ = 0;
    auVar5 = vsubps_avx(auStack_28,auStack_38);
    auVar12._0_4_ = fVar6 * fVar6;
    auVar12._4_4_ = fVar7 * fVar7;
    auVar12._8_4_ = fVar8 * fVar8;
    auVar12._12_4_ = fVar9 * fVar9;
    auVar12 = vblendps_avx(auVar12,auVar13,8);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar11 = vrsqrtps_avx(auVar12);
    fVar1 = auVar11._0_4_;
    fVar2 = auVar11._4_4_;
    fVar3 = auVar11._8_4_;
    fVar4 = auVar11._12_4_;
    auVar11._0_4_ =
         auVar5._0_4_ * fVar6 *
         ((fVar1 * fVar1 * auVar12._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar1 + fVar1);
    auVar11._4_4_ =
         auVar5._4_4_ * fVar7 *
         ((fVar2 * fVar2 * auVar12._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar2 + fVar2);
    auVar11._8_4_ =
         auVar5._8_4_ * fVar8 *
         ((fVar3 * fVar3 * auVar12._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar3 + fVar3);
    auVar11._12_4_ =
         auVar5._12_4_ * fVar9 *
         ((fVar4 * fVar4 * auVar12._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar4 + fVar4);
    auVar12 = vblendps_avx(auVar11,auVar13,8);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar12 = vcmpps_avx(auVar12,auVar13,5);
    bVar10 = (((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0';
  }
  return bVar10;
}

