// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083420  size: 53 bytes
// Name:    FUN_140083420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ef4ef0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140083420(longlong param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  cVar1 = FUN_144ef4ef0(*(undefined8 *)(param_1 + 8));
  if (cVar1 == '\0') {
    return;
  }
  uStack_1c = 0;
  uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  cVar1 = func_0x00014506d5a0(*(undefined4 *)(uVar2 + 0x9c));
  if (cVar1 != '\0') {
    uStack_18 = (**(code **)(*param_2 + 0x10))(param_2);
    FUN_140083a90(uVar2,&uStack_18,&uStack_1c);
  }
  return;
}

