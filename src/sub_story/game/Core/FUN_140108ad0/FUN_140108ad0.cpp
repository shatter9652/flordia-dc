// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108ad0  size: 197 bytes
// Name:    FUN_140108ad0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144faf870, FUN_1400bc0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140108ad0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  *param_1 = &UNK_1462093e0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 3);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[2] = 0;
  }
  if (*(short *)(param_1 + 7) != 0) {
    uVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[6] + uVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 7));
  }
  if ((*(short *)((longlong)param_1 + 0x3a) != 0) && (param_1[6] != 0)) {
    func_0x000144d9c130();
  }
  if ((*(short *)((longlong)param_1 + 0x2a) != 0) && (param_1[4] != 0)) {
    func_0x000144d9c130();
  }
  *param_1 = &UNK_146209118;
  FUN_144faf870(param_1);
  if (param_2 != 0) {
    FUN_1400bc0e0(param_1);
  }
  return param_1;
}

