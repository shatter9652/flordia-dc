// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140127870  size: 69 bytes
// Name:    FUN_140127870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140127870(uint param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == 0xffffffff) {
LAB_1401278ad:
    uVar4 = 0;
  }
  else {
    lVar3 = func_0x00014546afb0(param_2);
    if (lVar3 != 0) {
      if (*(longlong **)(lVar3 + 0x1c8) == (longlong *)0x0) {
        uVar2 = 0;
      }
      else {
        bVar1 = (**(code **)(**(longlong **)(lVar3 + 0x1c8) + 0x98))();
        uVar2 = (uint)bVar1;
      }
      if (uVar2 != param_1) goto LAB_1401278ad;
    }
    uVar4 = 1;
  }
  return uVar4;
}

