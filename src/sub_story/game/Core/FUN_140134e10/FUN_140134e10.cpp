// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140134e10  size: 165 bytes
// Name:    FUN_140134e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140134f30, FUN_144e6cf90, FUN_140134ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140134e10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined4 uStack_18;
  undefined2 uStack_14;
  
  FUN_140134ec0(*(undefined8 *)(*(longlong *)(param_1 + 0x295e0) + 0x28),*param_2,param_2[1]);
  lVar1 = *(longlong *)(param_1 + 0x29550);
  uVar2 = FUN_144e6cf90(lVar1);
  lVar1 = *(longlong *)(lVar1 + 0x40 + (ulonglong)uVar2 * 8);
  puVar3 = (undefined4 *)(lVar1 + 0x12);
  if (*param_2 == 0) {
    uStack_1c = *(undefined2 *)(lVar1 + 0x16);
    uStack_20 = *puVar3;
    (*(code *)param_2[1])
              (*(undefined8 *)(lVar1 + 8),&uStack_20,1,CONCAT71((int7)((ulonglong)puVar3 >> 8),1));
  }
  else {
    uStack_14 = *(undefined2 *)(lVar1 + 0x16);
    uStack_18 = *puVar3;
    (*(code *)param_2[1])();
  }
  FUN_140134f30(param_2);
  return;
}

