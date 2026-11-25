// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140134da0  size: 100 bytes
// Name:    FUN_140134da0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144feae70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140134da0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined2 uStack_a;
  
  uVar2 = (undefined1)((ushort)param_4 >> 8);
  uVar1 = FUN_144feae70();
  if (*param_1 == 0) {
    uStack_14 = 0xffffffff;
    uStack_10 = 0xffff;
    (*(code *)param_1[1])(uVar1,&uStack_14,1,CONCAT11(uVar2,1));
  }
  else {
    uStack_e = 0xffffffff;
    uStack_a = 0xffff;
    (*(code *)param_1[1])(*param_1,uVar1,&uStack_e,1,1);
  }
  return;
}

