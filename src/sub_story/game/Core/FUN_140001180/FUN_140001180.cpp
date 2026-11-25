// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001180  size: 116 bytes
// Name:    FUN_140001180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400028d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140001180(longlong param_1)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  char cVar10;
  byte bVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  
  lVar13 = func_0x00014073f790(*(undefined8 *)(param_1 + 0x18));
  if ((lVar13 != 0) &&
     (cVar10 = func_0x00014501bbd0(*(undefined4 *)(lVar13 + 0x70),*(undefined1 *)(lVar13 + 0xc0)),
     cVar10 != '\0')) {
    lVar7 = param_1 + 0x20;
    bVar11 = FUN_1400028d0(lVar13 + 0x10,lVar7);
    *(byte *)(param_1 + 0x196) = bVar11 ^ 1;
    auVar21 = vcmpps_avx(*(undefined1 (*) [16])(param_1 + 0x60),
                         *(undefined1 (*) [16])(lVar13 + 0x50),0);
    uVar12 = vmovmskps_avx(auVar21);
    if ((~(byte)uVar12 & 7) != 0) {
      uVar9 = *(undefined8 *)(lVar13 + 0x58);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar13 + 0x50);
      *(undefined8 *)(param_1 + 0x68) = uVar9;
    }
    FUN_144fdafd0(param_1 + 0x70,lVar13 + 0x60);
    if ((((*(longlong *)(lVar13 + 0x88) != *(longlong *)(param_1 + 0x98)) ||
         (*(short *)(lVar13 + 0x90) != *(short *)(param_1 + 0xa0))) ||
        (*(char *)(lVar13 + 0x92) != *(char *)(param_1 + 0xa2))) ||
       (*(char *)(lVar13 + 0x93) != *(char *)(param_1 + 0xa3))) {
      uVar9 = *(undefined8 *)(lVar13 + 0x90);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar13 + 0x88);
      *(undefined8 *)(param_1 + 0xa0) = uVar9;
    }
    if (*(int *)(lVar13 + 0xa8) != *(int *)(param_1 + 0xb8)) {
      *(int *)(param_1 + 0xb8) = *(int *)(lVar13 + 0xa8);
    }
    if (*(char *)(lVar13 + 0xc0) != *(char *)(param_1 + 0xd0)) {
      *(char *)(param_1 + 0xd0) = *(char *)(lVar13 + 0xc0);
    }
    if (*(char *)(param_1 + 0xe8) != *(char *)(lVar13 + 0xd8)) {
      *(char *)(param_1 + 0xe8) = *(char *)(lVar13 + 0xd8);
    }
    if (*(int *)(lVar13 + 0xf0) != *(int *)(param_1 + 0x100)) {
      *(int *)(param_1 + 0x100) = *(int *)(lVar13 + 0xf0);
    }
    if (lVar7 != lVar13 + 0x10) {
      FUN_144fdb1c0(param_1 + 0x108,*(undefined8 *)(lVar13 + 0x100));
      *(undefined4 *)(param_1 + 0x11c) = 0;
      uVar4 = *(uint *)(lVar13 + 0x10c);
      if ((ulonglong)uVar4 != 0) {
        lVar18 = *(longlong *)(lVar13 + 0x110);
        FUN_1418d8b20(param_1 + 0x118);
        lVar19 = *(longlong *)(param_1 + 0x120);
        lVar16 = 0;
        do {
          puVar17 = (undefined4 *)(lVar19 + lVar16);
          if (puVar17 != (undefined4 *)0x0) {
            *puVar17 = *(undefined4 *)(lVar18 + lVar16);
          }
          lVar16 = lVar16 + 4;
        } while ((ulonglong)uVar4 << 2 != lVar16);
        *(uint *)(param_1 + 0x11c) = uVar4;
      }
    }
    *(undefined1 *)(param_1 + 0x130) = *(undefined1 *)(lVar13 + 0x120);
    *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(lVar13 + 0x118);
    return lVar7;
  }
  *(undefined1 *)(param_1 + 0x196) = 0;
  FUN_144fdb720(param_1 + 0x20,0);
  uVar4 = *(uint *)(param_1 + 0x80);
  if (((((ulonglong)uVar4 & 0x1ffff) != 0x1ffff) &&
      (plVar6 = *(longlong **)((ulonglong)(uVar4 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
      plVar6 != (longlong *)0x0)) &&
     ((uVar5 = *(uint *)(plVar6[5] + ((ulonglong)uVar4 & 0x1ffff) * 4),
      (uVar5 >> 0x11 & 0x3ff) == uVar4 >> 0x16 &&
      (((uVar5 & *(uint *)(plVar6 + 6)) == *(uint *)(plVar6 + 6) && (*plVar6 != 0)))))) {
    *(undefined4 *)(param_1 + 0x80) = 0x1ffff;
  }
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar21;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_140004b40(0x14abbf350);
    plVar6 = _DAT_14abbf370;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      uVar2 = *(ushort *)(param_1 + 0x108);
      uVar4 = *(uint *)(_DAT_14abbf370 + 1);
      lVar13 = _DAT_14abbf370[5];
      lVar7 = *_DAT_14abbf370;
      lVar18 = 0;
      if ((*(byte *)(lVar13 + (ulonglong)(uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0) {
        lVar18 = (ulonglong)(uVar4 * uVar2) + lVar7;
      }
      uVar2 = *(ushort *)(lVar18 + 8);
      if (uVar2 == 0xffff) {
        uVar3 = *(ushort *)(lVar18 + 10);
        *(ushort *)(*(longlong *)(param_1 + 0x110) + 8) = uVar3;
      }
      else {
        uVar3 = *(ushort *)(lVar18 + 10);
        lVar19 = 0;
        if ((*(byte *)(lVar13 + (ulonglong)(uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0) {
          lVar19 = (ulonglong)(uVar4 * uVar2) + lVar7;
        }
        *(ushort *)(lVar19 + 10) = uVar3;
      }
      if (uVar3 != 0xffff) {
        lVar19 = 0;
        if ((*(byte *)(lVar13 + (ulonglong)(uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0) {
          lVar19 = (ulonglong)((uint)uVar3 * (int)plVar6[1]) + *plVar6;
        }
        *(ushort *)(lVar19 + 8) = uVar2;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = lVar18 - lVar7;
      auVar8 = auVar8 / ZEXT416(uVar4);
      LOCK();
      pbVar1 = (byte *)(lVar13 + (auVar8._0_8_ >> 3 & 0x1fffffff));
      *pbVar1 = *pbVar1 & ~(byte)(1 << (auVar8[0] & 7));
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      UNLOCK();
      uVar14 = plVar6[4];
      do {
        *(int *)(*plVar6 + (ulonglong)(uint)((int)plVar6[1] * auVar8._0_4_)) = (int)uVar14;
        LOCK();
        uVar15 = plVar6[4];
        bVar20 = uVar14 == uVar15;
        if (bVar20) {
          plVar6[4] = (uVar14 & 0xffffffff00000000 | auVar8._0_8_ & 0xffffffff) + 0x100000000;
          uVar15 = uVar14;
        }
        UNLOCK();
        uVar14 = uVar15;
      } while (!bVar20);
      if (plVar6[3] != 0) {
        FUN_140189080(plVar6,lVar18);
      }
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
    func_0x000144d9dab0(0x14abbf350);
  }
  lVar13 = 0x800bf800000;
  *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) & 0xfe;
  *(undefined8 *)(param_1 + 0x128) = 0x800bf800000;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    lVar13 = func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  return lVar13;
}

