// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140064630  size: 1927 bytes
// Name:    FUN_140064630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fab240, FUN_145509320, FUN_1400063f0, FUN_1454357e0, FUN_144dd11b0, FUN_1400716e0, FUN_1454cea70, FUN_144faa1e0, FUN_1402c59f0, FUN_144de6230, FUN_140ee8730, FUN_140ae2100
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140064630(longlong *param_1,char param_2,byte param_3,ulonglong param_4)

{
  short *psVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  char cVar5;
  char cVar6;
  ushort uVar7;
  short sVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined7 uVar17;
  short *psVar18;
  ulonglong uVar19;
  longlong unaff_GS_OFFSET;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined2 uStack_70;
  
  lVar11 = func_0x000144efd450(*(undefined4 *)((longlong)param_1 + 0x9c));
  if (lVar11 == 0) {
    return;
  }
  lVar13 = *(longlong *)(lVar11 + 0x10);
  if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x38) != 0)) {
    uVar12 = (ulonglong)((*(uint *)(lVar11 + 0xa0) & 0xffff) << 4);
    if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar12) !=
          (short)(*(uint *)(lVar11 + 0xa0) >> 0x10)) ||
        ((lVar14 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar12), lVar14 == 0 ||
         (lVar14 = *(longlong *)(*(longlong *)(lVar14 + 8) + 0x20), lVar14 == 0)))) ||
       ((*(char *)(lVar14 + 0x10) == '\x06' &&
        ((*(short *)(lVar11 + 0xa4) != -2 &&
         (((uVar7 = func_0x0001403dc2f0(), uVar7 == 0xffff || (*(ushort *)(lVar14 + 0x9a) <= uVar7))
          || (*(longlong *)(*(longlong *)(lVar14 + 0x70) + (ulonglong)uVar7 * 8) == 0)))))))) {
      param_4 = (ulonglong)(uint)(int)*(short *)(lVar11 + 0x148);
      FUN_144fab240(auStack_d8,lVar13,0xffffffff00000000,param_4);
      *(undefined8 *)(lVar11 + 0xa0) = auStack_d8._0_8_;
    }
  }
  cVar5 = FUN_140ae2100(param_1[7],lVar13,*(undefined8 *)(lVar11 + 0xa0),
                        CONCAT71((int7)(param_4 >> 8),*(undefined1 *)(lVar11 + 0x150)) &
                        0xffffffffffffff01);
  cVar6 = *(char *)(lVar11 + 0x14c);
  *(char *)(lVar11 + 0x14c) = cVar5;
  if (cVar5 == '\x01') {
    FUN_145509320(param_1);
    auVar4 = auStack_d8;
    if (cVar6 == '\x02') {
      lVar14 = param_1[7];
      if (lVar14 == 0) {
        if (((lVar13 != 0) && (*(int *)(lVar11 + 0x144) == 0x79c846e1)) &&
           (*(char *)(lVar13 + 0x30) != '\x02')) {
          do {
            uVar9 = *(undefined4 *)(lVar13 + 0x9c);
            cVar6 = FUN_144dd11b0(uVar9);
            if (cVar6 == '\0') {
              return;
            }
            lVar13 = FUN_144de6230(uVar9);
          } while (*(char *)(lVar13 + 0x30) != '\x02');
          func_0x000145f40560(auStack_d8,lVar11 + 0xb0,0x90);
          auStack_d8._0_8_ = lVar13;
          if (*(longlong *)(lVar13 + 0x38) == 0) {
            uStack_f0 = 0xffffffff00000000;
          }
          else {
            func_0x000144e43930(*(longlong *)(lVar13 + 0x38),&uStack_f0);
          }
          auStack_d8._8_8_ = uStack_f0;
          uStack_c8 = CONCAT44(uStack_c8._4_4_,0xffffffff);
          uStack_70 = 0x101;
          func_0x000140adf130(param_1,auStack_d8,0);
        }
      }
      else if ((*(byte *)(lVar14 + 0x1a) & 0x20) != 0) {
        auStack_d8[0] = 2;
        auVar21 = auStack_d8;
        auStack_d8._12_4_ = auVar4._12_4_;
        auStack_d8._0_4_ = auVar21._0_4_;
        auStack_d8._4_8_ = 0x100000000;
        FUN_1454357e0(lVar14,0);
      }
    }
  }
  else {
    if (cVar6 != '\x02') {
      if (param_2 != '\0') {
        auStack_d8 = ZEXT416(_DAT_145fc6ed8);
        uStack_c8 = _DAT_146159bc0;
        uStack_c0 = 0;
        uStack_b8 = _DAT_14614f7f0;
        uStack_b0 = _UNK_14614f7f8;
        auStack_a8 = ZEXT816(0) << 0x20;
        FUN_144faa1e0(auStack_d8,param_1,1);
        auVar4 = vsubps_avx(auStack_a8,*(undefined1 (*) [16])(param_1 + 0xe));
        auStack_e8 = vpsubw_avx(auStack_a8,*(undefined1 (*) [16])(param_1 + 0xe));
        auVar4 = vblendps_avx(auVar4,auStack_e8,8);
        auVar21 = vpunpckhwd_avx(auVar4,auVar4);
        auVar22._4_4_ = _DAT_145fc7020;
        auVar22._0_4_ = _DAT_145fc7020;
        auVar22._8_4_ = _DAT_145fc7020;
        auVar22._12_4_ = _DAT_145fc7020;
        auVar21 = vpsrad_avx(auVar21,0x10);
        auVar21 = vcvtdq2ps_avx(auVar21);
        auVar21 = vshufpd_avx(auVar21,auVar21,3);
        auVar20._0_4_ = (uint)(auVar21._0_4_ * _DAT_146159c90 + auVar4._0_4_) & _DAT_145fc6f4c;
        auVar20._4_4_ = (uint)(auVar21._4_4_ * _UNK_146159c94 + auVar4._4_4_) & _DAT_145fc6f4c;
        auVar20._8_4_ = (uint)(auVar21._8_4_ * _UNK_146159c98 + auVar4._8_4_) & _DAT_145fc6f4c;
        auVar20._12_4_ = (uint)(auVar21._12_4_ * _UNK_146159c9c + auVar4._12_4_) & _DAT_145fc6f4c;
        auVar4 = vcmpps_avx(auVar20,auVar22,2);
        uVar9 = vmovmskps_avx(auVar4);
        (**(code **)(*param_1 + 0x170))(param_1,auStack_d8,1,1,(~(byte)uVar9 & 7) != 0);
      }
      if (((char)param_1[6] != '\x03' & param_3) == 0) {
        FUN_140ee8730(param_1);
      }
      else {
        *(byte *)(lVar11 + 0x151) = *(byte *)(lVar11 + 0x151) | 0x10;
      }
    }
    lVar11 = param_1[7];
    if (lVar11 != 0) {
      uVar10 = FUN_1454cea70(*(undefined4 *)((longlong)param_1 + 0x9c));
      uVar12 = (ulonglong)uVar10;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        psVar18 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12e8);
        if (*(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8) == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        psVar18 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12e8);
      }
      uVar15 = 0xffffffff;
      if (*psVar18 == 0) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        lVar13 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        if (*(short *)(lVar13 + 0x1370) == 0) {
          FUN_1400716e0(0x14a95deb8);
        }
        psVar1 = (short *)(lVar13 + 0x1370);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        *psVar1 = *psVar1 + 1;
        lVar13 = *(longlong *)(lVar11 + 0x38);
        if (lVar13 != 0) {
          lVar14 = *(longlong *)(lVar13 + 0xa8);
          uVar19 = 0;
          lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          puVar2 = (ushort *)(lVar3 + 0x12ea);
          plVar16 = (longlong *)(lVar3 + 0x12f0);
          cVar6 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
          while( true ) {
            if (cVar6 == '\0') {
              func_0x0001455db994();
              cVar6 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
            uVar15 = (ulonglong)*puVar2;
            uVar17 = (undefined7)((ulonglong)plVar16 >> 8);
            if (uVar15 <= uVar19) {
              if (cVar6 == '\0') {
                func_0x0001455db994();
                uVar15 = (ulonglong)*puVar2;
                lVar14 = *(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8);
                *puVar2 = *puVar2 + 1;
                if (*(char *)(lVar14 + 8) == '\0') {
                  func_0x0001455db994();
                }
              }
              else {
                *puVar2 = *puVar2 + 1;
              }
              uVar12 = CONCAT71(uVar17,(char)uVar10);
              lVar13 = *(longlong *)(lVar13 + 0xa8);
              uVar19 = (ulonglong)(uint)((int)uVar15 << 4);
              lVar14 = **(longlong **)(unaff_GS_OFFSET + 0x58);
              *(longlong *)(lVar14 + 0x12f0 + uVar19) = lVar13;
              *(undefined2 *)(lVar14 + 0x12f8 + uVar19) = 1;
              FUN_1400716e0(lVar13 + 8);
              goto LAB_140064910;
            }
            if (cVar6 == '\0') {
              func_0x0001455db994();
              cVar6 = *(char *)(*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8
                                 ) + 8);
            }
            if (*plVar16 == lVar14) break;
            uVar19 = uVar19 + 1;
            plVar16 = plVar16 + 2;
          }
          *(short *)(plVar16 + 1) = (short)plVar16[1] + 1;
          uVar12 = CONCAT71(uVar17,(char)uVar10);
          uVar15 = uVar19;
        }
      }
