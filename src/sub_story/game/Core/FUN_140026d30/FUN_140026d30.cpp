// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026d30  size: 243 bytes
// Name:    FUN_140026d30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140026d30(uint param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if ((param_3 != 0) && (param_1 != 0)) {
    uVar1 = (param_3 >> 0x10 ^ param_3) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    uVar2 = (ulonglong)((uVar1 >> 0x10 ^ uVar1) & param_1 - 1);
    uVar3 = uVar2 * 0x30;
    bVar4 = *(uint *)(param_2 + uVar3) != 0;
    if (*(uint *)(param_2 + uVar3) != param_3 && bVar4) {
      do {
        uVar2 = (ulonglong)((int)(uVar2 * 0x30 + 0x30 >> 4) * -0x55555555 & param_1 - 1);
        uVar3 = uVar2 * 0x30;
        bVar4 = *(uint *)(param_2 + uVar3) != 0;
      } while (bVar4 && *(uint *)(param_2 + uVar3) != param_3);
    }
    if (bVar4) {
      for (uVar1 = (int)(uVar3 >> 4) * -0x55555555; uVar1 != param_1; uVar1 = uVar1 + 1) {
        if (*(int *)(param_2 + (ulonglong)uVar1 * 0x30) != 0) {
          if (uVar1 == param_1) {
            return 0;
          }
          return *(undefined8 *)(param_2 + 8 + (ulonglong)uVar1 * 0x30);
        }
      }
    }
  }
  return 0;
}

