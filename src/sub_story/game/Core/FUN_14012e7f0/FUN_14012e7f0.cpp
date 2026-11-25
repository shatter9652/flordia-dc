// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e7f0  size: 211 bytes
// Name:    FUN_14012e7f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012e8d0, FUN_145308e90, FUN_14012ea30, FUN_14012e9d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012e7f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [16];
  undefined4 auStack_58 [8];
  undefined1 auStack_38 [32];
  
  if ((((*(uint *)(param_1 + 0x10) != param_2) &&
       (lVar1 = *(longlong *)(param_1 + 0x48), lVar1 != 0)) && (*(longlong *)(lVar1 + 0x18) != 0))
     && (param_2 < *(uint *)(*(longlong *)(lVar1 + 0x18) + 0x74))) {
    *(uint *)(param_1 + 0x10) = param_2;
    FUN_14012e8d0(lVar1,*(undefined4 *)(param_1 + 200),auStack_68);
    FUN_14012ea30(auStack_38,auStack_68);
    FUN_145308e90(&uStack_6c,auStack_38);
    func_0x000144fde940(auStack_58);
    *(undefined4 *)(param_1 + 0x20) = auStack_58[0];
    cVar2 = func_0x0001451e7310(uStack_6c,*(undefined4 *)(param_1 + 0x1c));
    if (cVar2 == '\0') {
      FUN_14012e9d0(auStack_58,auStack_68);
      FUN_145308e90(&uStack_70,auStack_58);
      uStack_6c = uStack_70;
    }
    *(undefined4 *)(param_1 + 0x1c) = uStack_6c;
    func_0x00014012e770(param_1);
    func_0x00014012e910(*(undefined4 *)(param_1 + 200));
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  return;
}

