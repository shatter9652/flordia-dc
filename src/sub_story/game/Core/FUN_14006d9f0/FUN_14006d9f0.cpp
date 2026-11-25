// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d9f0  size: 199 bytes
// Name:    FUN_14006d9f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006dac0, FUN_1452b3070
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006d9f0(longlong param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined1 auStack_3e8 [16];
  undefined8 uStack_3d8;
  byte bStack_3d0;
  undefined1 auStack_3c8 [676];
  undefined4 uStack_124;
  undefined4 uStack_c8;
  undefined1 auStack_4e [28];
  byte bStack_32;
  
  iVar1 = func_0x000140301c00(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x20));
  if (iVar1 != -1) {
    FUN_1452b3070(auStack_3c8);
    bStack_32 = bStack_32 | 2;
    uStack_124 = 0;
    uStack_c8 = func_0x000141024b60(iVar1);
    if ((*(byte *)(param_1 + 0x680) & 10) == 0) {
      param_3 = param_3 ^ 1;
    }
    else {
      param_3 = func_0x0001453f62a0(*(undefined1 *)(param_1 + 0x120));
    }
    bStack_3d0 = param_3 | 0x74;
    auStack_3e8._0_12_ = ZEXT812(0);
    auStack_3e8._12_4_ = 0;
    uStack_3d8 = 0xfffcffff;
    FUN_14006dac0(param_1,param_2,*(undefined8 *)(param_1 + 0xb0),auStack_3e8,auStack_3c8);
    func_0x000144de1380(auStack_4e);
  }
  return;
}

