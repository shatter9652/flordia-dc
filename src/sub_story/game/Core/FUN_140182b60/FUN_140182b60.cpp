// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182b60  size: 258 bytes
// Name:    FUN_140182b60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140182d90, FUN_140182c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140182b60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  undefined4 uStack_1c;
  
  plStack_38 = (longlong *)0x0;
  FUN_140182d90(&plStack_30,param_1,*(undefined8 *)(param_2 + 0x30),*(undefined2 *)(param_2 + 0x4a),
                param_3,param_4,param_5,&plStack_38,param_7);
  uVar3 = (undefined4)((ulonglong)param_3 >> 0x20);
  uStack_1c = 0x47;
  lVar1 = (**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_2,0xe0);
  plVar2 = plStack_38;
  if (lVar1 != 0) {
    FUN_140182c70(lVar1,param_6,&plStack_30,param_4,CONCAT44(uVar3,param_5));
    plVar2 = plStack_38;
    if (plStack_38 != (longlong *)0x0) {
      (**(code **)(*plStack_38 + 8))(plStack_38);
    }
    if (*(longlong **)(lVar1 + 200) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar1 + 200) + 0x10))();
    }
    *(longlong **)(lVar1 + 200) = plVar2;
  }
  (**(code **)(*plStack_30 + 0x10))(plStack_30,uStack_28);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return lVar1;
}

