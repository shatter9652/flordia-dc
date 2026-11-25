// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a76a0  size: 113 bytes
// Name:    FUN_1401a76a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450703d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a76a0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  
  lVar2 = func_0x000144f99170(param_2);
  if (lVar2 == 0) {
    return 0;
  }
  FUN_1450703d0(lVar2,param_1 + 0x5fc,0);
  FUN_1450703d0(lVar2,param_1 + 0x5f8,0);
  FUN_1450703d0(lVar2,param_1 + 0x5ec,0);
  piVar5 = (int *)(param_1 + 0x5f4);
  cVar1 = FUN_144e59120(*(undefined4 *)((*(ulonglong *)(lVar2 + 8) & 0xfffffffffffffff0) + 0x9c));
  if (cVar1 == '\0') {
    iVar3 = *piVar5;
    if ((-1 < iVar3) && (iVar3 == *(int *)(lVar2 + 0x18c4))) {
      *(byte *)(lVar2 + 0x19d6) = *(byte *)(lVar2 + 0x19d6) | 2;
      iVar3 = *piVar5;
    }
    uVar4 = 0;
    lVar2 = FUN_145070490(lVar2,iVar3,0);
    if (lVar2 != 0) {
      FUN_1401a7830(lVar2 + 0x1a0,0);
      uVar4 = 1;
      if (*(int *)(lVar2 + 0x1a0) != 0) {
        if (*(int *)(lVar2 + 0x1a8) == -1) {
          return 1;
        }
        cVar1 = func_0x000144db7770(*(int *)(lVar2 + 0x1a8) + *(int *)(lVar2 + 0x1a0) +
                                    *(int *)(lVar2 + 0x1a4));
        uVar4 = 1;
        if (cVar1 == '\0') {
          return 1;
        }
      }
    }
  }
  else {
    uVar4 = 0;
  }
  *piVar5 = -1;
  return uVar4;
}

