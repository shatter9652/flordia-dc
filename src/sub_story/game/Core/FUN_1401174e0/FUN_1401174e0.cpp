// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401174e0  size: 21 bytes
// Name:    FUN_1401174e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401174e0(void)

{
  short sVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = func_0x000144fc3bf0();
  lVar3 = FUN_140117550();
  func_0x0001410eb2d0(uVar2);
  sVar1 = func_0x000144ed9290(0);
  *(ushort *)(lVar3 + 0x10) = *(ushort *)(lVar3 + 0x10) & 0x7fff | sVar1 << 0xf;
  return lVar3;
}

