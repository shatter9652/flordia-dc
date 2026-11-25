// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b7600  size: 2114 bytes
// Name:    FUN_1400b7600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450e62f0, FUN_144fefc40, FUN_144de6130, FUN_1401d7580, FUN_1452ec9d0, FUN_144f432a0, FUN_1435a2790, FUN_145534fa0, FUN_1452ecf70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b7600(undefined8 *param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  byte bVar17;
  byte bVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined4 uStack_44;
  
  func_0x0001455b0d10();
  *param_1 = &UNK_14646d8b0;
  func_0x0001455c11b0(param_1 + 3);
  uVar5 = _DAT_146159bc0;
  uVar4 = _UNK_14614f7f8;
  uVar15 = _DAT_14614f7f0;
  fVar3 = _DAT_145fc6ed8;
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 6) = auVar21;
  *(undefined1 (*) [16])(param_1 + 8) = ZEXT416((uint)fVar3);
  param_1[10] = uVar5;
  param_1[0xb] = 0;
  param_1[0xc] = uVar15;
  param_1[0xd] = uVar4;
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar21;
  *(undefined1 (*) [16])(param_1 + 0x10) = ZEXT416((uint)fVar3);
  param_1[0x12] = uVar5;
  param_1[0x13] = 0;
  auVar22._4_4_ = _DAT_145fc6ed8;
  auVar22._0_4_ = _DAT_145fc6ed8;
  auVar22._8_4_ = _DAT_145fc6ed8;
  auVar22._12_4_ = _DAT_145fc6ed8;
  param_1[0x14] = uVar15;
  param_1[0x15] = uVar4;
  *(undefined1 (*) [16])(param_1 + 0x16) = auVar21;
  *(undefined1 (*) [16])((longlong)param_1 + 0xbc) = auVar21;
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar21;
  param_1[0x1c] = 0xfffcffff;
  uVar15 = vmovlps_avx(auVar22);
  param_1[0x1d] = uVar15;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3fffff00000000;
  *(undefined1 (*) [16])((longlong)param_1 + 0x104) = auVar21;
  *(undefined8 *)((longlong)param_1 + 0x112) = 0;
  *(byte *)((longlong)param_1 + 0x11a) = *(byte *)((longlong)param_1 + 0x11a) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x11b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffff;
  *(undefined2 *)((longlong)param_1 + 0x121) = 0;
  bVar6 = *(byte *)((longlong)param_1 + 0x123);
  *(byte *)((longlong)param_1 + 0x123) = bVar6 & 0xf0;
  bVar17 = (byte)(*(uint *)(param_2 + 0xb4) >> 0x12) & 0x10;
  *(byte *)((longlong)param_1 + 0x123) = bVar6 & 0xe0 | bVar17;
  bVar18 = (byte)(*(uint *)(param_2 + 0xb4) >> 0x12) & 0x20;
  *(byte *)((longlong)param_1 + 0x123) = bVar6 & 0xc0 | bVar17 | bVar18;
  if (((*(uint *)(param_2 + 0xa0) < 0xfffc0000 & (byte)(*(uint *)(param_2 + 0xa0) >> 0x10) & 1) == 0
      ) && ((*(byte *)(param_2 + 0x94) & 4) == 0)) {
    bVar8 = 0;
  }
  else {
    bVar8 = 0x40;
  }
  *(byte *)((longlong)param_1 + 0x123) = bVar6 & 0x80 | bVar17 | bVar18 | bVar8;
  *(byte *)((longlong)param_1 + 0x123) =
       bVar17 | bVar18 | bVar8 | (*(byte *)(param_2 + 0x94) & 8) << 4;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  *(byte *)((longlong)param_1 + 0x126) = *(byte *)((longlong)param_1 + 0x126) & 0x81;
  bVar6 = *(byte *)((longlong)param_1 + 0x127);
  *(byte *)((longlong)param_1 + 0x127) = bVar6 & 0xe0;
  bVar17 = ((0x1cU >> (*(uint *)(param_2 + 0x30) & 0x1f) & 1) != 0) << 5;
  *(byte *)((longlong)param_1 + 0x127) = bVar6 & 0x80 | bVar17;
  *(byte *)((longlong)param_1 + 0x127) = *(char *)(param_2 + 0x34) * '\x02' & 0x80U | bVar17;
  *(undefined1 *)(param_1 + 0x25) = 0x41;
  *(uint *)((longlong)param_1 + 0x129) = *(uint *)((longlong)param_1 + 0x129) & 0xc0600408;
  *(undefined4 *)((longlong)param_1 + 0x12e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xfffffff;
  *(char *)(param_1 + 0x27) = param_4;
  bVar6 = FUN_144de6130(param_2);
  *(byte *)(param_1 + 0x24) = (byte)(*(uint *)(param_2 + 0xb4) >> 0xe) | bVar6;
  param_1[1] = param_3;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    uVar19 = 0x3fffff;
  }
  else {
    uVar19 = *(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x5c);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar19;
  plVar2 = *(longlong **)(param_2 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    plVar1 = plVar2 + 2;
    *(byte *)((longlong)param_1 + 0x122) = *(byte *)((longlong)plVar2 + 0x99) & 7;
    lVar14 = func_0x000144e8f430(plVar1,_DAT_14999e8fc);
    *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) & 0xfe | lVar14 != 0
    ;
    *(byte *)((longlong)param_1 + 0x125) =
         *(byte *)((longlong)param_1 + 0x125) & 0xfb | (byte)(*(uint *)(plVar2 + 10) >> 0xe) & 4;
    cVar7 = FUN_144f432a0(plVar2);
    *(byte *)((longlong)param_1 + 0x125) = *(byte *)((longlong)param_1 + 0x125) & 0xf7 | cVar7 << 3;
    *(byte *)((longlong)param_1 + 0x126) =
         *(byte *)((longlong)param_1 + 0x126) & 0xbf | (*(byte *)(plVar2 + 10) & 1) << 6;
    bVar6 = *(byte *)((longlong)param_1 + 0x124);
    bVar17 = *(byte *)(plVar2 + 10) >> 4 & 4;
    *(byte *)((longlong)param_1 + 0x124) = bVar6 & 0xfb | bVar17;
    *(byte *)((longlong)param_1 + 299) =
         *(byte *)((longlong)param_1 + 299) & 0xf0 | *(byte *)((longlong)plVar2 + 0x9d) >> 4;
    *(byte *)((longlong)param_1 + 0x124) =
         bVar6 & 0xfa | bVar17 | *(byte *)((longlong)plVar2 + 0x9c) >> 3 & 1;
    *(byte *)((longlong)param_1 + 0x11a) =
         *(byte *)((longlong)param_1 + 0x11a) & 0xfe | *(byte *)((longlong)plVar2 + 0x9e) & 1;
    lVar14 = func_0x000144e8f430(plVar1,_DAT_14999ef14);
    uVar19 = 0;
    *(byte *)((longlong)param_1 + 0x126) =
         *(byte *)((longlong)param_1 + 0x126) & 0xfd | (lVar14 != 0) * '\x02';
    bVar6 = *(byte *)((longlong)plVar2 + 0x99) >> 6 & 1;
    *(byte *)((longlong)param_1 + 0x129) = *(byte *)((longlong)param_1 + 0x129) & 0xfe | bVar6;
    *(byte *)((longlong)param_1 + 0x125) =
         *(byte *)((longlong)param_1 + 0x125) & 0xdf |
         *(byte *)((longlong)plVar2 + 0x84) >> 2 & 0x20;
    if (bVar6 != 0) {
      lVar14 = func_0x000144e8f430(plVar1,_DAT_14999b414);
      if (lVar14 != 0) {
        uVar19 = *(undefined4 *)(lVar14 + 8);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar19;
    *(float *)(param_1 + 0x1e) =
         (*(float *)(param_2 + 0x5c) + _DAT_145fc6ed8) * *(float *)((longlong)plVar2 + 0x2c);
    cVar7 = (**(code **)(*plVar2 + 0x80))(plVar2,0x14876fe60);
    *(byte *)((longlong)param_1 + 0x129) = *(byte *)((longlong)param_1 + 0x129) & 0xdf | cVar7 << 5;
    cVar7 = (**(code **)(*plVar2 + 0x80))(plVar2,0x14876fe80);
    *(byte *)((longlong)param_1 + 0x129) = *(byte *)((longlong)param_1 + 0x129) & 0xbf | cVar7 << 6;
    if ((*(byte *)(plVar2 + 0x13) & 0x10) == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = FUN_1450e62f0((int)plVar2[0xb],*(undefined1 *)((longlong)plVar2 + 0x84));
      bVar6 = bVar6 ^ 1;
    }
    *(byte *)((longlong)param_1 + 0x12a) = *(byte *)((longlong)param_1 + 0x12a) & 0xfe | bVar6;
    uVar15 = func_0x000144e3bfa0(param_2);
    lVar14 = func_0x000144e8f430(uVar15,_DAT_14999ed04);
    if (lVar14 != 0) {
      lVar16 = func_0x000144e8f430(plVar1,_DAT_14999ed44);
      if (lVar16 != 0) {
        *(byte *)((longlong)param_1 + 0x129) = *(byte *)((longlong)param_1 + 0x129) | 4;
        uVar9 = func_0x000141840490(*(undefined8 *)(lVar16 + 0x30),*(undefined2 *)(lVar16 + 0x38),
                                    *(undefined4 *)(lVar14 + 8));
        *(undefined2 *)((longlong)param_1 + 0x11c) = uVar9;
      }
    }
    *(byte *)((longlong)param_1 + 300) =
         *(byte *)((longlong)param_1 + 300) & 0xfe | *(byte *)((longlong)plVar2 + 0x9c) >> 5 & 1;
    bVar6 = (**(code **)(*plVar2 + 0x80))(plVar2,0x149a9f780);
    lVar14 = func_0x000144e8f430(plVar1,_DAT_14999ad7c);
    if (lVar14 == 0) {
      bVar17 = 0;
    }
    else {
      bVar17 = (*(int *)(lVar14 + 8) == -0x4d9405a3) << 6;
      bVar6 = bVar6 | *(int *)(lVar14 + 8) == 0x5ce031c5;
    }
    lVar14 = func_0x000144e8f430(plVar1,_DAT_14999acbc);
    bVar18 = lVar14 != 0 | bVar6;
    if ((lVar14 != 0) && (bVar6 == 0)) {
      bVar18 = *(int *)(lVar14 + 8) == 0x3e8d1ccc;
    }
    *(byte *)((longlong)param_1 + 0x12a) =
         *(byte *)((longlong)param_1 + 0x12a) & 0x3f | bVar18 << 7 | bVar17;
    func_0x000144f43730(*(undefined4 *)((longlong)plVar2 + 0x5c),&uStack_44);
    FUN_144fefc40((longlong)param_1 + 0x134,uStack_44,2);
    FUN_1435a2790(param_1,plVar2);
  }
  if (param_3 != 0) {
    if ((*(longlong *)(param_3 + 0x10) == 0) ||
       ((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x30) & 1) == 0)) {
      bVar6 = 0;
    }
    else {
      cVar7 = *(char *)(param_1 + 0x27);
      bVar6 = 0;
      if ((cVar7 != '\x06') && (bVar6 = 0, cVar7 != '\x1b')) {
        bVar6 = (cVar7 != '\b') << 3;
      }
    }
    bVar17 = *(byte *)((longlong)param_1 + 0x124);
    *(byte *)((longlong)param_1 + 0x124) = bVar17 & 0xf7 | bVar6;
    if (*(longlong *)(param_3 + 0x10) == 0) {
      bVar18 = 0;
    }
    else {
      bVar18 = (*(byte *)(*(longlong *)(param_3 + 0x10) + 0x30) & 2) << 3;
    }
    *(byte *)((longlong)param_1 + 0x124) = bVar17 & 0xe7 | bVar6 | bVar18;
    lVar14 = *(longlong *)(param_3 + 0x10);
    if (lVar14 == 0) {
      bVar8 = 0;
    }
    else {
      cVar7 = FUN_1401d7580(*(undefined8 *)(lVar14 + 0x10),*(undefined2 *)(lVar14 + 0x18),0x6863ee2e
                           );
      bVar8 = cVar7 << 5;
    }
    bVar8 = bVar17 & 199 | bVar6 | bVar18 | bVar8;
    *(byte *)((longlong)param_1 + 0x124) = bVar8;
    lVar14 = *(longlong *)(param_3 + 0x10);
    if (lVar14 == 0) {
      bVar6 = 0;
    }
    else {
      cVar7 = FUN_1401d7580(*(undefined8 *)(lVar14 + 0x10),*(undefined2 *)(lVar14 + 0x18),0xbb3f3b38
                           );
      bVar6 = cVar7 << 6;
    }
    *(byte *)((longlong)param_1 + 0x124) = bVar8 & 0xbf | bVar6;
    lVar14 = *(longlong *)(param_3 + 0x10);
    if (lVar14 == 0) {
      bVar6 = 0;
    }
    else {
      cVar7 = FUN_1401d7580(*(undefined8 *)(lVar14 + 0x10),*(undefined2 *)(lVar14 + 0x18),0x15012cbe
                           );
      bVar6 = cVar7 << 4;
    }
    lVar14 = param_3 + 0x20;
    bVar6 = *(byte *)((longlong)param_1 + 0x12a) & 0xef | bVar6;
    *(byte *)((longlong)param_1 + 0x12a) = bVar6;
    sVar10 = FUN_145534fa0(lVar14,9);
    sVar11 = FUN_145534fa0(lVar14,10);
    sVar12 = FUN_145534fa0(lVar14);
    bVar18 = 3;
    *(ushort *)((longlong)param_1 + 0x14) =
         ((ushort)*(undefined4 *)((longlong)param_1 + 0x14) & 0x8000) + 7 +
         ((sVar12 << 9 | sVar11 << 6 | sVar10 << 3) & 0x7ff8U);
    bVar17 = *(byte *)((longlong)param_1 + 0x127) & 0xfc;
    *(byte *)((longlong)param_1 + 0x127) = bVar17;
    if (((*(longlong *)(param_3 + 0x68) == 0) && (bVar18 = 2, *(longlong *)(param_3 + 0x60) == 0))
       && (bVar18 = 1, *(longlong *)(param_3 + 0x58) == 0)) {
      uVar20 = 0;
    }
    else {
      uVar20 = (uint)bVar18;
      *(byte *)((longlong)param_1 + 0x127) = bVar17 | bVar18;
    }
    bVar17 = *(byte *)(param_1 + 0x25);
    *(byte *)(param_1 + 0x25) = bVar17 & 0x8f;
    if ((*(char *)(param_2 + 0x30) != '\x01') || ((*(ushort *)(param_2 + 0x96) & 0xf) == 5)) {
      uVar13 = FUN_1452ec9d0(0x2001,lVar14);
      bVar18 = (char)uVar13 << 4;
      if (uVar20 < uVar13) {
        bVar18 = 0x40;
      }
      if ((int)uVar13 < 0) {
        bVar18 = 0x40;
      }
      *(byte *)(param_1 + 0x25) = bVar17 & 0x8f | bVar18;
    }
    if (plVar2 != (longlong *)0x0) {
      if ((param_4 != '\x02') && (param_4 != '\x17')) {
        bVar17 = FUN_1452ecf70(plVar2);
        bVar6 = *(byte *)((longlong)param_1 + 0x12a);
        bVar18 = *(byte *)(param_1 + 0x25) >> 4 & 7;
        if (bVar17 < bVar18) {
          bVar17 = bVar18;
        }
        *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0x8f | bVar17 << 4;
      }
      cVar7 = func_0x0001451f9a70(plVar2[10]);
      bVar6 = bVar6 & 0xf7 | cVar7 << 3;
      *(byte *)((longlong)param_1 + 0x12a) = bVar6;
    }
    bVar17 = (byte)(*(ushort *)(param_2 + 0x32) >> 8) & 0x20;
    if ((*(ushort *)(param_2 + 0x32) >> 0xc & 1) == 0) {
      bVar17 = 0;
    }
    *(byte *)((longlong)param_1 + 0x12a) = bVar6 & 0xdf | bVar17;
    if ((*(longlong *)(param_3 + 0x10) != 0) &&
       (plVar2 = (longlong *)**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x10),
       plVar2 != (longlong *)0x0)) {
      *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)(*plVar2 + 0xd10);
    }
  }
  return param_1;
}

