// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140091540  size: 110 bytes
// Name:    FUN_140091540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140091540(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  puVar2 = (undefined8 *)func_0x000144d9c140(4,(ulonglong)param_2 << 2);
  uVar3 = (ulonglong)param_1[1];
  if (uVar3 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    if (uVar3 == 1) {
      *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
    }
    else if (param_1[1] == 2) {
      *puVar2 = *puVar1;
    }
    else {
      func_0x000145f40560(puVar2,puVar1,uVar3 << 2);
    }
  }
  if (*(longlong *)(param_1 + 2) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 **)(param_1 + 2) = puVar2;
  *param_1 = param_2;
  return;
}

