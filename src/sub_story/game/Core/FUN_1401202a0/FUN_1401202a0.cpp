// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401202a0  size: 130 bytes
// Name:    FUN_1401202a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401202a0(undefined1 (*param_1) [16],float param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 in_register_00001244 [12];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  
  auVar3 = ZEXT1664(CONCAT124(in_register_00001244,param_2));
  auVar4 = ZEXT464((uint)(_DAT_146163fcc / param_2 + _DAT_146163fd0));
  auVar5 = ZEXT464((uint)(_DAT_146163fcc / param_2 + _DAT_146163fd4));
  fVar2 = (float)func_0x000145f40830(param_2 * _DAT_146163fd8);
  auVar1 = vinsertps_avx(ZEXT416((uint)((-(auVar5._0_4_ * fVar2) + auVar4._0_4_) * _DAT_146163fdc)),
                         auVar3._0_16_,0x10);
  auVar1 = vinsertps_avx(auVar1,auVar5._0_16_,0x20);
  auVar1 = vinsertps_avx(auVar1,auVar4._0_16_,0x30);
  *param_1 = auVar1;
  return;
}

