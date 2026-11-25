// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ad5a0  size: 212 bytes
// Name:    FUN_1401ad5a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401aefc0, FUN_144f9a2a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401ad5a0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = *param_2;
  if (lVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0xa8);
    bVar2 = FUN_144f9a2a0(uVar1,*(undefined4 *)(param_1 + 0xdc));
    uVar4 = *(uint *)(lVar5 + 0xa8);
    bVar2 = (byte)((uint)*(undefined4 *)(param_1 + 0x148) >> 8) & 1 & bVar2;
    cVar3 = FUN_144f9a2a0(uVar4,*(undefined4 *)(lVar5 + 0xdc));
    if (cVar3 == '\0') {
      if (bVar2 == 0) {
        return;
      }
    }
    else {
      if (bVar2 == 0) {
        return;
      }
      if ((*(byte *)(lVar5 + 0x149) & 1) != 0) {
        if ((uVar1 >> 0x16 & 1) == 0) {
          bVar2 = FUN_1401aefc0(param_1,0);
          lVar5 = *param_2;
          bVar2 = bVar2 ^ 1;
          uVar4 = *(uint *)(lVar5 + 0xa8);
        }
        else {
          bVar2 = 0;
        }
        if ((uVar4 >> 0x16 & 1) != 0) {
          return;
        }
        cVar3 = FUN_1401aefc0(lVar5,0);
        if (bVar2 != 0 || cVar3 != '\0') {
          return;
        }
      }
    }
  }
  *param_2 = param_1;
  return;
}

