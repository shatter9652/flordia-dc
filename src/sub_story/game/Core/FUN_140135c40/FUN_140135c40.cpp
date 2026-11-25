// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140135c40  size: 180 bytes
// Name:    FUN_140135c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df5f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140135c40(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_R9;
  float *in_stack_00000038;
  float *in_stack_00000040;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  FUN_144df5f40();
  fVar1 = in_R9[1];
  fVar2 = in_R9[2];
  fVar3 = in_R9[3];
  fVar4 = in_stack_00000040[1];
  fVar5 = in_stack_00000040[2];
  fVar6 = in_stack_00000040[3];
  *in_stack_00000038 = -(*in_R9 * *in_stack_00000040) + fStack_38;
  in_stack_00000038[1] = -(fVar1 * fVar4) + fStack_34;
  in_stack_00000038[2] = -(fVar2 * fVar5) + fStack_30;
  in_stack_00000038[3] = -(fVar3 * fVar6) + fStack_2c;
  return;
}

