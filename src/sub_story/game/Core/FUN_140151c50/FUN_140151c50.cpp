// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140151c50  size: 314 bytes
// Name:    FUN_140151c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140151c50(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  longlong lStack_20;
  
  uVar3 = _DAT_14abbef44;
  lVar10 = *(longlong *)(param_1 + 0xd8);
  if (lVar10 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x30);
  plVar2 = *(longlong **)((ulonglong)bVar1 * 8 + 0x14abbe7c0);
  uVar7 = (uint)((ulonglong)(param_1 - *plVar2) / (ulonglong)*(uint *)(plVar2 + 1)) & 0x1ffff;
  uVar11 = *(uint *)(plVar2[5] + (ulonglong)uVar7 * 4);
  *(byte *)(lVar10 + 0xce) = *(byte *)(lVar10 + 0xce) | 8;
  *(undefined4 *)(lVar10 + 4) = uVar3;
  uVar11 = (bVar1 & 0x1f) << 0x11 | uVar7 | (uVar11 & 0x7fe0000) << 5;
  FUN_140004b40(0x147bdd5c8);
  uVar8 = (ulonglong)_DAT_147bdd5bc;
  if (uVar8 != 0) {
    lVar10 = 0;
    do {
      if (*(uint *)(_DAT_147bdd5c0 + lVar10) == uVar11) goto LAB_140151d6e;
      lVar10 = lVar10 + 4;
    } while (uVar8 * 4 - lVar10 != 0);
  }
  if (_DAT_147bdd5bc == _DAT_147bdd5b8) {
    uVar7 = 1;
    if (1 < _DAT_147bdd5bc) {
      uVar7 = _DAT_147bdd5bc >> 1;
    }
    uVar7 = uVar7 + _DAT_147bdd5bc;
    lVar10 = func_0x000144d9c140(4,(ulonglong)uVar7 * 4);
    if ((ulonglong)_DAT_147bdd5bc != 0) {
      func_0x000145f40560(lVar10,_DAT_147bdd5c0,(ulonglong)_DAT_147bdd5bc << 2);
    }
    if (_DAT_147bdd5c0 != 0) {
      func_0x000144d9c130();
    }
    uVar8 = (ulonglong)_DAT_147bdd5bc;
    _DAT_147bdd5b8 = uVar7;
    _DAT_147bdd5c0 = lVar10;
  }
  _DAT_147bdd5bc = (int)uVar8 + 1;
  *(uint *)(_DAT_147bdd5c0 + uVar8 * 4) = uVar11;
LAB_140151d6e:
  iRam0000000147bdd5d8 = iRam0000000147bdd5d8 + -1;
  uVar8 = uRam0000000147bdd5c8;
  if (iRam0000000147bdd5d8 == 0) {
    do {
      uVar9 = uVar8;
      LOCK();
      uVar8 = uVar9;
      uVar4 = (ulonglong)((int)uVar9 - 1) | 0xffffffff00000000;
      if (uVar9 != uRam0000000147bdd5c8) {
        uVar8 = uRam0000000147bdd5c8;
        uVar4 = uRam0000000147bdd5c8;
      }
      uRam0000000147bdd5c8 = uVar4;
      UNLOCK();
    } while (uVar9 != uVar8);
    if ((uVar9 & 0xfffffffe) != 0) {
      lStack_20 = lRam0000000147bdd5d0;
      iRam0000000147bdd5d8 = 0;
      do {
        while (lStack_20 < 0) {
          cVar6 = FUN_1400062d0(0x147bdd5d0,1,&lStack_20);
          if (cVar6 != '\0') {
            return;
          }
        }
        LOCK();
        lVar10 = lStack_20;
        lVar5 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam0000000147bdd5d0) {
          lVar10 = lRam0000000147bdd5d0;
          lVar5 = lRam0000000147bdd5d0;
        }
        lRam0000000147bdd5d0 = lVar5;
        UNLOCK();
        bVar12 = lStack_20 != lVar10;
        lStack_20 = lVar10;
      } while (bVar12);
      return;
    }
  }
  return;
}

