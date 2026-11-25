// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140013790  size: 176 bytes
// Name:    FUN_140013790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bc0e0, FUN_144faf870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140013790(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &UNK_146675d38;
  puVar2 = (undefined8 *)param_1[4];
  uVar1 = *(uint *)((longlong)param_1 + 0x1c);
  if ((ulonglong)uVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)((longlong)puVar2 + lVar3 + 8) != 0) {
        func_0x000144ea36f0();
      }
      lVar3 = lVar3 + 0x50;
    } while ((ulonglong)uVar1 * 0x50 != lVar3);
    puVar2 = (undefined8 *)param_1[4];
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  if (puVar2 != (undefined8 *)0x0 && param_1 + 5 != puVar2) {
    func_0x000144d9c130(puVar2);
  }
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[4] = 0;
  *param_1 = &UNK_146209118;
  FUN_144faf870(param_1);
  if (param_2 != 0) {
    FUN_1400bc0e0(param_1);
  }
  return param_1;
}

