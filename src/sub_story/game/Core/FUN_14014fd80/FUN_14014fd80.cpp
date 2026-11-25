// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014fd80  size: 132 bytes
// Name:    FUN_14014fd80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145ddade0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14014fd80(longlong param_1,short param_2)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x50);
  uVar1 = *(ushort *)(lVar2 + ((longlong)param_2 & 0xffffffffU) * 2);
  uVar3 = (uint)uVar1;
  if ((short)uVar1 < 0) {
    uVar3 = *(uint *)(param_1 + 0x1c);
    uVar4 = uVar3;
    if (uVar3 == *(uint *)(param_1 + 0x18)) {
      uVar4 = 1;
      if (1 < uVar3) {
        uVar4 = uVar3 >> 1;
      }
      FUN_145ddade0(param_1 + 0x18,uVar4 + uVar3);
      lVar2 = *(longlong *)(param_1 + 0x50);
      uVar4 = *(uint *)(param_1 + 0x1c);
    }
    *(uint *)(param_1 + 0x1c) = uVar4 + 1;
    *(short *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar4 * 2) = param_2;
    *(short *)(lVar2 + ((longlong)param_2 & 0xffffffffU) * 2) = (short)uVar3;
  }
  return (int)(short)uVar3;
}

