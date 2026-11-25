// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400663b0  size: 717 bytes
// Name:    FUN_1400663b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400663b0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x498) == '\0') {
      func_0x00014011c570(param_1 + 0x498,param_5);
      *(undefined1 *)(param_1 + 0x4a4) = 0xff;
      *(undefined2 *)(param_1 + 0x4a6) = 0xff;
      *(byte *)(param_1 + 0x4a5) = *(byte *)(param_1 + 0x4a5) & 0xdf;
      *(undefined8 *)(param_1 + 0x4b8) = 0xffffffff00000000;
      *(undefined4 *)(param_1 + 0x4c0) = 0xffffffff;
    }
    bVar11 = false;
    uVar7 = (int)(param_2 * 0x35) + (int)((ulonglong)(param_2 * 0x35) / 0x2f) * -0x2f;
    uVar6 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar8 * 8);
      if (lVar3 == 0) {
        *(longlong *)(*(longlong *)(param_1 + 8) + uVar8 * 8) = param_2;
LAB_1400664a4:
        puVar10 = *(uint **)(param_1 + 400);
        if (!bVar11) {
          puVar10 = puVar10 + uVar8 * 4;
        }
        goto LAB_1400664b8;
      }
      if (lVar3 == param_2) goto LAB_1400664a4;
      uVar9 = uVar6 + 1;
      uVar7 = (uVar7 + 1) % 0x2f;
      bVar11 = 0x2d < uVar6;
      uVar6 = uVar9;
    } while (uVar9 != 0x2f);
    puVar10 = *(uint **)(param_1 + 400);
LAB_1400664b8:
    uVar6 = *puVar10;
    uVar7 = puVar10[1];
    if ((uVar7 == 0) && (uVar7 = 0, uVar6 < 0x40)) {
      uVar2 = func_0x000144d9c140(8,0x400);
      if ((ulonglong)puVar10[1] != 0) {
        func_0x000145f40560(uVar2,*(undefined8 *)(puVar10 + 2),(ulonglong)puVar10[1] << 4);
      }
      if (*(longlong *)(puVar10 + 2) != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(puVar10 + 2) = uVar2;
      *puVar10 = 0x40;
      uVar6 = 0x40;
      uVar7 = puVar10[1];
    }
    if (uVar7 == uVar6) {
      uVar7 = 1;
      if (1 < uVar6) {
        uVar7 = uVar6 >> 1;
      }
      lVar3 = func_0x000144d9c140(8,(ulonglong)(uVar7 + uVar6) << 4);
      if ((ulonglong)puVar10[1] != 0) {
        func_0x000145f40560(lVar3,*(undefined8 *)(puVar10 + 2),(ulonglong)puVar10[1] << 4);
      }
      if (*(longlong *)(puVar10 + 2) != 0) {
        func_0x000144d9c130();
      }
      *(longlong *)(puVar10 + 2) = lVar3;
      *puVar10 = uVar7 + uVar6;
      uVar7 = puVar10[1];
    }
    else {
      lVar3 = *(longlong *)(puVar10 + 2);
    }
    uVar6 = uVar7 + 1;
    lVar4 = (ulonglong)uVar7 * 0x10;
    puVar10[1] = uVar6;
    *(undefined8 *)(lVar3 + lVar4) = param_3;
    *(undefined4 *)(lVar3 + 8 + lVar4) = param_4;
    cVar1 = '\0';
    for (uVar7 = *(byte *)(param_5 + 9) & 0x1f; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      cVar1 = cVar1 + '\x01';
    }
    *(char *)(lVar3 + 0xc + lVar4) = cVar1;
    if (0x3f < uVar6) {
      uStack_78 = *(undefined8 *)(param_1 + 0x49c);
      uStack_70 = *(undefined8 *)(param_1 + 0x4a4);
      uStack_68 = *(undefined8 *)(param_1 + 0x4ac);
      uStack_60 = *(undefined8 *)(param_1 + 0x4b4);
      uStack_58 = *(undefined8 *)(param_1 + 0x4bc);
      uStack_50 = *(undefined8 *)(param_1 + 0x4c4);
      lVar4 = 0;
      *(undefined2 *)(param_1 + 0x4dc) = 0x100;
      do {
        *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(lVar3 + 8 + lVar4);
        bVar5 = uStack_70._1_1_ & 0xe0;
        uStack_70._0_2_ =
             CONCAT11(bVar5 | (byte)(1 << (*(byte *)(lVar3 + 0xc + lVar4) & 0x1f)) & 0x1f,
                      (undefined1)uStack_70);
        (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x30))
                  (*(longlong **)(lVar3 + lVar4),&uStack_78);
        lVar4 = lVar4 + 0x10;
      } while ((ulonglong)uVar6 << 4 != lVar4);
      *(undefined2 *)(param_1 + 0x4dc) = 1;
      puVar10[1] = 0;
    }
  }
  return;
}

