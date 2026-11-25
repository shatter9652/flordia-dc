// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401291e0  size: 122 bytes
// Name:    FUN_1401291e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452d3cd0, FUN_144fd5ee0, FUN_140b7cb70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401291e0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  if ((param_1[2] != 0) &&
     (((plVar4 = (longlong *)func_0x000140129260(), *plVar4 == 0 || (plVar4[1] == 0)) &&
      (cVar1 = FUN_1452d3cd0(0x14abb6920), cVar1 != '\0')))) {
    cVar1 = FUN_144fd5ee0(param_1);
    if (cVar1 != '\0') {
      return true;
    }
    if (param_1[0x26] == 0) {
      uVar3 = (**(code **)(*param_1 + 8))(param_1);
      cVar1 = FUN_140b7cb70(uVar3);
      if (cVar1 == '\0') {
        return false;
      }
    }
    iVar2 = func_0x000140129270(*(undefined4 *)((longlong)param_1 + 0xc),param_1[2]);
    return iVar2 == 0;
  }
  return false;
}

