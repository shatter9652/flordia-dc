// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090890  size: 99 bytes
// Name:    FUN_140090890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_144f1a1a0, FUN_144e52aa0, FUN_144e529a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140090890(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStackX_1f [9];
  undefined8 uStack_18;
  
  uStack_18 = 0x14009089c;
  lVar2 = FUN_145647140();
  lVar2 = -lVar2;
  uVar1 = *(undefined4 *)(_DAT_149f13f20 + 0x1128);
  *(undefined8 *)((longlong)&uStack_18 + lVar2) = 0x1400908c4;
  FUN_144e52aa0(auStackX_1f + lVar2 + 1,uVar1,&stack0x00000050 + lVar2,0x8000);
  *(undefined8 *)((longlong)&uStack_18 + lVar2) = 0x1400908d3;
  func_0x000144e52970(auStackX_1f + lVar2,0);
  *(undefined8 *)((longlong)&uStack_18 + lVar2) = 0x1400908d8;
  FUN_144f1a1a0();
  *(undefined8 *)((longlong)&uStack_18 + lVar2) = 0x1400908df;
  func_0x000144e52950(auStackX_1f[lVar2]);
  *(undefined8 *)((longlong)&uStack_18 + lVar2) = 0x1400908e7;
  FUN_144e529a0(auStackX_1f + lVar2 + 1);
  return 1;
}

