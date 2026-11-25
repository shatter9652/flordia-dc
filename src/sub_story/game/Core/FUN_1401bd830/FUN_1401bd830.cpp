// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bd830  size: 4007 bytes
// Name:    FUN_1401bd830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de6230, FUN_144dd11b0, FUN_145351650, FUN_1400063f0, FUN_1420612d0, FUN_1450bb7f0, FUN_144dd7660, FUN_145589ce0, FUN_143be2290, FUN_145082f00, FUN_1402c59f0, FUN_14388ab90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401bd830(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  char cVar7;
  char cVar8;
  undefined1 uVar9;
  ushort uVar10;
  short sVar11;
  ushort uVar12;
  int iVar13;
  longlong lVar14;
  ushort *puVar15;
  longlong lVar16;
  uint uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  byte bVar22;
  uint uVar23;
  longlong *plVar24;
  longlong *plVar25;
  ulonglong uVar26;
  longlong unaff_GS_OFFSET;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  uint uStack_d0;
  short sStack_cc;
  short sStack_ca;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  ushort uStack_b8;
  longlong *plStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  longlong *plStack_98;
  ushort uStack_90;
  short sStack_8e;
  longlong lStack_88;
  short *psStack_80;
  longlong *plStack_70;
  ulonglong uStack_68;
  undefined8 auStack_60 [4];
  
  plVar25 = (longlong *)0x0;
  if ((*(byte *)(param_1 + 0x154) & 1) != 0) {
    plVar25 = *(longlong **)(param_1 + 0x48);
  }
  lVar14 = *(longlong *)(*(longlong *)param_2[0x10] + 0x88);
  uStack_68 = *(ulonglong *)(lVar14 + 0x48);
  uVar26 = 0;
  if ((*(byte *)(lVar14 + 0x154) & 1) != 0) {
    uVar26 = uStack_68;
  }
  plStack_b0 = param_2;
  if ((plVar25 != (longlong *)uVar26) && ((*(byte *)(lVar14 + 0xfc) & 0x40) != 0)) {
    uStack_90 = 0;
    uStack_a8 = uVar26;
    lStack_a0 = param_1;
    plStack_98 = param_2;
    plStack_70 = plVar25;
    func_0x000145082fe0(param_2,&uStack_c0);
    uVar12 = uStack_b8;
    param_1 = lStack_a0;
    uVar26 = uStack_a8;
    plVar25 = plStack_70;
    if (uStack_b8 != 0) {
      uVar19 = 0;
      do {
        FUN_145082f00(&plStack_98,&uStack_d0);
        uVar26 = *(ulonglong *)(*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 0xf8);
        lVar14 = *(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 8) + 0x20);
        if (((*(char *)(lVar14 + 0x10) == '\x06') && (sStack_cc != -2)) &&
           (*(longlong *)(lVar14 + 0x88) != 0)) {
          uVar10 = func_0x0001403dc2f0();
          if (uVar10 != 0xffff) {
            uVar26 = uVar26 & *(ulonglong *)
                               (*(longlong *)(lVar14 + 0x88) + (ulonglong)uVar10 * 0x10);
            goto LAB_1401bd963;
          }
        }
        else {
LAB_1401bd963:
          if ((uVar26 & 0x4000000000) != 0) {
            puVar1 = (uint *)((longlong)plStack_b0 + (uVar19 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((uint)uVar19 & 0x1f);
          }
        }
        uVar23 = (uint)uVar19 + 1;
        uVar19 = (ulonglong)uVar23;
        uStack_90 = (ushort)uVar23;
        param_1 = lStack_a0;
        uVar26 = uStack_a8;
        plVar25 = plStack_70;
        param_2 = plStack_b0;
      } while (uVar12 != uVar23);
    }
  }
  if (uVar26 == 0) {
LAB_1401be019:
    if (plVar25 == (longlong *)0x0) {
LAB_1401be0c0:
      bVar21 = true;
    }
    else {
      cVar7 = *(char *)((longlong)plVar25 + 0x30);
LAB_1401be026:
      bVar21 = false;
      if ((cVar7 == '\x03') && (*(char *)(param_1 + 0x155) == '\t')) {
        lVar14 = *(longlong *)(*(longlong *)param_2[0x10] + 0x88);
        if ((((*(char *)(lVar14 + 0x155) != '\t') &&
             ((lVar16 = func_0x000144e23bb0(*(undefined4 *)((longlong)plVar25 + 0x9c)), lVar16 != 0
              && ((*(byte *)(lVar16 + 0x10) & 3) != 0)))) &&
            ((*(char *)(lVar14 + 0x156) == '\x03' ||
             ((*(char *)(lVar14 + 0x156) == '\x02' && ((*(byte *)(lVar14 + 0x18) & 1) == 0)))))) &&
           (func_0x000145082fe0(param_2,&plStack_98), uStack_90 != 0)) {
          uVar23 = 0;
          do {
            uVar17 = uVar23 + 1;
            puVar1 = (uint *)((longlong)param_2 + (ulonglong)(uVar23 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << (uVar23 & 0x1f);
            uVar23 = uVar17;
          } while (uStack_90 != uVar17);
        }
LAB_1401be0bc:
        bVar21 = false;
      }
    }
    if (uVar26 != 0) goto LAB_1401be0c8;
    plVar24 = *(longlong **)(*(longlong *)param_2[0x10] + 0x88);
    lVar14 = FUN_1450bb7f0(plVar24);
    if (lVar14 != 0) {
      lVar14 = *(longlong *)(lVar14 + 0x20);
      bVar27 = true;
      goto LAB_1401be11f;
    }
    bVar22 = 1;
    if (bVar21) {
      cVar7 = '\0';
      bVar27 = true;
      goto LAB_1401be14f;
    }
    bVar27 = true;
LAB_1401be12f:
    if (*(char *)((longlong)plVar25 + 0x30) == '\x02') {
      cVar7 = func_0x000145082f80(**(undefined8 **)(*(longlong *)((longlong)plVar25 + 0x20) + 0xf8))
      ;
      goto LAB_1401be14f;
    }
  }
  else {
    cVar7 = (char)*(uint *)(uVar26 + 0x30);
    if ((0x1cU >> (*(uint *)(uVar26 + 0x30) & 0x1f) & 1) != 0) {
      func_0x00014525fbb0(&uStack_c0);
      if (plVar25 != (longlong *)0x0) {
        uVar2 = *(undefined4 *)((longlong)plVar25 + 0x9c);
        cVar7 = func_0x000144e67180(uVar2);
        if (cVar7 != '\0') {
          lVar14 = func_0x0001450bb780(uVar2);
          func_0x0001454f86a0(&plStack_98,*(undefined4 *)(lVar14 + 0x20c),0);
          uStack_c0 = plStack_98;
        }
      }
      if ((uint)uStack_c0 != 0) {
        uVar2 = *(undefined4 *)(uVar26 + 0x9c);
        cVar7 = func_0x000144e67180(uVar2);
        uVar18 = 0;
        if (cVar7 != '\0') {
          lVar14 = func_0x0001450bb780(uVar2,0);
          uVar18 = *(undefined4 *)(lVar14 + 0x20c);
        }
        func_0x0001454f86a0(&plStack_98,uVar18,0);
        auVar32 = ZEXT864(uStack_c0);
        auVar5 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
        auVar30 = ZEXT1664(auVar5);
        bVar21 = true;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = plStack_98;
        auVar31._8_8_ = 0;
        auVar31._0_8_ = uStack_c0;
        auVar28 = vpcmpeqd_avx(auVar31,auVar28);
        auVar28 = vpmovsxdq_avx(auVar28);
        if ((SUB161((auVar5 & ~auVar28) >> 0x3f,0) & 1) != 0 || SUB161(auVar5 & ~auVar28,0xf) < '\0'
           ) {
          uVar2 = *(undefined4 *)(uVar26 + 0x9c);
          cVar7 = FUN_144dd11b0(uVar2);
          if (((cVar7 == '\0') || (lVar14 = FUN_144de6230(uVar2), lVar14 == 0)) ||
             ((0x1cU >> (*(uint *)(lVar14 + 0x30) & 0x1f) & 1) == 0)) goto LAB_1401bdb58;
          lVar14 = FUN_144de6230(uVar2);
          uVar2 = *(undefined4 *)(lVar14 + 0x9c);
          cVar7 = func_0x000144e67180(uVar2);
          uVar18 = 0;
          if (cVar7 != '\0') {
            lVar14 = func_0x0001450bb780(uVar2,0);
            uVar18 = *(undefined4 *)(lVar14 + 0x20c);
          }
          func_0x0001454f86a0(&uStack_d0,uVar18,0);
          auVar29._4_2_ = sStack_cc;
          auVar29._0_4_ = uStack_d0;
          auVar29._6_2_ = sStack_ca;
          auVar5 = vpcmpeqd_avx(auVar30._0_16_,auVar30._0_16_);
          auVar29._8_8_ = 0;
          auVar28 = vpcmpeqd_avx(auVar32._0_16_,auVar29);
          auVar28 = vpmovsxdq_avx(auVar28);
          bVar21 = (SUB161((auVar5 & ~auVar28) >> 0x3f,0) & 1) == 0 &&
                   -1 < SUB161(auVar5 & ~auVar28,0xf);
        }
        if ((plVar25 != (longlong *)0x0) && (bVar21 != false)) {
          uVar2 = *(undefined4 *)((longlong)plVar25 + 0x9c);
          cVar7 = func_0x000144f16df0(uVar2);
          if (cVar7 != '\0') {
            lVar14 = func_0x00014515d910(uVar2);
            bVar21 = (bool)(bVar21 & *(byte *)(lVar14 + 0x58) >> 3);
          }
        }
        if ((bVar21 != false) && (func_0x000145082fe0(param_2,&plStack_98), uStack_90 != 0)) {
          uVar19 = 0;
          do {
            uVar23 = (uint)uVar19 + 1;
            puVar1 = (uint *)((longlong)param_2 + (uVar19 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((uint)uVar19 & 0x1f);
            uVar19 = (ulonglong)uVar23;
          } while (uStack_90 != uVar23);
        }
      }
LAB_1401bdb58:
      cVar7 = *(char *)(uVar26 + 0x30);
    }
    if (cVar7 != '\x02') goto LAB_1401be019;
    if (plVar25 == (longlong *)0x0) {
      cVar7 = FUN_145589ce0(0,uVar26);
      if (cVar7 != '\0') {
        return;
      }
LAB_1401bdb9f:
      uStack_a8 = uVar26;
      lStack_a0 = param_1;
      plStack_70 = plVar25;
      cVar7 = FUN_143be2290(param_1,plVar25,uVar26);
      plStack_98 = param_2;
      if (cVar7 == '\0') {
        uStack_90 = 0;
        func_0x000145082fe0(param_2,&uStack_c0);
        uVar12 = uStack_b8;
        if (uStack_b8 != 0) {
          uVar23 = 0;
          do {
            FUN_145082f00(&plStack_98,&uStack_d0);
            uVar26 = *(ulonglong *)(*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 0xf8);
            lVar14 = *(longlong *)
                      (*(longlong *)(*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 8) + 0x20);
            if (((*(char *)(lVar14 + 0x10) == '\x06') && (sStack_cc != -2)) &&
               (*(longlong *)(lVar14 + 0x88) != 0)) {
              uVar10 = func_0x0001403dc2f0();
              if (uVar10 != 0xffff) {
                uVar26 = uVar26 & *(ulonglong *)
                                   (*(longlong *)(lVar14 + 0x88) + (ulonglong)uVar10 * 0x10);
                goto LAB_1401bde8a;
              }
            }
            else {
LAB_1401bde8a:
              if ((uVar26 & 0x40) != 0) {
                FUN_145082f00(&plStack_98,&uStack_d0);
                bVar22 = (byte)*(undefined8 *)
                                (*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 0xf8);
                lVar14 = *(longlong *)
                          (*(longlong *)(*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 8) +
                          0x20);
                if (((*(char *)(lVar14 + 0x10) == '\x06') && (sStack_cc != -2)) &&
                   (*(longlong *)(lVar14 + 0x88) != 0)) {
                  uVar10 = func_0x0001403dc2f0();
                  if (uVar10 != 0xffff) {
                    bVar22 = bVar22 & (byte)*(undefined8 *)
                                             (*(longlong *)(lVar14 + 0x88) +
                                             (ulonglong)uVar10 * 0x10);
                    goto LAB_1401bdef1;
                  }
                }
                else {
LAB_1401bdef1:
                  if ((char)bVar22 < '\0') goto LAB_1401bdf04;
                }
                puVar1 = (uint *)((longlong)param_2 + (ulonglong)(uVar23 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << (uVar23 & 0x1f);
              }
            }
LAB_1401bdf04:
            uVar23 = uVar23 + 1;
            uStack_90 = (ushort)uVar23;
          } while (uVar12 != uVar23);
        }
      }
      else {
        uStack_90 = 0;
        func_0x000145082fe0(param_2,&uStack_c0);
        uVar12 = uStack_b8;
        if (uStack_b8 != 0) {
          uVar23 = 0;
          do {
            lVar14 = _DAT_14a9b33c0;
            if (*(char *)(lStack_a0 + 0x155) == '\t') {
              FUN_145082f00(&plStack_98,&uStack_d0);
              uVar26 = (ulonglong)((uStack_d0 & 0xffff) << 4);
              if ((((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar26) ==
                     (short)(uStack_d0 >> 0x10)) &&
                   (lVar16 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar26),
                   lVar16 != 0)) &&
                  (plVar25 = *(longlong **)(*(longlong *)(lVar16 + 8) + 0x20),
                  plVar25 != (longlong *)0x0)) &&
                 ((((char)plVar25[2] != '\x06' || (sStack_cc == -2)) ||
                  ((uVar10 = func_0x0001403dc2f0(lVar16), uVar10 != 0xffff &&
                   ((uVar10 < *(ushort *)((longlong)plVar25 + 0x9a) &&
                    (plVar25 = *(longlong **)(plVar25[0xe] + (ulonglong)uVar10 * 8),
                    plVar25 != (longlong *)0x0)))))))) {
                sVar11 = sStack_ca;
                if (sStack_ca == -1) {
                  sVar11 = 0;
                }
                uVar26 = (**(code **)(*plVar25 + 0x48))(plVar25,sVar11);
              }
              else {
                uVar26 = 0;
              }
              uVar26 = uVar26 & *(ulonglong *)(lVar14 + 0x10);
              if (*(uint *)(lVar14 + 0x18) <= uVar26) {
                uVar26 = 0;
              }
              cVar7 = FUN_144dd7660(*(undefined4 *)
                                     (*(longlong *)(lVar14 + 0x20) + 0x40 +
                                     *(uint *)(lVar14 + 0x1c) * uVar26),2);
              if (cVar7 == '\0') goto LAB_1401bdce4;
            }
            else {
LAB_1401bdce4:
              FUN_145082f00(&plStack_98,&uStack_d0);
              bVar22 = (byte)*(undefined8 *)
                              (*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 0xf8);
              lVar14 = *(longlong *)
                        (*(longlong *)(*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 8) + 0x20)
              ;
              if (((*(char *)(lVar14 + 0x10) == '\x06') && (sStack_cc != -2)) &&
                 (*(longlong *)(lVar14 + 0x88) != 0)) {
                uVar10 = func_0x0001403dc2f0();
                if (uVar10 == 0xffff) goto LAB_1401bddcb;
                bVar22 = bVar22 & (byte)*(undefined8 *)
                                         (*(longlong *)(lVar14 + 0x88) + (ulonglong)uVar10 * 0x10);
              }
              if ((char)bVar22 < '\0') {
                FUN_145082f00(&plStack_98,&uStack_d0);
                uVar26 = *(ulonglong *)(*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 0xf8);
                lVar14 = *(longlong *)
                          (*(longlong *)(*(longlong *)(*(longlong *)param_2[0x10] + 0x88) + 8) +
                          0x20);
                if (((*(char *)(lVar14 + 0x10) == '\x06') && (sStack_cc != -2)) &&
                   (*(longlong *)(lVar14 + 0x88) != 0)) {
                  uVar10 = func_0x0001403dc2f0();
                  if (uVar10 != 0xffff) {
                    uVar26 = uVar26 & *(ulonglong *)
                                       (*(longlong *)(lVar14 + 0x88) + (ulonglong)uVar10 * 0x10);
                    goto LAB_1401bddb1;
                  }
                }
                else {
LAB_1401bddb1:
                  if ((uVar26 & 0x40) != 0) goto LAB_1401bddcb;
                }
                puVar1 = (uint *)((longlong)param_2 + (ulonglong)(uVar23 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << (uVar23 & 0x1f);
              }
            }
LAB_1401bddcb:
            uVar23 = uVar23 + 1;
            uStack_90 = (ushort)uVar23;
          } while (uVar12 != uVar23);
        }
      }
      param_1 = lStack_a0;
      uVar26 = uStack_a8;
      plVar25 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        cVar7 = *(char *)((longlong)plStack_70 + 0x30);
LAB_1401bdf35:
        if (cVar7 != '\x04') goto LAB_1401be026;
        lVar14 = func_0x000144dd11e0(*(undefined4 *)((longlong)plVar25 + 0x9c));
        if (lVar14 != 0) {
          uVar23 = *(uint *)(lVar14 + 0x284);
          uVar19 = (ulonglong)uVar23 & 0x1ffff;
          if (uVar19 == 0x1ffff) {
            uVar20 = 0;
          }
          else {
            plVar24 = *(longlong **)((ulonglong)(uVar23 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
            param_2 = plStack_b0;
            if (plVar24 == (longlong *)0x0) {
              uVar20 = 0;
            }
            else {
              uVar17 = *(uint *)(plVar24[5] + uVar19 * 4);
              uVar20 = 0;
              if (uVar23 >> 0x16 == (uVar17 >> 0x11 & 0x3ff) &&
                  (uVar17 & *(uint *)(plVar24 + 6)) == *(uint *)(plVar24 + 6)) {
                uVar20 = (ulonglong)(uint)((int)plVar24[1] * (int)uVar19) + *plVar24;
              }
            }
          }
          if ((uVar20 == uVar26) && (*(int *)(lVar14 + 0x280) == 1)) {
            cVar7 = FUN_1420612d0(*(undefined4 *)(uVar26 + 0x9c),plVar25);
            if (cVar7 == '\0') {
              uStack_90 = 0;
              plStack_98 = param_2;
              func_0x000145082fe0(param_2,&uStack_c0);
              if (uStack_b8 != 0) {
                uVar19 = 0;
                do {
                  FUN_145082f00(&plStack_98,auStack_60);
                  cVar7 = FUN_14388ab90(*(undefined4 *)(uVar26 + 0x9c),auStack_60[0]);
                  if (cVar7 != '\0') {
                    puVar1 = (uint *)((longlong)param_2 + (uVar19 >> 5) * 4);
                    *puVar1 = *puVar1 | 1 << ((uint)uVar19 & 0x1f);
                  }
                  uVar23 = (uint)uVar19 + 1;
                  uVar19 = (ulonglong)uVar23;
                  uStack_90 = (ushort)uVar23;
                } while (uStack_b8 != uVar23);
              }
              goto LAB_1401be019;
            }
            goto LAB_1401bdf9c;
          }
        }
        goto LAB_1401be0bc;
      }
      goto LAB_1401be0c0;
    }
    cVar7 = *(char *)((longlong)plVar25 + 0x30);
    if ((byte)(cVar7 - 3U) < 2) {
      cVar8 = FUN_145589ce0(plVar25,uVar26);
      if (cVar8 == '\0') goto LAB_1401bdb9f;
      goto LAB_1401bdf35;
    }
LAB_1401bdf9c:
    bVar21 = false;
LAB_1401be0c8:
    bVar27 = *(char *)(uVar26 + 0x30) == '\x04';
    plVar24 = *(longlong **)(*(longlong *)plStack_b0[0x10] + 0x88);
    lVar14 = *(longlong *)(uStack_68 + 0x20);
LAB_1401be11f:
    bVar22 = *(byte *)(lVar14 + 0x9c) >> 7;
    if (!bVar21) goto LAB_1401be12f;
  }
  cVar7 = '\0';
LAB_1401be14f:
  if (((bVar27) && (bVar22 != 0)) &&
     (cVar8 = (**(code **)(**(longlong **)(*(longlong *)plStack_b0[0x10] + 0x88) + 0xb0))(),
     cVar7 == '\0' && cVar8 == '\x01')) {
    lStack_a0 = param_1;
    uVar9 = (**(code **)(*plVar24 + 0x210))(plVar24,param_1,1);
    uStack_68 = CONCAT71(uStack_68._1_7_,uVar9);
    plStack_70 = plVar24;
    FUN_145351650(&plStack_98,plVar24);
    uVar23 = (uint)uStack_90;
    if ((short)uStack_90 < sStack_8e) {
      lVar14 = plStack_98[0x2e];
      do {
        plVar25 = plStack_98;
        if (lVar14 != 0) {
          uVar23 = (uint)*(ushort *)
                          (*(longlong *)(lVar14 + 0x158) + 8 +
                          (ulonglong)(uint)(int)(short)uVar23 * 0x18);
        }
        iVar13 = func_0x0001454e3ba0(lVar14,uVar23);
        lVar14 = (longlong)(short)uVar23 * 0x70 + *(longlong *)(plVar25[0x35] + 0x20);
        uVar12 = *(ushort *)
                  (lVar14 + 0x1a + (longlong)*(int *)(&UNK_1466c7130 + (uint)(iVar13 << 2)) * 2);
        uVar23 = (uint)uVar12;
        uVar10 = *(ushort *)
                  (lVar14 + 0x1a + (longlong)*(int *)(&UNK_146161460 + (uint)(iVar13 << 2)) * 2);
        if (uVar12 < uVar10) {
          do {
            sVar11 = (**(code **)(*plVar25 + 0x408))(plVar25,uVar23);
            if (sVar11 != -1) goto LAB_1401be277;
            uVar23 = uVar23 + 1;
          } while (uVar10 != (ushort)uVar23);
        }
        else {
LAB_1401be277:
          if ((ushort)uVar23 < uVar10) {
            bVar6 = 0;
            bVar22 = 0;
            do {
              func_0x00014032bdc0((int)plVar25[2],&uStack_c0,uVar23);
              uVar26 = (ulonglong)(((uint)uStack_c0 & 0xffff) << 4);
              if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar26) ==
                   (short)((ulonglong)uStack_c0 >> 0x10)) &&
                 (lVar14 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar26), lVar14 != 0
                 )) {
                uVar26 = *(ulonglong *)(lVar14 + 0xf8);
                lVar14 = *(longlong *)(*(longlong *)(lVar14 + 8) + 0x20);
                if (((*(char *)(lVar14 + 0x10) == '\x06') && (uStack_c0._4_2_ != -2)) &&
                   (*(longlong *)(lVar14 + 0x88) != 0)) {
                  uVar12 = func_0x0001403dc2f0();
                  if (uVar12 == 0xffff) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = uVar26 & *(ulonglong *)
                                       (*(longlong *)(lVar14 + 0x88) + (ulonglong)uVar12 * 0x10);
                  }
                }
              }
              else {
                uVar26 = 0;
              }
              bVar21 = (uVar26 & 0x400000000000) == 0;
              bVar22 = bVar22 | bVar21;
              bVar6 = bVar6 | !bVar21;
              do {
                uVar23 = uVar23 + 1;
                if (uVar10 <= (ushort)uVar23) break;
                sVar11 = (**(code **)(*plVar25 + 0x408))(plVar25,uVar23);
              } while (sVar11 == -1);
              plVar24 = plStack_98;
            } while (((ushort)uVar23 < uVar10) && (!(bool)(bVar6 & bVar22)));
            if ((bool)(bVar6 & bVar22)) {
              uVar26 = *(ulonglong *)(lStack_a0 + 0x100);
              lVar14 = plStack_98[0x2e];
              uVar19 = uVar26 | 0x400000000000;
              if ((uVar26 & 0x2000) == 0) {
                uVar19 = uVar26;
              }
              if ((char)uStack_68 == '\0') {
                uVar19 = uVar26;
              }
              puVar15 = &uStack_90;
              if (lVar14 != 0) {
                puVar15 = (ushort *)
                          (*(longlong *)(lVar14 + 0x158) + 8 +
                          (ulonglong)(uint)(int)(short)uStack_90 * 0x18);
              }
              uVar12 = *puVar15;
              uVar26 = *(ulonglong *)(lStack_a0 + 0xf8);
              uVar20 = plStack_70[0x1f];
              uStack_a8 = plStack_70[0x20];
              iVar13 = func_0x0001454e3ba0(lVar14,(longlong)(short)uVar12 & 0xffffffff);
              lVar14 = (longlong)(short)uVar12 * 0x70 + *(longlong *)(plVar24[0x35] + 0x20);
              uVar12 = *(ushort *)
                        (lVar14 + 0x1a +
                        (longlong)*(int *)(&UNK_1466c7130 + (uint)(iVar13 << 2)) * 2);
              uVar23 = (uint)uVar12;
              uVar10 = *(ushort *)
                        (lVar14 + 0x1a +
                        (longlong)*(int *)(&UNK_146161460 + (uint)(iVar13 << 2)) * 2);
              if (uVar12 < uVar10) {
                do {
                  sVar11 = (**(code **)(*plVar24 + 0x408))(plVar24,uVar23);
                  if (sVar11 != -1) goto LAB_1401be453;
                  uVar23 = uVar23 + 1;
                } while (uVar10 != (ushort)uVar23);
              }
              else {
LAB_1401be453:
                if ((ushort)uVar23 < uVar10) {
                  uStack_a8 = uStack_a8 & uVar26;
                  do {
                    func_0x00014032bdc0((int)plVar24[2],&uStack_c0,uVar23);
                    plVar25 = plStack_b0;
                    uVar26 = (ulonglong)(((uint)uStack_c0 & 0xffff) << 4);
                    if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar26) ==
                         (short)((ulonglong)uStack_c0 >> 0x10)) &&
                       (lVar14 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar26),
                       lVar14 != 0)) {
                      uVar26 = *(ulonglong *)(lVar14 + 0xf8);
                      lVar14 = *(longlong *)(*(longlong *)(lVar14 + 8) + 0x20);
                      if ((*(char *)(lVar14 + 0x10) == '\x06') &&
                         ((uStack_c0._4_2_ != -2 && (*(longlong *)(lVar14 + 0x88) != 0)))) {
                        uStack_c8 = uVar26;
                        uVar12 = func_0x0001403dc2f0();
                        if (uVar12 == 0xffff) goto LAB_1401be519;
                        uVar26 = uStack_c8 &
                                 *(ulonglong *)
                                  (*(longlong *)(lVar14 + 0x88) + (ulonglong)uVar12 * 0x10);
                      }
                      if ((bool)(char)uStack_68 == ((uVar26 & 0x400000000000) == 0))
                      goto LAB_1401be5f0;
LAB_1401be530:
                      uStack_c8 = uVar26;
                      func_0x00014032bdc0((int)plVar24[2],&uStack_c0,uVar23);
                      uVar26 = (ulonglong)(((uint)uStack_c0 & 0xffff) << 4);
                      if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar26) ==
                           (short)((ulonglong)uStack_c0 >> 0x10)) &&
                         (lVar14 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar26),
                         lVar14 != 0)) {
                        uVar3 = *(ulonglong *)(lVar14 + 0x100);
                        lVar14 = *(longlong *)(*(longlong *)(lVar14 + 8) + 0x20);
                        uVar26 = 0xffffffffffffffff;
                        if (((*(char *)(lVar14 + 0x10) == '\x06') && (uStack_c0._4_2_ != -2)) &&
                           (*(longlong *)(lVar14 + 0x88) != 0)) {
                          uVar12 = func_0x0001403dc2f0();
                          if (uVar12 == 0xffff) {
                            uVar26 = 0;
                          }
                          else {
                            uVar26 = *(ulonglong *)
                                      (*(longlong *)(lVar14 + 0x88) + 8 + (ulonglong)uVar12 * 0x10);
                          }
                        }
                        uVar26 = uVar26 & uVar3;
                        plVar25 = plStack_b0;
                      }
                      else {
                        uVar26 = 0;
                      }
                      if (((uVar19 & uVar20 & uStack_c8) == 0) || ((uVar26 & uStack_a8) == 0))
                      goto LAB_1401be5f0;
                    }
                    else {
LAB_1401be519:
                      if ((char)uStack_68 == '\0') {
                        uVar26 = 0;
                        goto LAB_1401be530;
                      }
LAB_1401be5f0:
                      uVar12 = (**(code **)(*plVar24 + 0x408))(plVar24,uVar23);
                      puVar1 = (uint *)((longlong)plVar25 + (ulonglong)(uVar12 >> 5) * 4);
                      *puVar1 = *puVar1 | 1 << (uVar12 & 0x1f);
                    }
                    do {
                      if (uVar10 <= (ushort)((short)uVar23 + 1U)) goto LAB_1401be638;
                      sVar11 = (**(code **)(*plVar24 + 0x408))(plVar24);
                      uVar23 = uVar23 + 1;
                    } while (sVar11 == -1);
                  } while( true );
                }
              }
            }
          }
        }
