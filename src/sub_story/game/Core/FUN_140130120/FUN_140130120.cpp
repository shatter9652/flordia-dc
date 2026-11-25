// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140130120  size: 47 bytes
// Name:    FUN_140130120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_140130120(int param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_1 == 0) || (lVar4 = func_0x00014019bad0(), lVar4 == 0)) {
    return (longlong *)0x0;
  }
  uVar1 = *(uint *)(lVar4 + 0x24);
  lVar4 = *(longlong *)(lVar4 + 0x28);
  if (uVar1 != 0) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        iVar3 = 0x9c;
        if (*(code **)(*plVar2 + 0x20) != (code *)&UNK_1453e3ea0) {
          iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
        }
        if (iVar3 == 0x8a) {
          return plVar2;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar5);
  }
  return (longlong *)0x0;
}

