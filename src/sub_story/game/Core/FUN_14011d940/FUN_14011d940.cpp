// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011d940  size: 1265 bytes
// Name:    FUN_14011d940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140af7390, FUN_144fd02e0, FUN_1453599d0, FUN_14004c030, FUN_1411d4d00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011d940(longlong param_1,char param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar22;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined1 auVar41 [64];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined1 auStack_158 [16];
  undefined4 uStack_148;
  uint uStack_138;
  uint uStack_134;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 aauStack_118 [2] [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  
  uVar14 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  lVar8 = func_0x000145162130(*(undefined4 *)(uVar14 + 0x9c));
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x2c) != 0)) {
    uVar18 = FUN_140af7390(uVar14,0);
    plVar10 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
    fVar27 = *(float *)(plVar10 + 8);
    fVar28 = *(float *)((longlong)plVar10 + 0x44);
    fVar29 = *(float *)(plVar10 + 9);
    fVar30 = *(float *)((longlong)plVar10 + 0x4c);
    fVar31 = *(float *)(plVar10 + 10);
    fVar32 = *(float *)((longlong)plVar10 + 0x54);
    fVar33 = *(float *)(plVar10 + 0xb);
    fVar34 = *(float *)((longlong)plVar10 + 0x5c);
    fVar35 = *(float *)(plVar10 + 0xc);
    fVar36 = *(float *)((longlong)plVar10 + 100);
    fVar37 = *(float *)(plVar10 + 0xd);
    fVar38 = *(float *)((longlong)plVar10 + 0x6c);
    auVar20 = *(undefined1 (*) [16])(plVar10 + 0xe);
    auVar41 = ZEXT1664(auVar20);
    fVar39 = _DAT_145fc6ed8;
    if (param_2 != '\0') {
      (**(code **)(*plVar10 + 0x450))(plVar10,&fStack_168,0);
      auVar20 = *(undefined1 (*) [16])((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x50);
      auVar46 = ZEXT1664(CONCAT412(auVar20._12_4_ * _DAT_14763b814 + fStack_15c,
                                   CONCAT48(auVar20._8_4_ * _DAT_14763b814 + fStack_160,
                                            CONCAT44(auVar20._4_4_ * _DAT_14763b814 + fStack_164,
                                                     auVar20._0_4_ * _DAT_14763b814 + fStack_168))))
      ;
      func_0x0001402c1230(auStack_158);
      uStack_148 = _DAT_14763b810;
      auStack_158 = auVar46._0_16_;
      cVar6 = FUN_1411d4d00(auStack_158);
      auVar20 = auVar41._0_16_;
      fVar39 = _DAT_145fc6ed8;
      if (((((cVar6 != '\0') && (uVar14 = (ulonglong)uStack_138 & 0xffff, uVar14 != 0xffff)) &&
           ((uint)uVar14 < 0x12c0)) &&
          ((lVar3 = *(longlong *)(_DAT_14a9e88c0 + 0xc30 + uVar14 * 8), lVar3 != 0 &&
           (*(ushort *)(lVar3 + 0x48) != 0 || *(short *)(lVar3 + 8) != 0)))) &&
         ((uStack_138 >> 0x10 < (uint)*(ushort *)(lVar3 + 0x48) &&
          (lVar3 = *(longlong *)(lVar3 + 0x40), lVar3 != 0)))) {
        lVar15 = (ulonglong)(uStack_138 >> 0x10) * 0x2c;
        puVar2 = (undefined8 *)(lVar3 + lVar15);
        uStack_e8 = *puVar2;
        uStack_e0 = puVar2[1];
        puVar2 = (undefined8 *)(lVar3 + 0x18 + lVar15);
        uStack_f8 = *puVar2;
        uStack_f0 = puVar2[1];
        cVar6 = func_0x000145222ae0();
        auVar20 = auVar41._0_16_;
        if (cVar6 == '\0') {
          auVar19._0_12_ = ZEXT812(0);
          auVar19._12_4_ = 0;
          auVar26 = vminss_avx(ZEXT416((uint)_DAT_14763b818),ZEXT416(uStack_134));
          auVar19 = vcmpss_avx(ZEXT416(uStack_134),auVar19,1);
          fVar39 = ((float)(~auVar19._0_4_ & auVar26._0_4_) * (_DAT_14763b81c + _DAT_145fc6f48)) /
                   _DAT_14763b818 + _DAT_145fc6ed8;
        }
      }
    }
    if ((ulonglong)*(uint *)(lVar8 + 0x2c) != 0) {
      auVar19 = vpunpckhwd_avx(auVar20,auVar20);
      auVar47 = ZEXT1664(_DAT_14614f7f0);
      plVar13 = *(longlong **)(lVar8 + 0x30);
      auVar46 = ZEXT1264(ZEXT812(0));
      auVar19 = vpsrad_avx(auVar19,0x10);
      auVar19 = vcvtdq2ps_avx(auVar19);
      plVar10 = plVar13 + *(uint *)(lVar8 + 0x2c);
      auVar19 = vshufpd_avx(auVar19,auVar19,3);
      auVar41 = ZEXT1664(CONCAT412(auVar19._12_4_ * _UNK_146159c9c + auVar20._12_4_,
                                   CONCAT48(auVar19._8_4_ * _UNK_146159c98 + auVar20._8_4_,
                                            CONCAT44(auVar19._4_4_ * _UNK_146159c94 + auVar20._4_4_,
                                                     auVar19._0_4_ * _DAT_146159c90 + auVar20._0_4_)
                                           )));
      uVar40 = _DAT_145fc6f10;
      uVar42 = _DAT_145fc6f10;
      uVar43 = _DAT_145fc6f10;
      uVar44 = _DAT_145fc6f10;
      do {
        lVar8 = *plVar13;
        lVar3 = *(longlong *)(lVar8 + 0xe0);
        if (((lVar3 != 0) && (-1 < (char)*(uint *)(lVar3 + 0x98))) &&
           ((*(byte *)(lVar3 + 0xf0) & 8) == 0)) {
          lVar15 = *(longlong *)(lVar3 + 0x40);
          if (lVar15 == 0) {
            *(uint *)(lVar3 + 0x98) = *(uint *)(lVar3 + 0x98) | 0x40000;
            plVar5 = _DAT_1492e32d0;
            uVar14 = _DAT_1492e32d0[4];
            do {
              iVar7 = (int)uVar14;
              if (iVar7 == 0x1fffe) goto LAB_14011dc5f;
              uVar12 = uVar14 & 0xffffffff;
              LOCK();
              uVar9 = plVar5[4];
              bVar16 = uVar14 == uVar9;
              if (bVar16) {
                plVar5[4] = (ulonglong)(*(uint *)(plVar5[5] + uVar12 * 4) & 0x1ffff) |
                            uVar14 & 0xffffffff00000000;
                uVar9 = uVar14;
              }
              UNLOCK();
              uVar14 = uVar9;
            } while (!bVar16);
            LOCK();
            *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
            UNLOCK();
            puVar1 = (uint *)(plVar5[5] + uVar12 * 4);
            *puVar1 = *puVar1 | *(uint *)(plVar5 + 6);
            if (*plVar5 == 0) {
LAB_14011dc5f:
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            lVar15 = *plVar5 + (ulonglong)(uint)((int)plVar5[1] * iVar7);
            if (plVar5[3] != 0) {
              FUN_14004c030(plVar5,lVar15);
            }
            FUN_1453599d0(lVar15);
            *(longlong *)(lVar3 + 0x40) = lVar15;
            bVar16 = true;
            bVar11 = 0;
          }
          else {
            bVar11 = *(byte *)(lVar15 + 0x22);
            bVar16 = bVar11 == 8;
            if (bVar16) {
              bVar11 = *(byte *)(lVar15 + 4);
            }
            if (7 < bVar11) goto LAB_14011db88;
          }
          uStack_128 = *(undefined8 *)(lVar8 + 0x70);
          uStack_120 = *(undefined8 *)(lVar8 + 0x78);
          func_0x000144dc3790(&uStack_128,auStack_158);
          func_0x000144f2b0e0(&fStack_168);
          auVar26 = vsubps_avx(auStack_158,auVar41._0_16_);
          auVar25._0_4_ = uVar40 ^ _DAT_14763b82c;
          auVar25._4_4_ = uVar42;
          auVar25._8_4_ = uVar43;
          auVar25._12_4_ = uVar44;
          auVar20 = ZEXT416((uint)((fStack_160 - (float)auStack_158._8_4_) * _DAT_14763b828));
          auVar19 = vminss_avx(ZEXT416(_DAT_14763b82c),auVar20);
          auVar20 = vcmpss_avx(auVar20,auVar25,1);
          auVar25 = vblendvps_avx(auVar19,auVar25,auVar20);
          fVar17 = auVar26._0_4_;
          auVar24._0_4_ = fVar17 * fVar27;
          fVar21 = auVar26._4_4_;
          auVar24._4_4_ = fVar21 * fVar28;
          fVar22 = auVar26._8_4_;
          auVar24._8_4_ = fVar22 * fVar29;
          fVar23 = auVar26._12_4_;
          auVar24._12_4_ = fVar23 * fVar30;
          auVar26._0_4_ = fVar31 * fVar17;
          auVar26._4_4_ = fVar32 * fVar21;
          auVar26._8_4_ = fVar33 * fVar22;
          auVar26._12_4_ = fVar34 * fVar23;
          auVar20._0_4_ = fVar35 * fVar17;
          auVar20._4_4_ = fVar36 * fVar21;
          auVar20._8_4_ = fVar37 * fVar22;
          auVar20._12_4_ = fVar38 * fVar23;
          auVar45 = auVar46._0_16_;
          auVar20 = vblendps_avx(auVar20,auVar45,8);
          auVar19 = vblendps_avx(auVar24,auVar45,8);
          auVar26 = vblendps_avx(auVar26,auVar45,8);
          auVar24 = vhaddps_avx(auVar20,auVar20);
          auVar20 = vhaddps_avx(auVar20,auVar26);
          auVar19 = vhaddps_avx(auVar19,auVar26);
          auStack_158 = vhaddps_avx(auVar19,auVar20);
          auVar20 = vhaddps_avx(auVar24,auVar24);
          auVar20 = ZEXT416((uint)(fVar39 * (auVar20._0_4_ + (float)uVar18 + _DAT_14763b80c) +
                                  auVar25._0_4_));
          if (bVar16) {
            aauStack_118[0] = vinsertps_avx(auVar47._0_16_,auVar20,0x30);
            FUN_144fd02e0(lVar15,aauStack_118,_DAT_14763b824);
            *(byte *)(*(longlong *)(lVar3 + 0x40) + 0x22) = bVar11;
          }
          else {
            auVar20 = vinsertps_avx(auVar47._0_16_,auVar20,0x30);
            *(undefined1 (*) [16])(*(longlong *)(lVar15 + 8) + (ulonglong)bVar11 * 0x10) = auVar20;
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x18) + (ulonglong)bVar11 * 4) =
                 _DAT_14763b824;
          }
        }
LAB_14011db88:
        plVar13 = plVar13 + 1;
      } while (plVar13 != plVar10);
    }
  }
  return;
}

