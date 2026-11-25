// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140023110  size: 141 bytes
// Name:    FUN_140023110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140025b20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140023110(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  func_0x000144e48580(auStack_88);
  FUN_140025b20(auStack_98,auStack_88,*(undefined8 *)(param_1 + 0x30));
  func_0x000144e46ba0(*(undefined8 *)(param_1 + 0x20),auStack_68);
  auVar1 = vshufps_avx(auStack_58,auStack_48,0x33);
  auVar1 = vshufps_avx(auStack_58,auVar1,0x2f);
  fVar2 = auVar1._0_4_ + _DAT_145fc6ed8;
  fVar3 = auVar1._4_4_ + _DAT_145fc6ed8;
  fVar4 = auVar1._8_4_ + _DAT_145fc6ed8;
  fVar5 = auVar1._12_4_ + _DAT_145fc6ed8;
  *param_2 = fStack_78 * (fVar2 + fVar2);
  param_2[1] = fStack_74 * (fVar3 + fVar3);
  param_2[2] = fStack_70 * (fVar4 + fVar4);
  param_2[3] = fStack_6c * (fVar5 + fVar5);
  return param_2;
}

