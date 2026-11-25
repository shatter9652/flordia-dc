// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140066200  size: 142 bytes
// Name:    FUN_140066200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140066200(ulonglong param_1)

{
  uint uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  longlong unaff_GS_OFFSET;
  bool bVar3;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar1 = (uint)param_1;
  if (((uVar1 != 0x23) && (uVar1 != 0x53)) && (0x11 < uVar1 - 0x41)) {
    if (uVar1 < 0x3d) {
      uVar2 = 0x100000000000fc02 >> (param_1 & 0x3f);
    }
    else {
      uVar2 = 0;
    }
  }
  if (((uVar1 - 0x16 < 7) || (uVar1 == 0x55)) || (uVar1 == 0x30)) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    bVar3 = *(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x9fc) == 0;
  }
  else {
    bVar3 = false;
  }
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 | bVar3) & 0xffffff01;
}

