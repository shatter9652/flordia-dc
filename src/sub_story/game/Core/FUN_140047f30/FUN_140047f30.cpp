// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047f30  size: 115 bytes
// Name:    FUN_140047f30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140047fb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140047f30(float *param_1,longlong *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  (**(code **)(*param_2 + 0x90))(param_2,&fStack_48,0);
  if ((*(byte *)(param_3 + 0xce) & 0x40) == 0) {
    fVar1 = *(float *)(param_3 + 200);
  }
  else {
    fVar1 = 0.0;
  }
  fVar2 = fVar1;
  fVar3 = fVar1;
  fVar4 = fVar1;
  FUN_140047fb0(param_2,&fStack_38);
  *param_1 = fVar1 * fStack_48 + fStack_38;
  param_1[1] = fVar2 * fStack_44 + fStack_34;
  param_1[2] = fVar3 * fStack_40 + fStack_30;
  param_1[3] = fVar4 * fStack_3c + fStack_2c;
  return;
}

