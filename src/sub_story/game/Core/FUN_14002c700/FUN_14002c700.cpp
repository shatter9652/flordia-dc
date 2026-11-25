// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c700  size: 154 bytes
// Name:    FUN_14002c700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14002c700(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  float fVar3;
  float fStack_58;
  uint uStack_54;
  uint uStack_50;
  undefined1 auStack_48 [16];
  char cStack_38;
  
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 200))();
  if ((int)plVar2[5] == 0xd) {
    plVar2 = (longlong *)plVar2[8];
  }
  (**(code **)(*plVar2 + 0xa0))(plVar2,auStack_48,0);
  if (cStack_38 == '\0') {
    fVar3 = *(float *)(param_1 + 2);
    (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,&fStack_58);
    fStack_58 = fVar3 * _DAT_145fc6edc * fStack_58;
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x58))((longlong *)*param_1,&fStack_58);
    auVar1 = vmaxss_avx(ZEXT416((uint)fStack_58),ZEXT416(uStack_54));
    auVar1 = vmaxss_avx(auVar1,ZEXT416(uStack_50));
    fStack_58 = auVar1._0_4_ * *(float *)(param_1 + 2);
  }
  return fStack_58;
}

