// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a630  size: 82 bytes
// Name:    FUN_14010a630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_14010a630(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 unaff_RDI;
  undefined4 uStack_14;
  undefined4 uVar2;
  
  puVar1 = (undefined8 *)func_0x000144f485a0();
  if (puVar1 != (undefined8 *)0x0) {
    uStack_14 = 0xffffffff;
    func_0x00014006feb0(*puVar1,param_2,&uStack_14);
    return uStack_14;
  }
  FUN_14002cac0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x1a8) + 0x18) + 0x18),
                &stack0xfffffffffffffff0,param_2);
  uVar2 = 0xffffffff;
  if ((char)unaff_RDI != '\0') {
    uVar2 = (undefined4)((ulonglong)unaff_RDI >> 0x20);
  }
  return uVar2;
}

