// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194660  size: 189 bytes
// Name:    FUN_140194660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd9c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


float FUN_140194660(longlong param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong lVar3;
  float *pfVar4;
  undefined1 extraout_var [56];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  float fVar7;
  undefined1 extraout_var_00 [56];
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x160))();
  lVar3 = FUN_144dd9c70(uVar2,0xf48be66a);
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x134) == 0)) || (*(longlong *)(lVar3 + 0x138) == 0)) {
    pfVar4 = (float *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0x1c);
  }
  else {
    pfVar4 = (float *)(*(longlong *)(lVar3 + 0x138) + 0x60);
  }
  fVar7 = *pfVar4;
  uVar2 = func_0x00014504c180(param_1,0,param_2);
  auVar6._0_8_ = func_0x000144d9ff70(0x1499fae10,uVar2);
  auVar6._8_56_ = extraout_var;
  auVar6 = ZEXT1664(auVar6._0_16_);
  uVar2 = func_0x00014504c180(param_1,1,param_2);
  auVar5._0_8_ = func_0x000144d9ff70(0x1499facc0,uVar2);
  auVar5._8_56_ = extraout_var_00;
  auVar1 = vminss_avx(auVar6._0_16_,auVar5._0_16_);
  return auVar1._0_4_ * fVar7;
}

