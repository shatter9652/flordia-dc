// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117550  size: 116 bytes
// Name:    FUN_140117550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140117550(short *param_1)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  ushort uVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0xc);
  if (puVar4 == (undefined8 *)0x0) {
    uVar5 = param_1[1];
    param_1[1] = uVar5 + 1;
    lVar2 = *(longlong *)(param_1 + 4);
    puVar4 = (undefined8 *)((ulonglong)uVar5 * 0x4000 + lVar2);
  }
  else {
    *(undefined8 *)(param_1 + 0xc) = *puVar4;
    lVar2 = *(longlong *)(param_1 + 4);
  }
  uVar1 = func_0x000144da2350((ulonglong)((longlong)puVar4 - lVar2) >> 0xe);
  uVar3 = (*(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 2) | 1) + 2;
  uVar5 = 1;
  if (uVar3 < 0xfffe) {
    uVar5 = uVar3;
  }
  *(ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 2) = uVar5;
  *param_1 = *param_1 + 1;
  return puVar4;
}

