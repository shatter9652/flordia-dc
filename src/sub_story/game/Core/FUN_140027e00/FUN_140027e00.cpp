// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140027e00  size: 125 bytes
// Name:    FUN_140027e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e47e90, FUN_145012860
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_140027e00(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  undefined *puStack_40;
  longlong lStack_38;
  
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar1 = *(undefined1 *)(param_1 + 0x34);
  uVar5 = FUN_144e47e90();
  FUN_145012860(&puStack_40,uVar5,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,
                uVar4);
  puStack_40 = &UNK_14669fee0;
  lVar2 = *(longlong *)(lStack_38 + 0x3b30);
  iVar3 = func_0x0001450141d0(&puStack_40);
  uVar4 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x80),
                              *(undefined4 *)(&UNK_14669fec0 + (longlong)iVar3 * 4));
  *param_2 = lStack_38;
  *(undefined4 *)(param_2 + 1) = uVar4;
  return param_2;
}

