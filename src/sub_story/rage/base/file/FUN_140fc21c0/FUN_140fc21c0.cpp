// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140fc21c0  size: 113 bytes
// Name:    FUN_140fc21c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456dd530, FUN_140fc2240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140fc21c0(longlong *param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 0x52504639)) {
    lVar1 = func_0x000144d9c160(0x60,8);
    if (lVar1 != 0) {
      FUN_140fc2240(lVar1,param_2,param_3);
    }
    if (*(longlong *)(lVar1 + 0x18) != -1) goto LAB_140fc220b;
    FUN_1456dd530(lVar1);
    func_0x000144d9c130(lVar1,0x60);
  }
  lVar1 = 0;
LAB_140fc220b:
  *param_1 = lVar1;
  return;
}

