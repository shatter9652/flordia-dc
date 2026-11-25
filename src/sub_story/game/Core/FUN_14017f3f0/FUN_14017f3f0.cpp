// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017f3f0  size: 123 bytes
// Name:    FUN_14017f3f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017fcf0, FUN_1401803e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017f3f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong in_stack_ffffffffffffffb8;
  
  if (*(char *)(*(longlong *)(param_1 + 0x90) + 0x411) == '\x02') {
    FUN_14017fcf0(*(longlong *)(param_1 + 0x90),param_2,param_1,param_3,
                  in_stack_ffffffffffffffb8 & 0xffffffff00000000);
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    uVar2 = func_0x000145037a40(param_1);
    FUN_1401803e0(uVar1,param_2,param_1,uVar2,0,param_3,0,1);
  }
  return;
}

