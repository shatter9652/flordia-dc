// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006bd80  size: 105 bytes
// Name:    FUN_14006bd80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140830a90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14006bd80(ulonglong param_1,byte param_2)

{
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((param_2 & 2) != 0) {
    return true;
  }
  uVar1 = *(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c);
  if ((byte)(*(char *)((param_1 & 0xfffffffffffffff0) + 0xfa) - 0xcU) < 3) {
    lVar3 = func_0x000140830b10(uVar1);
    if ((lVar3 == 0) &&
       ((lVar3 = func_0x000144e2a320(uVar1), lVar3 == 0 ||
        (lVar3 = FUN_140830a90(*(undefined4 *)(lVar3 + 0x3c)), lVar3 == 0)))) {
      bVar4 = false;
    }
    else {
      bVar4 = *(int *)(lVar3 + 0x14) - 9U < 0xfffffffe;
    }
    return bVar4;
  }
  lVar3 = func_0x0001450572a0();
  if (lVar3 == 0) {
    lVar3 = FUN_1409f0a30(uVar1);
    bVar2 = *(byte *)(lVar3 + 2);
  }
  else {
    bVar2 = (*(byte *)(lVar3 + 0x10) & 4) >> 2;
  }
  return (bool)bVar2;
}

