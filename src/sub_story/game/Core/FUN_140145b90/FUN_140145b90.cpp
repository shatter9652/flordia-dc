// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140145b90  size: 127 bytes
// Name:    FUN_140145b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140145b90(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = func_0x000144d9c140(0x10,(ulonglong)param_2 * 0x220);
    lVar3 = 0;
    do {
      if (lVar2 + lVar3 != 0) {
        func_0x000145f40580(lVar2 + lVar3,0,0x220);
      }
      lVar3 = lVar3 + 0x220;
    } while ((ulonglong)param_2 * 0x220 - lVar3 != 0);
  }
  if (lVar1 != 0) {
    func_0x000144d9c130(lVar1);
  }
  *(short *)((longlong)param_1 + 10) = (short)param_2;
  *param_1 = lVar2;
  return;
}

