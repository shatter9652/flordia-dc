// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192c80  size: 259 bytes
// Name:    FUN_140192c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404a72c0, FUN_1452b3070, FUN_140f29340
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140192c80(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_3d8 [744];
  undefined8 uStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_d8;
  char cStack_5f;
  undefined1 auStack_5e [22];
  undefined1 uStack_48;
  undefined1 uStack_44;
  byte bStack_42;
  
  lVar1 = func_0x000144da31b0(param_4);
  if (lVar1 == 0) {
    FUN_1452b3070(auStack_3d8);
    uStack_e0 = param_6;
    if (param_5 == '\0') {
      uStack_f0 = 0;
    }
    else {
      uStack_48 = 0;
    }
    bStack_42 = bStack_42 | 2;
    uStack_44 = *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x10);
    cStack_5f = (*(byte *)(*(longlong *)(param_1 + 0x40) + 0x120) & 1) * '\x02';
    uVar2 = func_0x000144da3240();
    FUN_140f29340(auStack_3d8,0xdaccc972,uVar2,1,0x3f800000);
    uStack_d8 = param_2;
    FUN_1404a72c0(param_1,param_3,param_4,auStack_3d8,1);
    func_0x000144de1380(auStack_5e);
  }
  return;
}

