// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401afa10  size: 124 bytes
// Name:    FUN_1401afa10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa45a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401afa10(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  int iStack_24;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x274) == '\0') {
    lVar3 = FUN_144fa45a0();
    if (lVar3 != 0) {
      lVar3 = func_0x000144fa4e80(*(undefined4 *)(lVar3 + 0x9c));
      if (lVar3 != 0) {
        uVar1 = *(undefined8 *)(lVar3 + 0x1e0);
        iVar2 = func_0x0001401afa90(uVar1);
        func_0x0001400ff530(uVar1,&iStack_24);
        if ((iVar2 == 0) && (iStack_24 != 0)) goto LAB_1401afa81;
      }
    }
    if ((*(longlong *)(param_1 + 0xa28) == 0) ||
       ((*(byte *)(*(longlong *)(param_1 + 0xa28) + 0x97) & 0x40) == 0)) {
      uVar4 = 0;
    }
  }
LAB_1401afa81:
  return uVar4 & 0xffffffff;
}

