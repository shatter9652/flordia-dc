// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a8010  size: 2428 bytes
// Name:    FUN_1401a8010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145360210, FUN_1401a89b0, FUN_1401a9fc0, FUN_1407dc2e0, FUN_1401a8bc0, FUN_1401aa320, FUN_1401abee0, FUN_1401a8ae0, FUN_1401a8a00, FUN_1401a8fa0, FUN_1401abbd0, FUN_1401ac860, FUN_145234a80, FUN_1407dd010, FUN_1401a7ff0, FUN_1401aa0d0, FUN_1452b2cb0, FUN_1401a9f70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a8010(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  ulonglong unaff_RBP;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined *puVar18;
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  float fVar27;
  float fVar28;
  undefined1 in_ZMM10 [64];
  undefined1 auVar29 [64];
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  uint uVar33;
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_a8 [16];
  undefined1 extraout_var [56];
  
  auStack_a8 = in_ZMM10._0_16_;
  cVar3 = FUN_1401a8bc0(*(undefined8 *)(param_1 + 8));
  if (cVar3 == '\0') {
    if (*(short *)(param_1 + 0x28) != 0) {
      uVar16 = 0;
      do {
        FUN_1407dc2e0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8));
        uVar16 = uVar16 + 1;
      } while (uVar16 < *(ushort *)(param_1 + 0x28));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x74) = 0;
    if ((((*(longlong *)(param_1 + 8) != 0) &&
         (lVar9 = func_0x000144da6540(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c)),
         lVar9 != 0)) && (*(longlong *)(lVar9 + 0x1078) != 0)) &&
       (*(int *)(*(longlong *)(lVar9 + 0x1078) + 0x1dc) != 0)) {
      *(undefined4 *)(param_1 + 0xb8) = _DAT_14abbef40;
    }
    if (*(short *)(param_1 + 0x28) != 0) {
      auVar21 = ZEXT464(_DAT_146159ae0);
      puVar18 = &DAT_14abbef40;
      plVar15 = (longlong *)0x0;
      fVar27 = _DAT_145fc6ed8;
      do {
        pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8) +
                         0x93);
        *pbVar1 = *pbVar1 & 0x7f;
        plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8);
        bVar5 = *(byte *)((longlong)plVar12 + 0x91);
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar5);
        cVar3 = func_0x0001450705a0((int)plVar12[5],unaff_RBP & 0xffffffff);
        if (cVar3 == '\0') {
          if (*plVar12 != 0) {
            func_0x000144d9c130();
          }
          *plVar12 = 0;
          *(undefined4 *)(plVar12 + 1) = 0;
        }
        else {
          uVar33 = *(uint *)(plVar12 + 4);
          if (uVar33 == 0x1ffff) {
LAB_1401a891a:
            uVar16 = 0;
          }
          else {
            uVar7 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar33 & 0x1ffff) * 4);
            if (((~uVar7 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
               ((uVar7 & 0x7fe0000) != (uVar33 & 0xfffe0000))) goto LAB_1401a891a;
            uVar16 = (ulonglong)((uVar33 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
          }
          *(byte *)((longlong)plVar12 + 0x91) = bVar5 & 0x7f | (uVar16 != 0) << 7;
          pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8) +
                           0x92);
          *pbVar1 = *pbVar1 & 0xfe;
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8);
          *(undefined2 *)(lVar9 + 8) = 0;
          if (uVar16 == 0) {
            auStack_148._0_12_ = ZEXT812(0);
            auStack_148._12_4_ = 0;
            unaff_RBP = 0;
          }
          else {
            unaff_RBP = FUN_145234a80(uVar16,0,0);
            if (unaff_RBP == 0) {
              uStack_118 = *(undefined8 *)(uVar16 + 0x70);
              uStack_110 = *(undefined8 *)(uVar16 + 0x78);
              func_0x000144dc3790(&uStack_118,auStack_148);
              unaff_RBP = uVar16;
            }
            else {
              uStack_108 = *(undefined8 *)(unaff_RBP + 0x70);
              uStack_100 = *(undefined8 *)(unaff_RBP + 0x78);
              func_0x000144dc3790(&uStack_108,auStack_148);
            }
          }
          *(undefined8 *)(lVar9 + 0x10) = auStack_148._0_8_;
          *(undefined8 *)(lVar9 + 0x18) = auStack_148._8_8_;
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8);
          *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)(lVar9 + 0x2c);
          *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar9 + 0x3c);
          *(byte *)(lVar9 + 0x91) =
               *(byte *)(lVar9 + 0x91) & 0xdf | (*(byte *)(lVar9 + 0x91) & 1) << 5;
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8);
          bVar5 = *(byte *)(lVar9 + 0x91);
          *(byte *)(lVar9 + 0x91) = bVar5 & 0xbf | (bVar5 & 2) << 5;
          if (unaff_RBP == 0) {
            bVar5 = 0;
          }
          else {
            uStack_128 = *(undefined8 *)(unaff_RBP + 0x70);
            uStack_120 = *(undefined8 *)(unaff_RBP + 0x78);
            cVar3 = FUN_145360210(&uStack_128);
            bVar5 = cVar3 * '\x02';
          }
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8);
          *(byte *)(lVar9 + 0x92) = *(byte *)(lVar9 + 0x92) & 0xfd | bVar5;
          cVar3 = FUN_1401a8a00(unaff_RBP);
          plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8);
          puVar11 = (undefined4 *)((longlong)plVar12 + 0x6c);
          if (cVar3 != '\0') {
            puVar11 = (undefined4 *)&DAT_14abbef40;
          }
          *(undefined4 *)((longlong)plVar12 + 0x6c) = *puVar11;
          cVar3 = func_0x000144eda060(*(undefined4 *)(uVar16 + 0x9c));
          uVar8 = auVar21._0_4_;
          if (cVar3 != '\0') {
            uVar8 = (undefined4)plVar12[10];
          }
          *(undefined4 *)((longlong)plVar12 + 0x4c) = uVar8;
          if (((*(byte *)((longlong)plVar12 + 0x91) & 4) != 0) &&
             (fVar19 = *(float *)(plVar12 + 0xb) + _DAT_14abbef4c,
             *(float *)(plVar12 + 0xb) = fVar19, fVar27 < fVar19)) {
            *(undefined4 *)(plVar12 + 0xb) = 0;
          }
          cVar3 = FUN_1401a8fa0(param_1,(ulonglong)plVar15 & 0xffffffff);
          if (cVar3 == '\0') {
            pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8) +
                             0x91);
            *pbVar1 = *pbVar1 & 0x7f;
            pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8) +
                             0x94);
            *pbVar1 = *pbVar1 & 0xfd;
          }
          pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8) +
                           0x93);
          *pbVar1 = *pbVar1 & 0xdf;
        }
        plVar17 = (longlong *)(ulonglong)*(ushort *)(param_1 + 0x28);
        plVar15 = (longlong *)((longlong)plVar15 + 1);
      } while (plVar15 < plVar17);
      if (*(ushort *)(param_1 + 0x28) != 0) {
        plVar15 = (longlong *)0x0;
        do {
          lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar15 * 8);
          cVar3 = *(char *)(lVar9 + 0x91);
          plVar12 = (longlong *)CONCAT71((int7)((ulonglong)plVar12 >> 8),cVar3);
          cVar4 = func_0x0001450705a0(*(undefined4 *)(lVar9 + 0x28),(ulonglong)plVar12 & 0xffffffff)
          ;
          if ((((cVar4 != '\0') && ((*(byte *)(lVar9 + 0x92) & 1) == 0)) && (cVar3 < '\0')) &&
             ((short)plVar17 != 0)) {
            plVar12 = (longlong *)0x0;
            do {
              lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)plVar12 * 8);
              if (((*(byte *)(lVar9 + 0x92) & 1) == 0) && (*(char *)(lVar9 + 0x91) < '\0')) {
                param_4 = (ulonglong)plVar12 & 0xffffffff;
                cVar3 = FUN_1401aa0d0(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x20),
                                      (ulonglong)plVar15 & 0xffffffff,param_4);
                if (cVar3 != '\0') {
                  FUN_1401abee0(param_1,(ulonglong)plVar15 & 0xffffffff,
                                (ulonglong)plVar12 & 0xffffffff);
                  plVar17 = (longlong *)(ulonglong)*(ushort *)(param_1 + 0x28);
                }
              }
              plVar12 = (longlong *)((longlong)plVar12 + 1);
            } while (plVar12 < plVar17);
          }
          plVar15 = (longlong *)((longlong)plVar15 + 1);
        } while (plVar15 < plVar17);
        if ((short)plVar17 != 0) {
          auVar25 = ZEXT1664(CONCAT412(_DAT_145fc6f80,
                                       CONCAT48(_DAT_145fc6f80,
                                                CONCAT44(_DAT_145fc6f80,_DAT_145fc6f80))));
          auVar21 = ZEXT1664(CONCAT412(_DAT_146159be0,
                                       CONCAT48(_DAT_146159be0,
                                                CONCAT44(_DAT_146159be0,_DAT_146159be0))));
          auVar31 = ZEXT464(_DAT_145fc6f84);
          auVar34 = ZEXT464(_DAT_146159be0);
          auVar32 = ZEXT1264(ZEXT812(0));
          uVar16 = 0;
          uVar33 = _DAT_145fc6f4c;
          fVar19 = _DAT_146159c20;
          do {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8);
            cVar3 = *(char *)(lVar9 + 0x91);
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),cVar3);
            cVar4 = func_0x0001450705a0(*(undefined4 *)(lVar9 + 0x28),unaff_RBP & 0xffffffff);
            if (cVar4 == '\0') goto LAB_1401a852d;
            if (cVar3 < '\0') {
              cVar3 = FUN_1401aa320(param_1,uVar16 & 0xffffffff);
              bVar2 = true;
              if (cVar3 == '\0') {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8);
                goto LAB_1401a8490;
              }
            }
            else {
LAB_1401a8490:
              FUN_1401a8ae0(lVar9);
              bVar2 = false;
              FUN_1401a89b0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8),0);
            }
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8);
            fVar28 = *(float *)(lVar9 + 0x48);
            uVar7 = FUN_1452b2cb0(*(undefined4 *)
                                   (*_DAT_14abb6918 + 0x9c +
                                   (ulonglong)
                                   ((*(uint *)(lVar9 + 0x20) & 0x1ffff) * (int)_DAT_14abb6918[1])));
            lVar13 = *(longlong *)(param_1 + 0x20);
            unaff_RBP = (ulonglong)uVar7;
            lVar9 = *(longlong *)(lVar13 + uVar16 * 8);
            bVar5 = *(byte *)(lVar9 + 0x91);
            puVar18 = (undefined *)CONCAT71((int7)((ulonglong)puVar18 >> 8),bVar5);
            cVar3 = func_0x0001401a8990(*(undefined4 *)(lVar9 + 0x3c),
                                        (ulonglong)puVar18 & 0xffffffff);
            if (cVar3 == '\0') {
              if ((bVar5 & 8) == 0) {
                bVar6 = 0;
              }
              else {
                bVar6 = FUN_1401a7ff0();
                lVar13 = *(longlong *)(param_1 + 0x20);
                bVar6 = bVar6 ^ 1;
                lVar9 = *(longlong *)(lVar13 + uVar16 * 8);
              }
              bVar5 = *(byte *)(lVar9 + 0x92);
              if ((bVar6 != 0) || ((bVar5 & 2) != 0)) goto LAB_1401a8542;
              cVar3 = func_0x0001400c3df0();
              if (cVar3 != '\0') {
                FUN_1407dd010(lVar9);
              }
              if (bVar2) {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8);
                if ((-1 < (char)*(byte *)(lVar9 + 0x92)) && ((*(byte *)(lVar9 + 0x93) & 2) == 0)) {
                  *(undefined4 *)(lVar9 + 0x7c) = _DAT_14abbef40;
                }
                if ((*(byte *)(lVar9 + 0x93) & 1) == 0) {
                  *(undefined4 *)(lVar9 + 0x80) = _DAT_14abbef40;
                }
                if ((*(byte *)(lVar9 + 0x92) & 1) == 0) {
                  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
                  if (*(uint *)(lVar9 + 0x8c) < 0x10) {
                    uStack_138 = *(undefined8 *)(lVar9 + 0x10);
                    uStack_130 = *(undefined8 *)(lVar9 + 0x18);
                    auVar20._0_8_ = FUN_1401a9f70(&uStack_138);
                    auVar20._8_56_ = extraout_var;
                    auVar29 = ZEXT1664(auVar20._0_16_);
                    auVar22 = ZEXT1664(auVar25._0_16_);
                    auVar35 = ZEXT1664(auVar31._0_16_);
                    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8);
                    auVar26 = ZEXT464((uint)*(float *)(lVar9 + 0x60));
                    fVar19 = (float)auVar20._0_8_ - *(float *)(lVar9 + 0x60);
                    auVar24 = vcmpss_avx(auVar32._0_16_,ZEXT416((uint)fVar19),2);
                    auVar24 = vblendvps_avx(auVar21._0_16_,auVar25._0_16_,auVar24);
                    auVar21 = ZEXT1664(auVar24);
                    fVar30 = _DAT_14abbef4c;
                    fVar19 = (float)func_0x000145f40820(auVar24._0_4_ + fVar19,auVar31._0_8_);
                    auVar24 = auVar26._0_16_;
                    fVar19 = fVar19 - auVar21._0_4_;
                    if ((auVar34._0_4_ < fVar19) && ((float)(uVar33 & (uint)fVar19) < fVar27)) {
                      fVar23 = auVar26._0_4_;
                      fVar19 = fVar19 + fVar23;
                      auVar29 = ZEXT464((uint)fVar19);
                      auVar21._4_60_ = auVar26._4_60_;
                      if (fVar23 < fVar19) {
                        auVar25._0_4_ = fVar30 * _DAT_14615a2d0 + fVar23;
                        auVar25._4_60_ = auVar21._4_60_;
                        auVar24 = auVar25._0_16_;
                        if (auVar25._0_4_ <= fVar19) goto LAB_1401a88fa;
                      }
                      else if ((fVar23 <= fVar19) ||
                              (auVar21._0_4_ = fVar30 * _DAT_14615a584 + fVar23,
                              auVar24 = auVar21._0_16_, fVar19 <= auVar21._0_4_)) {
LAB_1401a88fa:
                        auVar29 = ZEXT1664(auVar24);
                      }
                    }
                    auVar32 = ZEXT864(0);
                    auVar25 = ZEXT1664(auVar22._0_16_);
                    auVar31 = ZEXT1664(auVar35._0_16_);
                    auVar21 = ZEXT1664(CONCAT412(_DAT_146159be0,
                                                 CONCAT48(_DAT_146159be0,
                                                          CONCAT44(_DAT_146159be0,_DAT_146159be0))))
                    ;
                    auVar34 = ZEXT1664(auVar34._0_16_);
                    fVar19 = _DAT_146159c20;
                  }
                  else {
                    func_0x000144ec8b40();
                    uVar10 = func_0x0001401a8c70();
                    func_0x0001401ac460(uVar10,auStack_148);
                    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8);
                    *(undefined4 *)(lVar9 + 0x8c) = auStack_148._0_4_;
                    *(undefined4 *)(lVar9 + 0x88) = _DAT_14abbef40;
                    *(byte *)(lVar9 + 0x93) = *(byte *)(lVar9 + 0x93) | 0x80;
                    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8);
                    uStack_f8 = *(undefined8 *)(lVar9 + 0x10);
                    uStack_f0 = *(undefined8 *)(lVar9 + 0x18);
                    auVar29._0_8_ = FUN_1401a9f70();
                    auVar29._8_56_ = extraout_var_00;
                    auVar29 = ZEXT1664(auVar29._0_16_);
                    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8);
                  }
                  *(int *)(lVar9 + 0x60) = auVar29._0_4_;
                  func_0x000144ec8b40();
                  uVar10 = func_0x0001401a8c70();
                  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8);
                  uVar14 = CONCAT71((int7)(param_4 >> 8),*(undefined1 *)(lVar9 + 0x91)) &
                           0xffffffffffffff40;
                  param_4 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 >> 6);
                  FUN_1401a9fc0(uVar10,*(undefined4 *)(lVar9 + 0x8c),uVar7,param_4,fVar28,
                                fVar19 * auVar29._0_4_ + _DAT_146159ca8);
                  pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8) + 0x93
                                   );
                  *pbVar1 = *pbVar1 | 0x20;
                  if (fVar27 <= fVar28) {
                    pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8) +
                                     0x94);
                    *pbVar1 = *pbVar1 | 2;
                  }
                }
              }
            }
            else {
              bVar5 = *(byte *)(lVar9 + 0x92);
LAB_1401a8542:
              if ((bVar5 & 1) == 0) {
                cVar3 = func_0x0001400c3df0();
                if (cVar3 == '\0') {
                  if (!bVar2) goto LAB_1401a8561;
                  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
                  FUN_1401ac860(lVar9);
                  func_0x0001401abe60(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8));
                  pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8) + 0x93
                                   );
                  *pbVar1 = *pbVar1 | 0x20;
                  pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8) + 0x93
                                   );
                  *pbVar1 = *pbVar1 | 0x80;
                  if (_DAT_145fc6ed8 <= fVar28) goto LAB_1401a877f;
                }
                else {
                  *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
                  uVar8 = FUN_1401a7ff0();
                  FUN_1401abbd0(lVar9,uVar8);
                  pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8) + 0x93
                                   );
                  *pbVar1 = *pbVar1 | 0x20;
                  if (fVar27 <= fVar28) {
LAB_1401a877f:
                    pbVar1 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + uVar16 * 8) +
                                     0x94);
                    *pbVar1 = *pbVar1 | 2;
                  }
                }
                lVar13 = *(longlong *)(param_1 + 0x20);
                lVar9 = *(longlong *)(lVar13 + uVar16 * 8);
                if (((*(byte *)(lVar9 + 0x93) & 2) == 0) && (-1 < *(char *)(lVar9 + 0x92))) {
                  *(undefined4 *)(lVar9 + 0x84) = _DAT_14abbef40;
                }
              }
              else {
                FUN_1407dd010(lVar9);
                lVar13 = *(longlong *)(param_1 + 0x20);
              }
LAB_1401a8561:
              FUN_1401a89b0(*(undefined8 *)(lVar13 + uVar16 * 8),0);
            }
LAB_1401a852d:
            uVar16 = uVar16 + 1;
          } while (uVar16 < *(ushort *)(param_1 + 0x28));
        }
      }
    }
  }
  return;
}

