// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086640  size: 243 bytes
// Name:    FUN_140086640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145077900, FUN_14528b500, FUN_140092ca0, FUN_144efb930, FUN_14505b390, FUN_14505db30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140086640(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  cVar2 = func_0x000144efb740(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98));
  if (cVar2 != '\0') {
    lVar1 = param_1 + 0x178;
    lVar4 = func_0x000144df8430(lVar1);
    lVar5 = FUN_140092ca0(*(undefined8 *)(lVar4 + 0x2a0),0x275822c4,0);
    if (lVar5 != 0) {
      lVar5 = FUN_145077900(lVar4,lVar5);
      if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x428) != 0)) {
        FUN_144efb930(param_1);
        FUN_14528b500(param_1 + 0x88,lVar1,param_2);
        plVar6 = (longlong *)
                 func_0x000145218550(*(undefined8 *)(param_1 + 0x28),
                                     *(undefined8 *)(param_1 + 0x428));
        uVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        uVar7 = FUN_14505db30(*(undefined4 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),uVar3)
        ;
        func_0x00014505b070(lVar4,param_3);
        FUN_14505b390(lVar1,uVar7,*(undefined4 *)(param_1 + 0x6bc),0,0);
      }
    }
  }
  return;
}

