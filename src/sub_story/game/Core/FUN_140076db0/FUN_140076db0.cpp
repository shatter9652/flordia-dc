// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076db0  size: 234 bytes
// Name:    FUN_140076db0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140076db0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar4 = 0;
  uVar2 = _DAT_149276e20 << 4;
  uVar3 = uVar4;
  if (uVar2 != 0) {
    do {
      uVar3 = uVar4;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                  (ulonglong)(uVar4 >> 4) * 0x50 + _DAT_149276e28))) break;
      uVar4 = uVar4 + 1;
      uVar3 = uVar2;
    } while (uVar2 != uVar4);
  }
  lVar5 = (ulonglong)(uVar3 >> 4) * 0x50;
  if (lVar5 + (ulonglong)(uVar3 & 0xf) * 4 == (ulonglong)(uint)(_DAT_149276e20 << 4) * 5) {
    uVar1 = 0;
  }
  else {
    lVar5 = lVar5 + 0x10 + (ulonglong)(uVar3 & 0xf) * 4;
    do {
      bVar6 = *(short *)(_DAT_149276e28 + lVar5) == param_1;
      uVar1 = CONCAT31((int3)(char)((ushort)*(short *)(_DAT_149276e28 + lVar5) >> 8),bVar6);
      uVar4 = uVar3;
      if (bVar6) {
        return uVar1;
      }
      while (uVar3 = uVar2, uVar4 != uVar2) {
        while (uVar3 = uVar4 + 1, uVar4 = uVar3, uVar3 < uVar2) {
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar3 & 0xf) +
                                      (ulonglong)(uVar3 >> 4) * 0x50 + _DAT_149276e28)))
          goto LAB_140076e44;
        }
      }
LAB_140076e44:
      lVar5 = (ulonglong)(uVar3 >> 4) * 0x50 + 0x10 + (ulonglong)(uVar3 & 0xf) * 4;
    } while (lVar5 != (ulonglong)(uint)(_DAT_149276e20 << 4) * 5 + 0x10);
  }
  return uVar1;
}

