// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a6e0  size: 117 bytes
// Name:    FUN_14019a6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019a6e0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &UNK_1461ae0e0;
  plVar1 = (longlong *)param_1[2];
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        iVar2 = iVar2 + -1;
        *plVar1 = 0;
        *(int *)((longlong)param_1 + 0xc) = iVar2;
      }
      plVar1 = plVar1 + 1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[2];
  }
  if (plVar1 != (longlong *)0x0 && param_1 + 3 != plVar1) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 1) = 4;
  param_1[2] = 0;
  return;
}

