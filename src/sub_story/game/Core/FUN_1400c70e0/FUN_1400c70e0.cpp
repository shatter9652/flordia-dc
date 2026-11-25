// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c70e0  size: 46 bytes
// Name:    FUN_1400c70e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c7110, FUN_144f61ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c70e0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  
  cVar3 = FUN_1400c7110(param_1,0);
  if (cVar3 == '\0') {
    return;
  }
  cVar3 = FUN_144f61ce0();
  LOCK();
  puVar1 = (uint *)(param_1 + 0x98);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  uVar5 = *(uint *)(param_1 + 0x3c);
  if (uVar2 < uVar5) {
    if (cVar3 == '\0') {
      do {
        lVar4 = func_0x000144fdebb0(uVar5,*(undefined8 *)(param_1 + 0x40));
        if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x13) & 0x10) != 0)) {
          FUN_144f61db0(lVar4);
          uVar5 = *(uint *)(param_1 + 0x3c);
        }
        LOCK();
        puVar1 = (uint *)(param_1 + 0x98);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
      } while (uVar2 < uVar5);
    }
    else {
      do {
        lVar4 = func_0x000144fdebb0(uVar5,*(undefined8 *)(param_1 + 0x40));
        if (lVar4 != 0) {
          FUN_144f61db0(lVar4);
          uVar5 = *(uint *)(param_1 + 0x3c);
        }
        LOCK();
        puVar1 = (uint *)(param_1 + 0x98);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
      } while (uVar2 < uVar5);
    }
  }
  return;
}

