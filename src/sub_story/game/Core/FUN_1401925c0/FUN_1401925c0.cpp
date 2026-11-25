// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401925c0  size: 420 bytes
// Name:    FUN_1401925c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140192770, FUN_140161d00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401925c0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *param_1 = param_2;
  uVar7 = 0;
  uVar3 = *(uint *)(param_1 + 1);
  lVar2 = param_1[2];
  uVar6 = uVar3 << 4;
  uVar4 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar4 = uVar7;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar7 & 0xf) +
                                  (ulonglong)(uVar7 >> 4) * 0x690 + lVar2))) break;
      uVar7 = uVar7 + 1;
      uVar4 = uVar6;
    } while (uVar6 != uVar7);
  }
  lVar9 = (ulonglong)(uVar3 & 0xfffffff) * 0x690;
  uVar8 = (ulonglong)((uVar4 & 0xf) * 0x68);
  lVar5 = (ulonglong)(uVar4 >> 4) * 0x690;
  if (lVar5 + uVar8 != lVar9) {
    lVar5 = lVar5 + 0x10 + uVar8;
    do {
      *(undefined1 *)(lVar2 + 0x60 + lVar5) = 1;
      func_0x000140192220(&uStack_78);
      puVar1 = (undefined8 *)(lVar2 + 0x28 + lVar5);
      *puVar1 = uStack_78;
      puVar1[1] = uStack_70;
      puVar1[2] = uStack_68;
      puVar1[3] = uStack_60;
      puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar5);
      *puVar1 = uStack_60;
      puVar1[1] = uStack_58;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_48;
      uVar3 = uVar4;
      while (uVar4 = uVar6, uVar3 != uVar6) {
        while (uVar4 = uVar3 + 1, uVar3 = uVar4, uVar4 < uVar6) {
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                      (ulonglong)(uVar4 >> 4) * 0x690 + lVar2))) goto LAB_1401926d5;
        }
      }
LAB_1401926d5:
      lVar5 = (ulonglong)(uVar4 >> 4) * 0x690 + 0x10 + (ulonglong)((uVar4 & 0xf) * 0x68);
    } while (lVar5 != lVar9 + 0x10);
    param_2 = *param_1;
    uVar3 = *(uint *)(param_1 + 1);
  }
  if ((uVar3 * 0x570) / 100 < *(uint *)(param_2 + 0x1c)) {
    FUN_140192770(param_1 + 1);
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    FUN_140161d00(lVar2);
    if (*(longlong *)(lVar2 + 8) != 0) {
      func_0x000144d9c130();
    }
    func_0x000144d9c130(lVar2,0x60);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

