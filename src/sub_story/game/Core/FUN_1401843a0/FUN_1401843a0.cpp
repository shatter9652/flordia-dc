// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401843a0  size: 168 bytes
// Name:    FUN_1401843a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140181f60, FUN_140184450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401843a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plStack_30;
  undefined8 uStack_28;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    func_0x00014503e5b0();
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    FUN_140181f60(uVar1,param_1 + 0x18);
    func_0x00014503e5c0(uVar1);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      func_0x00014503e5c0();
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  FUN_140184450(&plStack_30,10,*(undefined8 *)(param_3 + 8));
  (**(code **)(*plStack_30 + 8))(plStack_30,uStack_28);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  *(longlong **)(param_1 + 0x30) = plStack_30;
  *(undefined8 *)(param_1 + 0x38) = uStack_28;
  (**(code **)(*plStack_30 + 0x10))();
  return 1;
}

