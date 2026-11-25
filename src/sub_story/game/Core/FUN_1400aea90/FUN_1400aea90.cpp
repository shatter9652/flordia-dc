// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400aea90  size: 493 bytes
// Name:    FUN_1400aea90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_1400aec80, FUN_1400aee10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400aea90(longlong param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong unaff_GS_OFFSET;
  undefined1 auVar6 [16];
  undefined8 auStack_180 [4];
  undefined8 uStack_160;
  undefined1 aauStack_158 [2] [16];
  undefined8 uStack_138;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  undefined1 uStack_da;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_cc [24];
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  longlong lStack_a8;
  undefined1 auStack_a0 [12];
  undefined8 uStack_94;
  undefined2 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  int aiStack_28 [2];
  undefined1 *puStack_20;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0x28) != -1)) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x14c);
    iVar4 = iVar4 + (uint)(iVar4 == 0);
    uStack_160 = 0x1400aead6;
    lVar3 = FUN_145647140();
    lVar3 = -lVar3;
    puVar5 = (undefined1 *)((longlong)aauStack_158 + lVar3);
    puStack_20 = (undefined1 *)((longlong)aauStack_158 + lVar3);
    aiStack_28[1] = 0;
    uStack_120 = 0;
    uStack_118 = _DAT_14615da40;
    uStack_110 = _UNK_14615da48;
    uStack_108 = _UNK_14615da50;
    uStack_100 = _UNK_14615da58;
    uStack_f8 = _DAT_14615a710;
    uStack_f0 = _UNK_14615a718;
    auVar6._4_4_ = _DAT_145fc6f48;
    auVar6._0_4_ = _DAT_145fc6f48;
    auVar6._8_4_ = _DAT_145fc6f48;
    auVar6._12_4_ = _DAT_145fc6f48;
    uStack_e8 = 0xffffffff00000000;
    uStack_e0 = 0x1010001;
    uStack_dc = 0;
    uStack_da = 0;
    uStack_d8 = vmovlps_avx(auVar6);
    uStack_d0 = 0xbf800000;
    auStack_cc = SUB3224(ZEXT432(0),0) << 0x20;
    uStack_b4 = 0;
    uStack_ac = 0;
    lStack_a8 = 0;
    auStack_a0 = (undefined1  [12])0x0;
    uStack_94 = 0xffffff;
    uStack_8c = 0;
    uStack_88 = 0xffffffff;
    uStack_84 = _DAT_146159bc0;
    auStack_78 = ZEXT816(0) << 0x20;
    uStack_7c = 0xffffffff;
    uStack_68 = 0;
    uStack_60 = _DAT_14615da60;
    uStack_58 = _UNK_14615da68;
    uStack_50 = _DAT_14615da70;
    auStack_48 = auStack_78;
    aiStack_28[0] = iVar4;
    puVar1 = (undefined1 *)((longlong)aauStack_158 + lVar3);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      *(undefined8 *)((longlong)auStack_180 + lVar3) = 0x1400aec65;
      func_0x0001455db994();
      puVar5 = (undefined1 *)((longlong)aauStack_158 + lVar3);
      puVar1 = puStack_20;
    }
    puStack_20 = puVar1;
    if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
      auStack_38._0_12_ = ZEXT812(0);
      auStack_38._12_4_ = 0;
    }
    *(undefined8 *)(puVar5 + -0x28) = 0x1400aec0b;
    FUN_1400aee10(param_1,&uStack_120,aiStack_28);
    aauStack_158[0]._0_12_ = ZEXT812(0);
    aauStack_158[0]._12_4_ = 0;
    uStack_138 = 0;
    *(undefined8 *)(puVar5 + -0x28) = 0x1400aec37;
    uVar2 = FUN_1400aec80(_DAT_14ab6c900,&uStack_120);
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    uStack_ac = 0;
    if (lStack_a8 != 0) {
      *(undefined8 *)(puVar5 + -0x28) = 0x1400aec77;
      func_0x000144d9c130();
    }
  }
  return;
}

