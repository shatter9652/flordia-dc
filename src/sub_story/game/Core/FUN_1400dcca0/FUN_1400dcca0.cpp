// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400dcca0  size: 124 bytes
// Name:    FUN_1400dcca0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141342d00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400dcca0(longlong param_1,longlong *param_2)

{
  longlong lStack_70;
  undefined8 uStack_68;
  float afStack_58 [7];
  float fStack_3c;
  
  (**(code **)(*param_2 + 0x60))(param_2,&lStack_70,0xaa328800);
  if (lStack_70 == 0) {
    (**(code **)(*param_2 + 0x88))(param_2,afStack_58);
    afStack_58[0] = _DAT_146170770 * fStack_3c + _DAT_146170770;
  }
  else {
    FUN_141342d00(lStack_70,uStack_68,afStack_58);
  }
  *(float *)(param_1 + 0x364) = afStack_58[0];
  return;
}

