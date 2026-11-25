// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140104a30  size: 113 bytes
// Name:    FUN_140104a30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc3fc0, FUN_14526c780
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140104a30(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144dc3fc0(*(undefined4 *)(*(longlong *)(param_1 + 0x1160) + 0x9c));
  if ((cVar1 == '\0') &&
     (((cVar1 = func_0x0001409d3e70(0x7d371dcc,1), cVar1 == '\0' ||
       (cVar1 = FUN_14526c780(*(undefined4 *)(*(longlong *)(param_1 + 0x1160) + 0x9c)),
       cVar1 == '\0')) && ((*(byte *)(param_1 + 0x1192) & 6) == 0)))) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x1170) >> 8),
                    0.0 < *(float *)(*(longlong *)(param_1 + 0x1170) + 0x168));
  }
  return 0;
}

