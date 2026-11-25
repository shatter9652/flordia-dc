// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401459a0  size: 27 bytes
// Name:    FUN_1401459a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401459a0(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uStack_31;
  undefined1 *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = (undefined1 *)0x1401459ac;
  lVar1 = func_0x0001412ec210();
  puStack_30 = &uStack_31;
  puStack_28 = &UNK_140004870;
  puStack_20 = &SUB_140004380;
  puStack_18 = &SUB_140004380;
  lVar2 = FUN_14258d750(lVar1,&puStack_30,param_1);
  FUN_141c864b0();
  *(undefined1 *)(lVar2 + 0xe0) = 1;
  *(uint *)(lVar2 + 0xd8) = *(uint *)(lVar1 + 0x120) & 0xffff7fff;
  *(undefined2 *)(lVar1 + 0x478) = 0;
  return lVar2;
}

