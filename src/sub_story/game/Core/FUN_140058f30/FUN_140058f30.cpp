// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140058f30  size: 206 bytes
// Name:    FUN_140058f30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140058f30(uint *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  
  uVar2 = param_1[1];
  uVar3 = (ulonglong)uVar2;
  if (uVar2 < *param_1) {
    puVar4 = *(uint **)(param_1 + 2);
    param_1[1] = uVar2 + 1;
    puVar1 = puVar4 + uVar3 * 2;
  }
  else {
    if (uVar2 == *param_1) {
      uVar5 = 1;
      if (1 < uVar2) {
        uVar5 = uVar2 >> 1;
      }
      uVar5 = uVar5 + uVar2;
      if (uVar5 < 0x12d) {
        puVar4 = param_1 + 4;
      }
      else {
        puVar4 = (uint *)func_0x000144d9c140(4,(ulonglong)uVar5 << 3);
        uVar3 = (ulonglong)param_1[1];
      }
      if ((int)uVar3 != 0) {
        func_0x000145f40560(puVar4,*(undefined8 *)(param_1 + 2),uVar3 << 3);
      }
      if (*(uint **)(param_1 + 2) != (uint *)0x0 && param_1 + 4 != *(uint **)(param_1 + 2)) {
        func_0x000144d9c130();
      }
      *(uint **)(param_1 + 2) = puVar4;
      *param_1 = uVar5;
      uVar3 = (ulonglong)param_1[1];
    }
    else {
      puVar4 = *(uint **)(param_1 + 2);
    }
    puVar1 = puVar4 + uVar3 * 2;
    param_1[1] = (int)uVar3 + 1;
  }
  if (puVar4 != (uint *)0x0) {
    puVar1[1] = 0;
  }
  *puVar1 = param_2;
  return;
}

