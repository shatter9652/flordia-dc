// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117510  size: 64 bytes
// Name:    FUN_140117510
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140117550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140117510(undefined8 param_1)

{
  short sVar1;
  longlong lVar2;
  
  lVar2 = FUN_140117550();
  func_0x0001410eb2d0(param_1);
  sVar1 = func_0x000144ed9290(0);
  *(ushort *)(lVar2 + 0x10) = *(ushort *)(lVar2 + 0x10) & 0x7fff | sVar1 << 0xf;
  return lVar2;
}

