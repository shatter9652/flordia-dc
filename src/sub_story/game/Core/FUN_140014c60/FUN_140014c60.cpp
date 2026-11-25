// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140014c60  size: 1651 bytes
// Name:    FUN_140014c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd6e40, FUN_1418f5df0, FUN_144d9e2f0, FUN_14549f490, FUN_1456a27b0, FUN_1456a26a0, FUN_1400155c0, FUN_1456a2650, FUN_1400154f0, FUN_1401b4bc0, FUN_145076410, FUN_140015520, FUN_1403c9430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140014c60(longlong *param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  char cVar1;
  float *pfVar2;
  float *pfVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  float fVar13;
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 in_ZMM10 [64];
  float fStack_11c;
  undefined1 auStack_118 [16];
  int *piStack_100;
  int *piStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  float *pfStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 auStack_a0 [9];
  undefined1 auStack_58 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar28 [64];
  
  auStack_58 = in_ZMM10._0_16_;
  *(undefined4 *)(param_1 + 1) = param_3;
  uStack_e0 = _UNK_14615def8;
  uStack_e8 = _DAT_14615def0;
  uStack_d0 = _DAT_146159bc0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  auStack_118._0_12_ = ZEXT812(0);
  auStack_118._12_4_ = 0;
  puStack_d8 = (undefined *)0x0;
  uStack_c8 = 0x753aca7f;
  lStack_f0 = param_2;
  FUN_144dd6e40(&lStack_f0);
  uVar10 = *(uint *)(lStack_f0 + 0x1c) & 0x7fffffff;
  lVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),(int)uStack_e8 < (int)uStack_e0);
  if ((int)uStack_e8 < (int)uVar10 && (int)uStack_e8 >= (int)uStack_e0) {
    auVar26 = ZEXT464(_DAT_146159ef4);
    fVar20 = _DAT_145fc6f00;
    uVar21 = _DAT_145fc6f10;
    uVar22 = _DAT_145fc6f10;
    uVar23 = _DAT_145fc6f10;
    uVar24 = _DAT_145fc6f10;
    fVar25 = _DAT_145fc6ed8;
    do {
      lVar5 = *(longlong *)(lStack_f0 + 0x20);
      if ((lVar5 == 1) || (lVar6 = -0x20 - lStack_f0, lVar5 == lVar6)) break;
      pfVar8 = (float *)(((longlong)(int)((int)uStack_e8 + uStack_e8._4_4_) % (longlong)(int)uVar10
                         & 0xffffffffU) * 0x50 + lVar5 + lStack_f0 + 0x20);
      pfVar2 = (float *)FUN_144d9e2f0(pfVar8,0x13964a31);
      func_0x000140092750(auStack_a0,pfVar2);
      piStack_f8 = (int *)FUN_1400154f0(auStack_a0[0]);
      if (piStack_f8 != (int *)0x0) {
        pfVar2 = (float *)FUN_144d9e2f0(pfVar8,0x6dc2a849);
        func_0x000140092750(&uStack_a8,pfVar2);
        piStack_100 = (int *)FUN_1400154f0(uStack_a8);
        if ((piStack_100 != (int *)0x0) && ((*piStack_f8 != 0 || (*piStack_100 != 0)))) {
          pfVar2 = (float *)FUN_144d9e2f0(pfVar8,0x7e68c088);
          func_0x000144debac0(&uStack_b0,pfVar2);
          pfVar3 = (float *)FUN_1418f5df0(uStack_b0);
          if ((pfVar3 != (float *)0x0) && (fVar20 <= *pfVar3)) {
            pfStack_c0 = pfVar3;
            pfVar2 = (float *)FUN_144d9e2f0(pfVar8,0x5549e35f);
            func_0x000144debac0(&lStack_b8,pfVar2);
            lVar6 = lStack_b8;
            cVar1 = func_0x000144d9db40(lStack_b8);
            if (((cVar1 != '\0') && (lVar5 = *(longlong *)(lVar6 + 0x18), lVar5 != 1)) &&
               (lVar6 = lVar5 + 0x18 + lVar6, lVar6 != 0)) {
              auVar27._8_8_ = 0;
              auVar27._0_8_ = *(ulonglong *)(pfVar8 + 0x12);
              auVar28 = ZEXT1664(auVar27);
              auVar27 = vmovshdup_avx(auVar27);
              if ((float)*(ulonglong *)(pfVar8 + 0x12) < auVar27._0_4_) {
                lVar5 = *(longlong *)(lVar6 + 0x20);
                uVar10 = *(uint *)(lVar5 + 0x20 + lVar6);
                if (1 < uVar10) {
                  pfVar2 = (float *)0x0;
                  auVar14._0_8_ = FUN_145076410(lVar6,0);
                  auVar14._8_56_ = extraout_var;
                  auVar16._0_4_ = (uint)auVar14._0_8_ ^ uVar21;
                  auVar16._4_4_ = (uint)((ulonglong)auVar14._0_8_ >> 0x20) ^ uVar22;
                  auVar16._8_4_ = extraout_var._0_4_ ^ uVar23;
                  auVar16._12_4_ = extraout_var._4_4_ ^ uVar24;
                  auVar27 = vmaxss_avx(auVar16,auVar14._0_16_);
                  if (auVar27._0_4_ < fVar20) {
                    lVar11 = 0;
                    if (lVar5 != 1) {
                      lVar11 = lVar5 + 0x20 + lVar6;
                    }
                    cVar1 = *(char *)(lVar11 + 5);
                    if (cVar1 == '\0') {
                      auVar27 = ZEXT416(*(uint *)(lVar11 + (ulonglong)
                                                           (-*(int *)(&UNK_1465a2880 +
                                                                     (ulonglong)
                                                                     *(byte *)(lVar11 + 4) * 8) &
                                                           uVar10 * 4 + 7 +
                                                           *(int *)(&UNK_1465a2880 +
                                                                   (ulonglong)*(byte *)(lVar11 + 4)
                                                                   * 8))));
                    }
                    else {
                      pfVar2 = (float *)0x0;
                      auVar15._0_8_ = FUN_1401b4bc0(lVar6,0);
                      auVar15._8_56_ = extraout_var_00;
                      auVar27 = auVar15._0_16_;
                    }
                    auVar17._0_4_ = auVar27._0_4_ ^ uVar21;
                    auVar17._4_4_ = auVar27._4_4_ ^ uVar22;
                    auVar17._8_4_ = auVar27._8_4_ ^ uVar23;
                    auVar17._12_4_ = auVar27._12_4_ ^ uVar24;
                    auVar27 = vmaxss_avx(auVar17,auVar27);
                    if (auVar27._0_4_ < fVar20) {
                      uVar9 = uVar10 - 1;
                      pfVar2 = (float *)(ulonglong)uVar9;
                      fVar13 = (float)FUN_145076410(lVar6,pfVar2);
                      auVar18._0_4_ = (uint)(fVar25 - fVar13) ^ uVar21;
                      auVar18._4_4_ = uVar22;
                      auVar18._8_4_ = uVar23;
                      auVar18._12_4_ = uVar24;
                      auVar27 = vmaxss_avx(auVar18,ZEXT416((uint)(fVar25 - fVar13)));
                      if (auVar27._0_4_ <= fVar20) {
                        if (cVar1 == '\0') {
                          fVar13 = *(float *)((ulonglong)
                                              (-*(int *)(&UNK_1465a2880 +
                                                        (ulonglong)*(byte *)(lVar11 + 4) * 8) &
                                              uVar10 * 4 + 7 +
                                              *(int *)(&UNK_1465a2880 +
                                                      (ulonglong)*(byte *)(lVar11 + 4) * 8)) +
                                              lVar11 + (ulonglong)uVar9 * 4);
                        }
                        else {
                          pfVar2 = (float *)(ulonglong)uVar9;
                          fVar13 = (float)FUN_1401b4bc0(lVar6,pfVar2);
                        }
                        auVar19._0_4_ = (uint)(fVar25 - fVar13) ^ uVar21;
                        auVar19._4_4_ = uVar22;
                        auVar19._8_4_ = uVar23;
                        auVar19._12_4_ = uVar24;
                        auVar27 = vmaxss_avx(auVar19,ZEXT416((uint)(fVar25 - fVar13)));
                        if ((auVar27._0_4_ <= fVar20) &&
                           ((fStack_11c = 1.0, param_4[6] == 0 && param_4[4] == 0 ||
                            (cVar1 = (*(code *)param_4[7])(param_4 + 4,pfVar8,&fStack_11c),
                            pfVar2 = pfVar8, cVar1 != '\0')))) {
                          plVar4 = (longlong *)FUN_1456a26a0(auStack_118);
                          *plVar4 = lVar6;
                          *(int *)(plVar4 + 1) = *piStack_f8;
                          *(int *)((longlong)plVar4 + 0xc) = *piStack_100;
                          lVar6 = vmovlps_avx(auVar28._0_16_);
                          plVar4[2] = lVar6;
                          auVar27 = vmaxss_avx(auVar26._0_16_,
                                               ZEXT416((uint)(fStack_11c * *pfStack_c0)));
                          *(int *)(plVar4 + 3) = auVar27._0_4_;
                          pfVar2 = pfStack_c0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      FUN_14549f490(&lStack_f0);
      uVar10 = *(uint *)(lStack_f0 + 0x1c) & 0x7fffffff;
      lVar6 = CONCAT71((int7)((ulonglong)pfVar2 >> 8),(int)uStack_e0 <= (int)uStack_e8);
    } while ((int)uStack_e0 <= (int)uStack_e8 && (int)uStack_e8 < (int)uVar10);
    uVar7 = (ulonglong)(uint)auStack_118._4_4_;
    if (uVar7 != 0) {
      if (*param_1 == 0) {
        FUN_1456a27b0(&lStack_f0);
        lVar6 = *param_1;
        lVar5 = lStack_f0;
        if (lVar6 != lStack_f0) {
          *param_1 = lStack_f0;
          FUN_140015520(lVar6);
          lVar5 = 0;
        }
        FUN_140015520(lVar5);
      }
      else {
        func_0x0001456a2830(*param_1,CONCAT71((int7)((ulonglong)lVar6 >> 8),1));
      }
      lVar6 = uVar7 << 5;
      puVar12 = (undefined4 *)(auStack_118._8_8_ + 0xc);
      do {
        FUN_1400155c0(*param_1 + 0x30,&lStack_f0,puVar12 + -1);
        uVar7 = (ulonglong)(uStack_e8._4_4_ & 0xf);
        if ((char)uStack_e0 == '\x01') {
          *(undefined4 *)((ulonglong)(uStack_e8._4_4_ >> 4) * 0xd0 + lStack_f0 + 0x10 + uVar7 * 0xc)
               = puVar12[-1];
        }
        lVar5 = lStack_f0 + (ulonglong)(uStack_e8._4_4_ >> 4) * 0xd0;
        *(undefined1 *)(lVar5 + 0x14 + uVar7 * 0xc) = 0;
        *(undefined4 *)(lVar5 + 0x18 + uVar7 * 0xc) = 0x3f800000;
        FUN_1400155c0(*param_1 + 0x30,&lStack_f0,puVar12);
        uVar7 = (ulonglong)(uStack_e8._4_4_ & 0xf);
        if ((char)uStack_e0 == '\x01') {
          *(undefined4 *)((ulonglong)(uStack_e8._4_4_ >> 4) * 0xd0 + lStack_f0 + 0x10 + uVar7 * 0xc)
               = *puVar12;
        }
        puVar12 = puVar12 + 8;
        lVar5 = lStack_f0 + (ulonglong)(uStack_e8._4_4_ >> 4) * 0xd0;
        lVar6 = lVar6 + -0x20;
        *(undefined1 *)(lVar5 + 0x14 + uVar7 * 0xc) = 0;
        *(undefined4 *)(lVar5 + 0x18 + uVar7 * 0xc) = 0x3f800000;
      } while (lVar6 != 0);
      FUN_1456a2650(*param_1 + 0x20,auStack_118);
      if (param_4[2] == 0 && *param_4 == 0) {
        func_0x000144dd57c0(&lStack_f0,0,&UNK_143efa950,0,0);
        puStack_d8 = &UNK_142e7e900;
        param_4 = &lStack_f0;
      }
      lVar6 = param_4[1];
      lVar5 = param_4[2];
      lVar11 = param_4[3];
      param_1 = (longlong *)*param_1;
      *param_1 = *param_4;
      param_1[1] = lVar6;
      param_1[2] = lVar5;
      param_1[3] = lVar11;
      goto LAB_140014d2a;
    }
  }
  lVar6 = *param_1;
  if (lVar6 != 0) {
    *(undefined4 *)(lVar6 + 0x134) = 0;
    if (*(longlong *)(lVar6 + 0x138) != 0) {
      func_0x000144d9c130();
    }
    *(undefined4 *)(lVar6 + 0x130) = 0;
    *(undefined8 *)(lVar6 + 0x138) = 0;
    *(undefined4 *)(lVar6 + 0x124) = 0;
    if (*(longlong *)(lVar6 + 0x128) != 0) {
      func_0x000144d9c130();
    }
    *(undefined4 *)(lVar6 + 0x120) = 0;
    *(undefined8 *)(lVar6 + 0x128) = 0;
    FUN_1403c9430(lVar6 + 0x30);
    *(undefined4 *)(lVar6 + 0x24) = 0;
    if (*(longlong *)(lVar6 + 0x28) != 0) {
      func_0x000144d9c130();
    }
    func_0x000144d9c130(lVar6,0x150);
  }
  *param_1 = 0;
LAB_140014d2a:
  auStack_118._4_4_ = 0;
  if (auStack_118._8_8_ != 0) {
    func_0x000144d9c130();
  }
  return;
}

