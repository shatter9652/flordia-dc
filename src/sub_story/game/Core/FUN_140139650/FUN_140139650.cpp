// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140139650  size: 28 bytes
// Name:    FUN_140139650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff4550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001401396a3) */
/* WARNING: Removing unreachable block (ram,0x0001401396d2) */

ulonglong FUN_140139650(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined3 uVar3;
  undefined8 unaff_RBX;
  
  FUN_144ff4550();
  uVar3 = (undefined3)((uint)param_2 >> 8);
  lVar1 = func_0x000144da31b0(param_1 + 0x210);
  if (lVar1 != 0) {
    uVar2 = func_0x000144da31b0(param_1 + 0x210);
    FUN_1409519a0(uVar2,CONCAT31(uVar3,1),0x7585d45d);
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1) & 0xffffffff;
}

