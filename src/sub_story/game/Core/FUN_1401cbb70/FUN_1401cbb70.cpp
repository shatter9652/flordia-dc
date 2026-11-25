// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cbb70  size: 167 bytes
// Name:    FUN_1401cbb70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401cbb70(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 auVar4 [64];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  
  *(undefined8 *)(param_2 + 0x208) = 5;
  if (*(char *)(param_1 + 5) == '\0') {
    uVar2 = param_1 + 6;
  }
  else {
    uVar2 = param_1 + 8;
    uVar3 = 0;
    auVar4 = ZEXT1264(ZEXT812(0));
    do {
      iVar1 = *(int *)(param_2 + 0x200);
      *(int *)(param_2 + 0x200) = iVar1 + 1;
      *(ulonglong *)(param_2 + (longlong)iVar1 * 8) = uVar2;
      auStack_58 = auVar4._0_16_;
      func_0x0001401cbc20(uVar2,auStack_68);
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 3 + auStack_58._8_8_ & 0xfffffffffffffffc;
    } while (uVar3 < *(byte *)(param_1 + 5));
  }
  *(ulonglong *)(param_2 + 0x210) = uVar2 - param_1;
  return;
}

