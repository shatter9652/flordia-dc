// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014b720  size: 110 bytes
// Name:    FUN_14014b720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014b720(uint *param_1,uint param_2)

{
  uint *puVar1;
  
  if (param_2 < 0x41) {
    puVar1 = param_1 + 4;
  }
  else {
    puVar1 = (uint *)func_0x000144d9c140(4,(ulonglong)param_2 << 2);
  }
  if ((ulonglong)param_1[1] != 0) {
    func_0x000145f40560(puVar1,*(undefined8 *)(param_1 + 2),(ulonglong)param_1[1] << 2);
  }
  if (*(uint **)(param_1 + 2) != (uint *)0x0 && param_1 + 4 != *(uint **)(param_1 + 2)) {
    func_0x000144d9c130();
  }
  *(uint **)(param_1 + 2) = puVar1;
  *param_1 = param_2;
  return;
}

