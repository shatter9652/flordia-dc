// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140032520  size: 6037 bytes
// Name:    FUN_140032520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b5a5d0, FUN_144dbd700, FUN_140032130, FUN_144dbd6c0, FUN_140188430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140032520(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined2 uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  byte bVar25;
  short sVar26;
  longlong lVar27;
  undefined4 *puVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  byte bVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  ulonglong uVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  longlong *plVar41;
  uint uVar42;
  undefined8 uVar43;
  bool bVar44;
  bool bVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined4 uStack_31c;
  ushort uStack_318;
  uint uStack_314;
  undefined8 uStack_310;
  uint uStack_308;
  uint uStack_304;
  uint uStack_300;
  uint uStack_2fc;
  uint uStack_2f8;
  uint uStack_2f4;
  undefined4 uStack_2ee;
  ushort uStack_2ea;
  uint uStack_2e8;
  ushort uStack_2e4;
  longlong lStack_2e0;
  undefined4 uStack_2d8;
  ushort uStack_2d4;
  undefined4 uStack_2d0;
  ushort uStack_2cc;
  uint uStack_2c8;
  ushort uStack_2c4;
  undefined8 uStack_2c0;
  ulonglong uStack_2b8;
  longlong lStack_2b0;
  undefined8 uStack_2a8;
  uint uStack_29c;
  ulonglong uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  uint uStack_27c;
  ulonglong uStack_278;
  ulonglong uStack_270;
  ulonglong uStack_268;
  undefined4 *puStack_260;
  undefined8 *puStack_258;
  uint uStack_24c;
  undefined1 auStack_248 [16];
  undefined2 uStack_238;
  undefined2 uStack_236;
  undefined1 uStack_234;
  byte bStack_233;
  undefined1 uStack_232;
  undefined8 uStack_231;
  undefined1 uStack_229;
  
  plVar41 = *(longlong **)(param_1 + 0x127c8);
  lVar40 = param_1 + 0x12780;
  if (plVar41 == (longlong *)0x0) {
    FUN_140188430(lVar40);
    plVar41 = *(longlong **)(param_1 + 0x127c8);
  }
  lVar13 = *(longlong *)(param_1 + 0x12328);
  bVar25 = *(byte *)(param_1 + 0x1237d);
  if (bVar25 != *(byte *)(param_1 + 0x123fd)) {
    uVar22 = 4;
    *(byte *)(param_1 + 0x123fd) = bVar25;
    if ((bVar25 != 6) && (bVar25 != 0x13)) {
      uVar22 = (ulonglong)bVar25;
    }
    puVar28 = (undefined4 *)plVar41[3];
    if (puVar28 < (undefined4 *)plVar41[6]) {
      *puVar28 = 0xc000b600;
      puVar28[1] = (uint)(byte)(&UNK_1461ecf30)[uVar22];
      plVar41[3] = (longlong)(puVar28 + 2);
    }
    else {
      (**(code **)(*plVar41 + 0xa0))(plVar41);
    }
  }
  uVar42 = *(uint *)(param_1 + 0x12380);
  if (((uVar42 & 0xff) != (*(uint *)(param_1 + 0x12400) & 0xff)) ||
     (((*(uint *)(param_1 + 0x12400) ^ uVar42) & 0xffff00) != 0)) {
    auVar46._4_4_ = uVar42;
    auVar46._0_4_ = uVar42;
    auVar46._8_4_ = uVar42;
    auVar46._12_4_ = uVar42;
    auVar46 = vpsrlvd_avx2(auVar46,_DAT_14615a8b0);
    auVar46 = vpand_avx(auVar46,_DAT_146159f10);
    auStack_248._0_8_ = auVar46._0_8_;
    plVar19 = *(longlong **)(param_1 + 0x127c8);
    if (plVar19 == (longlong *)0x0) {
      FUN_140188430(lVar40);
      plVar19 = *(longlong **)(param_1 + 0x127c8);
    }
    (**(code **)(*plVar19 + 0x3f0))(plVar19,uVar42 & 0xff);
    *(uint *)(param_1 + 0x12400) = uVar42;
  }
  lVar27 = *(longlong *)(param_1 + 0x12330);
  if (lVar27 == 0) {
    if ((param_2 & 0x80fd0000) != 0) {
      auStack_248 = vpshufd_avx(*(undefined1 (*) [16])(param_1 + 0x12320),0x4e);
      uStack_238 = *(undefined2 *)(param_1 + 0x12378);
      uStack_236 = *(undefined2 *)(param_1 + 0x1236e);
      uStack_234 = *(undefined1 *)(param_1 + 0x1236c);
      bStack_233 = *(byte *)(param_1 + 0x1237a) & 0x7f;
      bVar25 = *(byte *)(param_1 + 0x1237d);
      uStack_232 = 1;
      if (((bVar25 != 1) && (uStack_232 = 2, (bVar25 & 0xfe) != 2)) &&
         (uStack_232 = 0x11, bVar25 != 0x11)) {
        uStack_232 = 0x20;
        if (bVar25 < 0x20) {
          uStack_232 = 4;
        }
      }
      uStack_231 = *(undefined8 *)(param_1 + 0x12410);
      uStack_229 = *(undefined1 *)(param_1 + 0x12418);
      lVar12 = FUN_140b5a5d0(auStack_248,
                             CONCAT71((int7)((ulonglong)uStack_231 >> 8),
                                      *(undefined1 *)(param_1 + 0x126e2)));
      *(longlong *)(param_1 + 0x123b0) = lVar12;
      lVar27 = *(longlong *)(lVar12 + 0x38);
      *(longlong *)(param_1 + 0x32148) = lVar27;
      uVar43 = *(undefined8 *)(*(longlong *)(lVar12 + 8) + 0x80);
      goto LAB_140032781;
    }
  }
  else if (lVar27 != *(longlong *)(param_1 + 0x123b0)) {
    uVar43 = *(undefined8 *)(lVar13 + 0x80);
    *(longlong *)(param_1 + 0x123b0) = lVar27;
    if (*(char *)(param_1 + 0x126e2) == '\x01') {
      do {
        lVar27 = *(longlong *)(param_1 + 0x12330);
        if (*(char *)(lVar27 + 0x1d) < '\0') goto LAB_14003269e;
      } while (*(char *)(param_1 + 0x126e2) != '\0');
      lVar27 = *(longlong *)(param_1 + 0x12330);
    }
LAB_14003269e:
    lVar27 = *(longlong *)(lVar27 + 0x38);
    *(longlong *)(param_1 + 0x32148) = lVar27;
LAB_140032781:
    if (lVar27 != 0) {
      uVar10 = *(undefined8 *)(lVar27 + 0x18);
      *(undefined8 *)((longlong)plVar41 + 0x544) = *(undefined8 *)(lVar27 + 0x10);
      *(undefined8 *)((longlong)plVar41 + 0x54c) = uVar10;
      uVar10 = *(undefined8 *)(lVar27 + 0x28);
      *(undefined8 *)((longlong)plVar41 + 0x554) = *(undefined8 *)(lVar27 + 0x20);
      *(undefined8 *)((longlong)plVar41 + 0x55c) = uVar10;
      puVar18 = (undefined8 *)plVar41[3];
      if (puVar18 < (undefined8 *)plVar41[6]) {
        uVar10 = *(undefined8 *)(lVar27 + 0x18);
        *puVar18 = *(undefined8 *)(lVar27 + 0x10);
        puVar18[1] = uVar10;
        puVar18[2] = *(undefined8 *)(lVar27 + 0x20);
        *(undefined4 *)(puVar18 + 3) = *(undefined4 *)(lVar27 + 0x28);
        plVar41[3] = (longlong)puVar18 + 0x1c;
        *(undefined1 *)(plVar41 + 0x28) = 1;
        *(byte *)((longlong)plVar41 + 0x141) = (byte)(*(uint *)(lVar27 + 0x20) >> 0x14) & 1;
      }
      else {
        (**(code **)(*plVar41 + 200))(plVar41);
      }
    }
    (**(code **)(*plVar41 + 0x110))(plVar41,uVar43);
    if (*(longlong *)(param_1 + 0x12360) == -1) {
      uVar22 = 0x7000010000;
    }
    else {
      uVar22 = 0x7000210000;
      *(undefined8 *)(param_1 + 0x123e0) = 0xffffffffffffffff;
    }
    param_2 = param_2 | uVar22;
    lVar13 = *(longlong *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      bVar25 = 0;
    }
    else {
      bVar25 = (*(byte *)(lVar13 + 0x55) & 0x40) >> 6;
    }
    if (*(byte *)(param_1 + 0x47a88) != bVar25) {
      (**(code **)(*plVar41 + 600))(plVar41,bVar25);
      *(byte *)(param_1 + 0x47a88) = bVar25;
    }
  }
  uVar42 = (uint)param_2;
  if ((uVar42 >> 0x18 & 1) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x12638);
    if (lVar13 == 0) {
      if ((ulonglong)plVar41[6] <= (ulonglong)plVar41[3]) {
        lVar13 = *plVar41;
        puVar23 = (undefined1 *)0x0;
        goto LAB_1400328b8;
      }
    }
    else {
      auStack_248._0_8_ = *(undefined8 *)(lVar13 + 0x38);
      uVar20 = *(ushort *)(lVar13 + 0xc) & 0xfff;
      auStack_248._8_4_ = *(int *)(lVar13 + 8) * uVar20;
      auStack_248._12_4_ = 0x39;
      if (uVar20 == 4) {
        auStack_248._12_4_ = 0x2a;
      }
      puVar36 = (uint *)plVar41[3];
      if (puVar36 < (uint *)plVar41[6]) {
        *puVar36 = auStack_248._12_4_ | 0x4001b700;
        *(undefined8 *)(puVar36 + 1) = auStack_248._0_8_;
        plVar41[3] = (longlong)(puVar36 + 3);
      }
      else {
        lVar13 = *plVar41;
        puVar23 = auStack_248;
LAB_1400328b8:
        (**(code **)(lVar13 + 0x178))(plVar41,puVar23);
      }
    }
  }
  if (((uVar42 >> 0x1d & 1) != 0) && (uVar20 = *(uint *)(param_1 + 0x12530), (ulonglong)uVar20 != 0)
     ) {
    uVar17 = 0;
    uVar22 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 0x12420 + uVar17 * 8);
      uVar24 = uVar22;
      if (lVar13 != 0) {
        param_4 = *(undefined8 **)(param_1 + 0x12538 + uVar17 * 8);
        uVar24 = (ulonglong)((int)uVar22 + 1);
        lVar27 = uVar22 * 0x10;
        *(ulonglong *)(auStack_248 + lVar27) =
             ((ulonglong)param_4 >> 0x20) + *(longlong *)(lVar13 + 0x38);
        *(uint *)(auStack_248 + lVar27 + 8) =
             (*(ushort *)(lVar13 + 0xc) & 0xfff) * *(int *)(lVar13 + 8) -
             (int)((ulonglong)param_4 >> 0x20);
        *(int *)(auStack_248 + lVar27 + 0xc) = (int)param_4;
      }
      uVar17 = uVar17 + 1;
      uVar22 = uVar24;
    } while (uVar20 != uVar17);
    if ((int)uVar24 != 0) {
      piVar6 = (int *)plVar41[3];
      if (piVar6 < (int *)plVar41[6]) {
        *piVar6 = (int)uVar24 * 0x20000 + 0x3fffc600;
        plVar14 = (longlong *)(piVar6 + 1);
        plVar19 = (longlong *)auStack_248;
        do {
          puVar36 = (uint *)((longlong)plVar19 + 0xc);
          lVar13 = *plVar19;
          plVar19 = plVar19 + 2;
          *plVar14 = ((ulonglong)*puVar36 << 0x30) + lVar13;
          plVar14 = plVar14 + 1;
          uVar20 = (int)uVar24 - 1;
          uVar24 = (ulonglong)uVar20;
        } while (uVar20 != 0);
        plVar41[3] = (longlong)plVar14;
        *(undefined1 *)(plVar41 + 0x28) = 1;
      }
      else {
        param_4 = (undefined8 *)auStack_248;
        (**(code **)(*plVar41 + 0x180))(plVar41,0,uVar24,param_4);
      }
    }
  }
  if ((uVar42 >> 0x19 & 1) != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x12368);
    *(undefined4 *)(param_1 + 0x123e8) = uVar4;
    puVar28 = (undefined4 *)plVar41[3];
    if (puVar28 < (undefined4 *)plVar41[6]) {
      *puVar28 = 0xc000b800;
      puVar28[1] = uVar4;
      plVar41[3] = (longlong)(puVar28 + 2);
    }
    else {
      (**(code **)(*plVar41 + 0xc0))(plVar41);
    }
  }
  if (((uVar42 >> 0x15 & 1) != 0) &&
     (lVar13 = *(longlong *)(param_1 + 0x12360), *(longlong *)(param_1 + 0x123e0) != lVar13)) {
    plVar19 = *(longlong **)(param_1 + 0x127c8);
    if (plVar19 == (longlong *)0x0) {
      FUN_140188430(lVar40);
      plVar19 = *(longlong **)(param_1 + 0x127c8);
      lVar13 = *(longlong *)(param_1 + 0x12360);
    }
    *(longlong *)(param_1 + 0x123e0) = lVar13;
    (**(code **)(*plVar19 + 0x470))();
  }
  if ((uVar42 >> 0x1a & 1) != 0) {
    (**(code **)(*plVar41 + 0xb8))(plVar41,(undefined8 *)(param_1 + 0x12310));
    *(undefined8 *)(param_1 + 0x12390) = *(undefined8 *)(param_1 + 0x12310);
    *(undefined8 *)(param_1 + 0x12398) = *(undefined8 *)(param_1 + 0x12318);
  }
  if ((param_2 & 0x500000) != 0) {
    uVar42 = *(uint *)(param_1 + 0x1268c);
    lStack_2b0 = lVar40;
    uStack_27c = uVar42;
    if (uVar42 != 0) {
      uVar22 = 0;
      do {
        lVar40 = *(longlong *)(param_1 + 0x12640 + uVar22 * 8);
        if (lVar40 == 0) break;
        *(undefined8 *)(auStack_248 + uVar22 * 8) = *(undefined8 *)(lVar40 + 0x20);
        uStack_2e4 = *(ushort *)(lVar40 + 0x1c);
        lVar13 = *(longlong *)(lVar40 + 8);
        uStack_2e8 = *(uint *)(lVar40 + 0x18);
        if ((lVar13 != 0) &&
           (uVar3 = *(ushort *)(lVar13 + 0x12), (ushort)(uVar3 - 1) < _DAT_14a943ab8)) {
          *(undefined1 *)(param_1 + 0x121a4) = 1;
          uStack_2d0 = uStack_2e8;
          uStack_2cc = uStack_2e4;
          if (*(char *)(param_1 + 0x1220c) == '\x01') {
            uVar42 = *(uint *)(param_1 + 0x12190);
            uVar24 = (ulonglong)uVar42;
            uVar17 = *(ulonglong *)(_DAT_14a943ac0 + -8 + (ulonglong)uVar3 * 8);
            iVar5 = *(int *)(param_1 + 0x12194);
            uVar3 = *(ushort *)(uVar17 + 0x80);
            if (uVar3 == 1) {
              if (*(int *)(uVar17 + 0x88 + uVar24 * 8) == iVar5) {
                param_4 = &uStack_310;
                uStack_310 = CONCAT26(uStack_310._6_2_,0xffffffffffff);
                FUN_144dbd6c0(param_1,0,lVar13,param_4,0x10e,0);
              }
              else {
                uStack_31c = 0xffffffff;
                lStack_2e0 = CONCAT44(lStack_2e0._4_4_,iVar5);
                uStack_318 = 0xffff;
                param_4 = (undefined8 *)&uStack_31c;
                FUN_144dbd700(param_1,0,lVar13,&uStack_31c,0x10e);
                iVar5 = *(int *)(param_1 + 0x12190);
                lVar40 = *(longlong *)
                          (_DAT_14a943ac0 + -8 + (ulonglong)*(ushort *)(lVar13 + 0x12) * 8);
                func_0x000144dbe170(&uStack_31c,&uStack_310,lVar13);
                if (0x1f < uStack_310._2_2_) {
                  uVar11 = (ushort)uStack_310 & 0xf;
                  uVar21 = (uint)((ushort)uStack_310 >> 5);
                  uVar16 = (uStack_310._2_2_ & 0xf) + uVar11;
                  uVar20 = (uStack_310._2_2_ >> 5) + uVar21;
                  param_4 = (undefined8 *)
                            (lVar40 + (ulonglong)(iVar5 * (uint)*(ushort *)(lVar40 + 0x80)) * 8 +
                             0x84 + (ulonglong)(uVar21 * (uStack_310._4_2_ >> 0xc) + uVar11) * 8);
                  uVar42 = uVar11;
                  do {
                    *(undefined4 *)param_4 = 0x1000000e;
                    *(uint *)((longlong)param_4 + 4) = (uint)lStack_2e0;
                    bVar44 = uVar42 + 1 == uVar16;
                    uVar17 = 0;
                    if (bVar44) {
                      uVar17 = (ulonglong)((uVar11 - uVar16) + (uint)(uStack_310._4_2_ >> 0xc));
                    }
                    uVar42 = uVar42 + 1;
                    if (bVar44) {
                      uVar42 = uVar11;
                    }
                    uVar21 = uVar21 + bVar44;
                    param_4 = param_4 + uVar17 + 1;
                  } while (uVar21 != uVar20);
                }
              }
            }
            else {
              lStack_2e0 = CONCAT44(lStack_2e0._4_4_,iVar5);
              uStack_270 = param_2;
              func_0x000144dbe210(&uStack_2d0,&uStack_2ee,lVar13);
              param_2 = uStack_270;
              if (0x1f < uStack_2ee._2_2_) {
                uVar35 = (uint)uStack_2ee._2_2_;
                puStack_258 = (undefined8 *)(uVar17 + 0x84);
                uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uVar35);
                bVar44 = false;
                uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(uint)uStack_2ea);
                uStack_300 = uStack_2ee & 0xffff;
                uVar20 = uStack_2ee & 0xf;
                uVar34 = uStack_2ee >> 5 & 0x7ff;
                uVar11 = (uVar35 & 0xf) + uVar20;
                uVar21 = (uStack_2ee._2_2_ >> 5) + uVar34;
                uVar16 = (uVar20 - uVar11) + (uint)(uStack_2ea >> 0xc);
                puStack_260 = (undefined4 *)(ulonglong)((uStack_2ea >> 0xc) * uVar34 + uVar20);
                puVar18 = (undefined8 *)
                          (uVar17 + 0x84 + (ulonglong)(uVar3 * uVar42) * 8 +
                          (longlong)puStack_260 * 8);
                param_4 = puVar18;
                uVar42 = uVar20;
                bVar25 = 0;
                uVar29 = uVar34;
                do {
                  bVar2 = bVar25;
                  bVar45 = *(int *)((longlong)param_4 + 4) != (uint)lStack_2e0;
                  if (!bVar45) {
                    bVar44 = true;
                  }
                  uVar31 = uVar42 + 1;
                  uVar39 = 0;
                  uVar42 = uVar31;
                  if (uVar31 == uVar11) {
                    uVar39 = (ulonglong)uVar16;
                    uVar42 = uVar20;
                  }
                  uVar29 = uVar29 + (uVar31 == uVar11);
                  param_4 = param_4 + uVar39 + 1;
                  bVar25 = bVar2 | bVar45;
                } while (uVar29 != uVar21);
                uStack_314 = uVar21;
                uStack_308 = uVar20;
                uStack_2fc = uVar16;
                uStack_2f8 = uVar34;
                uStack_2f4 = uVar11;
                puStack_290 = puVar18;
                uStack_288 = uVar24;
                uStack_278 = uVar17;
                if ((bool)(bVar2 | bVar45)) {
                  if (bVar44) {
                    uStack_29c = uStack_2ee & 0x10;
                    uStack_2a8 = CONCAT44(uStack_2a8._4_4_,uVar35) & 0xffffffff00000010 | 0x21;
                    uStack_304 = uVar20;
                    uStack_300 = uVar34;
                    do {
                      puStack_290 = puVar18;
                      if (*(int *)((longlong)puVar18 + 4) != (uint)lStack_2e0) {
                        uStack_2d8 = CONCAT22((short)uStack_2a8,
                                              (ushort)(uStack_300 << 5) | (ushort)uStack_304 & 0xf |
                                              (ushort)uStack_29c);
                        uStack_2d4 = (ushort)uStack_2b8;
                        uStack_310 = CONCAT44(CONCAT22(uStack_310._6_2_,uStack_2d4),uStack_2d8);
                        FUN_144dbd700(param_1,0,lVar13,&uStack_310,0x10e);
                        uStack_2c0 = *(ulonglong *)
                                      (_DAT_14a943ac0 + -8 +
                                      (ulonglong)*(ushort *)(lVar13 + 0x12) * 8);
                        uStack_298 = (ulonglong)*(uint *)(param_1 + 0x12190);
                        func_0x000144dbe170(&uStack_2d8,&uStack_31c,lVar13);
                        uVar24 = uStack_2c0;
                        uVar11 = uStack_2f4;
                        uVar20 = uStack_308;
                        uVar16 = uStack_2fc;
                        uVar21 = uStack_314;
                        uVar34 = uStack_2f8;
                        if (0x1f < uStack_31c._2_2_) {
                          uVar35 = uStack_31c & 0xf;
                          uVar33 = uStack_31c >> 5 & 0x7ff;
                          uVar29 = (uStack_31c._2_2_ & 0xf) + uVar35;
                          uVar31 = (uStack_31c._2_2_ >> 5) + uVar33;
                          uStack_268 = CONCAT44(uStack_268._4_4_,uVar31);
                          uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar29);
                          puVar28 = (undefined4 *)
                                    (uVar24 + (ulonglong)
                                              ((int)uStack_298 * (uint)*(ushort *)(uVar24 + 0x80)) *
                                              8 + 0x84 +
                                    (ulonglong)(uVar33 * (uStack_318 >> 0xc) + uVar35) * 8);
                          uVar42 = uVar35;
                          do {
                            uVar38 = uVar42 + 1;
                            *puVar28 = 0x1000000e;
                            puVar28[1] = (uint)lStack_2e0;
                            uVar24 = 0;
                            uVar42 = uVar38;
                            if (uVar38 == uVar29) {
                              uVar24 = (ulonglong)((uVar35 - uVar29) + (uint)(uStack_318 >> 0xc));
                              uVar42 = uVar35;
                            }
                            uVar33 = uVar33 + (uVar38 == uVar29);
                            puVar28 = puVar28 + uVar24 * 2 + 2;
                          } while (uVar33 != uVar31);
                        }
                      }
                      bVar45 = uStack_304 + 1 == uVar11;
                      uStack_304 = uStack_304 + 1;
                      if (bVar45) {
                        uStack_304 = uVar20;
                      }
                      uVar24 = 0;
                      if (bVar45) {
                        uVar24 = (ulonglong)uVar16;
                      }
                      uStack_300 = uStack_300 + bVar45;
                      param_4 = (undefined8 *)(ulonglong)uStack_300;
                      puVar18 = puStack_290 + uVar24 + 1;
                    } while (uStack_300 != uVar21);
                  }
                  else {
                    param_4 = &uStack_310;
                    uStack_2d8 = uStack_2e8;
                    uStack_2d4 = uStack_2e4;
                    uStack_310._0_6_ = CONCAT24(uStack_2e4,uStack_2e8);
                    FUN_144dbd700(param_1,0,lVar13,param_4,0x10e);
                    iVar5 = *(int *)(param_1 + 0x12190);
                    lVar40 = *(longlong *)
                              (_DAT_14a943ac0 + -8 + (ulonglong)*(ushort *)(lVar13 + 0x12) * 8);
                    func_0x000144dbe170(&uStack_2d8,&uStack_31c,lVar13);
                    uVar17 = uStack_278;
                    uVar20 = uStack_308;
                    uVar34 = uStack_2f8;
                    if (0x1f < uStack_31c._2_2_) {
                      uVar11 = uStack_31c & 0xf;
                      uVar29 = uStack_31c >> 5 & 0x7ff;
                      uVar16 = (uStack_31c._2_2_ & 0xf) + uVar11;
                      uVar21 = (uStack_31c._2_2_ >> 5) + uVar29;
                      param_4 = (undefined8 *)
                                (lVar40 + (ulonglong)(iVar5 * (uint)*(ushort *)(lVar40 + 0x80)) * 8
                                 + 0x84 + (ulonglong)(uVar29 * (uStack_318 >> 0xc) + uVar11) * 8);
                      uVar42 = uVar11;
                      do {
                        *(undefined4 *)param_4 = 0x1000000e;
                        *(uint *)((longlong)param_4 + 4) = (uint)lStack_2e0;
                        bVar45 = uVar42 + 1 == uVar16;
                        uVar24 = 0;
                        if (bVar45) {
                          uVar24 = (ulonglong)((uVar11 - uVar16) + (uint)(uStack_318 >> 0xc));
                        }
                        uVar42 = uVar42 + 1;
                        if (bVar45) {
                          uVar42 = uVar11;
                        }
                        uVar29 = uVar29 + bVar45;
                        param_4 = param_4 + uVar24 + 1;
                      } while (uVar29 != uVar21);
                    }
                  }
                  param_2 = uStack_270;
                  if (bVar44) {
                    uStack_2b8 = uStack_2b8 & 0xffffffff0000f000;
                    puVar18 = puStack_258 +
                              (ulonglong)((uint)*(ushort *)(uVar17 + 0x80) * (int)uStack_288) +
                              (longlong)puStack_260;
                    param_4 = puStack_258;
                    do {
                      uVar43 = uStack_310;
                      if (*(int *)((longlong)puVar18 + 4) == (uint)lStack_2e0) {
                        param_4 = &uStack_310;
                        uStack_310._6_2_ = SUB82(uVar43,6);
                        uStack_310._0_6_ =
                             CONCAT24((short)uStack_2b8,
                                      CONCAT22(0x21,(ushort)(uVar34 << 5) | (ushort)uVar20 & 0xf));
                        FUN_144dbd6c0(param_1,0,lVar13,param_4,0x10e,0);
                      }
                      uVar42 = uVar20 + 1;
                      uVar17 = 0;
                      uVar20 = uVar42;
                      if (uVar42 == uStack_2f4) {
                        uVar17 = (ulonglong)uStack_2fc;
                        uVar20 = uStack_308;
                      }
                      uVar34 = uVar34 + (uVar42 == uStack_2f4);
                      puVar18 = puVar18 + uVar17 + 1;
                      param_2 = uStack_270;
                    } while (uVar34 != uStack_314);
                  }
                }
                else if (bVar44) {
                  param_4 = &uStack_310;
                  uStack_310 = CONCAT44(CONCAT22(uStack_310._6_2_,uStack_2e4),uStack_2e8);
                  FUN_144dbd6c0(param_1,0,lVar13,param_4,0x10e,0);
                  param_2 = uStack_270;
                }
              }
            }
          }
          uVar42 = *(uint *)(param_1 + 0x1268c);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar42);
    }
    lVar13 = *(longlong *)(param_1 + 0x12680);
    lVar40 = lStack_2b0;
    if (lVar13 == 0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      bVar25 = *(byte *)(lVar13 + 0x12);
      bVar2 = *(byte *)(param_1 + 0x12688);
      if (((bVar25 & 0x40) >> 6 & bVar2) == 0) {
        bVar32 = bVar25 & 0x60;
        if (bVar32 == 0) {
          uVar22 = (ulonglong)(bVar2 != 0) * 5 + 0xf;
        }
        else if (bVar32 != 0x60 && bVar2 == 0) {
          uVar22 = 0x11;
          if ((bVar25 & 0x20) == 0) {
            uVar22 = (ulonglong)((uint)((bVar25 & 0x40) != 0) * 3 + 0xf);
          }
        }
        else {
          uVar22 = (ulonglong)((uint)(bVar32 != 0x60) * 4 + 0x10);
        }
      }
      else {
        uVar22 = CONCAT62((int6)((ulonglong)param_4 >> 0x10),0x13);
      }
      uStack_310 = *(undefined8 *)(lVar13 + 0x20);
      uVar17 = *(ulonglong *)(lVar13 + 8);
      uStack_2c8 = *(uint *)(lVar13 + 0x18);
      uStack_2c4 = *(ushort *)(lVar13 + 0x1c);
      if (((uVar17 != 0) &&
          (uVar3 = *(ushort *)(uVar17 + 0x12), (ushort)(uVar3 - 1) < _DAT_14a943ab8)) &&
         (*(undefined1 *)(param_1 + 0x121a4) = 1, uStack_2e8 = uStack_2c8, uStack_2e4 = uStack_2c4,
         *(char *)(param_1 + 0x1220c) == '\x01')) {
        uVar42 = *(uint *)(param_1 + 0x12190);
        uVar24 = (ulonglong)uVar42;
        uVar39 = uVar22 & 0xffff;
        iVar5 = (int)uVar39;
        puVar18 = *(undefined8 **)(_DAT_14a943ac0 + -8 + (ulonglong)uVar3 * 8);
        uVar20 = *(uint *)(param_1 + 0x12194);
        uVar3 = *(ushort *)(puVar18 + 0x10);
        if (uVar3 == 1) {
          uVar15 = (undefined2)(iVar5 + 0x100U);
          if (*(uint *)(puVar18 + uVar24 + 0x11) == uVar20) {
            uStack_31c = 0xffffffff;
            uStack_318 = 0xffff;
LAB_1400332c5:
            lVar40 = lStack_2b0;
            FUN_144dbd6c0(param_1,0,uVar17,&uStack_31c,uVar15,0);
          }
          else {
            uVar42 = *(uint *)(&UNK_1461e0760 + uVar39 * 4);
            uStack_2ee = 0xffffffff;
            uStack_2ea = 0xffff;
            uStack_314 = uVar20;
            FUN_144dbd700(param_1,0,uVar17,&uStack_2ee,uVar15);
            iVar5 = *(int *)(param_1 + 0x12190);
            lStack_2e0 = *(longlong *)
                          (_DAT_14a943ac0 + -8 + (ulonglong)*(ushort *)(uVar17 + 0x12) * 8);
            func_0x000144dbe170(&uStack_2ee,&uStack_31c,uVar17);
            lVar40 = lStack_2b0;
            if (0x1f < uStack_31c._2_2_) {
              uVar16 = uStack_31c & 0xf;
              uVar34 = uStack_31c >> 5 & 0x7ff;
              uVar21 = (uStack_31c._2_2_ & 0xf) + uVar16;
              uVar11 = (uStack_31c._2_2_ >> 5) + uVar34;
              puVar36 = (uint *)(lStack_2e0 +
                                 (ulonglong)(iVar5 * (uint)*(ushort *)(lStack_2e0 + 0x80)) * 8 +
                                 0x84 + (ulonglong)(uVar34 * (uStack_318 >> 0xc) + uVar16) * 8);
              uVar20 = uVar16;
              do {
                *puVar36 = uVar42 | 0x10000000;
                puVar36[1] = uStack_314;
                bVar44 = uVar20 + 1 == uVar21;
                uVar22 = 0;
                if (bVar44) {
                  uVar22 = (ulonglong)((uVar16 - uVar21) + (uint)(uStack_318 >> 0xc));
                }
                uVar20 = uVar20 + 1;
                if (bVar44) {
                  uVar20 = uVar16;
                }
                uVar34 = uVar34 + bVar44;
                puVar36 = puVar36 + uVar22 * 2 + 2;
              } while (uVar34 != uVar11);
            }
          }
        }
        else {
          uStack_2c0 = CONCAT44(uStack_2c0._4_4_,(int)uVar22);
          uStack_314 = uVar20;
          uStack_308 = iVar5 + 0x100U;
          uStack_2b8 = uVar17;
          func_0x000144dbe210(&uStack_2e8,&uStack_2d8);
          uVar22 = uStack_2b8;
          lVar40 = lStack_2b0;
          if (0x1f < uStack_2d8._2_2_) {
            puStack_260 = (undefined4 *)((longlong)puVar18 + 0x84);
            uStack_300 = (uint)uStack_2d8._2_2_;
            bVar44 = false;
            uVar11 = (uint)uStack_2d4;
            uStack_304 = uStack_2d8 & 0xffff;
            uVar16 = uStack_2d8 >> 5 & 0x7ff;
            uStack_2fc = uStack_2d8 & 0xf;
            uVar29 = (uStack_300 & 0xf) + uStack_2fc;
            uVar21 = (uStack_2d8._2_2_ >> 5) + uVar16;
            uStack_288 = CONCAT44(uStack_288._4_4_,uStack_2d8 >> 5) & 0xffffffff000007ff;
            lStack_2e0 = CONCAT44(lStack_2e0._4_4_,uVar29);
            uVar34 = (uStack_2fc - uVar29) + (uint)(uStack_2d4 >> 0xc);
            puStack_290 = (undefined8 *)(ulonglong)((uStack_2d4 >> 0xc) * uVar16 + uStack_2fc);
            uVar17 = (longlong)puVar18 +
                     (longlong)puStack_290 * 8 + (ulonglong)(uVar3 * uVar42) * 8 + 0x84;
            uVar37 = uVar17;
            uVar20 = uVar16;
            bVar25 = 0;
            uVar42 = uStack_2fc;
            do {
              bVar2 = bVar25;
              bVar45 = *(uint *)(uVar37 + 4) != uStack_314;
              if (!bVar45) {
                bVar44 = true;
              }
              uVar35 = uVar42 + 1;
              uVar30 = 0;
              uVar42 = uVar35;
              if (uVar35 == uVar29) {
                uVar30 = (ulonglong)uVar34;
                uVar42 = uStack_2fc;
              }
              uVar20 = uVar20 + (uVar35 == uVar29);
              uVar37 = uVar37 + (uVar30 * 2 + 2) * 4;
              bVar25 = bVar2 | bVar45;
            } while (uVar20 != uVar21);
            uStack_270 = CONCAT44(uStack_270._4_4_,uVar34);
            uStack_2f8 = uVar11;
            uStack_2f4 = uVar21;
            uStack_2a8 = uVar17;
            uStack_278 = uVar24;
            puStack_258 = puVar18;
            if ((bool)(bVar2 | bVar45)) {
              if (((iVar5 - 3U < 2) || (iVar5 - 0xcU < 2)) && (uVar39 = 1, 1 < (ushort)(iVar5 - 3U))
                 ) {
                uVar39 = (ulonglong)((short)uStack_2c0 == 0xc ^ 9);
              }
              uVar42 = *(uint *)(&UNK_1461e0760 + uVar39 * 4);
              sVar26 = (short)uVar39 + 0x100;
              if (bVar44) {
                uStack_24c = uStack_2d8 & 0x10;
                uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uStack_2d8) & 0xffffffff0000000f;
                uStack_300 = uStack_300 & 0x10 | 0x21;
                uVar29 = uStack_308;
                uStack_304 = uVar16;
                uVar20 = uStack_2fc;
                do {
                  uVar22 = uStack_2b8;
                  uStack_2a8 = uVar17;
                  if (*(uint *)(uVar17 + 4) != uStack_314) {
                    uStack_318 = (ushort)uVar11;
                    uStack_2d0 = CONCAT22((short)uStack_300,
                                          (ushort)(uStack_304 << 5) | (ushort)uStack_2c0 & 0xf |
                                          (ushort)uStack_24c);
                    uStack_31c = uStack_2d0;
                    uStack_2cc = uStack_318;
                    FUN_144dbd700(param_1,0,uStack_2b8,&uStack_31c,sVar26);
                    uStack_298 = *(ulonglong *)
                                  (_DAT_14a943ac0 + -8 + (ulonglong)*(ushort *)(uVar22 + 0x12) * 8);
                    uStack_268 = (ulonglong)*(uint *)(param_1 + 0x12190);
                    func_0x000144dbe170(&uStack_2d0,&uStack_2ee,uVar22);
                    uVar22 = uStack_298;
                    if (0x1f < uStack_2ee._2_2_) {
                      puVar1 = (ushort *)(uStack_298 + 0x80);
                      uVar11 = uStack_2ee & 0xf;
                      uVar21 = uStack_2ee >> 5 & 0x7ff;
                      uVar16 = (uStack_2ee._2_2_ & 0xf) + uVar11;
                      uStack_29c = (uStack_2ee._2_2_ >> 5) + uVar21;
                      uStack_298 = CONCAT44(uStack_298._4_4_,uVar16);
                      puVar36 = (uint *)(uVar22 + (ulonglong)((int)uStack_268 * (uint)*puVar1) * 8 +
                                         0x84 + (ulonglong)(uVar21 * (uStack_2ea >> 0xc) + uVar11) *
                                                8);
                      uVar20 = uVar11;
                      do {
                        uVar29 = uVar20 + 1;
                        *puVar36 = uVar42 | 0x10000000;
                        puVar36[1] = uStack_314;
                        uVar22 = 0;
                        uVar20 = uVar29;
                        if (uVar29 == uVar16) {
                          uVar22 = (ulonglong)((uVar11 - uVar16) + (uint)(uStack_2ea >> 0xc));
                          uVar20 = uVar11;
                        }
                        uVar21 = uVar21 + (uVar29 == uVar16);
                        puVar36 = puVar36 + uVar22 * 2 + 2;
                      } while (uVar21 != uStack_29c);
                    }
                    uVar29 = uStack_308;
                    uVar11 = uStack_2f8;
                    uVar16 = (uint)uStack_288;
                    uVar21 = uStack_2f4;
                    uVar20 = uStack_2fc;
                  }
                  bVar45 = (int)uStack_2c0 + 1U == (uint)lStack_2e0;
                  uVar35 = (int)uStack_2c0 + 1U;
                  if (bVar45) {
                    uVar35 = uVar20;
                  }
                  uVar22 = 0;
                  if (bVar45) {
                    uVar22 = (ulonglong)uVar34;
                  }
                  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar35);
                  uStack_304 = uStack_304 + bVar45;
                  uVar17 = uStack_2a8 + (uVar22 * 2 + 2) * 4;
                } while (uStack_304 != uVar21);
              }
              else {
                uStack_2d0 = uStack_2c8;
                uStack_31c = uStack_2c8;
                uStack_2cc = uStack_2c4;
                uStack_318 = uStack_2c4;
                FUN_144dbd700(param_1,0,uStack_2b8,&uStack_31c,sVar26);
                iVar5 = *(int *)(param_1 + 0x12190);
                lVar40 = *(longlong *)
                          (_DAT_14a943ac0 + -8 + (ulonglong)*(ushort *)(uVar22 + 0x12) * 8);
                func_0x000144dbe170(&uStack_2d0,&uStack_2ee,uVar22);
                if (0x1f < uStack_2ee._2_2_) {
                  uVar16 = uStack_2ee & 0xf;
                  uVar34 = uStack_2ee >> 5 & 0x7ff;
                  uVar21 = (uStack_2ee._2_2_ & 0xf) + uVar16;
                  uVar11 = (uStack_2ee._2_2_ >> 5) + uVar34;
                  puVar36 = (uint *)(lVar40 + (ulonglong)(iVar5 * (uint)*(ushort *)(lVar40 + 0x80))
                                              * 8 + 0x84 +
                                    (ulonglong)(uVar34 * (uStack_2ea >> 0xc) + uVar16) * 8);
                  uVar20 = uVar16;
                  do {
                    uVar29 = uVar20 + 1;
                    *puVar36 = uVar42 | 0x10000000;
                    puVar36[1] = uStack_314;
                    uVar22 = 0;
                    uVar20 = uVar29;
                    if (uVar29 == uVar21) {
                      uVar22 = (ulonglong)((uVar16 - uVar21) + (uint)(uStack_2ea >> 0xc));
                      uVar20 = uVar16;
                    }
                    uVar34 = uVar34 + (uVar29 == uVar21);
                    puVar36 = puVar36 + uVar22 * 2 + 2;
                  } while (uVar34 != uVar11);
                }
                uVar29 = uStack_308;
                uVar11 = uStack_2f8;
                uVar16 = (uint)uStack_288;
                uVar20 = uStack_2fc;
              }
              lVar40 = lStack_2b0;
              if (bVar44) {
                puVar28 = puStack_260 +
                          (ulonglong)((uint)*(ushort *)(puStack_258 + 0x10) * (int)uStack_278) * 2 +
                          (longlong)puStack_290 * 2;
                do {
                  if (puVar28[1] == uStack_314) {
                    uStack_31c = CONCAT22(0x21,(ushort)(uVar16 << 5) | (ushort)uVar20 & 0xf);
                    uStack_318 = (ushort)uVar11 & 0xf000;
                    FUN_144dbd6c0(param_1,0,uStack_2b8,&uStack_31c,(short)uVar29,0);
                    uVar29 = uStack_308;
                  }
                  uVar42 = uVar20 + 1;
                  uVar22 = 0;
                  uVar20 = uVar42;
                  if (uVar42 == (uint)lStack_2e0) {
                    uVar22 = uStack_270 & 0xffffffff;
                    uVar20 = uStack_2fc;
                  }
                  uVar16 = uVar16 + (uVar42 == (uint)lStack_2e0);
                  puVar28 = puVar28 + uVar22 * 2 + 2;
                } while (uVar16 != uStack_2f4);
              }
            }
            else if (bVar44) {
              uStack_31c = uStack_2c8;
              uStack_318 = uStack_2c4;
              uVar15 = (undefined2)uStack_308;
              uVar17 = uStack_2b8;
              goto LAB_1400332c5;
            }
          }
        }
      }
      puVar18 = &uStack_310;
    }
    func_0x000144e34010(lVar40);
    if (((uint)param_2 >> 0x16 & 1) != 0) {
      plVar19 = *(longlong **)(param_1 + 0x127c8);
      if (plVar19 == (longlong *)0x0) {
        FUN_140188430(lVar40);
        plVar19 = *(longlong **)(param_1 + 0x127c8);
      }
      (**(code **)(*plVar19 + 400))(plVar19,uStack_27c,auStack_248,0,puVar18);
    }
    *(undefined2 *)(param_1 + 0x123ee) = *(undefined2 *)(param_1 + 0x1236e);
  }
  if ((param_2 & 0x40500000) != 0) {
    uVar22 = _DAT_146159bc0;
    if (*(int *)(*(longlong *)((ulonglong)*(ushort *)(param_1 + 0x1236e) * 8 + 0x1475a58d0) + 0x44)
        != 0) {
      uVar22 = *(ulonglong *)(param_1 + 0x12370);
    }
    auVar48._8_8_ = 0;
    auVar48._0_8_ = uVar22;
    auVar46 = vmovshdup_avx(auVar48);
    if (((uint)param_2 >> 0x16 & 1) == 0) {
      if ((*(float *)(param_1 + 0x123f0) == (float)uVar22) &&
         (!NAN(*(float *)(param_1 + 0x123f0)) && !NAN((float)uVar22))) {
        if ((*(float *)(param_1 + 0x123f4) == auVar46._0_4_) &&
           (!NAN(*(float *)(param_1 + 0x123f4)) && !NAN(auVar46._0_4_))) goto LAB_140033396;
      }
    }
    uVar43 = vmovlps_avx(auVar48);
    *(undefined8 *)(param_1 + 0x123f0) = uVar43;
    (**(code **)(*plVar41 + 0x230))(plVar41);
  }
