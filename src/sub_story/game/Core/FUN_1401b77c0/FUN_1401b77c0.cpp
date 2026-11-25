// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b77c0  size: 146 bytes
// Name:    FUN_1401b77c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450b1cd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b77c0(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_RSI;
  
  if (param_2 == 0x15) {
    lVar1 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x40));
    if (lVar1 != 0) {
      puVar3 = (undefined8 *)FUN_145f0a370();
      FUN_1401b76f0(puVar3,0x15,lVar1);
      *puVar3 = &UNK_1465ea470;
      FUN_145078170(param_1,6,puVar3);
      return puVar3;
    }
  }
  else {
    if (param_2 == 0) {
      return puRam0000000149aafbe0;
    }
    if (param_2 != 1) {
      if (param_2 - 0x16U < 6) {
        lVar1 = FUN_1450b1cd0(*(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x40));
        if (lVar1 != 0) {
          puVar3 = (undefined8 *)FUN_145f0a370();
          FUN_1401b76f0(puVar3,param_2,lVar1);
          *puVar3 = &UNK_1465ea340;
          FUN_145078170(param_1,6,puVar3);
          return puVar3;
        }
      }
      return (undefined8 *)0x0;
    }
  }
  if (*(int *)((longlong)param_1 + 0x74) == 0) {
    uVar2 = FUN_1401bbf00();
    FUN_145078170(param_1,1,uVar2,param_4,unaff_RSI);
  }
  return *(undefined8 **)param_1[0xf];
}

