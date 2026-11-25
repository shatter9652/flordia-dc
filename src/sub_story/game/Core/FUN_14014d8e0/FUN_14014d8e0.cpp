// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d8e0  size: 105 bytes
// Name:    FUN_14014d8e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014d830
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14014d8e0(longlong *param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x71);
  uVar2 = CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  if ((bVar1 & 0x10) == 0) {
    *(byte *)((longlong)param_1 + 0x71) = bVar1 & 0xcf | 0x10;
    uVar2 = param_1[7] | param_1[5];
    if (uVar2 == 0) {
      uVar2 = FUN_14014d830(param_1);
      if ((char)uVar2 == '\0') {
        lVar3 = func_0x000144da6540(*(undefined4 *)(*param_1 + 0x9c));
        uVar2 = 0;
        if (((lVar3 != 0) && (uVar2 = *(ulonglong *)(lVar3 + 0x10c0), uVar2 != 0)) &&
           (*(longlong *)(uVar2 + 0x1290) != 0)) {
          *(byte *)((longlong)param_1 + 0x71) = *(byte *)((longlong)param_1 + 0x71) | 0x20;
        }
      }
    }
  }
  uVar2 = CONCAT71((int7)(uVar2 >> 8),*(undefined1 *)((longlong)param_1 + 0x71)) &
          0xffffffffffffff20;
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 5);
}

