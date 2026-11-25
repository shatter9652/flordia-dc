// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8dc0  size: 351 bytes
// Name:    FUN_1400c8dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40a00, FUN_1400c8f20, FUN_144fe4920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c8dc0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auVar10 [64];
  
  FUN_1400c8f20();
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(byte *)(param_2 + 0xf0) = *(byte *)(param_2 + 0xf0) & 0xf8 | lVar2 != 0;
  if (lVar2 == 0) {
    return;
  }
  uVar1 = *(undefined4 *)(lVar2 + 0x9c);
  lVar2 = func_0x000144dd1230(uVar1);
  lVar3 = func_0x0001450bb780(uVar1);
  lVar4 = func_0x0001450ed6c0();
  if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x10) == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = func_0x000144dd1230();
  }
  if (lVar2 != 0) {
    bVar6 = 2;
    bVar5 = 4;
    if (((*(byte *)(lVar2 + 0x10) & 2) != 0) || ((*(byte *)(lVar2 + 0x10) & 1) != 0))
    goto LAB_1400c8ec9;
  }
  if ((lVar4 == 0) || (((*(byte *)(lVar4 + 0x10) >> 1 | *(byte *)(lVar4 + 0x10)) & 1) == 0)) {
    if (lVar3 == 0) {
      bVar5 = 0;
      bVar6 = 0;
    }
    else {
      FUN_144e40a00(lVar3,&fStack_48);
      auVar9._0_12_ = ZEXT812(0);
      auVar9._12_4_ = 0;
      auVar10 = ZEXT1664(auVar9);
      auVar7._0_4_ = fStack_48 * fStack_48;
      auVar7._4_4_ = fStack_44 * fStack_44;
      auVar7._8_4_ = fStack_40 * fStack_40;
      auVar7._12_4_ = fStack_3c * fStack_3c;
      auVar7 = vblendps_avx(auVar7,auVar9,8);
      auVar7 = vhaddps_avx(auVar7,auVar7);
      auVar7 = vhaddps_avx(auVar7,auVar7);
      if (_DAT_145fc6f78 < auVar7._0_4_) {
        bVar6 = 2;
      }
      else {
        FUN_144fe4920(lVar3,&fStack_58);
        auVar8._0_4_ = fStack_58 * fStack_58;
        auVar8._4_4_ = fStack_54 * fStack_54;
        auVar8._8_4_ = fStack_50 * fStack_50;
        auVar8._12_4_ = fStack_4c * fStack_4c;
        auVar7 = vblendps_avx(auVar8,auVar10._0_16_,8);
        auVar7 = vhaddps_avx(auVar7,auVar7);
        auVar7 = vhaddps_avx(auVar7,auVar7);
        bVar6 = (_DAT_145fc6f78 < auVar7._0_4_) * '\x02';
      }
      bVar5 = 0;
    }
  }
  else {
    bVar6 = 2;
    bVar5 = 4;
  }
LAB_1400c8ec9:
  *(byte *)(param_2 + 0xf0) = *(byte *)(param_2 + 0xf0) & 0xf9 | bVar5 | bVar6;
  return;
}

