// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004cf50  size: 73 bytes
// Name:    FUN_14004cf50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004cf50(ulonglong *param_1,undefined4 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  
  lVar1 = func_0x000144d9f7c0(*(undefined4 *)(param_3 + 0x9c));
  if (lVar1 != 0) {
    FUN_145436af0();
    if (lVar1 == 0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 2) = param_2;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      *param_1 = *(ulonglong *)(lVar1 + 8) & 0xfffffffffffffff0;
      *(undefined4 *)(param_1 + 2) = param_2;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
      func_0x00014004d020(lVar1 + 0x67b0,param_2,param_1,param_4,unaff_RBX,unaff_RDI,unaff_RSI);
      if ((param_1[1] != 0) && (*(short *)(param_1[1] + 0x18) != 0)) {
        *(undefined4 *)((longlong)param_1 + 0x14) = 1;
      }
    }
    return;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  return;
}

