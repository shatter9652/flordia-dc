// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400064b0  size: 84 bytes
// Name:    FUN_1400064b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400064b0(longlong *param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    if (param_4 <= (int)uVar3) break;
    uVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_2,(ulonglong)uVar3 + param_3);
    uVar1 = (~((int)uVar2 >> 0x1f) & uVar2) + uVar3;
  } while (-1 < (int)uVar2);
  return param_4 <= (int)uVar3;
}

