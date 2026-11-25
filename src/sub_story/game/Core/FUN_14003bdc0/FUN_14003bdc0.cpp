// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003bdc0  size: 167 bytes
// Name:    FUN_14003bdc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da2d90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003bdc0(longlong param_1,undefined8 param_2,int *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  piVar3 = (int *)FUN_144da2d90(param_1,param_2,0x16,8);
  *(longlong *)(piVar3 + 4) = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
    UNLOCK();
    *(byte *)((longlong)piVar3 + 0xd) = *(byte *)((longlong)piVar3 + 0xd) | 0x10;
    *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 0x10;
  }
  iVar1 = *param_3;
  iVar2 = param_3[1];
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (iVar2 != 0 && iVar1 != 0) {
    *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 0x80;
  }
  uVar4 = func_0x000144da2ee0(piVar3);
  if (uVar4 != 0) {
    uVar5 = (*(longlong *)(param_1 + 0x10) + 0x651e95c4d06fbfb1U ^ uVar4) * -0x622015f714c7d297;
    uVar4 = (uVar5 >> 0x2f ^ uVar4 ^ uVar5) * -0x622015f714c7d297;
    *(ulonglong *)(param_1 + 0x10) = (uVar4 >> 0x2f ^ uVar4) * -0x622015f714c7d297;
  }
  return;
}

