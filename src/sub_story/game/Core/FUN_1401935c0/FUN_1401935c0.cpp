// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401935c0  size: 197 bytes
// Name:    FUN_1401935c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455dcc0c, FUN_1455db8cc, FUN_1455db934
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1401935c0(uint param_1)

{
  uint *puVar1;
  uint *puVar2;
  longlong unaff_GS_OFFSET;
  
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_148fef1c8) && (FUN_1455db8cc(&DAT_148fef1c8), _DAT_148fef1c8 == -1)) {
    _DAT_148fef1b8 = ZEXT812(0);
    register0x0000120c = 0;
    FUN_1455dcc0c(FUN_14388ac60);
    FUN_1455db934(&DAT_148fef1c8);
  }
  if (_DAT_148fef1f0 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)0x0;
    puVar1 = *(uint **)(_DAT_148fef1e8 + ((ulonglong)param_1 % (ulonglong)_DAT_148fef1f0) * 8);
    if (puVar1 != (uint *)0x0) {
      puVar2 = (uint *)0x0;
      do {
        if (*puVar1 == param_1) {
          puVar2 = puVar1 + 2;
          break;
        }
        puVar1 = *(uint **)(puVar1 + 6);
      } while (puVar1 != (uint *)0x0);
    }
  }
  puVar1 = (uint *)&DAT_148fef1b8;
  if (puVar2 != (uint *)0x0) {
    puVar1 = puVar2;
  }
  return puVar1;
}

