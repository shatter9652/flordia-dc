// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc0d0  size: 596 bytes
// Name:    FUN_1401cc0d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f86e10, FUN_144f86dc0, FUN_1453359e0, FUN_144dd3330, FUN_145086440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401cc0d0(longlong param_1,longlong param_2)

{
  byte bVar1;
  double dVar2;
  char cVar3;
  double *pdVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  double *pdVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined4 uStack_74;
  undefined1 auStack_70 [80];
  
  pdVar4 = (double *)func_0x000140321bf0(*(undefined2 *)(param_1 + 8));
  auVar11 = ZEXT464(_DAT_145fc6f48);
  if (pdVar4 == (double *)0x0) {
    return (ulonglong)_DAT_145fc6f48;
  }
  lVar5 = FUN_145086440(*(undefined4 *)(param_2 + 8),auStack_70,0x1d);
  if (lVar5 == 0) {
    return auVar11._0_8_;
  }
  lVar6 = FUN_1453359e0(param_1);
  if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0xd0) != lVar5)) {
    bVar1 = *(byte *)(param_1 + 0x64d);
    uVar7 = bVar1 & 0xf;
    uVar9 = (ulonglong)(uVar7 << 4);
    if (*(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5) {
      pdVar8 = (double *)(param_1 + 0x4e8 + uVar9);
LAB_1401cc2b4:
      dVar2 = *pdVar4 - *pdVar8;
      auVar11 = ZEXT864((ulonglong)dVar2);
      if ((dVar2 != _DAT_14615a8f0) || (NAN(dVar2) || NAN(_DAT_14615a8f0))) goto LAB_1401cc2c4;
    }
    else {
      lVar6 = param_1 + 0x4e8;
      uVar9 = (ulonglong)((bVar1 - 1 & 0xf) << 4);
      if ((((*(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5) ||
           (uVar9 = (ulonglong)((bVar1 + 0xe & 0xf) << 4),
           *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5)) ||
          (uVar9 = (ulonglong)((bVar1 + 0xd & 0xf) << 4),
          *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5)) ||
         (((uVar9 = (ulonglong)((bVar1 + 0xc & 0xf) << 4),
           *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5 ||
           (uVar9 = (ulonglong)((bVar1 + 0xb & 0xf) << 4),
           *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5)) ||
          ((uVar9 = (ulonglong)((bVar1 + 10 & 0xf) << 4),
           *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5 ||
           (uVar9 = (ulonglong)((bVar1 + 9 & 0xf) << 4),
           *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5)))))) {
        pdVar8 = (double *)(lVar6 + uVar9);
        goto LAB_1401cc2b4;
      }
      uVar9 = (ulonglong)((uVar7 ^ 8) << 4);
      if (((*(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5) ||
          (uVar9 = (ulonglong)((bVar1 + 7 & 0xf) << 4),
          *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5)) ||
         ((uVar9 = (ulonglong)((bVar1 + 6 & 0xf) << 4),
          *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5 ||
          ((((uVar9 = (ulonglong)((bVar1 + 5 & 0xf) << 4),
             *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5 ||
             (uVar9 = (ulonglong)((bVar1 + 4 & 0xf) << 4),
             *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5)) ||
            (uVar9 = (ulonglong)((bVar1 + 3 & 0xf) << 4),
            *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5)) ||
           (uVar9 = (ulonglong)((bVar1 + 2 & 0xf) << 4),
           *(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5)))))) {
        pdVar8 = (double *)(lVar6 + uVar9);
        goto LAB_1401cc2b4;
      }
      uVar9 = (ulonglong)((bVar1 + 1 & 0xf) << 4);
      if (*(longlong *)(param_1 + 0x4f0 + uVar9) == lVar5) {
        pdVar8 = (double *)(lVar6 + uVar9);
        goto LAB_1401cc2b4;
      }
    }
    uVar9 = (ulonglong)*(uint *)(param_2 + 0x10);
  }
  else {
    auVar11 = ZEXT1664(ZEXT816(0));
LAB_1401cc2c4:
    FUN_144f86dc0(auStack_70);
    FUN_144dd3330(*(undefined4 *)(param_2 + 0xc),&uStack_74);
    cVar3 = FUN_144f86e10(auStack_70,uStack_74);
    if (cVar3 == '\0') {
      uVar9 = (ulonglong)_DAT_145fc6f48;
    }
    else {
      auVar10._0_4_ = (float)auVar11._0_8_;
      auVar10._4_12_ = auVar11._4_12_;
      uVar9 = func_0x000144d9ff70(auStack_70,auVar10._0_8_);
    }
  }
  return uVar9;
}

