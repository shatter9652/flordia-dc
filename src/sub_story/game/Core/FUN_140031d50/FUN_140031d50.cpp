// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140031d50  size: 222 bytes
// Name:    FUN_140031d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b6b80, FUN_144e258f0, FUN_144e33280
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140031d50(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar6 = (**(code **)(*param_1 + 0xa8))();
  lVar7 = FUN_144e258f0(param_1);
  if (((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x170), lVar7 != 0)) &&
     (cVar2 = func_0x000144eeb6b0(lVar7), cVar2 != '\0')) {
    lVar6 = *(longlong *)(lVar7 + 0x110);
  }
  if (lVar6 == 0) {
    *param_2 = 0;
    param_2[1] = 0xffffffff00000000;
  }
  else {
    plVar1 = (longlong *)param_1[4];
    uVar5 = FUN_1400b6b80(plVar1);
    if (plVar1 == (longlong *)0x0 || (char)param_1[6] != '\x02') {
      uVar8 = 0;
      uVar4 = 0;
    }
    else {
      sVar3 = (**(code **)(*plVar1 + 0x68))();
      if (sVar3 == 0) {
        uVar8 = 0;
        uVar4 = 0;
      }
      else {
        uVar8 = (**(code **)(*(longlong *)param_1[4] + 0x60))();
        uVar4 = (**(code **)(*(longlong *)param_1[4] + 0x68))();
      }
    }
    FUN_144e33280(lVar6,param_2,uVar5,uVar8,uVar4);
  }
  return;
}

