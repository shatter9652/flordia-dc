// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015c9b0  size: 63 bytes
// Name:    FUN_14015c9b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140993770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015c9b0(longlong *param_1)

{
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    lStack_30 = 0x14015c9ea;
    (**(code **)(*param_1 + 0x20))();
  }
  if (param_1[6] == 0) {
    return;
  }
  lStack_30 = 0x14015c9d4;
  FUN_140993770();
  func_0x000144dd57c0(&lStack_30,0,&SUB_140004380,0,0);
  param_1[9] = lStack_30;
  param_1[10] = lStack_28;
  param_1[0xb] = lStack_20;
  param_1[0xc] = (longlong)&UNK_14095eb60;
  return;
}

