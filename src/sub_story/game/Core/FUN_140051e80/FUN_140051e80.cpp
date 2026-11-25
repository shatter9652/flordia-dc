// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051e80  size: 84 bytes
// Name:    FUN_140051e80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140051e80(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((short)param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar2 = (ulonglong)((param_2 & 0xffff) >> 2);
    if (*(longlong *)(lVar1 + 0x40 + uVar2 * 8) != 0) {
      *(undefined8 *)(lVar1 + 0x40 + uVar2 * 8) = 0;
      *(ulonglong *)(lVar1 + 0x20) = *(ulonglong *)(lVar1 + 0x20) | 1L << ((byte)param_2 & 3);
      func_0x000144e2f870(lVar1,param_2,0);
      *(undefined2 *)(lVar1 + 0x6200 + uVar2 * 2) = 0;
    }
  }
  return;
}

