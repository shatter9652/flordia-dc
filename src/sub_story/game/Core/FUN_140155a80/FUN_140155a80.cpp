// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140155a80  size: 134 bytes
// Name:    FUN_140155a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140155a80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  longlong lVar3;
  
  if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
    lVar2 = (ulonglong)*(uint *)(param_1 + 0x14) << 3;
    lVar3 = param_1 + 0x18;
    do {
      func_0x0001452a2430(lVar3);
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  uVar1 = *(undefined4 *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c);
  lVar3 = func_0x000144e59150(uVar1);
  if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x10) & 4) == 0)) {
    lVar3 = func_0x000144fdf400(uVar1);
    if (lVar3 != 0) {
      if (*(longlong *)(lVar3 + 0xc08) != 0) {
        func_0x000144d9c130(*(longlong *)(lVar3 + 0xc08),0x6da8,param_3,param_4,unaff_RSI);
        *(undefined8 *)(lVar3 + 0xc08) = 0;
        if (*(int *)(lVar3 + 0xcf0) != 0) {
          *(undefined4 *)(lVar3 + 0xcf0) = 0;
        }
      }
      return;
    }
  }
  return;
}

