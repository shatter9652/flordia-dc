// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400375a0  size: 168 bytes
// Name:    FUN_1400375a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140037650, FUN_1451f4110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400375a0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 auStack_3f8 [16];
  undefined1 auStack_3e8 [16];
  undefined1 auStack_3d8 [192];
  undefined1 auStack_318 [768];
  
  uStack_408 = *param_5;
  uStack_400 = param_5[1];
  uStack_418 = *param_4;
  uStack_410 = param_4[1];
  uStack_428 = *param_3;
  uStack_420 = param_3[1];
  uStack_438 = *param_1;
  uStack_430 = param_1[1];
  uVar1 = FUN_140037650(&uStack_438,auStack_318,auStack_3d8,&uStack_428,&uStack_418,&uStack_408,
                        auStack_3e8,auStack_3f8);
  FUN_1451f4110(param_2,auStack_318,auStack_3d8,uVar1);
  return;
}

