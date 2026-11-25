// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049600  size: 135 bytes
// Name:    FUN_140049600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140049700, FUN_140049ac0, FUN_140049800, FUN_140049690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_140049600(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar7 [64];
  float fVar8;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  
  if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
    FUN_140049ac0(param_1,_DAT_14abbef4c);
    FUN_140049800(param_1);
    FUN_140049690(param_1);
    FUN_140049700(param_1);
    return 1;
  }
  lVar3 = func_0x000144eb3780(*(undefined4 *)
                               ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
  lVar3 = func_0x000144eb37f0(lVar3 + 0x40);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = func_0x000144da6540(*(undefined4 *)(lVar3 + 0x9c));
  }
  auVar7 = ZEXT464(_DAT_14abbef4c);
  uVar2 = FUN_14004a890(*(undefined8 *)(param_1 + 8),_DAT_14abbef4c,uVar4,param_4,unaff_XMM6_Qa,
                        unaff_XMM6_Qb,unaff_XMM7_Qa,unaff_XMM7_Qb);
  if ((ulonglong)*(uint *)(param_1 + 0xc4) == 0) {
    bVar5 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 200);
    bVar5 = 0;
    fVar8 = 0.0;
    lVar3 = lVar6 + (ulonglong)*(uint *)(param_1 + 0xc4) * 0x14;
    do {
      func_0x00014004a880(lVar6,uVar2);
      FUN_14004a900(lVar6,auVar7._0_8_,uVar4);
      pfVar1 = (float *)(lVar6 + 0xc);
      lVar6 = lVar6 + 0x14;
      bVar5 = bVar5 | fVar8 < *pfVar1;
    } while (lVar6 != lVar3);
  }
  return bVar5;
}

