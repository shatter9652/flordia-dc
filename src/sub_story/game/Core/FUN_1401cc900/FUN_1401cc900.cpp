// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc900  size: 286 bytes
// Name:    FUN_1401cc900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401cc900(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  
  lVar1 = *param_1;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(lVar1 + 0x10);
  param_1[0xe] = lVar1 + 8;
  plVar2 = *(longlong **)(lVar1 + 8);
  cVar3 = func_0x000144db7900(plVar2,param_1 + 6);
  if (cVar3 != '\0') {
    lVar1 = *plVar2;
    iVar4 = (*(ushort *)(lVar1 + 0xc) & 0xfff) * *(int *)(lVar1 + 8);
    *(int *)((longlong)param_1 + 0x3c) = iVar4;
    *(int *)(param_1 + 7) = iVar4;
  }
  lVar1 = *param_1;
  param_1[4] = param_1[6];
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(lVar1 + 0x20);
  param_1[0x19] = lVar1 + 0x18;
  plVar2 = *(longlong **)(lVar1 + 0x18);
  cVar3 = func_0x000144db7900(plVar2,param_1 + 0x11);
  if (cVar3 != '\0') {
    lVar1 = *plVar2;
    iVar4 = (*(ushort *)(lVar1 + 0xc) & 0xfff) * *(int *)(lVar1 + 8);
    *(int *)((longlong)param_1 + 0x94) = iVar4;
    *(int *)(param_1 + 0x12) = iVar4;
  }
  lVar1 = *param_1;
  param_1[0xf] = param_1[0x11];
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(lVar1 + 0x30);
  param_1[0x24] = lVar1 + 0x28;
  plVar2 = *(longlong **)(lVar1 + 0x28);
  cVar3 = func_0x000144db7900(plVar2,param_1 + 0x1c);
  if (cVar3 != '\0') {
    lVar1 = *plVar2;
    iVar4 = (*(ushort *)(lVar1 + 0xc) & 0xfff) * *(int *)(lVar1 + 8);
    *(int *)((longlong)param_1 + 0xec) = iVar4;
    *(int *)(param_1 + 0x1d) = iVar4;
  }
  param_1[0x1a] = param_1[0x1c];
  return;
}

