// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014bcc0  size: 180 bytes
// Name:    FUN_14014bcc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145014060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_14014bcc0(longlong param_1,longlong *param_2,undefined8 param_3,float param_4,longlong param_5,
             undefined4 param_6,longlong *param_7)

{
  char cVar1;
  float fVar2;
  undefined1 in_XMM2 [16];
  undefined4 uVar3;
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  
  if (param_2 != (longlong *)0x0) {
    auVar4 = ZEXT1664(in_XMM2);
    cVar1 = FUN_145014060(*(longlong *)(param_1 + 0x58) + 0x1d8,param_6,param_5);
    if (cVar1 != '\0') {
      fVar2 = (float)(**(code **)(*param_2 + 0x18))(param_2);
      auVar4._0_4_ = fVar2 * auVar4._0_4_ + param_4;
      auVar5 = ZEXT1664(auVar4._0_16_);
      if (*(char *)(param_1 + 0x111) == '\x01') {
        func_0x000143ef6db0(param_7,auVar4._0_8_);
        (**(code **)(*param_7 + 8))(param_7);
        uVar3 = (undefined4)param_7[1];
      }
      else {
        func_0x00014014bd80(param_7,auVar4._0_8_);
        uVar3 = auVar5._0_4_;
      }
      *(undefined4 *)(param_5 + 0x18) = uVar3;
      return 1;
    }
  }
  return 0;
}

