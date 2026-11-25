// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bad30  size: 171 bytes
// Name:    FUN_1400bad30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1427966b0, FUN_1435e0000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400bad30(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 auStack_50 [56];
  
  lVar2 = FUN_1435e0000(*(undefined4 *)(param_1 + 0xc));
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x1c);
    if ((ulonglong)uVar1 != 0) {
      puStack_70 = &UNK_14655b7c0;
      uStack_68 = 0;
      uStack_60 = *(undefined8 *)(param_1 + 0xc);
      uStack_58 = 7;
      if (7 < uVar1) {
        uStack_58 = uVar1;
      }
      func_0x000145f40560(auStack_50,param_1 + 0x20,(ulonglong)uVar1 << 3);
      auStack_b8 = ZEXT1232(ZEXT812(0));
      auStack_98 = auStack_b8;
      uStack_54 = uVar1;
      uVar3 = FUN_1427966b0(*(undefined4 *)(param_1 + 8),&puStack_70,0,auStack_b8,auStack_98);
      return uVar3;
    }
  }
  return 0;
}

