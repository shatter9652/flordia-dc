// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011bb20  size: 204 bytes
// Name:    FUN_14011bb20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145156580, FUN_14011bbf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011bb20(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_b0 [64];
  undefined4 uStack_70;
  undefined4 uStack_58;
  
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  cVar1 = func_0x0001452654d0(*(undefined8 *)(param_2 + 0x20));
  if (cVar1 == '\0') {
    return;
  }
  if ((*(int *)(param_1 + 0x4cc) == 0) && (_DAT_145fc6edc <= *(float *)(param_1 + 0x8f8))) {
    lVar2 = func_0x000144dd79f0(*(undefined4 *)(param_2 + 0x9c));
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x11e8), lVar2 != 0)) {
      func_0x0001451565d0(auStack_b0);
      cVar1 = FUN_145156580(*(undefined4 *)(lVar2 + 0x26f0),*(undefined1 *)(lVar2 + 0x2760),
                            uStack_70,uStack_58);
      if ((cVar1 != '\0') && ((*(char *)(lVar2 + 0x3fc) != '\0' || (3 < *(int *)(lVar2 + 0x3f8)))))
      goto LAB_14011bbdd;
    }
    cVar1 = FUN_14011bbf0(param_2);
    if (cVar1 == '\0') {
      return;
    }
  }
LAB_14011bbdd:
  *(undefined4 *)(param_1 + 0x4d4) = 1;
  return;
}

