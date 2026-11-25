// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140067990  size: 123 bytes
// Name:    FUN_140067990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14522e1f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140067990(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(longlong *)(param_2 + 8) != 0) {
    (**(code **)(*param_4 + 0x20))(param_4,&uStack_48);
    uVar1 = *(undefined8 *)(param_2 + 8);
    uStack_38 = uStack_48;
    uStack_30 = uStack_40;
    iVar3 = func_0x00014523cda0(uVar1);
    if (iVar3 != 0) {
      uStack_28 = uStack_48;
      uStack_20 = uStack_40;
      cVar2 = FUN_14522e1f0(uVar1,&uStack_28,2 - (uint)*(byte *)(param_1 + 0x40),iVar3);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

