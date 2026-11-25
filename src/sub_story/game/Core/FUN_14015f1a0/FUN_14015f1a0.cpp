// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015f1a0  size: 297 bytes
// Name:    FUN_14015f1a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f17fb0, FUN_140c99be0, FUN_142aedb00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015f1a0(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)(param_1 + 2);
  uVar7 = 0;
  uVar6 = *param_1 << 4;
  uVar3 = uVar7;
  if (uVar6 != 0) {
    do {
      uVar3 = uVar7;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar7 & 0xf) +
                                  (ulonglong)(uVar7 >> 4) * 0x110 + lVar1))) break;
      uVar7 = uVar7 + 1;
      uVar3 = uVar6;
    } while (uVar6 != uVar7);
  }
  lVar8 = (ulonglong)(*param_1 & 0xfffffff) * 0x110;
  uVar5 = (ulonglong)((uVar3 & 0xf) << 4);
  lVar4 = (ulonglong)(uVar3 >> 4) * 0x110;
  if (lVar4 + uVar5 != lVar8) {
    lVar4 = lVar4 + 0x10 + uVar5;
    do {
      lVar2 = *(longlong *)(lVar1 + 8 + lVar4);
      if (lVar2 != 0) {
        FUN_142aedb00(lVar2);
        func_0x000144d9c130(lVar2,0x10);
      }
      *(undefined8 *)(lVar1 + 8 + lVar4) = 0;
      uVar7 = uVar3;
      while (uVar3 = uVar6, uVar7 != uVar6) {
        while (uVar3 = uVar7 + 1, uVar7 = uVar3, uVar3 < uVar6) {
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar3 & 0xf) +
                                      (ulonglong)(uVar3 >> 4) * 0x110 + lVar1))) goto LAB_14015f275;
        }
      }
LAB_14015f275:
      lVar4 = (ulonglong)(uVar3 >> 4) * 0x110 + 0x10 + (ulonglong)((uVar3 & 0xf) << 4);
    } while (lVar4 != lVar8 + 0x10);
  }
  FUN_140f17fb0(param_1);
  FUN_140c99be0(param_1 + 4);
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}

