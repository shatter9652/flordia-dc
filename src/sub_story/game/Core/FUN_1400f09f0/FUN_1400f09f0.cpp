// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f09f0  size: 112 bytes
// Name:    FUN_1400f09f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14257ed90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400f09f0(longlong *param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if ((int)param_2 < 0) {
    *(undefined8 *)(param_1[1] + (ulonglong)~param_2 * 8) = 0;
    uVar2 = 1;
    if (0 < (int)*(uint *)(param_1 + 3)) {
      uVar3 = *(uint *)(param_1 + 3);
      do {
        if (**(longlong **)(param_1[2] + -8 + (ulonglong)uVar3 * 8) != 0) {
          return 1;
        }
        *(uint *)(param_1 + 3) = uVar3 - 1;
        bVar1 = 1 < (int)uVar3;
        uVar3 = uVar3 - 1;
      } while (bVar1);
    }
  }
  else if (*(longlong *)(*(longlong *)(*param_1 + 8) + (ulonglong)param_2 * 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_14257ed90();
    uVar2 = 1;
  }
  return uVar2;
}

