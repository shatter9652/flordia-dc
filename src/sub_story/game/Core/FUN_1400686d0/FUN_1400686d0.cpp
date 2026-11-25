// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400686d0  size: 86 bytes
// Name:    FUN_1400686d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140068730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400686d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar2 = FUN_140068730(*(undefined8 *)(param_1 + 0x2a070));
  if (lVar2 != 0) {
    uStack_28 = *(undefined8 *)(lVar2 + 0x70);
    uStack_20 = *(undefined8 *)(lVar2 + 0x78);
    func_0x000144dc3790(&uStack_28,param_2);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x2a028);
  *param_2 = *(undefined8 *)(param_1 + 0x2a020);
  param_2[1] = uVar1;
  return;
}

