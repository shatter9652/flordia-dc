// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b58a0  size: 103 bytes
// Name:    FUN_1401b58a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140092f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1401b58a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(*(longlong *)(*param_2 + 8) + 0x18);
  FUN_140092f40(param_1 + 0x50,*(undefined4 *)(param_1 + 0x60),plVar1);
  uVar2 = func_0x00014505bd10(*(undefined4 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  if ((char)uVar2 != '\0') {
    iVar3 = func_0x0001401b5910(*(undefined4 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    if (iVar3 == -1) {
      uVar4 = (**(code **)(*plVar1 + 0x40))(plVar1);
      iVar3 = func_0x000144e05fa0(uVar4);
    }
    *(int *)(param_1 + 100) = iVar3;
  }
  return uVar2;
}

