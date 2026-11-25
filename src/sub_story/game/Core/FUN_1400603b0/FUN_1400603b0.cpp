// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400603b0  size: 227 bytes
// Name:    FUN_1400603b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd4860
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400603b0(undefined8 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 in_ZMM1 [64];
  undefined4 uVar9;
  float fVar10;
  
  uVar2 = _DAT_14abbef40;
  uVar9 = *(undefined4 *)(param_1 + 2);
  if ((*(byte *)((longlong)param_1 + 0x27) & 2) == 0) {
    uVar5 = func_0x0001435a6020();
    auVar8 = in_ZMM1._4_12_;
    uVar4 = *param_1;
  }
  else {
    uVar4 = *param_1;
    uVar5 = func_0x000144e9dde0(uVar4,*(undefined1 *)((longlong)param_1 + 0x26));
    auVar8 = in_ZMM1._4_12_;
  }
  auVar7._0_4_ = (float)uVar2;
  auVar7._4_12_ = auVar8;
  fVar10 = auVar7._0_4_ * _DAT_146159ec4;
  auVar7 = vpinsrw_avx(auVar7,(uint)*(ushort *)((longlong)param_1 + 0x24),0);
  uVar6 = func_0x000144e9de00(uVar4,auVar7._0_8_);
  uVar1 = *(undefined2 *)((longlong)param_1 + 0x1e);
  lVar3 = func_0x000144e9db70();
  FUN_144dd4860(param_2,*(undefined2 *)(lVar3 + 0x3a),uVar1,3,uVar6,uVar5,uVar9,fVar10,1);
  return;
}

