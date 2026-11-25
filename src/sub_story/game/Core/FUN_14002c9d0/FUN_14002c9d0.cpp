// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c9d0  size: 118 bytes
// Name:    FUN_14002c9d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7ac10, FUN_1454b5ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14002c9d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_2c [4];
  
  if (*(short *)(param_1 + 0xd8 + (longlong)param_2 * 0x10) == 0) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    plVar1 = (longlong *)(param_1 + 0xd0 + (longlong)param_2 * 0x10);
    lVar4 = 0;
    uVar5 = 0;
    do {
      FUN_1454b5ec0(auStack_2c,*plVar1 + lVar4);
      uVar2 = FUN_144e7ac10(auStack_2c);
      uVar3 = (ulonglong)uVar2;
      func_0x000144fefc30(auStack_2c);
      if ((char)uVar2 == '\0') break;
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 4;
    } while (uVar5 < *(ushort *)(plVar1 + 1));
  }
  return uVar3 & 0xffffffff;
}

