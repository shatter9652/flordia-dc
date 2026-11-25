// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c640  size: 570 bytes
// Name:    FUN_14014c640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_144f8f330, FUN_1400f7c20, FUN_144f8ef80, FUN_1452384c0, FUN_14221b9e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14014c640(undefined8 param_1,byte *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  byte *pbVar10;
  
  FUN_140004b40(0x1471bfad8);
  bVar3 = *param_2;
  uVar4 = (uint)bVar3;
  uVar7 = 0;
  uVar5 = (uint)param_2[1] + (uint)bVar3;
  if (uVar5 != 0) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      uVar1 = *(longlong *)(param_2 + lVar9 + 0x20) + 0xfff;
      if (uVar1 < 0x10000) {
        uVar7 = (ulonglong)(((uint)uVar1 & 0xf000) + (int)uVar7);
      }
      else {
        lVar8 = lVar8 + (*(longlong *)(param_2 + lVar9 + 0x20) + 0xffffU & 0xffffffffffff0000);
      }
      lVar9 = lVar9 + 0x18;
    } while ((ulonglong)uVar5 * 0x18 != lVar9);
    uVar7 = (ulonglong)((int)uVar7 + 0xffffU & 0xffff0000) + lVar8;
  }
  if (_DAT_149c3e060 < uVar7 + _DAT_1498d26d8) {
    DAT_1498d26d0 = 1;
  }
  else if (bVar3 == 0 && param_2[1] == 0) {
    if (uVar5 == 0) goto LAB_14014c7e5;
  }
  else {
    uVar7 = 0;
    pbVar6 = param_2;
    do {
      pbVar10 = pbVar6 + 0x18;
      lVar8 = *(longlong *)(pbVar6 + 0x20);
      if (lVar8 - 0xf002U < 0xfffffffffffeffff) {
        lVar8 = FUN_14221b9e0(lVar8 + 0xffffU & 0xffffffffffff0000);
        if (lVar8 == 0) break;
        *(longlong *)pbVar10 = lVar8;
      }
      else {
        lVar8 = FUN_1452384c0(param_1,lVar8,uVar4 <= uVar7);
        *(longlong *)pbVar10 = lVar8;
        if (lVar8 == 0) break;
      }
      uVar4 = (uint)*param_2;
      uVar7 = uVar7 + 1;
      pbVar6 = pbVar10;
    } while (uVar7 < param_2[1] + uVar4);
    bVar3 = *param_2;
    bVar2 = param_2[1];
    uVar4 = (uint)bVar2;
    if ((uint)bVar2 + (uint)bVar3 == (int)uVar7) {
      if (bVar2 != 0 || bVar3 != 0) {
        pbVar6 = param_2 + 0x20;
        uVar7 = 0;
        do {
          if (*(longlong *)pbVar6 - 0xf002U < 0xfffffffffffeffff) {
            _DAT_1498d26d8 = _DAT_1498d26d8 + (*(longlong *)pbVar6 + 0xffffU & 0xffffffffffff0000);
            FUN_1400f7c20(param_1,uVar7 < bVar3,*(undefined8 *)(pbVar6 + -8));
            bVar3 = *param_2;
            uVar4 = (uint)param_2[1];
          }
          uVar7 = uVar7 + 1;
          pbVar6 = pbVar6 + 0x18;
        } while (uVar7 < uVar4 + bVar3);
      }
LAB_14014c7e5:
      if (_DAT_1475ddb98 < _DAT_1498d26d8) {
        _DAT_1475ddb98 = _DAT_1498d26d8;
      }
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_2 + 0x18);
      uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_14014c807;
    }
    if ((int)uVar7 != 0) {
      lVar8 = uVar7 * 0x18;
      do {
        uVar7 = *(longlong *)(param_2 + lVar8 + 8) + 0xfff;
        if (uVar7 < 0x10001) {
          FUN_144f8ef80(param_1,*(undefined8 *)(param_2 + lVar8),uVar7 >> 0xc & 0xfffff);
        }
        else {
          FUN_144f8f330(*(undefined8 *)(param_2 + lVar8),
                        *(longlong *)(param_2 + lVar8 + 8) + 0xffffU & 0xffffffffffff0000);
        }
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != 0);
    }
  }
  uVar7 = 0;
LAB_14014c807:
  func_0x000144d9dab0(0x1471bfad8);
  return uVar7 & 0xffffffff;
}

