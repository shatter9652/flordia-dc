// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc820  size: 67 bytes
// Name:    FUN_1401cc820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401cc820(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  plVar1 = *(longlong **)(param_1 + 8);
  cVar3 = func_0x000144db7900(plVar1,param_1 + 0x18);
  if (cVar3 != '\0') {
    lVar2 = *plVar1;
    iVar4 = (*(ushort *)(lVar2 + 0xc) & 0xfff) * *(int *)(lVar2 + 8);
    *(int *)(param_1 + 0x24) = iVar4;
    *(int *)(param_1 + 0x20) = iVar4;
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x18);
  return;
}

