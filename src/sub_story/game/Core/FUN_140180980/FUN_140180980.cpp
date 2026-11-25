// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140180980  size: 118 bytes
// Name:    FUN_140180980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140180a00, FUN_140180a30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140180980(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  char extraout_AL;
  undefined8 uVar3;
  undefined7 uVar4;
  undefined7 extraout_var;
  ulonglong uVar5;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  uVar5 = uVar1 & 0xfffffffffffffff0;
  if ((((*(int *)(param_1 + 0x6f0) == 2) || (cVar2 = FUN_140180a00(uVar1), cVar2 == '\0')) ||
      (cVar2 = func_0x000144f16df0(*(undefined4 *)(uVar5 + 0x9c)), cVar2 != '\0')) &&
     ((uVar3 = FUN_140180a30(uVar1,*(undefined4 *)(param_1 + 0x688)), (char)uVar3 == '\0' &&
      ((uVar4 = (undefined7)((ulonglong)uVar3 >> 8), 1 < (byte)(*(char *)(uVar5 + 0xfa) - 7U) ||
       (func_0x000140424630(*(undefined4 *)(uVar5 + 0x9c)), uVar4 = extraout_var,
       extraout_AL != '\0')))))) {
    uVar3 = CONCAT71(uVar4,1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

