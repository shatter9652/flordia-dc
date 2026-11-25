// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400668b0  size: 538 bytes
// Name:    FUN_1400668b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400668b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [64];
  float fVar14;
  undefined1 auVar15 [64];
  
  auVar13 = ZEXT1664(in_ZMM1._0_16_);
  auVar12._0_4_ = (uint)in_ZMM1._0_4_ ^ _DAT_145fc6f10;
  auVar12._4_4_ = in_ZMM1._4_4_ ^ _DAT_145fc6f10;
  auVar12._8_4_ = in_ZMM1._8_4_ ^ _DAT_145fc6f10;
  auVar12._12_4_ = in_ZMM1._12_4_ ^ _DAT_145fc6f10;
  auVar12 = vmaxss_avx(auVar12,in_ZMM1._0_16_);
  if (_DAT_145fc6f00 <= auVar12._0_4_) {
    fVar14 = in_ZMM1._0_4_ + _DAT_145fc6f48;
    lVar5 = *(longlong *)(param_1 + 0x30);
    puVar8 = *(undefined8 **)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8);
    auVar11._0_4_ = (uint)fVar14 ^ _DAT_145fc6f10;
    auVar11._4_4_ = _DAT_145fc6f10;
    auVar11._8_4_ = _DAT_145fc6f10;
    auVar11._12_4_ = _DAT_145fc6f10;
    auVar12 = vmaxss_avx(auVar11,ZEXT416((uint)fVar14));
    auVar15 = ZEXT1664(auVar12);
    fVar14 = _DAT_145fc6f00;
    if (_DAT_145fc6f00 < auVar12._0_4_) {
      uVar3 = *(undefined4 *)(lVar5 + 0x34);
      puVar6 = (undefined8 *)func_0x0001400f2070(param_1,3);
      uVar4 = *(uint *)(param_1 + 8);
      uVar2 = *(undefined4 *)(param_1 + 0x156c8 + (ulonglong)*(uint *)(param_1 + 0x14) * 4);
      *(uint *)(param_1 + 8) = uVar4 + 1;
      *puVar6 = FUN_1448adb00;
      *(undefined2 *)((longlong)puVar6 + 0xc) = 0x500;
      *(undefined4 *)(puVar6 + 1) = 0;
      bVar1 = *(byte *)((longlong)puVar8 + 10);
      *(byte *)((longlong)puVar8 + 10) = bVar1 + 1;
      puVar8[(ulonglong)bVar1 + 2] = puVar6;
      *(undefined2 *)(puVar6 + 1) = 1;
      *(uint *)(puVar6 + 5) = uVar4;
      *(undefined4 *)(puVar6 + 6) = uVar2;
      puVar6[7] = 0;
      *(undefined1 *)(puVar6 + 8) = 1;
      *(undefined1 *)(puVar6 + 9) = 0;
      *(undefined4 *)(puVar6 + 10) = uVar3;
      puVar6[0xb] = *(longlong *)(param_1 + 0x20) + 0xb0;
      *(undefined8 **)(param_1 + 0x13dc8 + (ulonglong)uVar4 * 8) = puVar6;
      uVar9 = *(int *)(param_1 + 0x14) + 1;
      uVar10 = (ulonglong)uVar9;
      *(uint *)(param_1 + 0x14) = uVar9;
      *(uint *)(param_1 + 0x156c8 + uVar10 * 4) = uVar4;
    }
    else {
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x14);
      puVar6 = puVar8;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x156c8 + uVar10 * 4);
    puVar7 = (undefined8 *)func_0x0001400f2070(param_1,CONCAT62((int6)(uVar10 >> 0x10),1));
    *puVar7 = FUN_1448b37c0;
    *(undefined4 *)(puVar7 + 1) = 0;
    *(undefined2 *)((longlong)puVar7 + 0xc) = 0x500;
    bVar1 = *(byte *)((longlong)puVar6 + 10);
    *(byte *)((longlong)puVar6 + 10) = bVar1 + 1;
    puVar6[(ulonglong)bVar1 + 2] = puVar7;
    *(undefined2 *)(puVar7 + 1) = 1;
    *(undefined4 *)(puVar7 + 5) = uVar3;
    puVar7[6] = *(undefined8 *)(param_1 + 0x20);
    puVar7[7] = param_3;
    puVar7[8] = *(longlong *)(param_1 + 0x20) + 0xb0;
    puVar8 = puVar7;
    if (fVar14 < auVar15._0_4_) {
      puVar8 = (undefined8 *)func_0x0001400f2070(param_1,&UNK_1448b0003);
      uVar4 = *(uint *)(param_1 + 0x14);
      uVar9 = uVar4 - 1;
      *(uint *)(param_1 + 0x14) = uVar9;
      uVar4 = *(uint *)(param_1 + 0x156c8 + (ulonglong)uVar4 * 4);
      uVar3 = *(undefined4 *)(param_1 + 0x156c8 + (ulonglong)uVar9 * 4);
      *puVar8 = FUN_1448ab470;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined2 *)((longlong)puVar8 + 0xc) = 0x500;
      bVar1 = *(byte *)((longlong)puVar7 + 10);
      *(byte *)((longlong)puVar7 + 10) = bVar1 + 1;
      puVar7[(ulonglong)bVar1 + 2] = puVar8;
      *(undefined2 *)(puVar8 + 1) = 1;
      *(undefined4 *)(puVar8 + 5) = uVar3;
      *(uint *)(puVar8 + 6) = uVar4;
      puVar8[9] = lVar5 + 0x3c;
      *(int *)(puVar8 + 10) = auVar13._0_4_;
      *(undefined1 *)(puVar8 + 0xb) = 1;
      puVar8[0xe] = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 **)(param_1 + 0x14a48 + (ulonglong)uVar4 * 8) = puVar8;
    }
    *(undefined8 **)(param_1 + 0x13148 + (ulonglong)*(uint *)(param_1 + 0x10) * 8) = puVar8;
  }
  return;
}

