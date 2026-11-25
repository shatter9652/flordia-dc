// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e3ef0  size: 149 bytes
// Name:    FUN_1400e3ef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cfec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400e3ef0(undefined8 param_1,undefined4 param_2,float *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar3 = func_0x000145310cd0();
  lVar4 = func_0x000145028560(lVar3);
  uVar5 = (ulonglong)*(byte *)(lVar4 + 0xc0 + (ulonglong)DAT_14abc3ab0);
  if (((uVar5 != 0xff) && (lVar4 = *(longlong *)(lVar4 + 0x10 + uVar5 * 8), lVar4 != 0)) &&
     (cVar2 = FUN_1401cfec0(*(undefined8 *)(lVar4 + 0xa8),**(undefined8 **)(lVar4 + 0xb0),
                            *(undefined4 *)(*(undefined8 **)(lVar4 + 0xb0) + 6),0x3d7142ff,param_2,
                            param_3), cVar2 != '\0')) {
    auVar1 = vpermilps_avx(*(undefined1 (*) [16])(lVar3 + 0x50),0xff);
    fVar6 = auVar1._4_4_ + _DAT_145fc6ed8;
    fVar7 = auVar1._8_4_ + _DAT_145fc6ed8;
    fVar8 = auVar1._12_4_ + _DAT_145fc6ed8;
    *param_3 = (auVar1._0_4_ + _DAT_145fc6ed8) * *param_3;
    param_3[1] = fVar6 * param_3[1];
    param_3[2] = fVar7 * param_3[2];
    param_3[3] = fVar8 * param_3[3];
    return 1;
  }
  return 0;
}

