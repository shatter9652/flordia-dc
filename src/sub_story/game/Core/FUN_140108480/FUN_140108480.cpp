// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140108480  size: 196 bytes
// Name:    FUN_140108480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144faf870, FUN_1400bc0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140108480(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  
  *param_1 = &UNK_14619bb68;
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
  uVar3 = *(ushort *)(param_1 + 7);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[6] + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        uVar3 = *(ushort *)(param_1 + 7);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
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

