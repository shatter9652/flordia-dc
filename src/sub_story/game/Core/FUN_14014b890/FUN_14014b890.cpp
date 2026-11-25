// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014b890  size: 109 bytes
// Name:    FUN_14014b890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14014b890(longlong param_1,longlong *param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = 0xffffffff;
  lVar2 = 0;
  if (param_3 < 0x22) {
    if ((0x21100100UL >> ((ulonglong)param_3 & 0x3f) & 1) == 0) {
      if ((0x210800040U >> ((ulonglong)param_3 & 0x3f) & 1) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x20);
        uVar1 = func_0x00014001bd40(*(undefined8 *)
                                     (*(longlong *)(*(longlong *)(lVar2 + 0x3b30) + 0x10) + 0x80),
                                    0x8133de19);
      }
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x20);
      uVar1 = 0;
    }
  }
  *param_2 = lVar2;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}

