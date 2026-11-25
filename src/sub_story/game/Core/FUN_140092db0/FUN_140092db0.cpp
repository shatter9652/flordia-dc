// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140092db0  size: 134 bytes
// Name:    FUN_140092db0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140092db0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (6 < param_2 - 0x15U) {
    switch(param_2) {
    case 0:
    case 1:
    case 2:
      break;
    default:
      bVar2 = false;
      break;
    case 4:
    case 0x10:
      iVar1 = func_0x000144db6ef0(*(undefined4 *)(param_1 + 0x20));
      bVar2 = iVar1 == 4;
      break;
    case 5:
    case 0xf:
      iVar1 = func_0x000144db6ef0(*(undefined4 *)(param_1 + 0x20));
      bVar2 = iVar1 == 2;
      break;
    case 6:
    case 0x14:
      iVar1 = func_0x000144db6ef0(*(undefined4 *)(param_1 + 0x20));
      bVar2 = iVar1 == 3;
      break;
    case 7:
    case 0x11:
      iVar1 = func_0x000144db6ef0(*(undefined4 *)(param_1 + 0x20));
      bVar2 = iVar1 == 5;
      break;
    case 8:
    case 0x12:
      iVar1 = func_0x000144db6ef0(*(undefined4 *)(param_1 + 0x20));
      bVar2 = iVar1 == 7;
      break;
    case 9:
    case 0x13:
      iVar1 = func_0x000144db6ef0(*(undefined4 *)(param_1 + 0x20));
      bVar2 = iVar1 == 9;
      break;
    case 10:
    case 0xe:
      bVar2 = param_3 == 0;
    }
  }
  return bVar2;
}

