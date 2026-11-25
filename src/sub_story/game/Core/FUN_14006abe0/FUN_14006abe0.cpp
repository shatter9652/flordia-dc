// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006abe0  size: 140 bytes
// Name:    FUN_14006abe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e5b80, FUN_14509df70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006abe0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lStack_38;
  longlong *plStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  FUN_14509df70(param_1,0);
  lVar1 = *(longlong *)(param_1 + 0x100);
  cVar2 = func_0x000144f680e0(*(undefined4 *)(lVar1 + 0x9c));
  *(byte *)(param_1 + 0x10c) = *(byte *)(param_1 + 0x10c) & 0xbf | cVar2 << 6;
  if (((*(uint *)(param_1 + 0xa0) ^ *(uint *)(lVar1 + 0xa0)) & 0xfffcffff) != 0) {
    plStack_30 = &lStack_38;
    pcStack_28 = FUN_1435caee0;
    puStack_20 = &UNK_1401167b0;
    puStack_18 = &SUB_140004380;
    lStack_38 = param_1;
    FUN_1402e5b80(6);
  }
  return;
}

