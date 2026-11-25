// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080c20  size: 139 bytes
// Name:    FUN_140080c20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14047e430, FUN_145226d60, FUN_144ef3e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140080c20(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  undefined4 uStack_20;
  
  lVar3 = FUN_144ef3e20(param_2);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x9c);
    cVar2 = func_0x000144e238f0(uVar1);
    if (((cVar2 != '\0') || (cVar2 = FUN_145226d60(uVar1), cVar2 != '\0')) &&
       (cVar2 = func_0x00014529e980(*(undefined4 *)(param_1 + 0x50)), cVar2 != '\0')) {
      uStack_38 = *(undefined8 *)(lVar3 + 0x70);
      uStack_30 = *(undefined8 *)(lVar3 + 0x78);
      func_0x000144dc3790(&uStack_38,auStack_28);
      uStack_48 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x70);
      uStack_40 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x78);
      cVar2 = FUN_14047e430(&uStack_48,uStack_20);
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}

