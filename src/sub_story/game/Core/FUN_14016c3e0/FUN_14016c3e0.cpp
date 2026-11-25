// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016c3e0  size: 92 bytes
// Name:    FUN_14016c3e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14016c3e0(uint param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  undefined4 uStack_18;
  
  puStack_20 = &uStack_21;
  uStack_21 = 0;
  uStack_18 = 0x1000b;
  if (param_2 == (longlong *)0x0 || (param_1 >> 0xb & 1) == 0) {
    uVar3 = 0;
  }
  else {
    do {
      plVar1 = (longlong *)param_2[2];
      uVar2 = (**(code **)(*param_2 + 0x10))(param_2,&puStack_20);
      param_2 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),uStack_21);
  }
  return uVar3 & 0xffffffffffffff01;
}

