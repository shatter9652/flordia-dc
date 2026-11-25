// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007bb30  size: 162 bytes
// Name:    FUN_14007bb30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007bb30(undefined8 param_1,longlong param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 5) != '\0')) {
    pfVar1 = (float *)(param_2 + 0xe);
    uVar3 = 0;
    uVar2 = _DAT_14ab7ef38;
    fVar4 = _DAT_14615afbc;
    do {
      uVar2 = (uVar2 & 0xffffffff) * 0x5cdcfaa7 + (uVar2 >> 0x20);
      _DAT_14ab7ef38 = uVar2;
      func_0x000144eeebb0(param_1,pfVar1[-2],
                          (float)((uint)uVar2 & 0x7fffff) * *pfVar1 * fVar4 + (pfVar1[-1] - *pfVar1)
                         );
      uVar3 = uVar3 + 1;
      pfVar1 = pfVar1 + 3;
    } while (uVar3 < *(byte *)(param_2 + 5));
  }
  return;
}

