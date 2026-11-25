// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140005420  size: 166 bytes
// Name:    FUN_140005420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140486630, FUN_14529ffb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140005420(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &UNK_1463cdb30;
  param_1[0x1a] = &UNK_1463cded0;
  param_1[0x28] = &UNK_146687ed0;
  func_0x000140487090(param_1 + 0x28);
  FUN_14529ffb0(param_1 + 0x1a);
  if ((*(short *)((longlong)param_1 + 0xaa) != 0) && (param_1[0x14] != 0)) {
    func_0x000144d9c130();
  }
  FUN_140486630(param_1 + 10);
  param_1[7] = &UNK_146688308;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,*(byte *)(param_1 + 9) ^ 1);
    param_1[8] = 0;
  }
  *param_1 = &UNK_14671af50;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[1] = 0;
  }
  return;
}

