// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016dc20  size: 111 bytes
// Name:    FUN_14016dc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490, FUN_14437fbb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016dc20(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  
  cVar2 = FUN_145028490(*param_1);
  if (cVar2 != '\0') {
    lVar1 = *param_1;
    puStack_38 = &uStack_39;
    puStack_30 = &UNK_1437cff80;
    puStack_28 = &SUB_140004380;
    puStack_20 = &SUB_140004380;
    uVar3 = func_0x0001452a14f0(*(undefined8 *)(lVar1 + 400));
    FUN_14437fbb0(lVar1,uVar3,param_2,&puStack_38);
  }
  return;
}

