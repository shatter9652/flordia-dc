// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181620  size: 242 bytes
// Name:    FUN_140181620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140181dc0, FUN_140181070
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140181620(longlong param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  bVar2 = (byte)((*(ushort *)(param_1 + 0x4a) & 0x40) >> 6) | (*(ushort *)(param_1 + 0x4a) & 3) == 1
  ;
  if (bVar2 == 0) {
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    *(undefined4 *)param_3[1] = 0;
    *param_3 = auVar4;
    return 0;
  }
  *(longlong *)(*param_3 + 8) = param_1 + 0x70;
  *(longlong *)*param_3 = param_1 + 0x70;
  *(undefined4 *)param_3[1] = 1;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  uVar3 = *(uint *)(param_1 + 0x4c) & 0x7e0000;
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    if (uVar3 == 0) {
      if (*(longlong *)(param_1 + 0x98) != 0) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 0x30) = 1;
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined2 *)(param_1 + 0x80) = 0;
      return bVar2;
    }
  }
  else if (uVar3 == 0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_3);
    goto LAB_1401816e7;
  }
  FUN_140181dc0(param_1 + 0x38,param_2,param_1);
  FUN_140181070(param_1,param_2,param_3);
  *(byte *)(param_1 + 0x4e) = *(byte *)(param_1 + 0x4e) & 0x81;
LAB_1401816e7:
  func_0x00014503f210(*(undefined8 *)*param_3,*(undefined8 *)(*param_3 + 8),
                      *(undefined2 *)(param_1 + 0x48));
  return bVar2;
}

