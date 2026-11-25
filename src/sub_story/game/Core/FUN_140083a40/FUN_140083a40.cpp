// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083a40  size: 74 bytes
// Name:    FUN_140083a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140083a90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140083a40(ulonglong param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_1c = param_3;
  cVar1 = func_0x00014506d5a0(*(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c));
  if (cVar1 != '\0') {
    uStack_18 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_140083a90(param_1 & 0xfffffffffffffff0,&uStack_18,&uStack_1c);
  }
  return;
}

