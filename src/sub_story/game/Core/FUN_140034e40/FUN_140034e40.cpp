// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140034e40  size: 76 bytes
// Name:    FUN_140034e40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14526d4f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_140034e40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lStack_30;
  uint uStack_24;
  char cStack_20;
  longlong lStack_18;
  
  lStack_18 = param_2;
  plVar1 = (longlong *)FUN_14526d4f0(param_1,&lStack_30);
  if (cStack_20 == '\x01') {
    plVar1 = (longlong *)(lStack_30 + 8 + (ulonglong)uStack_24 * 0x18);
    *(undefined4 *)(plVar1 + 1) = 5;
    *plVar1 = param_2;
    LOCK();
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
    UNLOCK();
    return plVar1;
  }
  return plVar1;
}

