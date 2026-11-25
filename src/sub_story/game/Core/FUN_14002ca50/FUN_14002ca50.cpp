// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002ca50  size: 46 bytes
// Name:    FUN_14002ca50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_14002ca50(longlong param_1,char param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined1 in_ZMM0 [64];
  
  bVar3 = 1;
  if (param_2 == '\x01') {
    auVar1 = vpinsrw_avx(in_ZMM0._0_16_,(uint)*(ushort *)(param_1 + 0xe4),0);
    auVar2 = vpinsrw_avx(auVar1,(uint)*(ushort *)(param_1 + 0xf0),0);
    bVar3 = func_0x000140e7cd70(auVar1._0_8_,auVar2._0_8_,1);
    bVar3 = bVar3 ^ 1;
  }
  return bVar3;
}

