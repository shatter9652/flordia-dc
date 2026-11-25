// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140179da0  size: 113 bytes
// Name:    FUN_140179da0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145032b50, FUN_14017ad60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140179da0(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  float fVar3;
  undefined1 extraout_var [56];
  ulonglong uVar4;
  undefined1 auVar5 [64];
  
  auVar5._0_8_ = FUN_145032b50(param_1 + 0x10);
  auVar5._8_56_ = extraout_var;
  bVar1 = *param_1;
  auVar5 = ZEXT1664(auVar5._0_16_);
  if ((bVar1 & 1) != 0) {
    fVar3 = (float)FUN_14017ad60(param_1 + 0x1a0,param_2,0);
    bVar1 = *param_1;
    auVar5 = ZEXT464((uint)(fVar3 + auVar5._0_4_));
  }
  uVar4 = auVar5._0_8_;
  if ((bVar1 & 2) != 0) {
    pbVar2 = param_1 + 0xd0;
    if ((bVar1 & 1) == 0) {
      pbVar2 = param_1;
    }
    fVar3 = (float)func_0x000140179e80(pbVar2 + 0x1a0,param_2);
    uVar4 = (ulonglong)(uint)(fVar3 + auVar5._0_4_);
  }
  return uVar4;
}

