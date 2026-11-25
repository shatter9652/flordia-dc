// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140102500  size: 157 bytes
// Name:    FUN_140102500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144efb2c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140102500(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0xa28) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0xa28) + 0x94);
    if (((uVar1 >> 0x14 & 1) != 0) ||
       ((((((int)uVar1 < 0 && (_DAT_14ab56e38 != 0)) &&
          (lVar3 = func_0x000144efb270(*(undefined4 *)(_DAT_14ab56e38 + 0x9c)), lVar3 != 0)) &&
         (lVar3 = FUN_144efb2c0(*(undefined4 *)(lVar3 + 0x13c)), lVar3 != 0)) &&
        ((cVar2 = func_0x000140083270(*(undefined4 *)(lVar3 + 0x18c)), cVar2 != '\0' ||
         ((lVar3 = func_0x0001408e7d50(*(undefined4 *)(lVar3 + 0x184)), lVar3 != 0 &&
          (0 < *(int *)(lVar3 + 0x204))))))))) {
      return 1;
    }
  }
  uVar4 = 1;
  if ((-1 < *(int *)(param_1 + 0xd8)) &&
     (((((*(byte *)(param_1 + 0xe5) & 8) == 0 || (_DAT_14ab56e38 == 0)) ||
       ((lVar3 = func_0x000144efb270(*(undefined4 *)(_DAT_14ab56e38 + 0x9c)), lVar3 == 0 ||
        (lVar3 = FUN_144efb2c0(*(undefined4 *)(lVar3 + 0x13c)), lVar3 == 0)))) ||
      ((cVar2 = func_0x000140083270(*(undefined4 *)(lVar3 + 0x18c)), cVar2 == '\0' &&
       ((lVar3 = func_0x0001408e7d50(*(undefined4 *)(lVar3 + 0x184)), lVar3 == 0 ||
        (*(int *)(lVar3 + 0x204) < 1)))))))) {
    uVar4 = 0;
  }
  return uVar4;
}

