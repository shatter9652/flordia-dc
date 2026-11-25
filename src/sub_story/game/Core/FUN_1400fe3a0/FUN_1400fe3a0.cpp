// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fe3a0  size: 191 bytes
// Name:    FUN_1400fe3a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400fe1a0, FUN_1400fe120, FUN_1400fe170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fe3a0(longlong *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_1400fe170();
  FUN_1400fe1a0(param_1,*(int *)((longlong)param_1 + 0x4c) * 3 + 8);
  if ((0xffff < *(int *)((longlong)param_1 + 0x34)) || (0xffff < (int)param_1[6])) {
    *(undefined8 *)(*param_1 + 0x28) = 0xffff00000029;
    (**(code **)*param_1)(param_1);
  }
  FUN_1400fe120(param_1,(int)param_1[9]);
  FUN_1400fe1a0(param_1,*(undefined4 *)((longlong)param_1 + 0x34));
  FUN_1400fe1a0(param_1,(int)param_1[6]);
  FUN_1400fe120(param_1,*(undefined4 *)((longlong)param_1 + 0x4c));
  if (0 < *(int *)((longlong)param_1 + 0x4c)) {
    puVar2 = (undefined4 *)param_1[0xb];
    iVar1 = 0;
    do {
      FUN_1400fe120(param_1,*puVar2);
      FUN_1400fe120(param_1,puVar2[2] * 0x10 + puVar2[3]);
      FUN_1400fe120(param_1,puVar2[4]);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x18;
    } while (iVar1 < *(int *)((longlong)param_1 + 0x4c));
  }
  return;
}

