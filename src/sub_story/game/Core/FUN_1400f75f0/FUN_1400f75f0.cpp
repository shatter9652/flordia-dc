// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f75f0  size: 74 bytes
// Name:    FUN_1400f75f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f75f0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x20);
  if ((ulonglong)uVar3 != 0) {
    uVar4 = 0;
    do {
      lVar2 = uVar4 * 8;
      uVar4 = uVar4 + 1;
      LOCK();
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar2) + 4);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}

