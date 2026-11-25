// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c02e0  size: 86 bytes
// Name:    FUN_1400c02e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c0370, FUN_1400c0340
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400c02e0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  float extraout_XMM0_Da;
  short asStack_1c [2];
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  lVar2 = func_0x000144db7b80(uVar1);
  if (((lVar2 == 0) || ((*(byte *)(lVar2 + 0x17) & 4) == 0)) &&
     (FUN_1400c0340(asStack_1c,uVar1), -1 < asStack_1c[0])) {
    FUN_1400c0370(param_1);
    return 0.0 < extraout_XMM0_Da;
  }
  return false;
}

