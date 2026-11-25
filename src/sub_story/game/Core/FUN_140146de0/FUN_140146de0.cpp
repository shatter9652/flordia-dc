// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140146de0  size: 758 bytes
// Name:    FUN_140146de0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141903010, FUN_140145400, FUN_141704e60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140146de0(longlong param_1)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  uint uStack_30c;
  uint uStack_308;
  uint uStack_304;
  int iStack_2f0;
  uint uStack_2ec;
  longlong lStack_2e8;
  longlong lStack_2e0;
  uint uStack_2d4;
  ulonglong auStack_2c8 [8];
  ulonglong auStack_288 [8];
  ulonglong auStack_248 [8];
  ulonglong auStack_208 [8];
  ulonglong auStack_1c8 [8];
  ulonglong auStack_188 [8];
  undefined1 auStack_148 [136];
  undefined8 uStack_c0;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  lVar16 = *(longlong *)(param_1 + 0x440);
  lVar17 = *(longlong *)(*(longlong *)(lVar16 + 0x38) + 0xf0);
  lVar5 = *(longlong *)(*(longlong *)(lVar16 + 0xc0) + 0xf0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x6a0) * 8)
  ;
  lStack_70 = *(longlong *)(*(longlong *)(lVar16 + 0x90) + 0xf0);
  uStack_c0 = 0x140146e3f;
  FUN_141903010(lStack_70,lVar5,CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),1));
  uStack_c0 = 0x140146e4d;
  FUN_141903010(lVar17,uVar7,1);
  uStack_c0 = 0x140146e65;
  lStack_80 = lVar17;
  lStack_50 = lVar5;
  FUN_141903010(lVar17,lVar5,1);
  uVar13 = *(uint *)(param_1 + 0x5d0);
  if ((int)uVar13 < *(int *)(param_1 + 0x3c)) {
    lVar16 = *(longlong *)(param_1 + 0x440);
    lStack_78 = *(longlong *)(*(longlong *)(lVar16 + 0x50) + 0xf0);
    lStack_60 = *(longlong *)(*(longlong *)(lVar16 + 0x98) + 0xf0);
    lStack_68 = *(longlong *)(*(longlong *)(lVar16 + 0xa8) + 0xf0);
    lVar17 = *(longlong *)(param_1 + 0x40);
    lStack_58 = *(longlong *)(*(longlong *)(lVar16 + 0xb8) + 0xf0);
    lStack_48 = *(longlong *)(*(longlong *)(lVar16 + 0xe0) + 0xf0);
    lVar16 = *(longlong *)(lVar17 + (ulonglong)*(uint *)(param_1 + 0x6c8) * 8);
    lVar5 = *(longlong *)(lVar17 + (ulonglong)*(uint *)(param_1 + 0x6cc) * 8);
    lVar8 = *(longlong *)(lVar17 + (ulonglong)*(uint *)(param_1 + 0x6d0) * 8);
    lStack_88 = *(longlong *)(lVar17 + (ulonglong)*(uint *)(param_1 + 0x5cc) * 8);
    lVar11 = *(longlong *)(lVar17 + (ulonglong)*(uint *)(param_1 + 0x5c0) * 8);
    lStack_90 = *(longlong *)(lVar17 + (ulonglong)*(uint *)(param_1 + 0x5c4) * 8);
    lVar17 = *(longlong *)(lVar17 + (ulonglong)*(uint *)(param_1 + 0x5c8) * 8);
    do {
      lVar10 = *(longlong *)(param_1 + 0x468);
      if (lVar10 == 0) {
LAB_140146f4d:
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar13 * 8);
        if (((((lVar10 != lVar11) && (lVar10 != lStack_48)) && (lVar10 != lStack_50)) &&
            (((lVar10 != lStack_58 && (lVar10 != lStack_60)) &&
             ((lVar10 != lStack_68 && ((lVar10 != lStack_70 && (lVar10 != lStack_78)))))))) &&
           ((lVar10 != lStack_80 && (*(char *)(lVar10 + 0xe0) != '\x03')))) {
          uStack_c0 = 0x140146fd1;
          cVar4 = FUN_140145400(lVar11,lVar10);
          if (cVar4 == '\0') {
            uStack_c0 = 0x140146fee;
            FUN_141704e60(*(undefined8 *)(*(longlong *)(param_1 + 0x468) + 8),uVar13,5);
            if (((((lVar10 != lVar17) && (lVar10 != lStack_90)) && (lVar10 != lStack_88)) &&
                ((lVar10 != lVar8 && (lVar10 != lVar16)))) && (lVar10 != lVar5)) {
              uStack_c0 = 0x140147033;
              cVar4 = FUN_140145400(lVar16,lVar10);
              if (cVar4 == '\0') {
                uStack_c0 = 0x140147042;
                cVar4 = FUN_140145400(lVar5,lVar10);
                if (cVar4 == '\0') {
                  uStack_c0 = 0x140147051;
                  cVar4 = FUN_140145400(lVar8,lVar10);
                  if (cVar4 == '\0') {
                    uStack_c0 = 0x140147062;
                    cVar4 = FUN_140145400(lStack_88,lVar10);
                    if (cVar4 == '\0') {
                      uStack_c0 = 0x140147073;
                      cVar4 = FUN_140145400(lStack_90,lVar10);
                      if (cVar4 == '\0') {
                        uStack_c0 = 0x140147082;
                        cVar4 = FUN_140145400(lVar17,lVar10);
                        if (cVar4 == '\0') {
                          if ((*(byte *)(lVar10 + 0xd9) & 2) == 0) {
                            *(undefined1 *)(lVar10 + 0x74) = 4;
                            *(undefined1 *)(lVar10 + 200) = 4;
                          }
                          goto LAB_14014709d;
                        }
                      }
                    }
                  }
                }
              }
            }
            if (2 < *(byte *)(lVar10 + 0xf4)) {
              *(undefined1 *)(lVar10 + 0xf4) = 2;
            }
          }
        }
      }
      else {
        uStack_c0 = 0x140146f45;
        cVar4 = func_0x0001401470e0(*(undefined4 *)(lVar10 + 0x30),*(undefined4 *)(lVar10 + 0x34),
                                    uVar13);
        if (cVar4 == '\0') goto LAB_140146f4d;
      }
LAB_14014709d:
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < *(int *)(param_1 + 0x3c));
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FUN_140144f40();
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x3c);
  if (0 < (int)*(uint *)(param_1 + 0x3c)) {
    lVar16 = *(longlong *)(param_1 + 0xb8) + 0x1ad0;
    uVar18 = 0;
    uStack_2ec = 0;
    uStack_304 = 0;
    iStack_2f0 = 0;
    lStack_2e0 = 0;
    uStack_308 = 0;
    lStack_2e8 = 0;
    uStack_30c = 0;
    uStack_2d4 = 0;
    do {
      uVar9 = uVar6 & 0xffffffff;
      if ((int)uStack_304 < *(int *)(param_1 + 0xc)) {
        uVar9 = (ulonglong)
                *(ushort *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uStack_304 * 8) + 0xa0);
      }
      if ((longlong)uVar18 < (longlong)(int)uVar9) {
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar18 * 8);
        if (0 < (int)uStack_308) {
          uVar6 = (ulonglong)uStack_308 + 1;
          do {
            uVar7 = *(undefined8 *)
                     (*(longlong *)(param_1 + 0x40) +
                     (ulonglong)*(uint *)(lStack_2e0 + -8 + uVar6 * 4) * 8);
            cVar4 = FUN_14500a600(lVar16,uVar7,lVar17,0,1);
            if ((cVar4 == '\0') && (cVar4 = FUN_140145400(lVar17,uVar7), cVar4 == '\0')) {
              lVar11 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                           *(undefined4 *)(lVar17 + 0x88));
              uVar2 = *(ushort *)(lVar11 + 0xf08);
              lVar5 = *(longlong *)(lVar11 + 0xf00);
              lVar8 = lVar5;
              if (uVar2 == *(ushort *)(lVar11 + 0xf0a)) {
                lVar8 = func_0x000144d9c140(8,(uint)uVar2 * 8 + 0x20);
                if (uVar2 != 0) {
                  func_0x000145f40560(lVar8,lVar5,(ulonglong)uVar2 << 3);
                }
                if (lVar5 != 0) {
                  func_0x000144d9c130();
                }
                *(ushort *)(lVar11 + 0xf0a) = uVar2 + 4;
                *(longlong *)(lVar11 + 0xf00) = lVar8;
                uVar2 = *(ushort *)(lVar11 + 0xf08);
              }
              *(ushort *)(lVar11 + 0xf08) = uVar2 + 1;
              *(undefined8 *)(lVar8 + (ulonglong)uVar2 * 8) = uVar7;
              *(undefined1 *)(lVar17 + 0xf6) = 1;
            }
            uVar6 = uVar6 - 1;
          } while (1 < uVar6);
        }
        if (0 < (int)uStack_30c) {
          uVar6 = (ulonglong)uStack_30c + 1;
          do {
            lVar5 = *(longlong *)
                     (*(longlong *)(param_1 + 0x40) +
                     (ulonglong)*(uint *)(lStack_2e8 + -8 + uVar6 * 4) * 8);
            FUN_1401489b0(auStack_2c8);
            lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0x20),
                                        *(undefined4 *)(lVar5 + 0x88));
            sVar1 = *(short *)(lVar8 + 0xf2a);
            uVar9 = 1L << ((ulonglong)(uint)(int)sVar1 & 0x3f);
            bVar14 = (byte)sVar1 & 0x3f;
            uVar15 = -2L << bVar14 | 0xfffffffffffffffeU >> 0x40 - bVar14;
            uVar13 = (uint)(int)sVar1 >> 6;
            auStack_2c8[uVar13] = auStack_2c8[uVar13] | uVar9;
            auStack_288[uVar13] = auStack_288[uVar13] | uVar9;
            auStack_248[uVar13] = auStack_248[uVar13] | uVar9;
            auStack_208[uVar13] = auStack_208[uVar13] | uVar9;
            auStack_1c8[uVar13] = auStack_1c8[uVar13] & uVar15;
            auStack_188[uVar13] = auStack_188[uVar13] & uVar15;
            FUN_14500afd0(auStack_148,*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x1b34));
            uVar7 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                        *(undefined4 *)(lVar17 + 0x88));
            func_0x00014500ae70(auStack_148,uVar7);
            lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                        *(undefined4 *)(lVar17 + 0x88));
            func_0x00014500ae70(auStack_148,lVar8 + 0x180);
            lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                        *(undefined4 *)(lVar17 + 0x88));
            func_0x00014500ae70(auStack_148,lVar8 + 0x300);
            lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                        *(undefined4 *)(lVar17 + 0x88));
            func_0x00014500ae70(auStack_148,lVar8 + 0x480);
            lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                        *(undefined4 *)(lVar17 + 0x88));
            func_0x00014500ae70(auStack_148,lVar8 + 0x600);
            cVar4 = FUN_14500ac10(auStack_148,auStack_2c8,0);
            if ((cVar4 == '\0') && (cVar4 = FUN_140145400(lVar17,lVar5), cVar4 == '\0')) {
              lVar10 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                           *(undefined4 *)(lVar17 + 0x88));
              uVar2 = *(ushort *)(lVar10 + 0xf08);
              lVar8 = *(longlong *)(lVar10 + 0xf00);
              lVar11 = lVar8;
              if (uVar2 == *(ushort *)(lVar10 + 0xf0a)) {
                lVar11 = func_0x000144d9c140(8,(uint)uVar2 * 8 + 0x20);
                if (uVar2 != 0) {
                  func_0x000145f40560(lVar11,lVar8,(ulonglong)uVar2 << 3);
                }
                if (lVar8 != 0) {
                  func_0x000144d9c130();
                }
                *(ushort *)(lVar10 + 0xf0a) = uVar2 + 4;
                *(longlong *)(lVar10 + 0xf00) = lVar11;
                uVar2 = *(ushort *)(lVar10 + 0xf08);
              }
              *(ushort *)(lVar10 + 0xf08) = uVar2 + 1;
              *(longlong *)(lVar11 + (ulonglong)uVar2 * 8) = lVar5;
              *(undefined1 *)(lVar17 + 0xf6) = 1;
            }
            uVar6 = uVar6 - 1;
          } while (1 < uVar6);
        }
      }
      else {
        do {
          iStack_2f0 = (int)uVar9;
          uVar9 = uVar6 & 0xffffffff;
          uStack_304 = uStack_304 + 1;
          if ((int)uStack_304 < *(int *)(param_1 + 0xc)) {
            uVar9 = (ulonglong)
                    *(ushort *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uStack_304 * 8) +
                     0xa0);
          }
        } while ((longlong)(int)uVar9 <= (longlong)uVar18);
        uStack_30c = 0;
        uStack_308 = 0;
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar18 * 8);
      }
      if ((*(byte *)(lVar17 + 0xd9) & 0x20) != 0) {
        if (uStack_308 == uStack_2ec) {
          uVar13 = uStack_2ec >> 1;
          if (uStack_2ec < 2) {
            uVar13 = 1;
          }
          uVar13 = uVar13 + uStack_2ec;
          lVar5 = func_0x000144d9c140(4,(ulonglong)uVar13 * 4);
          if (uStack_2ec != 0) {
            func_0x000145f40560(lVar5,lStack_2e0,(ulonglong)uStack_2ec << 2);
          }
          bVar19 = lStack_2e0 != 0;
          lStack_2e0 = lVar5;
          uStack_2ec = uVar13;
          if (bVar19) {
            func_0x000144d9c130();
          }
        }
        uVar6 = (ulonglong)uStack_308;
        uStack_308 = uStack_308 + 1;
        *(int *)(lStack_2e0 + uVar6 * 4) = (int)uVar18;
      }
      lVar5 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                  *(undefined4 *)(lVar17 + 0x88));
      if (*(short *)(lVar5 + 0xf2a) != -1) {
        if (uStack_30c == uStack_2d4) {
          uVar13 = uStack_2d4 >> 1;
          if (uStack_2d4 < 2) {
            uVar13 = 1;
          }
          uVar13 = uVar13 + uStack_2d4;
          lVar5 = func_0x000144d9c140(4,(ulonglong)uVar13 * 4);
          if (uStack_2d4 != 0) {
            func_0x000145f40560(lVar5,lStack_2e8,(ulonglong)uStack_2d4 << 2);
          }
          bVar19 = lStack_2e8 != 0;
          lStack_2e8 = lVar5;
          uStack_2d4 = uVar13;
          if (bVar19) {
            func_0x000144d9c130();
          }
        }
        uVar6 = (ulonglong)uStack_30c;
        uStack_30c = uStack_30c + 1;
        *(int *)(lStack_2e8 + uVar6 * 4) = (int)uVar18;
      }
      if ((((*(byte *)(lVar17 + 0xd9) & 0x18) != 0) ||
          (lVar5 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                       *(undefined4 *)(lVar17 + 0x88)),
          *(short *)(lVar5 + 0xf28) != -1)) && ((longlong)iStack_2f0 < (longlong)uVar18)) {
        uVar6 = uVar18 & 0xffffffff;
        do {
          uVar13 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar13;
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar6 * 8);
          if (*(char *)(lVar5 + 0xe0) != '\x03') {
            uVar12 = *(uint *)(lVar17 + 0xd8);
            if ((uVar12 >> 0xb & 1) == 0) {
              bVar14 = 0;
            }
            else {
              lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0x20),
                                          *(undefined4 *)(lVar5 + 0x88));
              bVar14 = (*(byte *)(lVar8 + 4) & 0x10) >> 4;
            }
            if ((uVar12 >> 0xc & 1) != 0) {
              bVar3 = FUN_14500a600(lVar16,lVar5,lVar17,0,1);
              bVar14 = bVar3 ^ 1 | bVar14;
            }
            lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                        *(undefined4 *)(lVar17 + 0x88));
            if (*(short *)(lVar8 + 0xf28) != -1) {
              FUN_1401489b0(auStack_2c8);
              lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                          *(undefined4 *)(lVar17 + 0x88));
              sVar1 = *(short *)(lVar8 + 0xf28);
              uVar9 = 1L << ((ulonglong)(uint)(int)sVar1 & 0x3f);
              bVar3 = (byte)sVar1 & 0x3f;
              uVar15 = -2L << bVar3 | 0xfffffffffffffffeU >> 0x40 - bVar3;
              uVar12 = (uint)(int)sVar1 >> 6;
              auStack_2c8[uVar12] = auStack_2c8[uVar12] | uVar9;
              auStack_288[uVar12] = auStack_288[uVar12] | uVar9;
              auStack_248[uVar12] = auStack_248[uVar12] | uVar9;
              auStack_208[uVar12] = auStack_208[uVar12] | uVar9;
              auStack_1c8[uVar12] = auStack_1c8[uVar12] & uVar15;
              auStack_188[uVar12] = auStack_188[uVar12] & uVar15;
              lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                          *(undefined4 *)(lVar17 + 0x88));
              bVar3 = *(byte *)(lVar8 + 0xf2c);
              FUN_14500afd0(auStack_148,*(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x1b34));
              lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0x20),
                                          *(undefined4 *)(lVar5 + 0x88));
              if (bVar3 == 0) {
                func_0x00014500ae70(auStack_148,lVar8);
                lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0x20),
                                            *(undefined4 *)(lVar5 + 0x88));
                func_0x00014500ae70(auStack_148,lVar8 + 0x180);
                lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0x20),
                                            *(undefined4 *)(lVar5 + 0x88));
                func_0x00014500ae70(auStack_148,lVar8 + 0x300);
                lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0x20),
                                            *(undefined4 *)(lVar5 + 0x88));
                func_0x00014500ae70(auStack_148,lVar8 + 0x480);
                lVar8 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0x20),
                                            *(undefined4 *)(lVar5 + 0x88));
                lVar8 = lVar8 + 0x600;
              }
              else {
                lVar8 = lVar8 + (ulonglong)((uint)bVar3 * 0x180);
              }
              func_0x00014500ae70(auStack_148,lVar8);
              bVar3 = FUN_14500ac10(auStack_148,auStack_2c8,0);
              bVar14 = ~bVar3 | bVar14;
            }
            if (((bVar14 & 1) != 0) && (cVar4 = FUN_140145400(lVar17,lVar5), cVar4 == '\0')) {
              lVar10 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar17 + 0x80) + 0x20),
                                           *(undefined4 *)(lVar17 + 0x88));
              uVar2 = *(ushort *)(lVar10 + 0xf08);
              lVar8 = *(longlong *)(lVar10 + 0xf00);
              lVar11 = lVar8;
              if (uVar2 == *(ushort *)(lVar10 + 0xf0a)) {
                lVar11 = func_0x000144d9c140(8,(uint)uVar2 * 8 + 0x20);
                if (uVar2 != 0) {
                  func_0x000145f40560(lVar11,lVar8,(ulonglong)uVar2 << 3);
                }
                if (lVar8 != 0) {
                  func_0x000144d9c130();
                }
                *(ushort *)(lVar10 + 0xf0a) = uVar2 + 4;
                *(longlong *)(lVar10 + 0xf00) = lVar11;
                uVar2 = *(ushort *)(lVar10 + 0xf08);
              }
              *(ushort *)(lVar10 + 0xf08) = uVar2 + 1;
              *(longlong *)(lVar11 + (ulonglong)uVar2 * 8) = lVar5;
              *(undefined1 *)(lVar17 + 0xf6) = 1;
            }
          }
        } while (iStack_2f0 < (int)uVar13);
      }
      uVar6 = (ulonglong)*(int *)(param_1 + 0x3c);
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < (longlong)uVar6);
    if (lStack_2e8 != 0) {
      func_0x000144d9c130();
    }
    if (lStack_2e0 != 0) {
      func_0x000144d9c130();
    }
  }
  return;
}

