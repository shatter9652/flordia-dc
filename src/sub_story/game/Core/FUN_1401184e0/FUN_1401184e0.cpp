// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401184e0  size: 127 bytes
// Name:    FUN_1401184e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1405e17f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401184e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar2 = func_0x00014517ef70(*(undefined8 *)(_DAT_14a95dee0 + 0x20bb0),
                              *(undefined4 *)(param_1 + 0x938));
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0xa0) != '\x01')) {
    uVar1 = *(undefined8 *)(param_1 + 0x668);
    *param_2 = *(undefined8 *)(param_1 + 0x660);
    param_2[1] = uVar1;
  }
  else {
    uStack_28 = *(undefined8 *)(lVar2 + 0x80);
    uStack_20 = *(undefined8 *)(lVar2 + 0x88);
    auVar3 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
    FUN_1405e17f0(*(undefined8 *)(lVar2 + 0x20),&uStack_28,param_2,auVar3._0_2_ | 0x10000);
  }
  return;
}

