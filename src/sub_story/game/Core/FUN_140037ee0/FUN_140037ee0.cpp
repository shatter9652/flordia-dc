// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037ee0  size: 79 bytes
// Name:    FUN_140037ee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140037ee0(uint param_1,longlong param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = 0;
    do {
      cVar1 = func_0x000144ff66e0(*(undefined1 *)(param_2 + 0x24 + lVar2),
                                  *(undefined1 *)(param_2 + 0x60 + lVar2));
      if ((cVar1 == '\0') && (*(int *)(param_2 + 8 + lVar2) == param_3)) {
        return 1;
      }
      lVar2 = lVar2 + 0x68;
    } while ((ulonglong)param_1 * 0x68 - lVar2 != 0);
  }
  return 0;
}