LAB_1401be638:
        uVar23 = uStack_90 + 1;
        uVar12 = (ushort)uVar23;
        lVar14 = plStack_98[0x2e];
        if ((short)uVar12 < sStack_8e && lVar14 != 0) {
          uVar23 = (uint)(short)uVar12;
          uVar10 = uStack_90 + 2;
          uStack_90 = uVar12;
          while ((sVar11 = *(short *)(*(longlong *)(lVar14 + 0x158) + 8 + (ulonglong)uVar23 * 0x18),
                 sVar11 == -1 ||
                 (uVar12 = uStack_90,
                 *(short *)(*(longlong *)(lVar14 + 0x180) + (ulonglong)(uint)(int)sVar11 * 2) == -1)
                 )) {
            uVar23 = uVar23 + 1;
            sVar11 = (2 - sStack_8e) + uVar10;
            uStack_90 = uVar10;
            uVar10 = uVar10 + 1;
            if (sVar11 == 2) goto LAB_1401be6cf;
          }
        }
        uStack_90 = uVar12;
      } while ((short)uVar23 < sStack_8e);
    }
LAB_1401be6cf:
    if ((lStack_88 != 0) && (*psStack_80 = *psStack_80 + -1, *psStack_80 == 0)) {
      lVar14 = *(longlong *)(lStack_88 + 0x18);
      if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
        lVar16 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
      }
      else {
        lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        *(undefined1 *)(lVar4 + 0x1440) = 1;
        lVar16 = FUN_1400063f0();
        *(longlong *)(lVar4 + 0x1438) = lVar16;
      }
      if (lVar16 != lVar14) {
        FUN_1402c59f0(lStack_88);
      }
    }
  }
  return;
}

