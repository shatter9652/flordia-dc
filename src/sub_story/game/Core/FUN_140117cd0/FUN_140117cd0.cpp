// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117cd0  size: 92 bytes
// Name:    FUN_140117cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140117d30, FUN_140cb6b30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140117cd0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  
  lVar1 = *param_1;
  if ((*(short *)(lVar1 + 0xc0) != 3) || (*(short *)(lVar1 + 0xc2) == 3)) {
    lVar2 = func_0x000144e59150(*(undefined4 *)(lVar1 + 0x9c));
    if ((*(byte *)(lVar2 + 0x10) & 2) == 0) {
      cVar3 = FUN_140117d30(lVar1,*(undefined1 *)((longlong)param_1 + 0x36));
      uVar4 = 2;
      if (cVar3 == '\0') {
        return;
      }
    }
    else {
      uVar4 = 3;
    }
    FUN_140cb6b30(param_1);
    *(undefined1 *)(param_1 + 1) = uVar4;
  }
  return;
}

