// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6c70  size: 85 bytes
// Name:    FUN_1401b6c70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b6ce0, FUN_145078ec0, FUN_1401b6da0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b6c70(undefined8 param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iStack_1c;
  
  FUN_145078ec0();
  func_0x0001401b6cd0(param_1,&iStack_1c);
  if (iStack_1c != 0) {
    *param_2 = iStack_1c;
    iVar2 = FUN_1401b6da0(param_1);
    param_2[1] = iVar2;
    cVar1 = func_0x000145078490(iVar2);
    if (cVar1 != '\0') {
      iVar2 = FUN_1401b6ce0(param_1,0);
      param_2[2] = iVar2;
    }
  }
  return;
}

