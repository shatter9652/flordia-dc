// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049360  size: 40 bytes
// Name:    FUN_140049360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140049360(undefined8 param_1,void *param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  ulong unaff_ESI;
  void *unaff_retaddr;
  ulong in_stack_ffffffffffffffe8;
  ulong in_stack_fffffffffffffff0;
  undefined4 uStack_c;
  
  pvVar1 = SetFilePointerEx(param_2,param_3,&stack0xfffffffffffffff0,param_4,
                            in_stack_ffffffffffffffe8,in_stack_fffffffffffffff0,unaff_ESI,
                            unaff_retaddr);
  return -(ulonglong)((int)pvVar1 == 0) | CONCAT44(uStack_c,in_stack_fffffffffffffff0);
}

