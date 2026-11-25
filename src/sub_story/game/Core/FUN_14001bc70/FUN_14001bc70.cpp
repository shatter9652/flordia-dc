// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001bc70  size: 196 bytes
// Name:    FUN_14001bc70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144daa460, FUN_144e1a270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001bc70(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_38 [40];
  
  FUN_144daa460(*(longlong *)(param_1 + 0x20) + 0x10,auStack_38,
                *(undefined4 *)
                 (param_1 + 0x3b80 + (ulonglong)(*(int *)(param_1 + 0x3b74) - 1) * 0x30));
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x5f60);
  auVar3._0_4_ = auVar1._0_4_ ^ _DAT_145fc6f10;
  auVar3._4_4_ = auVar1._4_4_ ^ _DAT_145fc6f10;
  auVar3._8_4_ = auVar1._8_4_ ^ _DAT_145fc6f10;
  auVar3._12_4_ = auVar1._12_4_ ^ _DAT_145fc6f10;
  auVar2 = vblendps_avx(auVar3,auVar1,10);
  vshufps_avx(auVar2,auVar2,0x1b);
  vshufpd_avx(auVar1,auVar3,1);
  auVar1 = vblendps_avx(auVar3,auVar1,9);
  vshufps_avx(auVar1,auVar1,0xb1);
  FUN_144e1a270(*(longlong *)(param_1 + 0x20) + 0x10,param_1 + 0x5f70);
  return;
}

