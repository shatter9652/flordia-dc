// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080650  size: 539 bytes
// Name:    FUN_140080650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145570500, FUN_144ffa120, FUN_142d72880, FUN_142d72970, FUN_142d72c50, FUN_145570540, FUN_142d72550, FUN_140113c30, FUN_144d9d7a0, FUN_14034fc10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140080650(ushort *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  uint uVar6;
  ushort uVar7;
  
  *param_1 = 0;
  cVar4 = *(char *)(param_2 + 0x30);
  bVar2 = FUN_145570500(CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar4) & 0xffffffff,
                        *(undefined4 *)(param_2 + 0x9c));
  uVar7 = (ushort)bVar2 << 2;
  *param_1 = uVar7;
  if (((param_3 != 0) && ((~*(uint *)(param_3 + 0xa4) & 0x7ffe) != 0)) &&
     (cVar3 = FUN_144d9d7a0(*(uint *)(param_3 + 0xa0),*(uint *)(param_3 + 0xa0) >> 0x10),
     cVar3 != '\0')) {
    uVar7 = uVar7 | 2;
    *param_1 = uVar7;
  }
  cVar3 = FUN_145570540(*(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xa4),param_3);
  if (cVar3 != '\0') {
    *param_1 = uVar7 | 1;
  }
  if (((cVar4 == '\x03' && param_3 != 0) &&
      (lVar5 = func_0x000144f20050(*(undefined4 *)(param_2 + 0x9c)), lVar5 != 0)) &&
     (lVar5 = FUN_144ffa120(lVar5,param_3), lVar5 != 0)) {
    uVar7 = 0x10;
    if ((_DAT_14a943dd0 <= *(float *)(lVar5 + 0x1dc)) ||
       (uVar7 = 8, _DAT_14a943dcc <= *(float *)(lVar5 + 0x1dc))) {
      *param_1 = *param_1 | uVar7;
    }
  }
  if (param_3 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x30) != '\x03') {
    return;
  }
  cVar4 = FUN_14034fc10(param_2,param_3);
  uVar7 = 0x20;
  if (cVar4 == '\0') {
    cVar4 = FUN_142d72550(param_2,param_3);
    uVar7 = 0x40;
    if (cVar4 == '\0') {
      cVar4 = FUN_140113c30(param_2,param_3);
      uVar7 = 0x80;
      if (cVar4 != '\0') goto LAB_140080787;
    }
    else {
LAB_140080787:
      *param_1 = *param_1 | uVar7;
    }
    cVar4 = FUN_142d72880(param_2,param_3);
    if ((((cVar4 == '\0') ||
         (*(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 1,
         *(char *)(param_3 + 0x30) != '\x03')) ||
        (lVar5 = func_0x000145226dc0(*(undefined4 *)(param_3 + 0x9c)), lVar5 == 0)) ||
       (uVar1 = *(uint *)(lVar5 + 0x664), uVar1 == 0x1ffff)) goto LAB_140080837;
    uVar6 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if ((((~uVar6 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
        (uVar6 = uVar6 & 0x7fe0000, uVar6 != (uVar1 & 0xfffe0000))) || (*_DAT_14abb6918 == 0))
    goto LAB_140080837;
    lVar5 = *_DAT_14abb6918 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]);
    cVar4 = FUN_142d72550(param_2,lVar5,uVar6,0);
    uVar7 = 0x40;
    if (cVar4 == '\0') {
      cVar4 = FUN_140113c30(param_2,lVar5);
      uVar7 = 0x80;
      if (cVar4 == '\0') goto LAB_140080837;
    }
  }
  *param_1 = *param_1 | uVar7;
LAB_140080837:
  cVar4 = FUN_142d72970(param_2,param_3);
  if (cVar4 != '\0') {
    *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 2;
  }
  cVar4 = FUN_142d72c50(*(undefined4 *)(param_2 + 0x9c),param_3);
  if (cVar4 != '\0') {
    *(byte *)((longlong)param_1 + 1) = *(byte *)((longlong)param_1 + 1) | 4;
  }
  return;
}

