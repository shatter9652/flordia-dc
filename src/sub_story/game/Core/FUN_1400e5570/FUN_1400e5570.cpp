// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e5570  size: 206 bytes
// Name:    FUN_1400e5570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e5570(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 param_3,
                  undefined1 (*param_4) [16],float param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  vsubps_avx(*param_2,*param_4);
  fVar1 = (float)func_0x0001400e5640();
  fVar2 = (float)func_0x0001400e5640();
  fVar2 = fVar1 * fVar1 - (-(param_5 * param_5) + fVar2);
  if (0.0 <= fVar2) {
    fVar2 = SQRT(fVar2);
    auVar4._0_4_ = (uint)(fVar2 + fVar1) ^ _DAT_145fc6f10;
    auVar4._4_4_ = _DAT_145fc6f10;
    auVar4._8_4_ = _DAT_145fc6f10;
    auVar4._12_4_ = _DAT_145fc6f10;
    auVar3 = vinsertps_avx(auVar4,ZEXT416((uint)(fVar2 - fVar1)),0x1c);
    auVar3 = vshufps_avx(auVar3,auVar4,4);
  }
  else {
    auVar3._4_4_ = _DAT_145fc6f48;
    auVar3._0_4_ = _DAT_145fc6f48;
    auVar3._8_4_ = _DAT_145fc6f48;
    auVar3._12_4_ = _DAT_145fc6f48;
  }
  *param_1 = auVar3;
  return;
}

