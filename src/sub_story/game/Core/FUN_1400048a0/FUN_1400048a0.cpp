// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400048a0  size: 115 bytes
// Name:    FUN_1400048a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400048a0(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  
  func_0x000140004880();
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    func_0x000140004880();
  }
  uVar1 = *(ushort *)(param_1 + 0x1d8);
  if (uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1d0);
    lVar3 = 0;
    do {
      func_0x000140004880(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar3);
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  return;
}

