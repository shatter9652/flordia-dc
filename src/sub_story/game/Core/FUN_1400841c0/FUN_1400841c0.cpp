// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400841c0  size: 396 bytes
// Name:    FUN_1400841c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400841c0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  ulonglong uVar9;
  
  uVar9 = func_0x000142d724c0();
  uVar2 = func_0x000144fbfbc0(2,*(undefined8 *)(param_1 + 0x30));
  cVar1 = func_0x000144e72530(*(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x9c));
  if (cVar1 != '\0') {
    if (((param_2 & 4) != 0) && (uVar5 = (ulonglong)_DAT_148fdfae8, uVar5 != 0)) {
      puVar3 = _DAT_148fdfae0;
      uVar7 = uVar5;
      do {
        uVar6 = uVar7 >> 1;
        if (puVar3[uVar6 * 0xd] < *(uint *)(param_1 + 0x1d8)) {
          puVar3 = puVar3 + uVar6 * 0xd + 0xd;
          uVar6 = ~uVar6 + uVar7;
        }
        uVar7 = uVar6;
      } while (0 < (longlong)uVar6);
      if ((puVar3 != _DAT_148fdfae0 + uVar5 * 0xd) && (*puVar3 == *(uint *)(param_1 + 0x1d8))) {
        fVar8 = (float)func_0x0001455313e0(puVar3 + 1,param_3,(ulonglong)uVar2);
        uVar9 = (ulonglong)(uint)(fVar8 * (float)uVar9);
      }
    }
    if ((param_2 & 1) != 0) {
      uVar9 = (ulonglong)(uint)((float)uVar9 * *(float *)(param_1 + 0x250));
    }
  }
  puVar3 = _DAT_148fdfb88;
  if ((param_2 & 0x10) == 0) {
    if ((param_2 & 8) == 0) {
      return uVar9;
    }
    uVar5 = (ulonglong)_DAT_148fdfb90;
    if (uVar5 == 0) {
      return uVar9;
    }
    do {
      uVar7 = uVar5 >> 1;
      if (puVar3[uVar7 * 0xb] < _DAT_148fdfc08) {
        puVar3 = puVar3 + uVar7 * 0xb + 0xb;
        uVar7 = ~uVar7 + uVar5;
      }
      uVar5 = uVar7;
      uVar4 = _DAT_148fdfc08;
    } while (0 < (longlong)uVar7);
  }
  else {
    uVar5 = (ulonglong)_DAT_148fdfb90;
    if (uVar5 == 0) {
      return uVar9;
    }
    do {
      uVar7 = uVar5 >> 1;
      if (puVar3[uVar7 * 0xb] < _DAT_148fdfc0c) {
        puVar3 = puVar3 + uVar7 * 0xb + 0xb;
        uVar7 = ~uVar7 + uVar5;
      }
      uVar5 = uVar7;
      uVar4 = _DAT_148fdfc0c;
    } while (0 < (longlong)uVar7);
  }
  if ((puVar3 != _DAT_148fdfb88 + (ulonglong)_DAT_148fdfb90 * 0xb) && (*puVar3 == uVar4)) {
    uVar9 = (ulonglong)(uint)((float)uVar9 * (float)puVar3[(ulonglong)uVar2 + 1]);
  }
  return uVar9;
}

