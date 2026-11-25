// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cbc00  size: 647 bytes
// Name:    FUN_1400cbc00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400cbe90, FUN_1451e8a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400cbc00(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar9 = *(undefined4 *)(param_1 + 0x9c);
  lVar5 = func_0x000144e63d10(uVar9);
  if (lVar5 == 0) {
    lVar6 = func_0x000144fa1860();
    cVar4 = '\0';
  }
  else {
    if ((((*(byte *)(lVar5 + 0xb79) & 8) != 0) &&
        (lVar6 = func_0x0001450021b0(*(undefined8 *)(lVar5 + 0x688)), lVar6 != 0)) ||
       (lVar6 = FUN_1451e8a50(*(undefined8 *)(lVar5 + 8),0), lVar6 != 0)) {
LAB_1400cbde3:
      if (*(char *)(lVar6 + 0x30) != '\x04') {
        if (*(char *)(lVar6 + 0x30) == '\x02') {
          return 0x2000001484;
        }
        return 0x2000001404;
      }
      uVar9 = *(undefined4 *)(lVar6 + 0x9c);
      lVar5 = func_0x000144dd11e0(uVar9);
      uVar7 = 0x2000003404;
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x306) & 0x10) != 0)) {
        uVar7 = 0x2000003444;
      }
      lVar5 = func_0x0001450ed6c0(uVar9);
      if (lVar5 == 0) {
        return uVar7;
      }
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        return uVar7;
      }
      if (*(char *)(*(longlong *)(lVar5 + 0x10) + 0x30) != '\x02') {
        return uVar7;
      }
      return uVar7 | 0x80;
    }
    uVar1 = *(uint *)(lVar5 + 0x984);
    if (uVar1 != 0x1ffff) {
      uVar10 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
      if ((~uVar10 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0) {
        uVar10 = uVar10 & 0x7fe0000;
        if (((uVar10 == (uVar1 & 0xfffe0000)) && (lVar8 = *_DAT_14abbe8c8, lVar8 != 0)) &&
           (lVar3 = _DAT_14abbe8c8[1],
           lVar6 = func_0x0001451ee110(*(undefined8 *)(lVar5 + 0x9a0),uVar1 & 0xfffe0000,uVar10,0),
           lVar8 + (ulonglong)((uVar1 & 0x1ffff) * (int)lVar3) == lVar6)) goto LAB_1400cbde3;
      }
    }
    uVar9 = *(undefined4 *)(param_1 + 0x9c);
    lVar6 = func_0x000144fa1860(uVar9);
    cVar4 = FUN_1400cbe90(*(undefined8 *)(lVar5 + 8));
  }
  uVar7 = 0x2000003404;
  if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0xe59) & 1) != 0)) {
    uVar7 = 0x20020034c4;
  }
  if (cVar4 != '\0') {
    lVar6 = func_0x000144e23bb0(uVar9);
    lVar8 = func_0x0001450ed6c0(uVar9);
    if ((lVar8 == 0) || (lVar8 = *(longlong *)(lVar8 + 0x10), lVar8 == 0)) {
      bVar11 = false;
    }
    else if (*(char *)(lVar8 + 0x30) == '\x02') {
      bVar11 = (byte)(*(char *)(lVar8 + 0xfa) - 9U) < 3;
    }
    else {
      bVar11 = false;
    }
    if (lVar5 == 0) {
      bVar2 = false;
    }
    else {
      auVar13._8_8_ = _DAT_14615ba50;
      auVar13._0_8_ = _DAT_14615ba50;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(lVar5 + 0x234);
      auVar12 = vpand_avx(auVar12,auVar13);
      auVar12 = vpcmpeqd_avx(auVar12,auVar13);
      auVar12 = vpmovsxdq_avx(auVar12);
      bVar2 = (SUB161(auVar12 >> 0x3f,0) & 1) != 0 || auVar12[0xf] < '\0';
    }
    if ((lVar6 == 0) ||
       (cVar4 = func_0x00014082c480(*(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x210),1),
       cVar4 == '\0')) {
      if ((bool)(bVar11 | bVar2)) {
        uVar7 = uVar7 | 0x80;
      }
    }
    else {
      uVar7 = uVar7 | 0x80;
    }
  }
  return uVar7;
}

