// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ff20  size: 103 bytes
// Name:    FUN_14006ff20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14006ff20(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  *param_2 = 0;
  lVar1 = func_0x000144e681d0(*(undefined4 *)(param_1 + 0x9c));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    *param_2 = lVar1 + 800;
    if (param_3 == (longlong *)0x0) {
      lVar3 = 0x324;
    }
    else {
      *param_3 = lVar1 + 0x340;
      uVar2 = CONCAT71((int7)((ulonglong)(lVar1 + 0x340) >> 8),1);
      if (*(int *)(*param_2 + 4) != 0) goto LAB_14006ff7e;
      lVar3 = 0x344;
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(int *)(lVar1 + lVar3) != 0);
  }
LAB_14006ff7e:
  return uVar2 & 0xffffffff;
}

