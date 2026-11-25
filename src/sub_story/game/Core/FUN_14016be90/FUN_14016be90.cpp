// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016be90  size: 431 bytes
// Name:    FUN_14016be90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144cd7cb0, FUN_145099650
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016be90(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = func_0x000145099b30(param_3);
  if ((byte)(*(char *)(param_1 + 0x17) - 10U) < 0xfe) {
    uVar2 = func_0x000145099b30();
    uVar1 = uVar1 | uVar2;
  }
  if ((byte)(*(char *)(param_1 + 0x2f) - 10U) < 0xfe) {
    uVar2 = func_0x000145099b30();
    uVar1 = uVar1 | uVar2;
  }
  if ((byte)(*(char *)(param_1 + 0x47) - 10U) < 0xfe) {
    uVar2 = func_0x000145099b30();
    uVar1 = uVar1 | uVar2;
  }
  if ((byte)(*(char *)(param_1 + 0x5f) - 10U) < 0xfe) {
    uVar2 = func_0x000145099b30();
    uVar1 = uVar1 | uVar2;
  }
  if ((byte)(*(char *)(param_1 + 0x77) - 10U) < 0xfe) {
    uVar2 = func_0x000145099b30();
    uVar1 = uVar1 | uVar2;
  }
  if ((byte)(*(char *)(param_1 + 0x8f) - 10U) < 0xfe) {
    uVar2 = func_0x000145099b30();
    uVar1 = uVar1 | uVar2;
  }
  if ((byte)(*(char *)(param_1 + 0xa7) - 10U) < 0xfe) {
    uVar2 = func_0x000145099b30();
    uVar1 = uVar1 | uVar2;
  }
  if ((byte)(*(char *)(param_1 + 0xbf) - 10U) < 0xfe) {
    uVar2 = func_0x000145099b30();
    uVar1 = uVar1 | uVar2;
  }
  if ((byte)(*(char *)(param_1 + 0xd7) - 10U) < 0xfe) {
    uVar2 = func_0x000145099b30();
    uVar1 = uVar1 | uVar2;
  }
  if ((uVar1 & 1) != 0) {
    FUN_144cd7cb0(param_1,param_2,0,param_3,param_4,param_5);
    FUN_145099650(param_1,param_2,0,param_3,param_4,param_5);
  }
  if ((uVar1 & 2) != 0) {
    FUN_144cd7cb0(param_1,param_2,1,param_3,param_4,param_5);
    FUN_145099650(param_1,param_2,1,param_3,param_4,param_5);
  }
  if ((uVar1 & 4) != 0) {
    FUN_144cd7cb0(param_1,param_2,2,param_3,param_4,param_5);
    FUN_145099650(param_1,param_2,2,param_3,param_4,param_5);
  }
  return;
}

