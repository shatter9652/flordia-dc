// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401947f0  size: 127 bytes
// Name:    FUN_1401947f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd9c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401947f0(longlong param_1,int param_2,char param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (param_2 == -0x5986f0f2) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x350) + 0x160))(param_1 + 0x350);
    lVar2 = FUN_144dd9c70(uVar1,0xf48be66a);
    if (lVar2 != 0) {
      uVar3 = _DAT_145fc6ed8;
      if (*(char *)(lVar2 + 0xee) == '\0') {
        uVar3 = 0;
      }
      goto LAB_140194862;
    }
  }
  else if (param_2 == -0x1d2b5f7b) {
    uVar3 = _DAT_145fc6ed8;
    if (param_3 == '\x02') {
      uVar3 = 0;
    }
LAB_140194862:
    *param_4 = uVar3;
    return 1;
  }
  return 0;
}

