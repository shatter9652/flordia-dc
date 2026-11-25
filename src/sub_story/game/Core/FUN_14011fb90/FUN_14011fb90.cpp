// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011fb90  size: 133 bytes
// Name:    FUN_14011fb90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc6a50, FUN_144fc6950, FUN_144fc69b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011fb90(longlong param_1,int param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 unaff_RBX;
  
  if ((param_2 == 0) || (*param_3 == 0)) {
    FUN_144fc6950(param_1,param_3,param_4,0);
  }
  else {
    FUN_144fc6a50(param_1,1,param_3,1);
    FUN_144fc69b0(param_1,param_4,1,0);
  }
  *(undefined1 *)(param_1 + 0x1237c) = 1;
  *(byte *)(param_1 + 0x12522) = *(byte *)(param_1 + 0x12522) | 0x40;
  *(undefined1 *)(param_1 + 0x121a4) = 1;
  func_0x0001450a5e80(param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff,0,0,
                      0xff);
  return;
}

