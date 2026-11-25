// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ebea0  size: 114 bytes
// Name:    FUN_1400ebea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400ebea0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar7;
  undefined1 auVar6 [64];
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  uVar5 = 0;
  auVar6 = ZEXT1264(ZEXT812(0));
  if (0 < iVar1) {
    uVar3 = 1;
    uVar7 = _DAT_145fc6f4c;
    do {
      uVar2 = uVar3 & 0xffff;
      fVar4 = (float)(*(uint *)(param_1[7] + (ulonglong)(uVar3 - 1 & 0xffff) * 8) & uVar7);
      auVar6 = ZEXT464((uint)(fVar4 + auVar6._0_4_));
      iVar1 = (**(code **)(*param_1 + 0x20))(fVar4);
      uVar5 = auVar6._0_8_;
      uVar3 = uVar3 + 1;
    } while ((int)uVar2 < iVar1);
  }
  return uVar5;
}

