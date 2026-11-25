// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118730  size: 55 bytes
// Name:    FUN_140118730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140118730(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong alStack_28 [2];
  
  uVar1 = func_0x0001455c8f10();
  lVar2 = func_0x00014552d1f0(param_1,uVar1);
  if ((param_2 != (longlong *)0x0) && (lVar2 != 0)) {
    plVar3 = (longlong *)(**(code **)(*param_2 + 0xc0))();
    if (*plVar3 == 0) {
      lVar4 = 0;
    }
    else {
      func_0x00014503e5b0();
      lVar4 = *plVar3;
    }
    alStack_28[0] = lVar4;
    FUN_14041f380(lVar2,alStack_28,0,param_3);
    func_0x00014552d240(lVar4);
  }
  return;
}

