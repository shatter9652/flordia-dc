// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140165b70  size: 178 bytes
// Name:    FUN_140165b70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140165b70(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = func_0x000144d9ff70(0x149e2ecc0,param_1);
  fVar2 = (float)((uint)(float)uVar3 & 0x7fffff | 0x3f800000);
  auVar1 = vcmpss_avx(ZEXT816(0),ZEXT416((uint)((float)uVar3 + _DAT_145fc6fb0)),2);
  auVar4._4_4_ = _DAT_14615af00;
  auVar4._0_4_ = _DAT_14615af00;
  auVar4._8_4_ = _DAT_14615af00;
  auVar4._12_4_ = _DAT_14615af00;
  auVar1 = vblendvps_avx(auVar4,ZEXT416((uint)((fVar2 * (fVar2 * _DAT_14615b748 + _DAT_14615b710) +
                                               (float)(int)(((uint)(uVar3 >> 0x17) & 0x1ff) - 0x7f)
                                               + _DAT_14615b718) * _DAT_14615b71c)),auVar1);
  *param_2 = auVar1._0_4_;
  fVar2 = (float)func_0x000144d9ff70(0x149e2ecf8,param_1);
  *param_3 = (int)(longlong)fVar2;
  return;
}

