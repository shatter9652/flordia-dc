// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002fea0  size: 95 bytes
// Name:    FUN_14002fea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14002fea0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_e8 [208];
  
  lVar1 = func_0x00014002ff00();
  if (lVar1 != 0) {
    iVar2 = 5;
    if (param_3 < 5) {
      iVar2 = param_3 + 1;
    }
    func_0x000144e2f4f0(auStack_e8,lVar1,iVar2);
    func_0x000145f40560(param_4,auStack_e8,0xd0);
  }
  return lVar1 != 0;
}

