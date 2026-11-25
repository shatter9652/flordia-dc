// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401616d0  size: 218 bytes
// Name:    FUN_1401616d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141b0ea60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401616d0(longlong param_1)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  puVar1 = *(undefined2 **)(param_1 + 0x70);
  if (puVar1 != (undefined2 *)0x0) {
    FUN_141b0ea60(puVar1);
    uVar4 = (int)puVar1 - _DAT_147ec81f8;
    uVar2 = (ulonglong)_DAT_147ec8204;
    uVar5 = _DAT_147ec81f0;
    do {
      *puVar1 = (short)(uVar5 >> 0x20);
      LOCK();
      bVar6 = uVar5 != _DAT_147ec81f0;
      uVar3 = (ulonglong)((int)uVar5 + 1) |
              (uVar5 & 0xffff000000000000 | (uVar4 / uVar2 & 0xffff) << 0x20) + 0x1000000000000;
      if (bVar6) {
        uVar5 = _DAT_147ec81f0;
        uVar3 = _DAT_147ec81f0;
      }
      _DAT_147ec81f0 = uVar3;
      UNLOCK();
    } while (bVar6);
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

