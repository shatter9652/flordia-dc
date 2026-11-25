// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7940  size: 107 bytes
// Name:    FUN_1400f7940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142276b50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f7940(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined4 uStack_2c;
  
  uVar1 = *(ushort *)(param_1 + 0x28);
  if ((ulonglong)uVar1 != 0) {
    uStack_2c = **(undefined4 **)(param_1 + 0x20);
    cVar2 = FUN_142276b50();
    if (cVar2 != '\0') {
      uVar3 = 1;
      do {
        if (uVar1 == uVar3) {
          return;
        }
        uStack_2c = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + uVar3 * 4);
        cVar2 = FUN_142276b50(&uStack_2c,param_2);
        uVar3 = uVar3 + 1;
      } while (cVar2 != '\0');
    }
  }
  return;
}

