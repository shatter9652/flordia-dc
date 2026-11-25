// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a9f70  size: 76 bytes
// Name:    FUN_1401a9f70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b2c100
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a9f70(float *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  puVar1 = auStack_18;
  puVar2 = auStack_28;
  auStack_28._0_4_ = *param_1 + _DAT_14616aa70;
  auStack_28._4_4_ = param_1[1] + _UNK_14616aa74;
  auStack_28._8_4_ = param_1[2] + _UNK_14616aa78;
  auStack_28._12_4_ = param_1[3] + _UNK_14616aa7c;
  FUN_140b2c100();
                    /* WARNING: Could not recover jumptable at 0x0001401a9fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  atan2f(puVar1,puVar2);
  return;
}

