// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401889e0  size: 120 bytes
// Name:    FUN_1401889e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401889e0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      cVar3 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x68))();
      if (cVar3 == '\0') {
        return 0;
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar5);
  }
  uVar1 = *(uint *)(param_1 + 0x3c);
  if ((ulonglong)uVar1 == 0) {
    uVar4 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar5 = 0;
    do {
      uVar4 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x68))();
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
      bVar6 = (ulonglong)uVar1 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  return uVar4;
}

