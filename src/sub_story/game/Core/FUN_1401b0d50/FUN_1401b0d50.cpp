// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b0d50  size: 95 bytes
// Name:    FUN_1401b0d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b13b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401b0d50(undefined8 param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  uint uStack_1c;
  undefined7 uVar3;
  
  FUN_1401b13b0(param_1,&uStack_1c);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if ((uStack_1c & 0x1f01140) == 0) {
    iVar1 = func_0x0001401b0db0(param_1,4);
    if (iVar1 == 0) {
      iVar1 = func_0x0001401b0db0(param_1,5);
      if (iVar1 == 0) {
        iVar1 = func_0x0001401b0db0(param_1,6);
        uVar2 = CONCAT71(uVar3,iVar1 != 0);
      }
    }
  }
  return uVar2 & 0xffffffff;
}

