// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401467f0  size: 166 bytes
// Name:    FUN_1401467f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401467f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x50);
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (uVar1 == *(ushort *)(param_1 + 0x52)) {
    lVar2 = func_0x000144d9c140(8,(uVar1 + 0x10) * 0x10);
    func_0x000145f40560(lVar2,lVar3,(ulonglong)uVar1 << 4);
    if (lVar3 != 0) {
      func_0x000144d9c130(lVar3);
    }
    *(short *)(param_1 + 0x52) = (short)(uVar1 + 0x10);
    *(longlong *)(param_1 + 0x48) = lVar2;
    uVar1 = *(ushort *)(param_1 + 0x50);
    lVar3 = lVar2;
  }
  *(ushort *)(param_1 + 0x50) = uVar1 + 1;
  *(undefined8 *)(lVar3 + (ulonglong)uVar1 * 0x10) = param_2;
  *(undefined8 *)(lVar3 + 8 + (ulonglong)uVar1 * 0x10) = param_3;
  return;
}

