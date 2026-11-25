// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014f6f0  size: 99 bytes
// Name:    FUN_14014f6f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14014f6f0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((param_1 != (longlong *)0x0) && ((DAT_14ab44324 & 2) != 0)) {
    if ((*(uint *)((longlong)param_1 + 0xb4) & 0x3e) == 0x18) {
      lVar2 = func_0x000144e23f30(*(undefined4 *)((longlong)param_1 + 0xcc));
      return *(short *)(lVar2 + 2) != 0;
    }
    cVar1 = (**(code **)(*param_1 + 0x50))();
    if ((cVar1 != '\0') && (lVar2 = func_0x000144ee58e0((short)param_1[0x1a]), lVar2 != 0)) {
      return *(char *)(lVar2 + 0xb7) != '\0';
    }
  }
  return false;
}

