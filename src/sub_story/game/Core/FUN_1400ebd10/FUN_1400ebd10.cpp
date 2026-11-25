// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ebd10  size: 127 bytes
// Name:    FUN_1400ebd10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ec880
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400ebd10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (*(short *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1400ec880(*(short *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),param_2,
                          *in_stack_00000030,in_stack_00000030[3],in_stack_00000038,
                          in_stack_00000040,in_stack_00000048,in_stack_00000050,
                          *(undefined8 *)(param_1 + 0x28));
  }
  return uVar1;
}

