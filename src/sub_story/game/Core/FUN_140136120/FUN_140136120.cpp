// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140136120  size: 452 bytes
// Name:    FUN_140136120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140137030, FUN_140136670, FUN_1425cc130, FUN_140136120, FUN_140136e90, FUN_1425cbfc0, FUN_1401362f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140136120(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uStack_128;
  uint uStack_124;
  longlong lStack_120;
  
  if (0x1cdf < param_2 - param_1) {
    lVar2 = param_2;
    do {
      if ((longlong)param_3 < 1) {
        FUN_1425cbfc0(param_1,lVar2);
        for (lVar3 = lVar2 - param_1; 0xe0 < lVar3; lVar3 = lVar3 + -0xe0) {
          FUN_1425cc130(param_1,lVar2);
          lVar2 = lVar2 + -0xe0;
        }
        return;
      }
      FUN_1401362f0(&uStack_128,param_1,lVar2);
      lVar3 = lStack_120;
      param_2 = CONCAT44(uStack_124,uStack_128);
      param_3 = (param_3 >> 2) + (param_3 >> 1);
      if (param_2 - param_1 < lVar2 - lStack_120) {
        FUN_140136120(param_1,param_2,param_3);
        param_1 = lVar3;
        param_2 = lVar2;
      }
      else {
        FUN_140136120(lStack_120,lVar2,param_3);
      }
      lVar2 = param_2;
    } while (0x1cdf < param_2 - param_1);
  }
  if ((param_1 != param_2) && (lVar2 = param_1 + 0xe0, lVar2 != param_2)) {
    lVar4 = -0xe0;
    lVar3 = param_1;
    do {
      FUN_140137030(&uStack_128,lVar2);
      if (uStack_124 < *(uint *)(param_1 + 4)) {
        lVar5 = 0;
        do {
          FUN_140136670(lVar2 + lVar5,lVar3 + lVar5);
          lVar5 = lVar5 + -0xe0;
          lVar1 = param_1;
        } while (lVar4 != lVar5);
      }
      else {
        lVar5 = lVar3;
        lVar1 = lVar2;
        if (uStack_124 < *(uint *)(lVar2 + -0xdc)) {
          do {
            lVar1 = lVar5;
            FUN_140136670(lVar1 + 0xe0,lVar1);
            lVar5 = lVar1 + -0xe0;
          } while (uStack_124 < *(uint *)(lVar1 + -0xdc));
        }
      }
      FUN_140136670(lVar1,&uStack_128);
      FUN_140136e90(&uStack_128);
      lVar2 = lVar2 + 0xe0;
      lVar3 = lVar3 + 0xe0;
      lVar4 = lVar4 + -0xe0;
    } while (lVar2 != param_2);
  }
  return;
}

