// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184770  size: 169 bytes
// Name:    FUN_140184770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140184770(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_1[2] != 0) {
    if (*(longlong *)(param_1[2] + 0x28) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(param_1[2] + 0x28) + 0x10);
    }
    if (plVar3 == param_2) {
      return param_1[2];
    }
  }
  if (param_2 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    param_1[2] = 0;
    uVar1 = (**(code **)(*param_1 + 0x20))();
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar1,1,param_1 + 7,1,param_1,0,&UNK_14678d1bb);
    func_0x000140a22250(param_1,lVar2);
  }
  return lVar2;
}

