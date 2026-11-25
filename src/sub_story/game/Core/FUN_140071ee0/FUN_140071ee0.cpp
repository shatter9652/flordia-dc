// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071ee0  size: 228 bytes
// Name:    FUN_140071ee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401df760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140071ee0(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  int iStack_60;
  ushort uStack_5c;
  longlong lStack_58;
  longlong lStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 8) + 8);
  uStack_88 = _DAT_14ab5cdc0;
  uStack_80 = uRam000000014ab5cdc8;
  uStack_78 = _DAT_14ab5cdd0;
  uStack_70 = uRam000000014ab5cdd8;
  puVar4 = *(undefined4 **)(lVar2 + 0x18);
  if (puVar4 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar4;
    uStack_78._0_4_ = (int)_DAT_14ab5cdd0;
    bVar5 = (int)uStack_78 < (int)(uint)*(byte *)(puVar4 + 0xc);
    if (bVar5) {
      func_0x0001451ad0a0(&uStack_88,0xffffffff);
    }
  }
  uVar1 = *(undefined4 *)(lVar2 + 0x4c);
  uStack_48 = (undefined4)uVar3;
  uStack_44 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_3c = uStack_88._4_4_;
  lStack_58 = param_1[4];
  lStack_50 = param_1[5];
  uStack_40 = uVar7;
  func_0x000140656310(&lStack_58,&iStack_60);
  uStack_38 = (uint)uStack_5c | iStack_60 << 0x10;
  if (iStack_60 == 0x7fffffff) {
    uStack_38 = 0x7fffffff;
  }
  uStack_30 = 0;
  uStack_34 = uVar1;
  uVar6 = FUN_1401df760(&uStack_48,7);
  *(uint *)(param_1 + 7) = uVar6;
  param_1[6] = (ulonglong)(uVar6 + (uVar6 == 0)) * 0x5cdcfaa7 +
               (ulonglong)((uVar6 >> 0x10 | uVar6 << 0x10) ^ uVar6);
  return;
}

