// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a8a00  size: 188 bytes
// Name:    FUN_1401a8a00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a8c80, FUN_144e3bf50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401a8a00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined8 uStack_24;
  
  lVar1 = _DAT_14ab56e38;
  uVar3 = 0;
  if ((param_1 != 0) && (_DAT_14ab56e38 != 0)) {
    if ((*(longlong *)(param_1 + 0x28) != 0) &&
       (((lVar2 = func_0x0001450705c0(), lVar2 != 0 &&
         (fVar4 = (float)func_0x0001401a8ac0(*(undefined4 *)(lVar2 + 0x24)), 0.0 < fVar4)) &&
        (fVar4 < _DAT_145fc6ed8)))) {
      uStack_38 = *(undefined8 *)(param_1 + 0x70);
      uStack_30 = *(undefined8 *)(param_1 + 0x78);
      func_0x000144dc3790(&uStack_38,&uStack_28);
      uStack_48 = uStack_24;
      uStack_40 = 0;
      uVar3 = FUN_144e3bf50(uStack_28,&uStack_48,_DAT_145fc7020);
      return uVar3;
    }
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    uVar3 = FUN_1401a8c80(lVar1,param_1,0,0xffffffff,0,auVar5,0);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}

