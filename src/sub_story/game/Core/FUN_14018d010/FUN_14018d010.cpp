// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018d010  size: 128 bytes
// Name:    FUN_14018d010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd3550, FUN_145302dc0, FUN_144dd3330, FUN_144e66270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018d010(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uStack_14;
  
  lVar3 = func_0x000144e7de50(*(undefined8 *)(param_1 + 0xb0),0xffffffff);
  if (lVar3 != 0) {
    iVar2 = FUN_144e66270(*(undefined4 *)(lVar3 + 0xe0));
    if (iVar2 != 0) {
      FUN_145302dc0(param_1 + 0x2a0,*(undefined8 *)(param_1 + 0xb0));
      FUN_144dd3330(*(undefined4 *)(lVar3 + 0xe0),&uStack_14);
      uVar1 = func_0x000144ddb100(0);
      uVar1 = FUN_144dd3550(uVar1,uStack_14,0x92);
      *(undefined8 *)(param_1 + 0x270) = uVar1;
    }
  }
  return;
}