LAB_140033396:
  if ((param_2 & 0x18000000) != 0) {
    uVar22 = *(ulonglong *)(param_1 + 0x12350);
    fVar7 = (float)*(undefined8 *)(param_1 + 0x12338);
    fVar8 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x12338) >> 0x20);
    auVar50._0_8_ = CONCAT44((int)fVar8,(int)fVar7);
    auVar9._0_4_ = (int)*(undefined8 *)(param_1 + 0x12358) + (int)uVar22;
    auVar9._4_4_ = (int)((ulonglong)*(undefined8 *)(param_1 + 0x12358) >> 0x20) +
                   (int)(uVar22 >> 0x20);
    auVar9._8_8_ = 0;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = uVar22;
    auVar48 = vpunpcklqdq_avx(auVar47,auVar9);
    auVar49._0_8_ =
         CONCAT44((int)((float)((ulonglong)*(undefined8 *)(param_1 + 0x12340) >> 0x20) + fVar8),
                  (int)((float)*(undefined8 *)(param_1 + 0x12340) + fVar7));
    auVar50._8_8_ = auVar50._0_8_;
    auVar46 = vpcmpgtd_avx(auVar50,auVar48);
    auVar49._8_8_ = auVar49._0_8_;
    auVar48 = vpminsd_avx(auVar48,auVar49);
    auStack_248 = vblendvps_avx(auVar48,auVar50,auVar46);
    (**(code **)(*plVar41 + 0xb0))(plVar41,1);
    *(undefined8 *)(param_1 + 0x123d0) = *(undefined8 *)(param_1 + 0x12350);
    *(undefined8 *)(param_1 + 0x123d8) = *(undefined8 *)(param_1 + 0x12358);
  }
  if (((uint)param_2 >> 0x1b & 1) != 0) {
    (**(code **)(*plVar41 + 0xa8))(plVar41,1,param_1 + 0x12338);
    *(undefined8 *)(param_1 + 0x123c8) = *(undefined8 *)(param_1 + 0x12348);
    *(undefined8 *)(param_1 + 0x123b8) = *(undefined8 *)(param_1 + 0x12338);
    *(undefined8 *)(param_1 + 0x123c0) = *(undefined8 *)(param_1 + 0x12340);
  }
  func_0x000144e34010(lVar40);
  if ((param_2 & 0x700000f0ff) != 0) {
    FUN_140032130(param_1,param_2);
  }
  return;
}

