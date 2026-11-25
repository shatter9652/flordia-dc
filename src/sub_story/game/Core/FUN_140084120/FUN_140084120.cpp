// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140084120  size: 68 bytes
// Name:    FUN_140084120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140080650, FUN_144ef4340
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140084120(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar8;
  float fVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  ulonglong uVar7;
  
  uVar5 = 0;
  FUN_140080650(&stack0xffffffffffffffe6,*(undefined8 *)(param_1 + 0x30),param_2);
  uVar10 = FUN_144ef4340(param_2);
  uVar11 = func_0x000142d724c0(param_1,(short)(uVar5 >> 0x30),uVar10);
  uVar2 = func_0x000144fbfbc0(2,*(undefined8 *)(param_1 + 0x30));
  cVar1 = func_0x000144e72530(*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x9c));
  if (cVar1 != '\0') {
    if (((uVar5 & 0x4000000000000) != 0) && (uVar8 = (ulonglong)_DAT_148fdfae8, uVar8 != 0)) {
      puVar3 = _DAT_148fdfae0;
      uVar7 = uVar8;
      do {
        uVar6 = uVar7 >> 1;
        if (puVar3[uVar6 * 0xd] < *(uint *)(param_1 + 0x1d8)) {
          puVar3 = puVar3 + uVar6 * 0xd + 0xd;
          uVar6 = ~uVar6 + uVar7;
        }
        uVar7 = uVar6;
      } while (0 < (longlong)uVar6);
      if ((puVar3 != _DAT_148fdfae0 + uVar8 * 0xd) && (*puVar3 == *(uint *)(param_1 + 0x1d8))) {
        fVar9 = (float)func_0x0001455313e0(puVar3 + 1,uVar10,(ulonglong)uVar2,uVar6,unaff_XMM6_Qa,
                                           unaff_XMM6_Qb,unaff_XMM7_Qa,unaff_XMM7_Qb);
        uVar11 = (ulonglong)(uint)(fVar9 * (float)uVar11);
      }
    }
    if ((uVar5 & 0x1000000000000) != 0) {
      uVar11 = (ulonglong)(uint)((float)uVar11 * *(float *)(param_1 + 0x250));
    }
  }
  puVar3 = _DAT_148fdfb88;
  if ((uVar5 & 0x10000000000000) == 0) {
    if ((uVar5 & 0x8000000000000) == 0) {
      return uVar11;
    }
    uVar5 = (ulonglong)_DAT_148fdfb90;
    if (uVar5 == 0) {
      return uVar11;
    }
    do {
      uVar8 = uVar5 >> 1;
      if (puVar3[uVar8 * 0xb] < _DAT_148fdfc08) {
        puVar3 = puVar3 + uVar8 * 0xb + 0xb;
        uVar8 = ~uVar8 + uVar5;
      }
      uVar5 = uVar8;
      uVar4 = _DAT_148fdfc08;
    } while (0 < (longlong)uVar8);
  }
  else {
    uVar5 = (ulonglong)_DAT_148fdfb90;
    if (uVar5 == 0) {
      return uVar11;
    }
    do {
      uVar8 = uVar5 >> 1;
      if (puVar3[uVar8 * 0xb] < _DAT_148fdfc0c) {
        puVar3 = puVar3 + uVar8 * 0xb + 0xb;
        uVar8 = ~uVar8 + uVar5;
      }
      uVar5 = uVar8;
      uVar4 = _DAT_148fdfc0c;
    } while (0 < (longlong)uVar8);
  }
  if ((puVar3 != _DAT_148fdfb88 + (ulonglong)_DAT_148fdfb90 * 0xb) && (*puVar3 == uVar4)) {
    uVar11 = (ulonglong)(uint)((float)uVar11 * (float)puVar3[(ulonglong)uVar2 + 1]);
  }
  return uVar11;
}

