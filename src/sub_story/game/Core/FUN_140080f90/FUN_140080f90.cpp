// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080f90  size: 172 bytes
// Name:    FUN_140080f90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145125510, FUN_144ef60c0, FUN_1452fb8a0, FUN_144ef6160, FUN_140081060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140080f90(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144f68b80(*(undefined4 *)(param_1 + 0x9c));
  if (lVar2 == 0) {
    return false;
  }
  cVar1 = FUN_144ef6160(param_2);
  if (cVar1 != '\0') {
    if ((*(byte *)(lVar2 + 0xcc8c) & 0x20) != 0) {
      return true;
    }
    cVar1 = FUN_140081060(*(undefined4 *)(lVar2 + 0x5590),*(undefined4 *)(param_1 + 0x9c));
    if (cVar1 != '\0') {
      return true;
    }
    lVar2 = FUN_1452fb8a0(*(undefined4 *)(lVar2 + 0x56f0),0);
    if (lVar2 != 0) {
      return true;
    }
  }
  cVar1 = FUN_144ef60c0(param_2);
  if ((cVar1 != '\0') && (cVar1 = FUN_145125510(param_2,param_1), cVar1 != '\0')) {
    return true;
  }
  lVar2 = FUN_1452a8db0(param_2,param_1,0);
  return lVar2 != 0;
}

