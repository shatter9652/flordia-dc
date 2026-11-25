// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cb830  size: 966 bytes
// Name:    FUN_1400cb830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e3ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cb830(longlong param_1,longlong *param_2,int *param_3,longlong param_4,char param_5,
                  char param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int iStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auVar23 [64];
  
  uVar15 = func_0x000144f63fd0(*(undefined4 *)(param_1 + 0x94));
  if ((*(byte *)(param_4 + 0x141) & 4) == 0) {
    bVar5 = func_0x0001400ca280(param_4);
    puVar8 = (uint *)((ulonglong)bVar5 * 4 + 0x14abbd850);
  }
  else {
    puVar8 = (uint *)0x14abbd854;
  }
  auVar21 = ZEXT464(*(uint *)(param_4 + 0xb8));
  bVar5 = *(byte *)(param_4 + 0x14c);
  if (((bVar5 & 0x20) != 0) &&
     ((((bVar5 & 0x10) >> 4 & bVar5) != 0 || ((*(byte *)(param_4 + 0xf0) & 8) != 0)))) {
    auVar22 = vmaxss_avx(ZEXT416(*(uint *)(param_4 + 0xb8)),
                         ZEXT416((uint)(*(float *)(param_4 + 0x98) - *(float *)(param_4 + 0xd0))));
    auVar21 = ZEXT1664(auVar22);
  }
  if (*(short *)((longlong)param_2 + 0x1e) == 0) {
    iStack_dc = -1;
  }
  else {
    auVar22._4_4_ = _DAT_14615a290;
    auVar22._0_4_ = _DAT_14615a290;
    auVar22._8_4_ = _DAT_14615a290;
    auVar22._12_4_ = _DAT_14615a290;
    auVar23 = ZEXT1664(auVar22);
    auVar19 = ZEXT464(*puVar8);
    lVar13 = 0;
    uVar11 = 0;
    iStack_dc = -1;
    auVar22 = vrcpps_avx(auVar22);
    fVar24 = auVar22._0_4_;
    fVar25 = auVar22._4_4_;
    fVar26 = auVar22._8_4_;
    fVar27 = auVar22._12_4_;
    fVar24 = (-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24;
    fVar25 = (-(fVar25 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar25 + fVar25;
    fVar26 = (-(fVar26 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar26 + fVar26;
    fVar27 = (-(fVar27 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar27 + fVar27;
    fVar28 = _DAT_146170750;
    fVar29 = _DAT_145fc6f54;
    do {
      lVar9 = func_0x00014540d1f0(*(undefined4 *)(*param_2 + 0x20 + lVar13));
      lVar4 = _DAT_14abbf348;
      lVar12 = *param_2;
      uVar2 = *(uint *)(lVar12 + 0x20 + lVar13);
      uVar10 = (ulonglong)((uVar2 & 0xffff) << 4);
      if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar10) == (short)(uVar2 >> 0x10))
          && (*(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar10) != 0)) &&
         (cVar6 = func_0x0001455be7d0(param_1,param_4,lVar9,
                                      CONCAT44(*(undefined4 *)(lVar12 + 0xc + lVar13),
                                               *(undefined4 *)(lVar12 + 0x1c + lVar13)),param_7),
         cVar6 == '\0')) {
        lVar12 = *param_2;
        fVar20 = *(float *)(lVar12 + 8 + lVar13);
        if ((param_5 != '\0') && ((float)uVar15 < fVar20 - auVar21._0_4_)) break;
        if ((param_6 != '\0') && (*(float *)(lVar12 + 0x38 + lVar13) <= auVar19._0_4_)) {
          if (iStack_dc == -1) {
            puVar1 = (undefined8 *)(lVar12 + 0x30 + lVar13);
            uStack_d8 = *puVar1;
            uStack_d0 = puVar1[1];
            FUN_1400e3ce0(param_2,param_3,auVar19._0_8_,fVar20,&uStack_d8);
            return;
          }
          break;
        }
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0x30) == '\x03')) {
          uVar3 = *(undefined8 *)(lVar12 + 0x20 + lVar13);
          uVar10 = (ulonglong)(((uint)uVar3 & 0xffff) << 4);
          if (((*(short *)(*(longlong *)(lVar4 + 0x28) + 8 + uVar10) ==
                (short)((ulonglong)uVar3 >> 0x10)) &&
              ((lVar12 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + uVar10), lVar12 != 0 &&
               (lVar12 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x20), lVar12 != 0)))) &&
             (((short)((ulonglong)uVar3 >> 0x20) == -2 ||
              ((*(char *)(lVar12 + 0x10) != '\x06' ||
               (((uVar7 = func_0x0001403dc2f0(), uVar7 != 0xffff &&
                 (uVar7 < *(ushort *)(lVar12 + 0x9a))) &&
                (lVar12 = *(longlong *)(*(longlong *)(lVar12 + 0x70) + (ulonglong)uVar7 * 8),
                lVar12 != 0)))))))) {
            auVar17 = vsubps_avx(*(undefined1 (*) [16])(lVar12 + 0x20),
                                 *(undefined1 (*) [16])(lVar12 + 0x30));
            auVar22 = vmovshdup_avx(auVar17);
            auVar16 = vshufpd_avx(auVar17,auVar17,1);
            if (auVar22._0_4_ * auVar17._0_4_ * auVar16._0_4_ < fVar28) goto LAB_1400cbb4e;
          }
        }
        if (fVar29 < fVar20) {
          auVar22 = *(undefined1 (*) [16])(*param_2 + lVar13);
          auVar16._0_4_ = fVar24 * auVar22._0_4_;
          auVar16._4_4_ = fVar25 * auVar22._4_4_;
          auVar16._8_4_ = fVar26 * auVar22._8_4_;
          auVar16._12_4_ = fVar27 * auVar22._12_4_;
          auVar16 = vroundps_avx(auVar16,3);
          auVar18._0_4_ = -(auVar16._0_4_ * auVar23._0_4_) + auVar22._0_4_;
          auVar18._4_4_ = -(auVar16._4_4_ * auVar23._4_4_) + auVar22._4_4_;
          auVar18._8_4_ = -(auVar16._8_4_ * auVar23._8_4_) + auVar22._8_4_;
          auVar18._12_4_ = -(auVar16._12_4_ * auVar23._12_4_) + auVar22._12_4_;
          auVar17._0_4_ = (int)auVar16._0_4_;
          auVar17._4_4_ = (int)auVar16._4_4_;
          auVar17._8_4_ = (int)auVar16._8_4_;
          auVar17._12_4_ = (int)auVar16._12_4_;
          auVar22 = vblendps_avx(auVar22,auVar18,3);
          auVar16 = vpackssdw_avx(auVar17,auVar17);
          auVar22 = vinsertps_avx(auVar22,auVar16,0x30);
          *(undefined1 (*) [16])(param_3 + 4) = auVar22;
          *(undefined1 (*) [16])(param_3 + 8) = *(undefined1 (*) [16])(*param_2 + 0x30 + lVar13);
          *(undefined8 *)(param_3 + 0xc) = *(undefined8 *)(*param_2 + 0x20 + lVar13);
          *(ulonglong *)(param_3 + 0xe) =
               CONCAT44(*(undefined4 *)(*param_2 + 0xc + lVar13),
                        *(undefined4 *)(*param_2 + 0x1c + lVar13));
          if (lVar9 == 0) {
            bVar14 = false;
          }
          else {
            bVar14 = *(char *)(lVar9 + 0x30) == '\x03';
          }
          iStack_dc = (int)uVar11;
          *(byte *)(param_3 + 0x10) = *(byte *)(param_3 + 0x10) & 0xfe | bVar14;
          fVar29 = fVar20;
        }
      }
LAB_1400cbb4e:
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x40;
    } while (uVar11 < *(ushort *)((longlong)param_2 + 0x1e));
  }
  *param_3 = iStack_dc;
  return;
}

