// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140179e20  size: 90 bytes
// Name:    FUN_140179e20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145033080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140179e20(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 extraout_var [56];
  ulonglong uVar4;
  undefined1 auVar5 [64];
  
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 2) == 0) {
    auVar3._0_12_ = ZEXT812(0);
    auVar3._12_4_ = 0;
  }
  else {
    auVar5._0_8_ = FUN_145033080(param_1 + 0x10,param_2);
    auVar5._8_56_ = extraout_var;
    bVar1 = *(byte *)(param_1 + 8);
    auVar3 = auVar5._0_16_;
  }
  uVar4 = auVar3._0_8_;
  auVar5 = ZEXT1664(auVar3);
  if ((bVar1 & 4) != 0) {
    fVar2 = (float)FUN_145033080(param_1 + 0x100,param_2);
    uVar4 = (ulonglong)(uint)(fVar2 + auVar5._0_4_);
  }
  return uVar4;
}

