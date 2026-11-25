// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7c70  size: 397 bytes
// Name:    FUN_1401a7c70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd5390, FUN_140631d80, FUN_144efaf60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401a7c70(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  bVar1 = *(byte *)(param_1 + 0x91);
  if ((bVar1 & 0x10) == 0) {
    return 1;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 == 0x1ffff) {
LAB_1401a7d0e:
    lVar8 = 0;
    bVar3 = 0;
  }
  else {
    uVar7 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
    if ((((~uVar7 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
        ((uVar7 & 0x7fe0000) != (uVar2 & 0xfffe0000))) || (*_DAT_14abb6918 == 0))
    goto LAB_1401a7d0e;
    lVar8 = *_DAT_14abb6918 + (ulonglong)((uVar2 & 0x1ffff) * (int)_DAT_14abb6918[1]);
    lVar5 = func_0x000144ef6280(*(undefined4 *)(lVar8 + 0x9c));
    if (lVar5 == 0) {
      bVar3 = 1;
    }
    else {
      if ((*(byte *)(lVar5 + 0x7b) & 8) != 0) {
        return 1;
      }
      bVar3 = 1;
      if ((*(byte *)(lVar5 + 0x107) & 8) != 0) {
        return 1;
      }
    }
  }
  lVar5 = _DAT_14ab56e38;
  if ((*(byte *)(param_1 + 0x92) & 0xc) == 0) {
    if ((bVar1 & 10) != 0) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x8c) < 0x10) {
      return 0;
    }
    if (!(bool)(bVar3 ^ 1) && _DAT_14ab56e38 != 0) {
      lVar8 = func_0x000144f20050(*(undefined4 *)(lVar8 + 0x9c));
      if ((lVar8 != 0) && (uVar2 = *(uint *)(lVar8 + 0x340), uVar2 != 0x1ffff)) {
        uVar7 = *(uint *)(_DAT_14a943ce0[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
        if (((((~uVar7 & *(uint *)(_DAT_14a943ce0 + 6)) == 0) &&
             ((uVar7 = uVar7 & 0x7fe0000, uVar7 == (uVar2 & 0xfffe0000) && (*_DAT_14a943ce0 != 0))))
            && (lVar8 = FUN_144efaf60(*_DAT_14a943ce0 +
                                      (ulonglong)((uVar2 & 0x1ffff) * (int)_DAT_14a943ce0[1]),lVar5,
                                      uVar7,0), lVar8 != 0)) &&
           (cVar4 = FUN_144fd5390(*(undefined4 *)(lVar8 + 0x50)), cVar4 != '\0'))
        goto LAB_1401a7d1d;
      }
      fVar9 = (float)FUN_140631d80(param_1,lVar5);
      if (0.0 < fVar9) goto LAB_1401a7d1d;
    }
    uVar6 = 1;
  }
  else {
LAB_1401a7d1d:
    uVar6 = 0;
  }
  return uVar6;
}

