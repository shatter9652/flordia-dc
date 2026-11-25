// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001b3b0  size: 127 bytes
// Name:    FUN_14001b3b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14001b8c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001b3b0(float *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_60;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  func_0x00014001b430(param_2);
  fVar1 = _DAT_14615a2c4 * *param_3;
  fVar2 = _DAT_14615a2c4 * param_3[1];
  fVar3 = _DAT_14615a2c4 * param_3[2];
  fVar4 = _DAT_14615a2c4 * param_3[3];
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  uStack_30 = *(undefined8 *)(param_2 + 0x18);
  auStack_58 = ZEXT816(0) << 0x20;
  fStack_48 = fVar1;
  fStack_44 = fVar2;
  fStack_40 = fVar3;
  fStack_3c = fVar4;
  FUN_14001b8c0(auStack_58,&fStack_48,&uStack_38,auStack_5c,&fStack_60);
  *param_1 = fStack_60 * fVar1;
  param_1[1] = fStack_60 * fVar2;
  param_1[2] = fStack_60 * fVar3;
  param_1[3] = fStack_60 * fVar4;
  return;
}

