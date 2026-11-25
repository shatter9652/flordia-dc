// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117810  size: 101 bytes
// Name:    FUN_140117810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db5c90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140117810(undefined4 param_1,int param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  
  plVar4 = (longlong *)0x147593e60;
  *param_3 = 0;
  if (param_2 == 0) {
    plVar4 = (longlong *)0x147593e68;
  }
  lVar1 = *plVar4;
  if ((lVar1 == 0) || (iVar2 = FUN_144db5c90(lVar1,param_1), iVar2 < 0)) {
    uVar3 = 2;
    if (param_2 != 1) {
      return 0;
    }
  }
  else {
    fVar5 = (float)func_0x000144db5c70(lVar1,iVar2);
    uVar3 = CONCAT44(extraout_var,(int)fVar5);
  }
  *param_3 = (int)uVar3;
  return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
}

