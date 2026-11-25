// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008eee0  size: 3916 bytes
// Name:    FUN_14008eee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de6130, FUN_1451d9de0, FUN_1401d7580, FUN_1400c69e0, FUN_140a960c0, FUN_144ecaa30, FUN_144f41080, FUN_144d9d7a0, FUN_144f515e0, FUN_144f60c90, FUN_144f57030, FUN_144ff5d30, FUN_1420ab2c0, FUN_145238060, FUN_1455c70f0, FUN_144e46230, FUN_145094fa0, FUN_144de6230, FUN_1443c70b0, FUN_144f3f640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008eee0(longlong *param_1,longlong *param_2,undefined4 param_3,ulonglong param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ushort uVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  byte bVar21;
  uint uVar22;
  undefined7 uVar23;
  byte *pbVar24;
  bool bVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  byte bStack_129;
  undefined4 uStack_128;
  ushort uStack_122;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong lStack_118;
  ulonglong uStack_110;
  uint auStack_108 [12];
  undefined1 auStack_d8 [16];
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auVar41 [64];
  
  lStack_118 = param_2[4];
  uVar20 = *(uint *)(param_2 + 0x12);
  uVar15 = 0xff;
  if (-1 < (char)uVar20) {
    uVar15 = uVar20 * 2 & 0xff;
  }
  if (*(short *)((longlong)param_2 + 0x92) == -1) {
    uVar15 = uVar20;
  }
  *(char *)((longlong)param_1 + 0x121) = (char)uVar15;
  bVar2 = *(byte *)((longlong)param_1 + 0x127) & 0xbf |
          *(byte *)((longlong)param_2 + 0x95) >> 1 & 0x40;
  *(byte *)((longlong)param_1 + 0x127) = bVar2;
  uVar17 = (ulonglong)CONCAT31((int3)(uVar15 >> 8),*(undefined1 *)((longlong)param_1 + 0x129)) &
           0xffffffffffffffef;
  *(byte *)((longlong)param_1 + 0x129) =
       (byte)uVar17 | (*(byte *)((longlong)param_2 + 0x95) & 2) << 3;
  bVar3 = *(byte *)((longlong)param_1 + 0x123);
  *(byte *)((longlong)param_1 + 0x125) =
       *(byte *)((longlong)param_1 + 0x125) & 0xfe |
       (byte)((uint)*(undefined4 *)((longlong)param_2 + 0xb4) >> 0x1f);
  uVar17 = CONCAT71((int7)(uVar17 >> 8),bVar3) & 0xffffffffffffff7f;
  bVar21 = (byte)uVar17 | (*(byte *)((longlong)param_2 + 0x94) & 8) << 4;
  plVar18 = (longlong *)CONCAT71((int7)(uVar17 >> 8),bVar21);
  *(byte *)((longlong)param_1 + 0x123) = bVar21;
  bVar21 = *(byte *)((longlong)param_2 + 0x94) & 4;
  uStack_110 = param_4;
  if ((bVar3 & 0x40) == 0) {
    uStack_128 = 0;
  }
  else {
    uVar20 = *(uint *)(param_2 + 0x14);
    uVar15 = uVar20 >> 0x10;
    cVar4 = FUN_144d9d7a0(uVar20,uVar15);
    if (cVar4 == '\0') {
      cVar4 = '\0';
      if ((0x10 < *(byte *)(param_1 + 0x27)) ||
         ((0x12002U >> (*(byte *)(param_1 + 0x27) & 0x1f) & 1) == 0)) goto LAB_14008f0b7;
      uVar1 = *(uint *)((longlong)param_2 + 0xa4);
      if ((~uVar1 & 0x7ffe) == 0) {
LAB_14008f0b4:
        cVar4 = '\0';
        goto LAB_14008f0b7;
      }
      uVar5 = uVar1 >> 1 & 0x3fff;
      uVar22 = 1 << ((byte)(uVar1 >> 1) & 7);
      plVar18 = (longlong *)(ulonglong)uVar22;
      plVar8 = _DAT_1498e6408;
      if ((uVar1 & 1) == 0) {
        plVar8 = _DAT_1498e6400;
      }
      if (((((uVar22 & *(byte *)(plVar8[5] + (ulonglong)(uVar5 >> 3))) == 0) ||
           (lVar7 = (ulonglong)(uVar5 * (int)plVar8[1]) + *plVar8, lVar7 == 0)) ||
          (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 == 0)) || (*(char *)(lVar7 + 0x30) != '\x01'))
      goto LAB_14008f0b4;
      uVar20 = *(uint *)(lVar7 + 0xf8);
      uVar15 = uVar20 >> 0x10;
      uVar11 = FUN_144d9d7a0(uVar20,uVar15);
      cVar4 = (char)uVar11;
      uStack_128 = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
    }
    else {
LAB_14008f0b7:
      uStack_128 = 0;
    }
    FUN_144ff5d30(auStack_108,uVar20 & 0xffff | uVar15 << 0x10);
    *(uint *)(param_1 + 0x1c) = auStack_108[0];
    bVar2 = *(byte *)((longlong)param_1 + 0x127);
    *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) & 0xfb | cVar4 << 2;
    *(byte *)(param_1 + 0x25) =
         *(byte *)(param_1 + 0x25) & 0xf7 | ((ushort)uVar15 < 0xfffc & (byte)uVar15) << 3;
  }
  if ((bVar2 & 0x20) != 0 || bVar21 != 0) {
    bVar3 = FUN_144de6130(param_2);
    bVar3 = (byte)(*(uint *)((longlong)param_2 + 0xb4) >> 0xe) | bVar3;
    *(byte *)(param_1 + 0x24) = bVar3;
    if (bVar21 != 0) {
      *(byte *)(param_1 + 0x24) = bVar3 | 8;
    }
  }
  bVar3 = *(byte *)(param_2 + 6);
  if (((bVar3 == 10) && (lVar7 = param_2[0x20], lVar7 != 0)) && (*(char *)(lVar7 + 0x30) == '\x04'))
  {
    uVar6 = *(undefined4 *)(lVar7 + 0x9c);
    lVar7 = FUN_144de6230(uVar6);
    if (((lVar7 != 0) && (*(char *)(lVar7 + 0x30) == '\x03')) &&
       ((lVar7 = func_0x000144e34260(uVar6), lVar7 != 0 && ((*(byte *)(lVar7 + 0x65) & 0x10) != 0)))
       ) {
      *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 1;
    }
  }
  if (((*(byte *)((longlong)param_1 + 0x126) & 0x10) != 0) && ((0x1cU >> (bVar3 & 0x1f) & 1) != 0))
  {
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x9c);
    if ((bVar3 == 4) && (lVar7 = func_0x000144fa4a90(uVar6), lVar7 != 0)) {
      uVar17 = CONCAT71((int7)((ulonglong)lVar7 >> 8),*(undefined1 *)(lVar7 + 0x178)) &
               0xffffffffffffff10;
      uStack_120 = (undefined4)CONCAT71((int7)(uVar17 >> 8),(byte)uVar17 >> 4);
    }
    else {
      uStack_120 = 0;
    }
    uStack_11c = uVar6;
    plVar8 = (longlong *)FUN_144de6230(uVar6);
    if (plVar8 == (longlong *)0x0) {
      bVar25 = false;
LAB_14008f21f:
      lVar7 = FUN_144f515e0(param_2);
      if (*(char *)(lVar7 + 0x30) == '\x02') {
        plVar9 = (longlong *)FUN_144f515e0(param_2);
      }
      else {
        plVar9 = (longlong *)0x0;
      }
    }
    else {
      bVar25 = (char)plVar8[6] == '\x03';
      plVar9 = plVar8;
      if ((char)plVar8[6] != '\x02') goto LAB_14008f21f;
    }
    plVar10 = param_2;
    if (bVar3 == 2) goto LAB_14008f3fb;
    if ((bool)(~bVar25 & bVar3 != 3)) {
      if (plVar9 != (longlong *)0x0) {
        cVar4 = func_0x000144ed3530(plVar9[4],*(undefined1 *)((longlong)plVar9 + 0xfa));
        plVar10 = plVar9;
        if (cVar4 == '\0') goto LAB_14008f3fb;
        if (bVar3 == 4) {
          lVar7 = func_0x0001450d94f0(uStack_11c);
          if (lVar7 != 0) {
            uVar20 = *(uint *)(lVar7 + 0x50);
            uVar17 = (ulonglong)uVar20 & 0x1ffff;
            if ((uVar17 == 0x1ffff) ||
               (plVar18 = *(longlong **)((ulonglong)(uVar20 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
               plVar18 == (longlong *)0x0)) {
              plVar8 = (longlong *)0x0;
            }
            else {
              uVar15 = *(uint *)(plVar18[5] + uVar17 * 4);
              plVar8 = (longlong *)0x0;
              if (uVar20 >> 0x16 == (uVar15 >> 0x11 & 0x3ff) &&
                  (uVar15 & *(uint *)(plVar18 + 6)) == *(uint *)(plVar18 + 6)) {
                plVar8 = (longlong *)((ulonglong)(uint)((int)plVar18[1] * (int)uVar17) + *plVar18);
              }
            }
            if (plVar8 == plVar9) {
              lVar7 = func_0x000144f37d50(*(undefined4 *)(lVar7 + 0x54),
                                          *(undefined4 *)(lVar7 + 0x58));
              if (lVar7 != 0) {
                if ((*(int *)(lVar7 + 0x9c) == 0x232d2b5f) ||
                   (*(int *)(lVar7 + 0x9c) == -0x53766df3)) goto LAB_14008f3f3;
                uVar20 = *(uint *)((longlong)param_1 + 0xc4);
                lVar7 = func_0x000144e681d0(*(undefined4 *)((longlong)plVar9 + 0x9c));
                if (lVar7 == 0) {
                  if ((uVar20 >> 0x11 & 1) == 0) goto LAB_14008fdd3;
                }
                else if (((*(byte *)(lVar7 + 0x4ea) >> 4 ^ *(byte *)(lVar7 + 0x4ea) >> 3) & 1) != 0
                         || (uVar20 >> 0x11 & 1) == 0) {
LAB_14008fdd3:
                  lStack_b8 = param_2[0xe];
                  lStack_b0 = param_2[0xf];
                  func_0x000144dc3790(&lStack_b8,auStack_108);
                  FUN_1400c69e0(auStack_108,1,0,0);
                  goto LAB_14008f3f3;
                }
                goto LAB_14008f3fb;
              }
            }
          }
          lStack_c8 = param_2[0xe];
          lStack_c0 = param_2[0xf];
          func_0x000144dc3790(&lStack_c8,auStack_108);
          FUN_1400c69e0(auStack_108,1,0,0);
          FUN_144f60c90((longlong)param_1 + 0xc4);
        }
        else {
LAB_14008f3f3:
          func_0x000144f60ce0((longlong)param_1 + 0xc4);
        }
LAB_14008f3fb:
        uVar20 = *(uint *)((longlong)param_1 + 0xc4) & 0xfff800ff;
        *(uint *)((longlong)param_1 + 0xc4) = uVar20;
        goto LAB_14008f416;
      }
      uVar20 = *(uint *)((longlong)param_1 + 0xc4) & 0xfff800ff;
      *(uint *)((longlong)param_1 + 0xc4) = uVar20;
    }
    else {
      puVar16 = (uint *)((longlong)param_1 + 0xc4);
      if (!bVar25) {
        plVar8 = param_2;
      }
      func_0x000144e552d0(*(undefined4 *)(plVar8[5] + 0xc4));
      func_0x000144f60ce0(puVar16);
      if (plVar9 == (longlong *)0x0) {
        lVar7 = func_0x000144e726b0(*(undefined4 *)((longlong)plVar8 + 0x9c));
        plVar9 = (longlong *)func_0x0001455b38f0(*(undefined4 *)(lVar7 + 0x350));
      }
      if ((char)*puVar16 != '\0') {
        *(byte *)((longlong)param_1 + 0x125) = *(byte *)((longlong)param_1 + 0x125) | 0x10;
      }
      uVar20 = *puVar16 & 0xfff800ff;
      *puVar16 = uVar20;
      plVar10 = plVar9;
      if (plVar9 != (longlong *)0x0) {
LAB_14008f416:
        puVar16 = (uint *)((longlong)param_1 + 0xc4);
        cVar4 = func_0x000144ed3530(plVar10[4],*(undefined1 *)((longlong)plVar10 + 0xfa));
        if (cVar4 != '\0') {
          lVar7 = func_0x000144ec8c40(*(undefined4 *)((longlong)plVar10 + 0x9c));
          if (lVar7 != 0) {
            func_0x0001455bf1f0(puVar16);
            uVar20 = *puVar16;
          }
          uVar20 = (uint)(plVar10 == _DAT_1492e11b0) * 0x10000 + 0x20000 + (uVar20 & 0xfffcffff);
          *puVar16 = uVar20;
        }
        if (plVar10[5] == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = (uint)(*(byte *)(plVar10[5] + 0xb60) & 0x10) << 0xe;
        }
        uVar20 = uVar20 & 0xfffbffff | uVar15;
        *puVar16 = uVar20;
      }
    }
    if (*(uint *)(param_1 + 0x19) != uVar20) {
      uVar11 = func_0x0001450705c0(param_1);
      func_0x00014204d1b0(uVar11,uVar20);
      uVar20 = *(uint *)((longlong)param_1 + 0xc4);
    }
    *(uint *)(param_1 + 0x19) = uVar20;
    if ((char)uStack_120 == '\0' && (*(byte *)((longlong)param_1 + 0x125) & 0x10) != 0) {
      *(byte *)(param_1 + 0x24) = (*(byte *)(param_1 + 0x24) & 0xf8) + 1;
    }
  }
  uVar17 = uStack_110;
  if ((*(byte *)((longlong)param_1 + 0x129) & 4) != 0) {
    uVar11 = func_0x000144e3bfa0(param_2);
    lVar7 = func_0x000144e8f430(uVar11,_DAT_14999ed04);
    if ((lVar7 != 0) &&
       (lVar12 = func_0x000144e8f430(lStack_118 + 0x10,_DAT_14999ed44), lVar12 != 0)) {
      plVar18 = (longlong *)(ulonglong)*(uint *)(lVar7 + 8);
      uVar20 = func_0x000141840490(*(undefined8 *)(lVar12 + 0x30),*(undefined2 *)(lVar12 + 0x38),
                                   plVar18);
      if (((short)uVar20 == -1) || (cVar4 = func_0x0001420ab2f0(lVar12,uVar20), cVar4 != '\0')) {
        *(short *)((longlong)param_1 + 0x11c) = (short)uVar20;
      }
      else {
        uVar20 = (uint)*(ushort *)((longlong)param_1 + 0x11c);
      }
      FUN_1420ab2c0(*(undefined8 *)(lVar12 + 0x58),uVar20);
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x34) & 8) == 0) {
    auVar31 = vcvtph2ps_f16c(ZEXT416(*(uint *)((longlong)param_2 + 0xc4)));
    fVar26 = auVar31._0_4_;
    auVar32._0_4_ = (uint)fVar26 & _DAT_145fc6f4c;
    auVar32._4_4_ = auVar31._4_4_ & _DAT_145fc6f4c;
    auVar32._8_4_ = auVar31._8_4_ & _DAT_145fc6f4c;
    auVar32._12_4_ = auVar31._12_4_ & _DAT_145fc6f4c;
    auVar31 = vcvtps2ph_f16c(auVar32,4);
    auVar31 = vcvtph2ps_f16c(auVar31);
    uVar14 = (ushort)(int)(auVar31._0_4_ * _DAT_146159f68) & 0xff;
    uVar23 = (undefined7)((ulonglong)plVar18 >> 8);
    if (_DAT_145fc6ed8 < fVar26) {
      uVar14 = 0xff;
    }
    if (fVar26 < _DAT_145fc6f48) {
      uVar14 = 0xff;
    }
    plVar18 = (longlong *)(ulonglong)(*(uint *)(param_1 + 0x23) & 0xfffff700);
    *(ushort *)(param_1 + 0x23) =
         (ushort)(fVar26 < _DAT_145fc6f48 || fVar26 <= _DAT_145fc6ed8 && fVar26 < 0.0) << 0xb |
         (ushort)(*(uint *)(param_1 + 0x23) & 0xfffff700) | uVar14;
  }
  else {
    func_0x0001455bf060(param_2);
    uVar23 = 0;
    plVar18 = param_2;
    FUN_144f41080(param_1,param_2,0);
    cVar4 = FUN_144ecaa30(param_2);
    *(byte *)((longlong)param_1 + 0x129) =
         *(byte *)((longlong)param_1 + 0x129) & 0xfd | cVar4 * '\x02';
  }
  if (((char)param_2[6] != '\x02') || ((DAT_14908f6fa & 1) == 0)) {
    if ((*(byte *)((longlong)param_1 + 0x123) & 1) == 0) {
      FUN_145238060();
    }
    else {
      if ((*(byte *)((longlong)param_1 + 0x123) & 2) == 0) {
        (**(code **)(*param_1 + 0x150))(param_1,param_2,CONCAT71(uVar23,1));
      }
      plVar18 = param_2;
      (**(code **)(*param_1 + 0x158))();
      if (((_DAT_1498e6428 | _DAT_1498e6410) & uVar17) != 0) {
        FUN_140a960c0();
      }
    }
  }
  *(byte *)((longlong)param_1 + 0x127) = *(byte *)((longlong)param_1 + 0x127) & 0xf3;
  if (((*(byte *)((longlong)param_1 + 0x12a) & 1) != 0) &&
     ((lVar7 = FUN_145094fa0(), lVar7 != 0 ||
      ((param_1[1] != 0 && (*(longlong *)(param_1[1] + 0x10) != 0)))))) {
    FUN_1443c70b0();
  }
  if ((_DAT_148d7aa28 & uVar17) != 0) {
    lVar7 = func_0x0001450705c0(param_1);
    if (lVar7 == 0) {
      bVar3 = *(byte *)((longlong)param_1 + 0x124);
LAB_14008f6ef:
      plVar18 = (longlong *)0x0;
    }
    else {
      fVar26 = (float)func_0x0001401a8ac0(*(undefined4 *)(lVar7 + 0x24));
      bVar3 = *(byte *)((longlong)param_1 + 0x124);
      if (fVar26 <= 0.0) goto LAB_14008f6ef;
      plVar18 = (longlong *)CONCAT71((int7)((ulonglong)plVar18 >> 8),0x80);
    }
    *(byte *)((longlong)param_1 + 0x124) = bVar3 & 0x7f | (byte)plVar18;
  }
  *(undefined2 *)((longlong)param_1 + 0x12e) = 0xffff;
  param_1[0x22] = 0;
  *(byte *)((longlong)param_1 + 0x12a) = *(byte *)((longlong)param_1 + 0x12a) & 0xfd;
  bVar3 = *(byte *)((longlong)param_1 + 300) & 0xfd;
  *(byte *)((longlong)param_1 + 300) = bVar3;
  uStack_122 = 0x7ff;
  lVar7 = param_1[0x26];
  bStack_129 = 0;
  if ((*(byte *)((longlong)param_1 + 0x123) & 4) == 0) {
    bStack_129 = 0;
    uVar19 = 0;
  }
  else {
    pbVar24 = (byte *)0x0;
    if ((*(byte *)((longlong)param_1 + 0x124) & 0x20) != 0) {
      pbVar24 = &bStack_129;
    }
    puVar16 = (uint *)(param_2 + 0x14);
    if ((char)uStack_128 != '\0') {
      puVar16 = (uint *)(param_1 + 0x1c);
    }
    plVar18 = (longlong *)(ulonglong)*puVar16;
    uVar20 = FUN_144f57030(param_2,plVar18,&uStack_122,pbVar24);
    uVar19 = (ulonglong)uVar20;
    bVar3 = *(byte *)((longlong)param_1 + 300);
  }
  uVar20 = (uint)uVar19;
  *(short *)(param_1 + 0x26) = (short)uVar19;
  bStack_129 = (bVar3 >> 3 | bStack_129) & 1;
  plVar8 = param_2;
  if ((char)param_2[6] == '\x03') {
LAB_14008f7e4:
    if (((plVar8[5] != 0) &&
        (fVar26 = (float)func_0x000144e552d0(*(undefined4 *)(plVar8[5] + 0xc4)),
        _DAT_14615a608 <= fVar26)) &&
       ((lVar12 = func_0x0001435a25b0(*(undefined4 *)((longlong)plVar8 + 0x9c)), lVar12 != 0 &&
        (plVar8 = (longlong *)func_0x0001455b38f0(*(undefined4 *)(lVar12 + 0x350)),
        plVar8 != (longlong *)0x0)))) {
LAB_14008f825:
      if ((plVar8[5] != 0) && ((*(byte *)(plVar8[5] + 0xb60) & 0x10) != 0)) {
        uVar20 = (uint)CONCAT62((int6)(uVar19 >> 0x10),0x1ffd);
        *(undefined2 *)(param_1 + 0x26) = 0x1ffd;
      }
    }
  }
  else if ((((char)param_2[6] == '\x04') &&
           (lVar12 = func_0x000144de6250(*(undefined4 *)((longlong)param_2 + 0x9c)), lVar12 != 0))
          && (plVar8 = *(longlong **)(lVar12 + 0x10), plVar8 != (longlong *)0x0)) {
    if ((char)plVar8[6] == '\x03') goto LAB_14008f7e4;
    if (((char)plVar8[6] != '\x02') || (*(char *)((longlong)param_1 + 0xc4) == '\0'))
    goto LAB_14008f844;
    goto LAB_14008f825;
  }
