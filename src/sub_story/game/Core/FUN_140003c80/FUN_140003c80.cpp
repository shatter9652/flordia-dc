// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003c80  size: 90 bytes
// Name:    FUN_140003c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140003c80(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uStack_24;
  
  lVar2 = _DAT_14ab7f638;
  if (*param_1 != 0) {
    cVar1 = *(char *)((longlong)param_1 + 9);
    func_0x00014013ff40(*param_1,&uStack_24);
    func_0x000140003ce0(*(undefined8 *)(lVar2 + 0x50),*(undefined4 *)(lVar2 + 0x58),uStack_24,
                        (int)cVar1);
    *param_1 = 0;
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0xffff;
  }
  return;
}

