// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017d2e0  size: 83 bytes
// Name:    FUN_14017d2e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017d2e0(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  *param_1 = &UNK_1463cb450;
  uVar1 = *(uint *)((longlong)param_1 + 0x24);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)((longlong)param_1 + lVar2 + 0x28) != 0) {
        func_0x000143091ed0();
      }
      lVar2 = lVar2 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar2);
  }
  param_1[4] = 8;
  *param_1 = &UNK_1463c9b40;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  param_1[1] = 0;
  return;
}

