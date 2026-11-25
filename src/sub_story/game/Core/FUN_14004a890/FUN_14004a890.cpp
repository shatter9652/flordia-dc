// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004a890  size: 111 bytes
// Name:    FUN_14004a890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14004a890(ulonglong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  
  if (_DAT_14ab56e38 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = func_0x000144dd7540(*(undefined4 *)(_DAT_14ab56e38 + 0x9c));
  }
  uVar4 = (ulonglong)*(uint *)((param_1 & 0xfffffffffffffff0) + 0x9c);
  lVar2 = func_0x000144db7b80(uVar4);
  uVar5 = (undefined7)(uVar4 >> 8);
  if ((lVar1 == 0) || (*(ulonglong *)(lVar1 + 0x898) != (param_1 & 0xfffffffffffffff0))) {
    uVar4 = CONCAT71(uVar5,1);
    if (lVar2 == 0) goto LAB_14004a8d7;
    uVar3 = 0x20;
  }
  else {
    uVar4 = CONCAT71(uVar5,1);
    if (lVar2 == 0) goto LAB_14004a8d7;
    uVar3 = 0x80;
  }
  uVar4 = (ulonglong)((*(uint *)(lVar2 + 0x10) & uVar3) != 0);
LAB_14004a8d7:
  return uVar4 & 0xffffffff;
}

