// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140139790  size: 572 bytes
// Name:    FUN_140139790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145003f30, FUN_14013adf0, FUN_144e55d80, FUN_14013a8c0, FUN_144fa3ae0, FUN_1401399d0, FUN_14013aae0, FUN_145005030, FUN_14013a5d0, FUN_1451d17a0, FUN_14013a6f0, FUN_144ff4760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139790(uint param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong unaff_GS_OFFSET;
  undefined1 auVar5 [64];
  undefined1 auStack_7d8 [8];
  code *pcStack_7d0;
  undefined1 auStack_788 [1840];
  longlong lStack_58;
  
  func_0x000144ff4a70(auStack_7d8);
  pcStack_7d0 = FUN_145383100;
  uVar1 = func_0x0001450e52e0(*(undefined8 *)(_DAT_149c3b740 + 0x520),0x23);
  uVar3 = (ulonglong)param_1;
  lVar2 = (longlong)_DAT_14a210d14 * 0x548;
  FUN_14013a8c0();
  FUN_144ff4760(*(longlong *)(lVar2 + 0x1497e0068 + uVar3 * 0x18) + 0x5d0,0,1,uVar1,1,0xffffffff,
                auStack_7d8,0);
  auVar5 = ZEXT464(_DAT_145fc6ed8);
  FUN_144e55d80(_DAT_145fc6ed8);
  FUN_1401399d0();
  FUN_14013aae0();
  FUN_144ff4760(*(longlong *)(lVar2 + 0x1497e0068 + uVar3 * 0x18) + 0x600,3,1,uVar1,1,0xffffffff,
                auStack_7d8,0);
  FUN_144e55d80(auVar5._0_8_);
  FUN_14013a6f0();
  FUN_14013adf0();
  FUN_1451d17a0(auStack_788);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lStack_58 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12b8);
  if (lStack_58 != 0) {
    func_0x000145f40560(auStack_788,lStack_58,0x730);
  }
  FUN_145005030(0x3f);
  FUN_14013a5d0(0,0);
  lVar4 = 0;
  if (lStack_58 != 0) {
    func_0x000145f40560(lStack_58,auStack_788,0x730);
    FUN_144fa3ae0(lStack_58);
    lVar4 = lStack_58;
  }
  FUN_145003f30(lVar4,1);
  FUN_144ff4760(*(longlong *)(lVar2 + 0x1497e0068 + uVar3 * 0x18) + 0x660,2,1,uVar1,1,0xffffffff,
                auStack_7d8,0);
  FUN_144e55d80(_DAT_145fc6ed8);
  FUN_1401399d0();
  return;
}

