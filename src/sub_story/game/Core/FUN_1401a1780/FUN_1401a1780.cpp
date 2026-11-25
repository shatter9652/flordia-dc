// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1780  size: 133 bytes
// Name:    FUN_1401a1780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145068190, FUN_144ead9e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a1780(undefined8 param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = func_0x000144e62f40();
  lVar3 = func_0x0001453c6d40(*(undefined8 *)(lVar3 + 0x88));
  if (*(char *)(lVar3 + 0x30) == '\x03') {
    lVar4 = func_0x000144e59150(*(undefined4 *)(lVar3 + 0x9c));
    param_2[2] = *(byte *)(lVar4 + 0x2b) >> 3 & 1;
    cVar1 = FUN_144ead9e0(*(undefined4 *)(*(longlong *)(lVar3 + 0x20) + 0x264));
    if (cVar1 != '\0') {
      lVar4 = func_0x000144e59150(*(undefined4 *)(lVar3 + 0x9c));
      *param_2 = *(byte *)(lVar4 + 0x3c) & 1;
      bVar2 = FUN_145068190(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x9c));
      param_2[1] = bVar2;
      bVar2 = func_0x000144e238f0(*(undefined4 *)(lVar3 + 0x9c));
      param_2[3] = bVar2;
    }
  }
  return;
}

