// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eb930  size: 110 bytes
// Name:    FUN_1400eb930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f75f70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400eb930(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *in_stack_00000028;
  longlong in_stack_00000030;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  lVar2 = param_1[7];
  uVar4 = (**(code **)(*param_1 + 0x80))();
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_144f75f70(uVar3,uVar4,*in_stack_00000028,in_stack_00000028[3],
                (ulonglong)uVar1 * 0x10 + in_stack_00000030,lVar2);
  return 0;
}

