// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001a900  size: 1293 bytes
// Name:    FUN_14001a900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14513c360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001a900(longlong param_1,uint *param_2,undefined1 *param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  char cVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte bVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  uint uVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [16];
  longlong unaff_GS_OFFSET;
  bool bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 in_ZMM15 [64];
  undefined1 auVar39 [64];
  char cStack_154;
  int iStack_150;
  int iStack_14c;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 aauStack_f8 [10] [16];
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM15._0_16_;
  lVar19 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar19 = *(longlong *)(param_1 + 0x10);
  }
  param_2[1] = 0;
  *param_3 = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar2 = *(uint *)(lVar19 + 0x70);
  if (uVar2 != 0) {
    auStack_108._0_12_ = ZEXT812(0);
    auStack_108._12_4_ = 0;
    aauStack_f8[0] = auStack_108;
    func_0x00014040eba0(param_1,aauStack_f8,auStack_108);
    lVar19 = _DAT_14a9e88c0;
    uVar12 = func_0x000144e91d50(aauStack_f8[0]._0_4_);
    uVar13 = func_0x000144e91d50(auStack_108._0_4_);
    uVar14 = func_0x000144e91d80(aauStack_f8[0]._4_4_);
    uVar15 = func_0x000144e91d80(auStack_108._4_4_);
    if ((uVar14 <= uVar15) && (uVar12 <= uVar13)) {
      auVar33 = ZEXT1664(CONCAT412(_DAT_145fc6edc,
                                   CONCAT48(_DAT_145fc6edc,CONCAT44(_DAT_145fc6edc,_DAT_145fc6edc)))
                        );
      auVar34 = ZEXT464(_DAT_145fc6edc);
      auVar35 = ZEXT464(_DAT_145fc6f08);
      auVar36 = ZEXT464(_DAT_146159bfc);
      auVar37 = ZEXT1664(CONCAT412(_DAT_145fc6f14,
                                   CONCAT48(_DAT_145fc6f14,CONCAT44(_DAT_145fc6f14,_DAT_145fc6f14)))
                        );
      auVar38 = ZEXT864(_DAT_146159bc0);
      auVar32 = ZEXT1264(ZEXT812(0));
      uVar18 = (ulonglong)uVar14;
      do {
        uVar25 = (ulonglong)uVar12;
LAB_14001aac4:
        uVar20 = uVar25 + uVar18 * 0x3c;
        if ((uVar20 < 0x12c0) &&
           (plVar3 = *(longlong **)(lVar19 + 0xc30 + uVar20 * 8), plVar3 != (longlong *)0x0)) {
          auVar32 = ZEXT1664(auVar32._0_16_);
          auVar33 = ZEXT1664(auVar33._0_16_);
          auVar34 = ZEXT1664(auVar34._0_16_);
          auVar35 = ZEXT1664(auVar35._0_16_);
          auVar36 = ZEXT1664(auVar36._0_16_);
          auVar37 = ZEXT1664(auVar37._0_16_);
          auVar38 = ZEXT1664(auVar38._0_16_);
          FUN_14513c360(lVar19);
          if (iStack_14c != iStack_150) {
            lVar4 = *plVar3;
            pauVar26 = (undefined1 (*) [16])((longlong)iStack_14c * 0x34 + lVar4);
            do {
              if ((((*pauVar26)[0xc] & 8) != 0) && ((*(ushort *)pauVar26[1] & 0x8020) == 0)) {
                cVar11 = pauVar26[2][0xb];
                if (((uVar2 & 1) != 0 || cVar11 != '\x02') &&
                   ((cVar11 != '\x03' || (char)((uVar2 & 2) >> 1) != '\0' &&
                    (cStack_154 = (char)((uVar2 & 4) >> 2), cVar11 != '\x04' || cStack_154 != '\0'))
                   )) {
                  auStack_118 = *pauVar26;
                  auVar32 = ZEXT1664(auVar32._0_16_);
                  auVar33 = ZEXT1664(auVar33._0_16_);
                  auVar34 = ZEXT1664(auVar34._0_16_);
                  auVar35 = ZEXT1664(auVar35._0_16_);
                  auVar36 = ZEXT1664(auVar36._0_16_);
                  auVar37 = ZEXT1664(auVar37._0_16_);
                  auVar38 = ZEXT1664(auVar38._0_16_);
                  auVar39 = ZEXT1664(auStack_118);
                  cVar11 = func_0x0001402c1480(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x18)
                                               ,auStack_118);
                  uVar14 = _DAT_14abbef40;
                  if (cVar11 != '\0') {
                    bVar21 = pauVar26[2][0xc];
                    uVar20 = (ulonglong)param_2[1];
                    if (bVar21 == 0) {
                      uVar17 = *param_2;
                    }
                    else {
                      uVar17 = *param_2;
                      uVar16 = 0;
                      do {
                        lVar5 = *(longlong *)
                                 (*(longlong *)
                                   (lVar19 + 0xc30 + (ulonglong)*(ushort *)(pauVar26[1] + 4) * 8) +
                                 0x10);
                        lVar22 = (ulonglong)((int)*(short *)(pauVar26[2] + 6) + uVar16) * 0x20;
                        if ((*(byte *)(lVar5 + 0x14 + lVar22) & 0x40) == 0) {
                          uVar24 = *(uint *)(lVar5 + 4 + lVar22);
                          plVar3 = *(longlong **)(lVar19 + 0xc30 + (ulonglong)(uVar24 & 0xffff) * 8)
                          ;
                          if (((plVar3 != (longlong *)0x0) && (lVar5 = *plVar3, lVar5 != 0)) &&
                             (pauVar23 = (undefined1 (*) [16])
                                         (lVar5 + (ulonglong)(uVar24 >> 0x10) * 0x34),
                             ((*pauVar23)[0xc] & 8) != 0)) {
                            auVar1 = *pauVar23;
                            uVar24 = (int)uVar20 + 1;
                            param_2[1] = uVar24;
                            auVar10 = vsubps_avx(auVar1,auVar39._0_16_);
                            fVar6 = auVar10._0_4_;
                            auVar29._0_4_ = fVar6 * fVar6;
                            fVar7 = auVar10._4_4_;
                            auVar29._4_4_ = fVar7 * fVar7;
                            fVar8 = auVar10._8_4_;
                            auVar29._8_4_ = fVar8 * fVar8;
                            fVar9 = auVar10._12_4_;
                            auVar29._12_4_ = fVar9 * fVar9;
                            auVar31._0_4_ = auVar33._0_4_ * (auVar39._0_4_ + auVar1._0_4_);
                            auVar31._4_4_ = auVar33._4_4_ * (auVar39._4_4_ + auVar1._4_4_);
                            auVar31._8_4_ = auVar33._8_4_ * (auVar39._8_4_ + auVar1._8_4_);
                            auVar31._12_4_ = auVar33._12_4_ * (auVar39._12_4_ + auVar1._12_4_);
                            auVar1 = vblendps_avx(auVar29,auVar32._0_16_,8);
                            auVar1 = vhaddps_avx(auVar1,auVar1);
                            auVar29 = vhaddps_avx(auVar1,auVar1);
                            auVar1 = vrsqrtps_avx(auVar29);
                            auVar10 = vcmpss_avx(auVar36._0_16_,auVar29,2);
                            fVar30 = auVar1._0_4_;
                            auVar28._0_4_ = fVar30 * fVar6;
                            auVar28._4_4_ = auVar1._4_4_ * fVar7;
                            auVar28._8_4_ = auVar1._8_4_ * fVar8;
                            auVar28._12_4_ = auVar1._12_4_ * fVar9;
                            auVar1 = vcmpps_avx(auVar37._0_16_,auVar29,1);
                            auVar1 = vblendvps_avx(auVar38._0_16_,auVar28,auVar1);
                            *(undefined1 (*) [32])(param_2 + uVar20 * 0x1c + 8) = ZEXT832(0) << 0x20
                            ;
                            (param_2 + uVar20 * 0x1c + 0x10)[0] = 0xffffffff;
                            (param_2 + uVar20 * 0x1c + 0x10)[1] = 0xffffffff;
                            (param_2 + uVar20 * 0x1c + 0x12)[0] = 0;
                            (param_2 + uVar20 * 0x1c + 0x12)[1] = 0;
                            *(undefined1 *)(param_2 + uVar20 * 0x1c + 0x14) = 0xd;
                            *(undefined1 (*) [16])(param_2 + uVar20 * 0x1c + 0x15) = auVar32._0_16_;
                            param_2[uVar20 * 0x1c + 0x19] = 0;
                            (param_2 + uVar20 * 0x1c + 0x1b)[0] = 0xffffffff;
                            (param_2 + uVar20 * 0x1c + 0x1b)[1] = 0;
                            param_2[uVar20 * 0x1c + 4] = uVar14;
                            param_2[uVar20 * 0x1c + 0x10] = *(uint *)(pauVar26[1] + 4);
                            param_2[uVar20 * 0x1c + 0x11] = *(uint *)(pauVar23[1] + 4);
                            *(undefined1 (*) [16])(param_2 + uVar20 * 0x1c + 8) = auVar31;
                            *(undefined1 (*) [16])(param_2 + uVar20 * 0x1c + 0xc) = auVar1;
                            *(undefined1 *)(param_2 + uVar20 * 0x1c + 0x14) = pauVar26[2][0xb];
                            param_2[uVar20 * 0x1c + 0x12] =
                                 (uint)(auVar34._0_4_ *
                                       (float)((uint)(byte)pauVar23[2][0xd] +
                                              (uint)(byte)pauVar26[2][0xd]));
                            param_2[uVar20 * 0x1c + 0x13] =
                                 auVar10._0_4_ &
                                 (uint)(((fVar30 * fVar30 * auVar29._0_4_ * auVar35._0_4_ +
                                         auVar34._0_4_) * fVar30 + fVar30) * auVar29._0_4_);
                            if (uVar17 <= uVar24) {
                              uVar20 = (ulonglong)uVar24;
                              break;
                            }
                            bVar21 = pauVar26[2][0xc];
                            uVar20 = (ulonglong)uVar24;
                          }
                        }
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < bVar21);
                    }
                    if (uVar17 <= (uint)uVar20) break;
                  }
                }
              }
              pauVar26 = (undefined1 (*) [16])(pauVar26[3] + 4);
            } while (pauVar26 != (undefined1 (*) [16])((longlong)iStack_150 * 0x34 + lVar4));
          }
          uVar14 = *param_2;
          uVar17 = param_2[1];
          if ((uVar14 <= uVar17) || (uVar13 <= uVar25)) goto LAB_14001ad81;
LAB_14001ab44:
          uVar25 = uVar25 + 1;
          goto LAB_14001aac4;
        }
        *param_3 = 1;
        if (uVar25 < uVar13) goto LAB_14001ab44;
        uVar14 = *param_2;
        uVar17 = param_2[1];
LAB_14001ad81:
      } while ((uVar17 < uVar14) && (bVar27 = uVar18 < uVar15, uVar18 = uVar18 + 1, bVar27));
    }
  }
  return;
}

