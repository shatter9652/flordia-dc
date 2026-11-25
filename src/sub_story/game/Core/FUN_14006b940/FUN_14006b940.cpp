// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006b940  size: 56 bytes
// Name:    FUN_14006b940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ebe690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14006b940(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar3 [64];
  
  uVar2 = FUN_144ebe690();
  if (*(short *)(param_1 + 0xa2) != -1) {
    auVar3 = ZEXT464(*(uint *)(param_1 + 0x734));
    cVar1 = func_0x000144ebef60(param_1,0x3d7d5042,*(uint *)(param_1 + 0x734),param_4,unaff_XMM6_Qa,
                                unaff_XMM6_Qb);
    if ((cVar1 == '\0') && (-1 < (longlong)*(short *)(param_1 + 0xa2))) {
      FUN_144ebef10((longlong)*(short *)(param_1 + 0xa2) * 0x90 + 0x149eddf08,0x3d7d5042,
                    auVar3._0_8_);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    return uVar2;
  }
  return uVar2;
}

