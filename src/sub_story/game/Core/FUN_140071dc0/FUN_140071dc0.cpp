// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071dc0  size: 95 bytes
// Name:    FUN_140071dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140071dc0(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  iVar2 = (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,param_1);
  *(int *)(param_1 + 1) = iVar2;
  fVar3 = (float)func_0x000144ed4ef0();
  auVar4._4_4_ = _DAT_145fc6f08;
  auVar4._0_4_ = _DAT_145fc6f08;
  auVar4._8_4_ = _DAT_145fc6f08;
  auVar4._12_4_ = _DAT_145fc6f08;
  auVar5._4_4_ = _DAT_145fc6edc;
  auVar5._0_4_ = _DAT_145fc6edc;
  auVar5._8_4_ = _DAT_145fc6edc;
  auVar5._12_4_ = _DAT_145fc6edc;
  *(float *)(param_1 + 2) = fVar3;
  auVar1 = vcmpss_avx(ZEXT416((uint)(fVar3 * (float)iVar2)),ZEXT416(0) << 0x20,1);
  auVar1 = vblendvps_avx(auVar5,auVar4,auVar1);
  *(int *)(param_1 + 1) = (int)(auVar1._0_4_ + fVar3 * (float)iVar2);
  return;
}

