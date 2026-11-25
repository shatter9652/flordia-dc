// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007b260  size: 94 bytes
// Name:    FUN_14007b260
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007b2c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007b260(longlong param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    cVar3 = func_0x00014007b320(param_1);
    if (cVar3 != '\0') {
      if (*(char *)(param_1 + 0x2c) == '\x01') {
        uVar1 = *(undefined2 *)(param_1 + 0x2a);
        cVar3 = func_0x000144ddb170(uVar1);
        if (cVar3 != '\0') {
          uVar4 = func_0x000144da4590();
          func_0x000140035c50(uVar4,uVar1,0,0);
        }
        *(undefined1 *)(param_1 + 0x2c) = 0;
      }
      return;
    }
    if (*(char *)(param_1 + 0x2c) == '\0') {
      FUN_14007b2c0(param_1 + 0x2a);
    }
    uVar2 = *(uint *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x14) = uVar2 + 1;
    *(int *)(param_1 + 0x18 + (ulonglong)uVar2 * 4) = param_2;
  }
  return;
}

