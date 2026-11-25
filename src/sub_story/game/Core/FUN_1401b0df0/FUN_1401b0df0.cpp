// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b0df0  size: 1344 bytes
// Name:    FUN_1401b0df0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b1360, FUN_1453d8230, FUN_144ffa120, FUN_1408fc670, FUN_144ef66d0, FUN_1450a0e20, FUN_144f474a0, FUN_145454950, FUN_1401b1330, FUN_144fb8930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401b0df0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  uint *puStack_90;
  uint *puStack_88;
  uint *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 == 0) {
    return 0x1c9;
  }
  lVar8 = func_0x000145226dc0(*(undefined4 *)(param_2 + 0x9c));
  if ((lVar8 != 0) && (uVar7 = *(uint *)(lVar8 + 0x660), uVar7 != 0x1ffff)) {
    uVar1 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar7 & 0x1ffff) * 4);
    if (((~uVar1 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
       ((uVar1 & 0x7fe0000) == (uVar7 & 0xfffe0000))) {
      lVar8 = (ulonglong)((uVar7 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
      goto LAB_1401b0e34;
    }
  }
  lVar8 = 0;
LAB_1401b0e34:
  if ((param_3 != 0) && ((*(byte *)(param_3 + 0xab) & 2) != 0)) {
    return 1;
  }
  cVar4 = FUN_1450a0e20(param_1,param_2);
  if (cVar4 == '\0') {
    if ((lVar8 != 0) && (cVar4 = FUN_1450a0e20(param_1,lVar8), cVar4 != '\0')) {
      return 0x3d9;
    }
    cVar4 = FUN_144f474a0(*(undefined4 *)(param_1 + 0x9c),0);
    if (cVar4 != '\0') {
      return 0x1ee;
    }
    uStack_78 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x78);
    func_0x000144dc3790(&uStack_78,auStack_58);
    auStack_68._4_4_ = _DAT_14615bcf4;
    auStack_68._0_4_ = _DAT_14615bcf4;
    auStack_68._8_4_ = _DAT_14615bcf4;
    auStack_68._12_4_ = _DAT_14615bcf4;
    iVar5 = FUN_144ef66d0(*(undefined8 *)(_DAT_14a9ec5b0 + 0x18),param_1,5,auStack_58,auStack_68,0);
    if (iVar5 < 1) {
      uVar11 = *(undefined4 *)(param_1 + 0x9c);
      lVar9 = func_0x000144f3aef0(uVar11);
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0xa50) != 0)) {
        lVar9 = FUN_1408fc670(*(longlong *)(lVar9 + 0xa50),3);
        if ((lVar9 == 0) || (*(char *)(lVar9 + 0x30) != '\x03')) {
          lVar9 = 0;
        }
        if (lVar9 == param_2) {
          return 0x36c;
        }
        if (((lVar8 != 0) && (lVar9 != 0)) && (lVar9 == lVar8)) {
          return 0x3d8;
        }
        uVar11 = *(undefined4 *)(param_1 + 0x9c);
      }
      lVar9 = func_0x000144ef6380(uVar11);
      if (lVar9 != 0) {
        uVar6 = *(undefined4 *)(lVar9 + 0x18);
        uVar2 = *(undefined8 *)(lVar9 + 0x40);
        cVar4 = FUN_1401b1360(uVar6,uVar2,param_2);
        if (cVar4 != '\0') {
          return 0xa2;
        }
        cVar4 = FUN_1401b1330(uVar6,uVar2,param_2);
        if (cVar4 != '\0') {
          return 0xa2;
        }
        if (lVar8 != 0) {
          cVar4 = FUN_1401b1360(uVar6,uVar2,lVar8);
          if (cVar4 != '\0') {
            return 0x3d7;
          }
          cVar4 = FUN_1401b1330(uVar6,uVar2,lVar8);
          if (cVar4 != '\0') {
            return 0x3d7;
          }
        }
      }
      lVar9 = func_0x000144f20050(uVar11);
      if (lVar9 == 0) {
        return 1;
      }
      FUN_145454950(lVar9,&puStack_90);
      puVar14 = puStack_88;
      while( true ) {
        if (puVar14 == puStack_80) {
          return 1;
        }
        uVar7 = *puVar14;
        uVar12 = (ulonglong)uVar7 & 0x1ffff;
        if (((uVar12 != 0x1ffff) &&
            (plVar3 = *(longlong **)((ulonglong)(uVar7 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
            plVar3 != (longlong *)0x0)) &&
           ((uVar1 = *(uint *)(plVar3[5] + uVar12 * 4), (uVar1 >> 0x11 & 0x3ff) == uVar7 >> 0x16 &&
            (((uVar1 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6) && (*plVar3 != 0)))))) break;
        puVar14 = puVar14 + 1;
      }
      lVar13 = *plVar3 + (ulonglong)(uint)((int)uVar12 * (int)plVar3[1]);
      puStack_90 = puVar14;
      do {
        lVar10 = func_0x000144fab120(*(undefined4 *)(lVar13 + 0x9c));
        if (((lVar10 == 0) ||
            ((cVar4 = func_0x00014042a700(*(undefined8 *)(lVar10 + 8)), cVar4 == '\0' &&
             (cVar4 = FUN_144fb8930(lVar10), cVar4 == '\0')))) &&
           (lVar10 = FUN_144ffa120(lVar9,lVar13), lVar10 != 0)) {
          uVar6 = func_0x000144fd53c0();
          uVar11 = *(undefined4 *)(lVar10 + 0x50);
          uVar7 = func_0x000144dc06d0(uVar11,uVar6);
          if (uVar7 < 0x240c8400) {
            uVar6 = func_0x000144fd53c0();
            uVar7 = func_0x000144dc06d0(uVar11,uVar6);
            if (uVar7 < 10000) {
              uVar11 = *(undefined4 *)(lVar13 + 0x9c);
              cVar4 = FUN_1453d8230(uVar11);
              if ((cVar4 != '\0') && (lVar13 = func_0x0001451e6790(uVar11), lVar13 != 0)) {
                lVar13 = func_0x00014146d7d0(*(undefined8 *)(lVar13 + 0x10));
                if (lVar13 == param_2) {
                  return 0x3cc;
                }
                if (((lVar8 != 0) && (lVar13 != 0)) && (lVar13 == lVar8)) {
                  return 0x3d6;
                }
              }
            }
          }
        }
        do {
          puVar14 = puVar14 + 1;
          if (puVar14 == puStack_80) {
            return 1;
          }
          uVar7 = *puVar14;
          uVar12 = (ulonglong)uVar7 & 0x1ffff;
          iVar5 = (int)uVar12;
          if (((uVar12 == 0x1ffff) ||
              (plVar3 = *(longlong **)((ulonglong)(uVar7 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
              plVar3 == (longlong *)0x0)) ||
             (uVar1 = *(uint *)(plVar3[5] + uVar12 * 4), (uVar1 >> 0x11 & 0x3ff) != uVar7 >> 0x16))
          {
            lVar13 = 0;
          }
          else {
            lVar13 = 0;
            if ((uVar1 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
              lVar13 = (ulonglong)(uint)((int)plVar3[1] * iVar5) + *plVar3;
            }
          }
        } while (lVar13 == 0);
        if (iVar5 == 0x1ffff) {
          return 1;
        }
        plVar3 = *(longlong **)((ulonglong)(uVar7 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
        if (plVar3 == (longlong *)0x0) {
          return 1;
        }
        uVar1 = *(uint *)(plVar3[5] + uVar12 * 4);
        if ((uVar1 >> 0x11 & 0x3ff) != uVar7 >> 0x16) {
          return 1;
        }
        if ((uVar1 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6)) {
          return 1;
        }
        lVar13 = (ulonglong)(uint)((int)plVar3[1] * iVar5) + *plVar3;
      } while (*plVar3 != 0);
      return 1;
    }
  }
  return 0xb6;
}