LAB_14008f844:
  bVar3 = *(byte *)((longlong)param_1 + 0x126);
  if (((bVar3 & 0x10) != 0 && (short)uVar20 != (short)lVar7) &&
     (lVar7 = func_0x0001450705c0(param_1), lVar7 != 0)) {
    plVar18 = (longlong *)(ulonglong)uVar20;
    func_0x00014204d170(lVar7,plVar18,uStack_122);
    bVar3 = *(byte *)((longlong)param_1 + 0x126);
  }
  if (((bVar3 & 0x10) != 0) && (lVar7 = func_0x0001450705c0(param_1), lVar7 != 0)) {
    fVar26 = 0.0;
    if ((*(byte *)((longlong)param_1 + 299) & 0x20) != 0) {
      fVar26 = *(float *)(&UNK_14615f7d0 +
                         (ulonglong)((*(byte *)((longlong)param_1 + 300) & 0x10) == 0) * 4) *
               *(float *)(param_1 + 0x1f);
    }
    func_0x00014557c7b0(lVar7,fVar26);
    uVar19 = CONCAT71((int7)((ulonglong)plVar18 >> 8),*(undefined1 *)((longlong)param_1 + 299)) &
             0xffffffffffffff20;
    func_0x00014557c7a0(lVar7,CONCAT71((int7)(uVar19 >> 8),(byte)uVar19 >> 5));
    func_0x0001437437c0(lVar7,bStack_129);
    func_0x00014557c780(lVar7);
    func_0x000144d9ded0(lVar7,*(byte *)((longlong)param_1 + 299) >> 7);
    uVar6 = 1;
    if ((*(byte *)((longlong)param_1 + 300) & 4) == 0) {
      if ((param_1[1] == 0) || (lVar12 = *(longlong *)(param_1[1] + 0x10), lVar12 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_1401d7580(*(undefined8 *)(lVar12 + 0x10),*(undefined2 *)(lVar12 + 0x18),
                              0x6863ee2e);
      }
    }
    func_0x00014557c790(lVar7,uVar6);
  }
  uVar19 = _DAT_1498e6428;
  uVar13 = _DAT_148d7aa38 | _DAT_148d7aa30 | _DAT_1498e6428;
  if ((0x1cU >> (*(uint *)(param_2 + 6) & 0x1f) & 1) == 0) {
    if ((uVar13 & uVar17) == 0) goto LAB_14008fc14;
  }
  else {
    if ((uVar13 & uVar17) == 0) goto LAB_14008fc14;
    (**(code **)(*param_2 + 0x238))(param_2,auStack_98);
    fVar39 = _DAT_145fc6edc;
    auVar40._0_12_ = ZEXT812(0);
    auVar40._12_4_ = 0;
    auVar41 = ZEXT1664(auVar40);
    auVar38._4_4_ = _DAT_146159bfc;
    auVar38._0_4_ = _DAT_146159bfc;
    auVar38._8_4_ = _DAT_146159bfc;
    auVar38._12_4_ = _DAT_146159bfc;
    auVar31 = vsubps_avx(auStack_88,auStack_98);
    fVar26 = auVar31._0_4_ * _DAT_145fc6edc;
    fVar35 = auVar31._4_4_ * _DAT_145fc6edc;
    fVar36 = auVar31._8_4_ * _DAT_145fc6edc;
    fVar37 = auVar31._12_4_ * _DAT_145fc6edc;
    auVar31._0_4_ = fVar26 * fVar26;
    auVar31._4_4_ = fVar35 * fVar35;
    auVar31._8_4_ = fVar36 * fVar36;
    auVar31._12_4_ = fVar37 * fVar37;
    auVar31 = vblendps_avx(auVar31,auVar40,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar32 = vhaddps_avx(auVar31,auVar31);
    auVar31 = vrsqrtps_avx(auVar32);
    fVar26 = auVar31._0_4_;
    fVar35 = auVar31._4_4_;
    fVar36 = auVar31._8_4_;
    fVar37 = auVar31._12_4_;
    auVar31 = vcmpps_avx(auVar38,auVar32,2);
    auVar33._0_4_ =
         auVar31._0_4_ &
         (uint)(((-(_DAT_145fc6edc * fVar26 * fVar26 * auVar32._0_4_) + _DAT_145fc6edc) * fVar26 +
                fVar26) * auVar32._0_4_);
    auVar33._4_4_ =
         auVar31._4_4_ &
         (uint)(((-(_DAT_145fc6edc * fVar35 * fVar35 * auVar32._4_4_) + _DAT_145fc6edc) * fVar35 +
                fVar35) * auVar32._4_4_);
    auVar33._8_4_ =
         auVar31._8_4_ &
         (uint)(((-(_DAT_145fc6edc * fVar36 * fVar36 * auVar32._8_4_) + _DAT_145fc6edc) * fVar36 +
                fVar36) * auVar32._8_4_);
    auVar33._12_4_ =
         auVar31._12_4_ &
         (uint)(((-(_DAT_145fc6edc * fVar37 * fVar37 * auVar32._12_4_) + _DAT_145fc6edc) * fVar37 +
                fVar37) * auVar32._12_4_);
    uVar6 = vextractps_avx(auVar33,3);
    *(undefined4 *)(param_1 + 0x1e) = uVar6;
    if (((char)param_1[0x27] == '\x14') || ((char)param_1[0x27] == '\x12')) {
      fVar37 = auStack_88._0_4_ + auStack_98._0_4_;
      fVar42 = auStack_88._4_4_ + auStack_98._4_4_;
      fVar43 = auStack_88._8_4_ + auStack_98._8_4_;
      fVar44 = auStack_88._12_4_ + auStack_98._12_4_;
      fVar26 = fVar39;
      fVar35 = fVar39;
      fVar36 = fVar39;
      (**(code **)(*param_1 + 0xc0))(param_1,&fStack_a8);
      fStack_a8 = fVar37 * fVar39 - fStack_a8;
      fStack_a4 = fVar42 * fVar26 - fStack_a4;
      fStack_a0 = fVar43 * fVar35 - fStack_a0;
      fStack_9c = fVar44 * fVar36 - fStack_9c;
      auVar27._0_4_ = fStack_a8 * fStack_a8;
      auVar27._4_4_ = fStack_a4 * fStack_a4;
      auVar27._8_4_ = fStack_a0 * fStack_a0;
      auVar27._12_4_ = fStack_9c * fStack_9c;
      auVar31 = vblendps_avx(auVar27,auVar41._0_16_,8);
      auVar31 = vhaddps_avx(auVar31,auVar31);
      auVar32 = vhaddps_avx(auVar31,auVar31);
      auVar31 = vrsqrtss_avx(auVar32,auVar32);
      fVar26 = auVar31._0_4_;
      auVar31 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar32,2);
      *(float *)(param_1 + 0x1e) =
           (float)(auVar31._0_4_ &
                  (uint)(((fVar26 * fVar26 * auVar32._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                          fVar26 + fVar26) * auVar32._0_4_)) + *(float *)(param_1 + 0x1e);
    }
    auVar31 = *(undefined1 (*) [16])(param_2 + 0xe);
    fVar43 = 0.0;
    fVar44 = 0.0;
    auVar32 = vpunpckhwd_avx(auVar31,auVar31);
    auVar32 = vpsrad_avx(auVar32,0x10);
    auVar32 = vcvtdq2ps_avx(auVar32);
    auVar32 = vshufpd_avx(auVar32,auVar32,3);
    fVar36 = _DAT_146159c90 * auVar32._0_4_ + auVar31._0_4_;
    fVar37 = _UNK_146159c94 * auVar32._4_4_ + auVar31._4_4_;
    fVar39 = auVar32._8_4_ * 0.0 + auVar31._8_4_;
    fVar42 = auVar32._12_4_ * 0.0 + auVar31._12_4_;
    fVar26 = _DAT_146159c90;
    fVar35 = _UNK_146159c94;
    (**(code **)(*param_1 + 0xb8))(param_1,auStack_108);
    auVar31 = vpunpckhwd_avx(auStack_d8,auStack_d8);
    auVar31 = vpsrad_avx(auVar31,0x10);
    auVar31 = vcvtdq2ps_avx(auVar31);
    auVar31 = vshufpd_avx(auVar31,auVar31,3);
    auVar28._0_4_ = fVar36 + (-(fVar26 * auVar31._0_4_) - auStack_d8._0_4_);
    auVar28._4_4_ = fVar37 + (-(fVar35 * auVar31._4_4_) - auStack_d8._4_4_);
    auVar28._8_4_ = fVar39 + (-(fVar43 * auVar31._8_4_) - auStack_d8._8_4_);
    auVar28._12_4_ = fVar42 + (-(fVar44 * auVar31._12_4_) - auStack_d8._12_4_);
    auVar38 = vmovshdup_avx(auVar28);
    auVar27 = vshufpd_avx(auVar28,auVar28,1);
    auVar34._4_4_ = _DAT_14615ca90;
    auVar34._0_4_ = _DAT_14615ca90;
    auVar34._8_4_ = _DAT_14615ca90;
    auVar34._12_4_ = _DAT_14615ca90;
    auVar29._0_4_ = (uint)auVar28._0_4_ & _DAT_145fc6f4c;
    auVar29._4_4_ = (uint)auVar28._4_4_ & _DAT_145fc6f4c;
    auVar29._8_4_ = (uint)auVar28._8_4_ & _DAT_145fc6f4c;
    auVar29._12_4_ = (uint)auVar28._12_4_ & _DAT_145fc6f4c;
    auVar33 = vminss_avx(ZEXT416(_DAT_14615ca90),auVar29);
    auVar31 = vshufps_avx(auVar29,auVar29,0xe9);
    auVar32 = vminps_avx(auVar34,auVar31);
    auVar31 = vmaxss_avx(auVar33,auVar32);
    auVar31 = vmaxss_avx(ZEXT416(_DAT_14615ca94),auVar31);
    auVar40 = vmovshdup_avx(auVar32);
    auVar31 = vmaxss_avx(auVar31,auVar40);
    uVar20 = auVar31._0_4_ + 0x7804000;
    fVar26 = (float)(uVar20 & 0x7f800000);
    uVar13 = CONCAT44(uVar20,uVar20) & 0x7f8000007f800000;
    auVar30._0_4_ = auVar32._0_4_ + (float)uVar13;
    auVar30._4_4_ = auVar32._4_4_ + (float)(uVar13 >> 0x20);
    auVar30._8_4_ = auVar32._8_4_ + fVar26;
    auVar30._12_4_ = auVar32._12_4_ + fVar26;
    auVar31 = vpsllvd_avx2(auVar30,_DAT_14615caa0);
    *(uint *)((longlong)param_1 + 0xf4) =
         (uint)(auVar38._0_4_ < 0.0) << 9 | (uint)(auVar28._0_4_ < 0.0) |
         (uint)(auVar27._0_4_ < 0.0) << 0x12 | (uint)(auVar33._0_4_ + fVar26) & 0x1fe |
         (auVar31._0_4_ | auVar31._4_4_ | (int)fVar26 * 0x10 + 0x10000000U) & 0xfffbfc00;
  }
  auStack_108[0] = auStack_108[0] & 0xffffff00;
  lVar7 = func_0x000144e3eff0(param_2,auStack_108);
  param_1[0x22] = lVar7;
  *(byte *)((longlong)param_1 + 0x12a) =
       *(byte *)((longlong)param_1 + 0x12a) & 0xfd | (char)auStack_108[0] * '\x02';
LAB_14008fc14:
  if (((char)param_1[0x27] == '\x1b') || ((char)param_1[0x27] == '\x06')) {
    bVar3 = 1;
    if ((*(byte *)(param_1 + 0x5a) & 8) == 0) {
      bVar3 = (*(byte *)((longlong)param_1 + 0x33c) & 0x40) >> 6;
    }
  }
  else {
    bVar3 = 0;
  }
  uVar6 = FUN_144f3f640(param_1 + 3);
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  FUN_1451d9de0(param_1,param_2,param_3);
  FUN_1455c70f0(param_2,param_1,uVar17);
  if (((uVar19 & uVar17) != 0) || ((bVar3 != 0 && ((_DAT_148d7aa30 & uVar17) != 0)))) {
    FUN_144e46230(param_1,param_2);
    uVar14 = *(ushort *)((longlong)param_1 + 0x12e);
    if ((ulonglong)uVar14 != 0xffff) {
      uVar20 = *(uint *)(param_2 + 0x14);
      lVar7 = (ulonglong)uVar14 * 0x40 + (ulonglong)uVar14 * 4 + _DAT_148406440;
      cVar4 = FUN_144d9d7a0(uVar20,uVar20 >> 0x10);
      uVar15 = 0;
      if (cVar4 != '\0') {
        uVar15 = (uint)(uVar20 < 0xfffc0000 & (byte)(uVar20 >> 0x10)) << 0x1e;
      }
      uVar15 = uVar15 | *(uint *)(lVar7 + 0x34);
      *(uint *)(lVar7 + 0x34) = uVar15;
      if (uStack_122 != 0x7ff) {
        *(uint *)(lVar7 + 0x34) = uVar15 | (uint)uStack_122 << 0xd | 0x80000000;
      }
      *(uint *)(lVar7 + 0x28) = *(uint *)(lVar7 + 0x28) | (uint)bStack_129 << 3;
    }
  }
  *(byte *)((longlong)param_1 + 0x125) = *(byte *)((longlong)param_1 + 0x125) & 0xfd;
  *(undefined4 *)(param_1 + 2) = param_3;
  return;
}

