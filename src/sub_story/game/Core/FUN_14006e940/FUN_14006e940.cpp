// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006e940  size: 94 bytes
// Name:    FUN_14006e940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452c83e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_14006e940(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,longlong param_4,
             uint param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  if (((int)param_5 < 0x20) &&
     ((*(uint *)(param_4 + 0x18 + (ulonglong)(param_5 >> 5) * 4) >> (param_5 & 0x1f) & 1) != 0)) {
    puVar1 = (undefined4 *)FUN_1452c83e0(param_4);
    if (puVar1 != (undefined4 *)0x0) {
      if (param_2 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_1404bff70(*param_2,*(undefined8 *)(param_2 + 2),*puVar1,puVar1,unaff_RBX,
                              unaff_RDI);
      }
      *param_3 = &UNK_146334660;
      param_3[1] = puVar1;
      param_3[2] = param_1;
      param_3[3] = uVar2;
      return param_3;
    }
    param_4 = 0;
  }
  *param_3 = &UNK_146334660;
  func_0x000145105fd0(param_3,0x147bdcb10,param_3,param_4,unaff_RSI);
  return param_3;
}

