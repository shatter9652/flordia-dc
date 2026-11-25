// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bae50  size: 161 bytes
// Name:    FUN_1401bae50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145077900, FUN_144f21750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401bae50(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar2 = FUN_144f21750(*(undefined8 *)(param_1 + 0x2a0),*param_3,param_3[1],param_2);
  if ((lVar2 != 0) && (lVar2 = FUN_145077900(param_1,lVar2), lVar2 != 0)) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = *(ulonglong *)(param_3 + 1);
    auVar4 = vshufps_avx(auVar4,auVar4,0xe1);
    uStack_48 = vmovlps_avx(auVar4);
    cVar1 = func_0x0001452c83d0(*(undefined1 *)(param_3 + 8));
    if (cVar1 == '\0') {
      uStack_28 = *(undefined8 *)(param_3 + 4);
      uStack_20 = *(undefined8 *)(param_3 + 6);
      func_0x000144e46d90(&uStack_28,auStack_68);
    }
    else {
      uStack_38 = *(undefined8 *)(param_3 + 4);
      uStack_30 = *(undefined8 *)(param_3 + 6);
      func_0x00014022bfc0(&uStack_38,auStack_58);
    }
    uVar3 = func_0x000145079380(lVar2,auStack_68);
    return uVar3;
  }
  return 0;
}

