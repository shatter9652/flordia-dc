// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a5ec0  size: 93 bytes
// Name:    FUN_1401a5ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401dfc40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a5ec0(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  uStack_38 = *(undefined8 *)(uVar3 + 0x70);
  uStack_30 = *(undefined8 *)(uVar3 + 0x78);
  func_0x000144dc3790(&uStack_38,&uStack_28);
  auVar2._8_8_ = uStack_20;
  auVar2._0_8_ = CONCAT44(uStack_24,uStack_28);
  uVar1 = vextractps_avx(auVar2,2);
  FUN_1401dfc40(_DAT_14ab72e08,param_1 + 0x28,CONCAT44(uStack_24,uStack_28),uStack_24,uVar1,0);
  return;
}

