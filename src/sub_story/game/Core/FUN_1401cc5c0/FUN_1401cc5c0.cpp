// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc5c0  size: 246 bytes
// Name:    FUN_1401cc5c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140074680, FUN_1401179a0, FUN_14080ce30, FUN_144eddcc0, FUN_140074630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1401cc5c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  
  if ((*(uint *)(param_2 + 1) & 0xc) == 4) {
    lVar1 = FUN_140074680(param_1);
    lVar2 = FUN_140074630(param_1);
    if (lVar2 != 0 && lVar1 != 0) {
      dVar3 = (double)FUN_1401179a0(lVar1 + 0x10);
      dVar4 = (double)FUN_1401179a0(lVar2);
      if (((dVar4 < dVar3) && (0.0 < dVar3)) && (0.0 < dVar4)) {
        lVar1 = 8;
        goto LAB_1401cc65f;
      }
    }
  }
  if ((*(uint *)(param_2 + 1) & 0x30) == 0x10) {
    lVar1 = FUN_14080ce30(param_1);
    lVar2 = FUN_144eddcc0(param_1);
    if (lVar2 != 0 && lVar1 != 0) {
      if (((*(double *)(lVar1 + 0x90) < *(double *)(lVar2 + 0x80)) &&
          (0.0 < *(double *)(lVar1 + 0x90))) && (lVar1 = 8, 0.0 < *(double *)(lVar2 + 0x80)))
      goto LAB_1401cc65f;
    }
  }
  lVar1 = 0xc;
LAB_1401cc65f:
  return *(undefined4 *)(param_2 + lVar1);
}

