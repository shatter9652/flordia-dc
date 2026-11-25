// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff260  size: 88 bytes
// Name:    FUN_1400ff260
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400ff260(uint *param_1,ushort param_2,uint param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (param_2 != 0) {
    uVar2 = (ulonglong)param_2;
    puVar1 = param_1;
    do {
      uVar4 = uVar2 >> 1;
      uVar3 = ~uVar4 + uVar2;
      uVar2 = uVar4;
      if ((puVar1 + uVar4 * 4 + 4)[-4] < param_3) {
        puVar1 = puVar1 + uVar4 * 4 + 4;
        uVar2 = uVar3;
      }
    } while (0 < (longlong)uVar2);
    if ((puVar1 != param_1 + (ulonglong)param_2 * 4) && (*puVar1 == param_3)) {
      return *(undefined8 *)(puVar1 + 2);
    }
  }
  return 0;
}

