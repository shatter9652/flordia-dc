// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000b8b0  size: 135 bytes
// Name:    FUN_14000b8b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e23920, FUN_144dc4120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000b8b0(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)(param_3 + 0x80) = 1;
  iVar1 = *(int *)(param_2 + 0x9c);
  if (*(char *)(param_2 + 0x30) == '\x03') {
    cVar2 = FUN_144e23920(iVar1);
  }
  else {
    cVar2 = '\0';
  }
  if ((cVar2 == '\0') && (iVar1 != param_4)) {
    uVar3 = 2;
    uVar4 = 2;
  }
  else {
    uVar3 = 1;
    uVar4 = 1;
  }
  cVar2 = FUN_144dc4120(param_1 + 0x3be4,iVar1,uVar4);
  if (cVar2 == '\0') {
    func_0x000144dc42f0(param_1,param_2,uVar3,0,1);
  }
  return;
}

