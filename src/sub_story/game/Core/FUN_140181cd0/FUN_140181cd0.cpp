// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181cd0  size: 136 bytes
// Name:    FUN_140181cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140181cd0(undefined8 *param_1,int param_2)

{
  *param_1 = &UNK_1466320a0;
  param_1[7] = &UNK_146634040;
  param_1[9] = &UNK_146634050;
  if (param_1[10] != 0) {
    func_0x00014503e5c0();
  }
  func_0x000145390160(param_1 + 7);
  *param_1 = &UNK_146633fb0;
  (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,param_1[2]);
  func_0x000145390160(param_1);
  if (param_2 != 0) {
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,param_1);
  }
  return param_1;
}

