// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184160  size: 66 bytes
// Name:    FUN_140184160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401850f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140184160(undefined8 *param_1)

{
  *param_1 = &UNK_1466314b0;
  if (param_1[5] != 0) {
    FUN_1401850f0(*(undefined8 *)(param_1[5] + 0x20),param_1);
  }
  if (param_1[6] != 0) {
    func_0x00014503e5c0();
  }
  *param_1 = &UNK_14674aa20;
  FUN_1401841f0();
  if (param_1[4] != 0) {
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310);
  }
  *param_1 = &UNK_146639ac0;
  return;
}

