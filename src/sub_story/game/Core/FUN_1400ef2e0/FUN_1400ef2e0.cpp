// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ef2e0  size: 123 bytes
// Name:    FUN_1400ef2e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453ef3a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ef2e0(ulonglong param_1,ulonglong param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  if ((~(uint)param_1 & 0x1ffff) != 0) {
    param_1 = param_1 & 0xffffffff;
    param_2 = param_2 & 0xffffffff;
    lVar4 = func_0x000144de7c70();
    fVar1 = _DAT_145fc6f70;
    if (lVar4 == 0) {
      *param_3 = _DAT_145fc6f70;
      param_3[1] = fVar1;
      param_3[2] = fVar1;
      param_3[3] = fVar1;
      return;
    }
  }
  FUN_1453ef3a0(param_1,param_2,&fStack_68);
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  *param_3 = fVar3 * fStack_48 + fVar2 * fStack_58 + fVar1 * fStack_68 + fStack_38;
  param_3[1] = fVar3 * fStack_44 + fVar2 * fStack_54 + fVar1 * fStack_64 + fStack_34;
  param_3[2] = fVar3 * fStack_40 + fVar2 * fStack_50 + fVar1 * fStack_60 + fStack_30;
  param_3[3] = fVar3 * fStack_3c + fVar2 * fStack_4c + fVar1 * fStack_5c + fStack_2c;
  return;
}

