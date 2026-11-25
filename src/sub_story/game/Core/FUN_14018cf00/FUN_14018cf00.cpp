// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018cf00  size: 70 bytes
// Name:    FUN_14018cf00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14018cf90, FUN_14018d090, FUN_14018cf50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018cf00(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uStack_14;
  
  (**(code **)(*param_1 + 0x128))();
  FUN_14018cf50(param_1);
  FUN_14018cf90(param_1);
  FUN_14018d090(param_1 + 0x26,param_1);
  (**(code **)(*param_1 + 0x10))(param_1);
  lVar2 = func_0x000144e7de50(param_1[0x16],0xffffffff);
  if (lVar2 != 0) {
    iVar1 = FUN_144e66270(*(undefined4 *)(lVar2 + 0xe0));
    if (iVar1 != 0) {
      FUN_145302dc0(param_1 + 0x54,param_1[0x16]);
      FUN_144dd3330(*(undefined4 *)(lVar2 + 0xe0),&uStack_14);
      uVar3 = func_0x000144ddb100(0);
      lVar2 = FUN_144dd3550(uVar3,uStack_14,0x92);
      param_1[0x4e] = lVar2;
    }
  }
  return;
}