LAB_140064910:
      if (*(longlong *)(lVar11 + 0x38) != 0) {
        func_0x0001455ce9e0(*(longlong *)(lVar11 + 0x38),uVar12 & 0xffffffff);
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      if (*psVar18 == 0) {
        if (-1 < (int)uVar15) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
          }
          lVar13 = (uVar15 & 0xffffffff) * 0x10;
          lVar11 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          psVar18 = (short *)(lVar11 + 0x12f8 + lVar13);
          *psVar18 = *psVar18 + -1;
          if (*psVar18 == 0) {
            lVar11 = *(longlong *)(lVar11 + 0x12f0 + lVar13);
            lVar13 = *(longlong *)(lVar11 + 0x20);
            if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
              lVar14 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
            }
            else {
              lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
              *(undefined1 *)(lVar3 + 0x1440) = 1;
              lVar14 = FUN_1400063f0();
              *(longlong *)(lVar3 + 0x1438) = lVar14;
            }
            if (lVar14 != lVar13) {
              FUN_1402c59f0(lVar11 + 8);
            }
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            psVar18 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
            *psVar18 = *psVar18 + -1;
          }
        }
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
          lVar11 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          sVar8 = *(short *)(lVar11 + 0x1370) + -1;
          cVar6 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
          *(short *)(lVar11 + 0x1370) = sVar8;
          if (cVar6 == '\0') {
            func_0x0001455db994();
            sVar8 = *(short *)(lVar11 + 0x1370);
          }
        }
        else {
          sVar8 = *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370) + -1;
          *(short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370) = sVar8;
        }
        lVar11 = _DAT_14a95ded0;
        if (sVar8 == 0) {
          if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
            lVar13 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
          }
          else {
            lVar14 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            *(undefined1 *)(lVar14 + 0x1440) = 1;
            lVar13 = FUN_1400063f0();
            *(longlong *)(lVar14 + 0x1438) = lVar13;
          }
          if (lVar13 != lVar11) {
            FUN_1402c59f0(0x14a95deb8);
          }
        }
      }
    }
  }
  return;
}

