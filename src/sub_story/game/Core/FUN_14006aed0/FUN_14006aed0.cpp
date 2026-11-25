// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006aed0  size: 267 bytes
// Name:    FUN_14006aed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e53a50, FUN_144e53c30, FUN_144e547d0, FUN_1400560b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006aed0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uStack_ad0;
  undefined1 *puStack_ac8;
  undefined1 auStack_ac0 [960];
  undefined8 uStack_700;
  undefined1 *puStack_6f8;
  undefined1 auStack_6f0 [120];
  undefined8 uStack_678;
  undefined1 *puStack_670;
  undefined1 auStack_668 [512];
  undefined8 uStack_468;
  undefined1 *puStack_460;
  undefined1 auStack_458 [512];
  undefined8 uStack_258;
  undefined1 *puStack_250;
  undefined1 auStack_248 [512];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  LOCK();
  piVar1 = (int *)(param_2 + 0xf0);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 4) {
    uStack_40 = *(undefined8 *)(param_1 + 0xb8);
    puStack_ac8 = auStack_ac0;
    puStack_6f8 = auStack_6f0;
    uStack_ad0 = 0x78;
    uStack_700 = 0x78;
    puStack_670 = auStack_668;
    puStack_460 = auStack_458;
    uStack_678 = 0x40;
    puStack_250 = auStack_248;
    uStack_468 = 0x40;
    uStack_258 = 0x40;
    uStack_48 = 0;
    uStack_38 = 0;
    func_0x0001455ad980(&uStack_ad0);
    FUN_144e53c30(param_2,&uStack_ad0,1);
    FUN_1400560b0(&uStack_ad0,param_3,param_4,param_5);
    if (*(char *)(param_2 + 0xe0) != '\x03') {
      FUN_144e53a50(param_1);
    }
    FUN_144e547d0(&uStack_ad0);
  }
  return;
}

