// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af710  size: 111 bytes
// Name:    FUN_1401af710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401af710(longlong *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  int *piVar2;
  int iStack_24;
  
  cVar1 = (**(code **)(*param_1 + 0x4b8))();
  *param_2 = 0;
  if (cVar1 == '\0') {
    piVar2 = (int *)func_0x0001450735b0(param_1[0x1e],param_1[0x3c]);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      *param_2 = *piVar2;
    }
    (**(code **)(*param_1 + 0x4b0))(param_1,&iStack_24,param_3);
    if (iStack_24 != 0) {
      *param_2 = iStack_24;
    }
  }
  return;
}

