// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008b390  size: 951 bytes
// Name:    FUN_14008b390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_14008b750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008b390(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auVar1 [32];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong unaff_GS_OFFSET;
  undefined1 auVar9 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar3 = *(longlong *)(lVar4 + 0x1448);
  if (lVar3 == 0) {
    auStack_d0 = ZEXT1232(ZEXT812(0));
    auStack_b0 = auStack_d0;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar3 = *(longlong *)(lVar4 + 0x1448);
  }
  if (lVar3 == 0) {
    auStack_90 = ZEXT1232(ZEXT812(0));
    auStack_70 = auStack_90;
  }
  auStack_50 = ZEXT1232(ZEXT812(0));
  uStack_f8 = *param_1;
  uStack_f0 = param_1[1];
  uStack_e8 = *param_2;
  uStack_e0 = param_2[1];
  uVar8 = *(uint *)(param_1 + 1);
  uVar2 = 0x40;
  if (0x81 < uVar8) {
    uVar2 = uVar8 >> 1;
  }
  uStack_d8 = param_3;
  if (uVar2 == 0) {
    lVar4 = FUN_145647140();
    auVar1 = auStack_50;
    puVar7 = (undefined1 *)((longlong)&uStack_f8 + -lVar4);
    auStack_50._24_8_ = (longlong)&uStack_f8 + -lVar4;
    auStack_50._0_16_ = auVar1._0_16_;
    auStack_50._16_4_ = 0;
  }
  else {
    uVar5 = 1;
    if (0xd < uVar2) {
      uVar5 = ((ulonglong)uVar2 * 100 + 0x56) / 0x57 - 1;
      uVar5 = uVar5 >> 1 | uVar5;
      uVar5 = uVar5 >> 2 | uVar5;
      uVar5 = uVar5 >> 4 | uVar5;
      uVar5 = uVar5 >> 8 | uVar5;
      uVar5 = (uVar5 >> 0x10 | uVar5) + 1 >> 4;
    }
    lVar4 = uVar5 * 0x90;
    lVar3 = FUN_145647140();
    auVar1 = auStack_50;
    lVar3 = -lVar3;
    puVar7 = (undefined1 *)((longlong)&uStack_f8 + lVar3);
    auVar9[1] = DAT_1461594fd;
    auVar9[0] = DAT_1461594fd;
    auVar9[2] = DAT_1461594fd;
    auVar9[3] = DAT_1461594fd;
    auVar9[4] = DAT_1461594fd;
    auVar9[5] = DAT_1461594fd;
    auVar9[6] = DAT_1461594fd;
    auVar9[7] = DAT_1461594fd;
    auVar9[8] = DAT_1461594fd;
    auVar9[9] = DAT_1461594fd;
    auVar9[10] = DAT_1461594fd;
    auVar9[0xb] = DAT_1461594fd;
    auVar9[0xc] = DAT_1461594fd;
    auVar9[0xd] = DAT_1461594fd;
    auVar9[0xe] = DAT_1461594fd;
    auVar9[0xf] = DAT_1461594fd;
    auStack_50._24_8_ = (longlong)&uStack_f8 + lVar3;
    auStack_50._0_16_ = auVar1._0_16_;
    auStack_50._16_4_ = (int)uVar5;
    lVar6 = 0;
    do {
      *(undefined1 (*) [16])((longlong)&uStack_f8 + lVar6 + lVar3) = auVar9;
      lVar6 = lVar6 + 0x90;
    } while (lVar4 != lVar6);
  }
  *(undefined8 *)(puVar7 + -8) = 0x14008b511;
  lVar4 = FUN_145647140();
  auStack_50._8_8_ = (longlong)puVar7 + -lVar4;
  auStack_50._0_4_ = uVar8;
  *(undefined8 *)(puVar7 + -lVar4 + -0x28) = 0x14008b538;
  FUN_14008b750(&uStack_f8);
  if ((ulonglong)(uint)auStack_50._16_4_ != 0) {
    lVar4 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 1 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 1 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 2 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 2 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 3 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 3 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 4 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 4 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 5 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 5 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 6 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 6 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 7 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 7 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 8 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 8 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 9 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 9 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 10 + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 10 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 0xb + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 0xb + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 0xc + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 0xc + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 0xd + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 0xd + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 0xe + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 0xe + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(auStack_50._24_8_ + 0xf + lVar4))) {
        *(undefined1 *)(auStack_50._24_8_ + 0xf + lVar4) = 0x80;
      }
      lVar4 = lVar4 + 0x90;
    } while ((ulonglong)(uint)auStack_50._16_4_ * 0x90 != lVar4);
  }
  return;
}

