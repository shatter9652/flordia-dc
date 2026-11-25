// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401395a0  size: 48 bytes
// Name:    FUN_1401395a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401395e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401395a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  
  *param_1 = &UNK_146681c30;
  func_0x0001401395d0();
  FUN_1401395e0(param_1 + 0x46);
  *param_1 = &UNK_146681970;
  FUN_144ff4550();
  lVar1 = func_0x000144da31b0(param_1 + 0x32);
  if (lVar1 != 0) {
    FUN_1409519a0(lVar1,1,0x7585d45d,param_4,unaff_RSI);
  }
  if (param_1[0x31] != 0) {
    func_0x0001408925f0(param_1 + 0x31);
    param_1[0x31] = 0;
  }
  return;
}

