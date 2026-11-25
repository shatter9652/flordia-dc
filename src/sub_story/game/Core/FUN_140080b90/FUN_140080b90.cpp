// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080b90  size: 133 bytes
// Name:    FUN_140080b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145226d60, FUN_144dd7510, FUN_144f81f90, FUN_144ef3e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140080b90(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = FUN_144ef3e20(param_2);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x9c);
    cVar2 = func_0x000144e238f0(uVar1);
    if ((((cVar2 != '\0') || (cVar2 = FUN_145226d60(uVar1), cVar2 != '\0')) &&
        (lVar3 = FUN_144dd7510(uVar1), lVar3 == 0)) &&
       (uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0, uVar4 != 0)) {
      uVar1 = *(undefined4 *)(uVar4 + 0x9c);
      cVar2 = func_0x000144e72530(uVar1);
      if (((cVar2 == '\0') && (lVar3 = func_0x000144ef6110(uVar1), lVar3 != 0)) &&
         (lVar3 = FUN_144f81f90(*(undefined4 *)(lVar3 + 0x128)), lVar3 != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

