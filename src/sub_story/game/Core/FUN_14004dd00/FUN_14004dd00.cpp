// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004dd00  size: 134 bytes
// Name:    FUN_14004dd00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b715d0, FUN_1450a1500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004dd00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong unaff_GS_OFFSET;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_1450a1500();
  uVar1 = func_0x000144e6ea40(*(undefined4 *)(param_2 + 0x9c));
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar1 = func_0x000144e6e9f0(uVar1);
  uStack_11 = 0xfb;
  uStack_12 = 0xff;
  FUN_140b715d0(uVar1,0xc9590b48,&UNK_143c8dfa0,param_1,&uStack_11,&uStack_12);
  return;
}

