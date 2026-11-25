// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c140  size: 95 bytes
// Name:    FUN_14014c140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144a253e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014c140(longlong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  float fStack_c;
  
  fStack_c = 0.0;
  if (0.0 < *(float *)(*(longlong *)(param_1 + 0x48) + 0x2c)) {
    cVar2 = FUN_144a253e0(&fStack_c);
    if (cVar2 != '\0') {
      auVar1 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x108)),
                          ZEXT416((uint)(*(float *)(*(longlong *)(param_1 + 0x48) + 0x2c) + fStack_c
                                        )));
      *(int *)(param_1 + 0x108) = auVar1._0_4_;
    }
  }
  return;
}

