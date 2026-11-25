// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fbd40  size: 283 bytes
// Name:    FUN_1400fbd40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f838b0, FUN_140092ca0, FUN_14528b500, FUN_145077900, FUN_1400fbe60, FUN_144f99380, FUN_1416b5cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fbd40(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined4 param_4,
                  char param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_60 [56];
  
  FUN_144f838b0(*(undefined8 *)(param_1 + 0x990),0);
  if (param_5 != '\0') {
    FUN_1416b5cc0(param_1 + 0x8a0,0);
  }
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x9a0) + 0xe8))();
  if (cVar4 != '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x9a8);
    uVar2 = *param_3;
    uVar6 = func_0x000144df8430(*(undefined8 *)(param_1 + 0x990));
    func_0x000144f99350(auStack_60,uVar6,param_2,
                        CONCAT71((int7)((ulonglong)param_3 >> 8),uVar2) & 0xffffffff,param_4,param_5
                        ,uVar3);
    lVar1 = param_1 + 0x8a0;
    FUN_1400fbe60(lVar1,auStack_60);
    iVar5 = FUN_144f99380(lVar1);
    if (iVar5 != 0) {
      lVar7 = func_0x000144df8430(*(undefined8 *)(param_1 + 0x990));
      lVar8 = FUN_140092ca0(*(undefined8 *)(lVar7 + 0x2a0),0x275822c4,0);
      if (lVar8 != 0) {
        lVar7 = FUN_145077900(lVar7,lVar8);
        if (lVar7 != 0) {
          FUN_14528b500(lVar1,*(undefined8 *)(param_1 + 0x990),0);
        }
      }
    }
  }
  return;
}

