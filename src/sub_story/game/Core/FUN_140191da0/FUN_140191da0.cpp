// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140191da0  size: 105 bytes
// Name:    FUN_140191da0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140191da0(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float extraout_XMM0_Da;
  float fVar5;
  
  lVar3 = func_0x0001450572a0();
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0xec) != 0)) &&
     (iVar1 = *(int *)(lVar3 + 0xc4), iVar1 != 0)) {
    uVar2 = *(undefined8 *)(lVar3 + 200);
    fVar4 = (float)func_0x000144e686a0(iVar1,uVar2);
    fVar5 = 0.0;
    if (0.0 < fVar4) {
      func_0x000144e68600(iVar1,uVar2);
      if ((extraout_XMM0_Da == fVar5) && (!NAN(extraout_XMM0_Da) && !NAN(fVar5))) {
        return 1;
      }
    }
  }
  return 0;
}

