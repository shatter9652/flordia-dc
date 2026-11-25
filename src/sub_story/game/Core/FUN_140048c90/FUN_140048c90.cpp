// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048c90  size: 225 bytes
// Name:    FUN_140048c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14128ba10, FUN_141972d70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140048c90(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_128 [256];
  
  iVar3 = *(int *)(param_1 + 0xc04);
  if (iVar3 < 1) {
    lVar2 = 0;
  }
  else {
    iVar4 = 1;
    if (param_4 == '\0') {
      do {
        if ((*(char *)(param_1 + 0xc0c) == '\x01') && (iVar4 + -1 == *(int *)(param_1 + 0xc08))) {
          lVar2 = 0;
        }
        else {
          FUN_14128ba10(param_1,auStack_128,0x100,param_2,param_3,iVar4 + -1);
          lVar2 = FUN_141972d70(auStack_128,0);
          iVar3 = *(int *)(param_1 + 0xc04);
        }
      } while ((lVar2 == 0) && (bVar1 = iVar4 < iVar3, iVar4 = iVar4 + 1, bVar1));
    }
    else {
      do {
        FUN_14128ba10(param_1,auStack_128,0x100,param_2,param_3,iVar4 + -1);
        lVar2 = FUN_141972d70(auStack_128,1);
        if (lVar2 != 0) {
          return lVar2;
        }
        bVar1 = iVar4 < *(int *)(param_1 + 0xc04);
        lVar2 = 0;
        iVar4 = iVar4 + 1;
      } while (bVar1);
    }
  }
  return lVar2;
}

