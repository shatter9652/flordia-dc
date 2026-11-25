// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9f00  size: 432 bytes
// Name:    FUN_1400f9f00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001400fa02d) */
/* WARNING: Removing unreachable block (ram,0x0001400fa082) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f9f00(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  
  iVar3 = (int)(param_2 + 0xfU >> 4);
  uVar6 = _DAT_14760e168;
  if (iVar3 < 1) {
    uVar5 = 0;
    if ((int)_DAT_14760e168 < _DAT_14760e17c) {
      uVar5 = _DAT_14760e168;
    }
    LOCK();
    UNLOCK();
    _DAT_14760e168 = uVar5;
  }
  else {
    bVar4 = false;
    do {
      if ((int)(_DAT_14760e168 + 1) < _DAT_14760e17c) {
        bVar7 = (byte)(_DAT_14760e168 & 0x1f);
        uVar5 = _DAT_14760e168 + 1;
        if ((*(uint *)(_DAT_14760e170 + (ulonglong)(_DAT_14760e168 >> 5) * 4) >>
             (_DAT_14760e168 & 0x1f) & 1) == 0) goto LAB_1400f9f73;
      }
      else {
        bVar7 = (byte)_DAT_14760e168 & 0x1f;
LAB_1400f9f73:
        uVar5 = _DAT_14760e168 + 0x1f;
        if (-1 < (int)_DAT_14760e168) {
          uVar5 = _DAT_14760e168;
        }
        uVar5 = (int)uVar5 >> 5;
        uVar9 = (ulonglong)uVar5;
        uVar8 = (uint)(-1L << bVar7 + 1) & *(uint *)(_DAT_14760e170 + uVar9 * 4);
        while (uVar8 == 0) {
          if (_DAT_14760e178 - 1 == (int)uVar9) goto LAB_1400f9fc4;
          uVar5 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar5;
          uVar8 = *(uint *)(_DAT_14760e170 + (ulonglong)uVar5 * 4);
        }
        uVar6 = 0;
        for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar6 = uVar5 << 5 | uVar6;
        uVar5 = uVar6;
        if (uVar6 == 0xffffffff || _DAT_14760e17c <= (int)uVar6) {
LAB_1400f9fc4:
          if (bVar4) {
            uVar6 = 0xffffffff;
            uVar5 = _DAT_14760e168;
            break;
          }
          bVar4 = true;
          uVar6 = 0xffffffff;
          if ((ulonglong)_DAT_14760e178 != 0) {
            uVar9 = 0;
LAB_1400f9fd9:
            uVar5 = *(uint *)(_DAT_14760e170 + uVar9 * 4);
            if (uVar5 == 0) goto code_r0x0001400f9fe1;
            uVar6 = 0;
            for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar6 = uVar6 + 1;
            }
            uVar6 = (int)uVar9 << 5 | uVar6;
            uVar5 = uVar6;
            goto LAB_1400fa005;
          }
LAB_1400f9fe9:
          uVar5 = 0xffffffff;
        }
      }
LAB_1400fa005:
      _DAT_14760e168 = uVar5;
      uVar5 = _DAT_14760e168;
    } while ((int)(_DAT_14760e168 - uVar6) < iVar3);
    _DAT_14760e168 = 0;
    if ((int)uVar5 < _DAT_14760e17c) {
      _DAT_14760e168 = uVar5;
    }
    LOCK();
    UNLOCK();
    uVar8 = uVar6;
    if ((int)uVar6 < (int)uVar5) {
      do {
        bVar7 = (byte)uVar8 & 0x1f;
        uVar2 = uVar8 + 1;
        LOCK();
        puVar1 = (uint *)(_DAT_14760e170 + (ulonglong)(uVar8 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        UNLOCK();
        uVar8 = uVar2;
      } while (uVar5 != uVar2);
    }
  }
  *param_1 = (longlong)(int)uVar6 * 0x10 + _DAT_14760e158;
  param_1[1] = 0;
  return;
code_r0x0001400f9fe1:
  uVar9 = uVar9 + 1;
  if (_DAT_14760e178 == uVar9) goto LAB_1400f9fe9;
  goto LAB_1400f9fd9;
}

