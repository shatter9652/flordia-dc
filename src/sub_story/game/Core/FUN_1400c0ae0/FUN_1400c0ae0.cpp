// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c0ae0  size: 399 bytes
// Name:    FUN_1400c0ae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f559b0, FUN_144f55b90, FUN_1400c0c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400c0ae0(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
             undefined8 *param_6,undefined4 *param_7,float *param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  lVar1 = *(longlong *)(param_1 + 8);
  func_0x000144f55aa0(lVar1,&fStack_78,_DAT_145fc6ed8);
  *param_6 = CONCAT44(uStack_74,fStack_78);
  param_6[1] = uStack_70;
  fStack_78 = 0.0;
  fVar6 = (float)FUN_144f55b90(param_1,param_6,param_3,param_4,&fStack_78);
  fVar7 = (float)param_4;
  fVar8 = (float)param_3;
  *param_8 = *param_8 + fStack_78;
  FUN_144f559b0(*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 8);
  if (((param_2 & 2) != 0) &&
     (cVar3 = func_0x0001400c0890(uVar2,*(undefined4 *)(lVar1 + 0x1df2f8),
                                  *(undefined4 *)(param_6 + 1)), cVar3 == '\0')) {
    return 0;
  }
  *param_7 = 0;
  FUN_1400c0c70(uVar2,param_8);
  uVar5 = 0xfe;
  if ((int)(fVar6 * _DAT_146159f68) < 0xfe) {
    uVar5 = (int)(fVar6 * _DAT_146159f68);
  }
  uVar4 = 1;
  if (1 < (int)uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = ((int)(fVar7 * _DAT_146159f68) & 0xffU) * 0x10000 + 0x2000000 +
          (((int)(fVar8 * _DAT_146159f68) & 0xffU) << 8 | *param_5 & 0xf0000000 | uVar4);
  *param_5 = uVar5;
  return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
}

