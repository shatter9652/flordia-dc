// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401298b0  size: 171 bytes
// Name:    FUN_1401298b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401298b0(longlong *param_1,char param_2)

{
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x1f0))(param_1,_DAT_14a92d5b8,5);
    (**(code **)(*param_1 + 0x1f0))(param_1,_DAT_14a92d598,5);
    (**(code **)(*param_1 + 0x1f0))(param_1,_DAT_14a92d588,5);
  }
  (**(code **)(*param_1 + 0x90))(param_1,_DAT_14a92d628,_DAT_14a92d5b8);
  (**(code **)(*param_1 + 0x90))(param_1,_DAT_14a92d624,_DAT_14a92d598);
                    /* WARNING: Could not recover jumptable at 0x000140129958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1,_DAT_14a92d622,_DAT_14a92d588);
  return;
}

