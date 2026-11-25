// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007b3d0  size: 79 bytes
// Name:    FUN_14007b3d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd3330, FUN_144dd3550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007b3d0(undefined8 param_1,undefined4 param_2)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  float *pfVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar2 = func_0x000144ddb100(4);
  FUN_144dd3330(param_2,&stack0xffffffffffffffdc);
  lVar3 = FUN_144dd3550(uVar2,uVar8,1);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 5) != '\0')) {
    pfVar4 = (float *)(lVar3 + 0xe);
    uVar6 = 0;
    uVar5 = _DAT_14ab7ef38;
    fVar7 = _DAT_14615afbc;
    do {
      uVar5 = (uVar5 & 0xffffffff) * 0x5cdcfaa7 + (uVar5 >> 0x20);
      fVar1 = *pfVar4 * fVar7;
      _DAT_14ab7ef38 = uVar5;
      func_0x000144eeebb0(param_1,pfVar4[-2],
                          (float)((uint)uVar5 & 0x7fffff) * fVar1 + (pfVar4[-1] - *pfVar4),fVar1,
                          unaff_XMM6_Qa,unaff_XMM6_Qb,unaff_RBX);
      uVar6 = uVar6 + 1;
      pfVar4 = pfVar4 + 3;
    } while (uVar6 < *(byte *)(lVar3 + 5));
  }
  return;
}

