// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051960  size: 141 bytes
// Name:    FUN_140051960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f8be40, FUN_140051a10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140051960(ulonglong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  cVar1 = FUN_144f8be40(*(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c),0,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_140051a10(param_1);
    if ((cVar1 != '\0') && (_DAT_14ab56e38 != 0)) {
      lVar2 = func_0x000144da6540(*(undefined4 *)(_DAT_14ab56e38 + 0x9c));
      if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x10b0), lVar2 != 0)) {
        uVar3 = func_0x0001452cd380(*(undefined8 *)(lVar2 + 0x4e0));
        if (uVar3 == 0) {
          uVar3 = func_0x0001400519f0(*(undefined8 *)(lVar2 + 0xf80));
        }
        uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),uVar3 == (param_1 & 0xfffffffffffffff0));
        goto LAB_1400519df;
      }
    }
    uVar3 = 0;
  }
LAB_1400519df:
  return uVar3 & 0xffffffff;
}

