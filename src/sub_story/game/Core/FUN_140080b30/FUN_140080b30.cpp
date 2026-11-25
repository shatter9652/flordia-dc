// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080b30  size: 86 bytes
// Name:    FUN_140080b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd7510, FUN_144ef3e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140080b30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144ef3e20();
  lVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0x30) == '\x02')) {
LAB_140080b6a:
    return CONCAT71(0x82626dc593d0a9,
                    *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x60) == -0x7d9d923a6c2f5669);
  }
  if (lVar1 != 0) {
    lVar2 = FUN_144dd7510(*(undefined4 *)(lVar1 + 0x9c));
    if (lVar2 != 0) goto LAB_140080b6a;
  }
  return 0;
}

