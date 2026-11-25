// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164d50  size: 90 bytes
// Name:    FUN_140164d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140164d50(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  uStack_58 = *(undefined8 *)(uVar1 + 0x70);
  uStack_50 = *(undefined8 *)(uVar1 + 0x78);
  func_0x000144dc3790(&uStack_58,&uStack_48);
  uStack_38 = uStack_48;
  uStack_30 = uStack_40;
  func_0x00014509eac0(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  return;
}

