// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006550  size: 50 bytes
// Name:    FUN_140006550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_140006550(undefined8 param_1,void *param_2,void *param_3,ulong param_4)

{
  void *pvVar1;
  undefined4 in_stack_fffffffffffffff0;
  uint in_stack_fffffffffffffff4;
  
  pvVar1 = WriteFile(param_2,param_3,param_4,&stack0xfffffffffffffff4,(void *)0x0,
                     (char *)CONCAT44(in_stack_fffffffffffffff4,in_stack_fffffffffffffff0));
  return -(uint)((int)pvVar1 == 0) | in_stack_fffffffffffffff4;
}

