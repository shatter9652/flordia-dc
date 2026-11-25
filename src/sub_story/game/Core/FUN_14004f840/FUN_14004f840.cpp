// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004f840  size: 126 bytes
// Name:    FUN_14004f840
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140ac7480
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004f840(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  lVar1 = func_0x000144e6ea40(*(undefined4 *)
                               ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
  if (lVar1 != 0) {
    uVar2 = func_0x000144e6e9f0(lVar1);
    uStack_19 = 0xff;
    FUN_140ac7480(uVar2,0xaff6cd99,&UNK_143c8e000,param_1,&uStack_19);
    uStack_1a = 0xff;
    FUN_140ac7480(uVar2,0x374f35fb,&UNK_143c8e010,param_1,&uStack_1a);
  }
  return;
}

