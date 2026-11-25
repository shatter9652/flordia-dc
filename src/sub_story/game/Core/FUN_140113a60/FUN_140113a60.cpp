// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113a60  size: 69 bytes
// Name:    FUN_140113a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140263e20, FUN_140113ab0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000141186f42) */

undefined8 FUN_140113a60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_38 [16];
  undefined8 uStack_18;
  undefined4 uStack_14;
  
  cVar1 = FUN_140263e20();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_140113ab0(param_2,param_1,0);
    if (cVar1 == '\0') {
      cVar1 = FUN_144ef60c0();
      if ((((cVar1 != '\0') && (lVar3 = FUN_1452a8db0(param_1,param_2,0), lVar3 != 0)) &&
          ((*(byte *)(lVar3 + 0xaca8) & 1) != 0)) && (cVar1 = FUN_1451ad1b0(lVar3), cVar1 != '\0'))
      {
        lVar3 = func_0x000144ef6110(*(undefined4 *)(param_1 + 0x9c));
        FUN_1400f1800(*(undefined4 *)(lVar3 + 0x128),&uStack_14);
        lVar3 = FUN_1420691a0();
        if (lVar3 == 0) {
          uVar2 = 0;
        }
        else {
          auStack_38._0_12_ = ZEXT812(0);
          auStack_38._12_4_ = 0;
          uVar2 = FUN_140bf3f80(lVar3,uStack_14,0x14a9d6070,0x14a9d6070,0,auStack_38);
        }
        return uVar2;
      }
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

