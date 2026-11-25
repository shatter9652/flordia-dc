// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140022ae0  size: 1469 bytes
// Name:    FUN_140022ae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e05ae0, FUN_144e030b0, FUN_1400232d0, FUN_144e065a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140022ae0(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 uVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  byte bVar23;
  ulonglong uVar24;
  byte bVar25;
  uint uVar26;
  longlong *plVar27;
  byte bVar28;
  ulonglong uVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar39 [64];
  uint uVar40;
  uint uVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar48 [64];
  undefined1 aauStack_108 [2] [16];
  longlong *plStack_e8;
  int iStack_e0;
  longlong *plStack_d8;
  int iStack_d0;
  float afStack_c8 [12];
  undefined1 aauStack_98 [4] [16];
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM9._0_16_;
  if ((*(byte *)(param_1 + 0x6384) & 2) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = func_0x000144da4370(*(undefined1 *)(param_4 + 0xc1));
  }
  lVar16 = func_0x0001400230a0(param_4);
  bVar4 = *(byte *)(lVar16 + 0x79);
  cVar5 = *(char *)(lVar16 + 0x78);
  uVar17 = func_0x000144df8430(*(undefined8 *)
                                (*(longlong *)(*(longlong *)(param_3 + 0x9a0) + 0xbd8) + 0x10));
  if (((*(char *)((longlong)_DAT_14ab7ef10 + 0x253) == '\x01') &&
      (bVar23 = *(byte *)(param_4 + 0xc0),
      (**(code **)(*_DAT_14ab7ef10 + 0x58))(_DAT_14ab7ef10,afStack_c8),
      afStack_c8[0]._0_1_ <= bVar23)) && (1 < bVar4)) {
    auVar39 = ZEXT1664(_DAT_145fc6ee0);
    plVar7 = *(longlong **)(param_1 + 0x20);
    bVar23 = cVar5 + 1;
    bVar25 = 1;
    uVar15 = 0;
    uVar24 = (ulonglong)((uint)bVar23 * 4);
    uVar26 = _DAT_145fc6f10;
    uVar40 = _DAT_145fc6f10;
    uVar41 = _DAT_145fc6f10;
    uVar42 = _DAT_145fc6f10;
    fVar43 = _DAT_145fc6f08;
    fVar44 = _DAT_145fc6f08;
    fVar45 = _DAT_145fc6f08;
    fVar46 = _DAT_145fc6f08;
    do {
      bVar28 = bVar25;
      if (bVar25 == bVar4) {
        bVar28 = 0;
      }
      piVar18 = (int *)func_0x000144f8b860(lVar16,param_2,bVar28);
      lVar19 = func_0x0001400230b0(param_1,param_2,bVar28);
      iStack_d0 = *piVar18;
      plStack_d8 = plVar7;
      if (iStack_d0 == -1) {
        plStack_d8 = (longlong *)0x0;
      }
      lVar20 = FUN_144e05ae0(param_3,&plStack_d8);
      if (lVar20 != 0) {
        if ((uVar15 & 1) == 0) {
          if (bVar28 == 0) goto LAB_140022f62;
          if (bVar23 == 0) {
            uVar15 = FUN_1400232d0(plVar7,uVar17,param_3,piVar18,cVar5,lVar19,uVar12);
          }
          else {
            uVar29 = 0;
            do {
              iVar6 = *(int *)((longlong)piVar18 + uVar29);
              plVar27 = plVar7;
              if (iVar6 == -1) {
                plVar27 = (longlong *)0x0;
              }
              iVar13 = func_0x000144e05fa0(plVar27[1]);
              auVar31 = auVar39._0_16_;
              if (iVar6 != iVar13) {
                uVar14 = (**(code **)(*plVar27 + 0xf0))(plVar27,iVar6);
                (**(code **)(*plVar27 + 0x110))(plVar27,uVar14,aauStack_108);
                auVar31 = aauStack_108[0];
              }
              *(undefined1 (*) [16])(afStack_c8 + uVar29) = auVar31;
              uVar29 = uVar29 + 4;
            } while (uVar24 != uVar29);
            cVar11 = FUN_1400232d0(plVar7,uVar17,param_3,piVar18,cVar5,lVar19,uVar12);
            if (cVar11 == '\0') {
              uVar15 = 0;
            }
            else {
              uVar29 = 0;
              do {
                iVar6 = *(int *)((longlong)piVar18 + uVar29);
                plVar27 = plVar7;
                if (iVar6 == -1) {
                  plVar27 = (longlong *)0x0;
                }
                iVar13 = func_0x000144e05fa0(plVar27[1]);
                auVar31 = auVar39._0_16_;
                if (iVar6 != iVar13) {
                  uVar14 = (**(code **)(*plVar27 + 0xf0))(plVar27,iVar6);
                  (**(code **)(*plVar27 + 0x110))(plVar27,uVar14,aauStack_108);
                  auVar31 = aauStack_108[0];
                }
                fVar30 = afStack_c8[uVar29 + 3];
                fVar1 = afStack_c8[uVar29];
                auVar35._0_4_ = (uint)auVar31._0_4_ ^ uVar26;
                auVar35._4_4_ = (uint)auVar31._4_4_ ^ uVar40;
                auVar35._8_4_ = (uint)auVar31._8_4_ ^ uVar41;
                auVar35._12_4_ = (uint)auVar31._12_4_ ^ uVar42;
                fVar2 = afStack_c8[uVar29 + 1];
                fVar3 = afStack_c8[uVar29 + 2];
                uVar15 = 1;
                auVar47 = vblendps_avx(auVar35,auVar31,10);
                auVar9 = vshufps_avx(auVar47,auVar47,0x1b);
                auVar8 = vshufpd_avx(auVar31,auVar35,1);
                auVar47 = vblendps_avx(auVar35,auVar31,9);
                auVar47 = vshufps_avx(auVar47,auVar47,0xb1);
                auVar32._0_4_ =
                     -(fVar3 * auVar47._0_4_) -
                     (fVar2 * auVar8._0_4_ + (fVar1 * auVar9._0_4_ - fVar30 * auVar31._0_4_));
                auVar32._4_4_ =
                     -(fVar3 * auVar47._4_4_) -
                     (fVar2 * auVar8._4_4_ + (fVar1 * auVar9._4_4_ - fVar30 * auVar31._4_4_));
                auVar32._8_4_ =
                     -(fVar3 * auVar47._8_4_) -
                     (fVar2 * auVar8._8_4_ + (fVar1 * auVar9._8_4_ - fVar30 * auVar31._8_4_));
                auVar32._12_4_ =
                     -(fVar3 * auVar47._12_4_) -
                     (fVar2 * auVar8._12_4_ + (fVar1 * auVar9._12_4_ - fVar30 * auVar31._12_4_));
                *(undefined1 (*) [16])(afStack_c8 + uVar29) = auVar32;
                uVar29 = uVar29 + 4;
              } while (uVar24 != uVar29);
            }
          }
        }
        else if ((bVar28 == 0) && (*(char *)((longlong)_DAT_14ab7ef10 + 0x254) != '\x01')) {
LAB_140022f62:
          FUN_1400232d0(plVar7,uVar17,param_3,piVar18,cVar5,lVar19,uVar12);
        }
        else {
          uVar15 = 1;
          if (bVar23 != 0) {
            uVar29 = 0;
            do {
              iVar6 = *(int *)((longlong)piVar18 + uVar29 * 2);
              plVar27 = plVar7;
              if (iVar6 == -1) {
                plVar27 = (longlong *)0x0;
              }
              auVar48 = ZEXT1664(*(undefined1 (*) [16])(afStack_c8 + uVar29 * 2));
              plStack_e8 = plVar27;
              iStack_e0 = iVar6;
              iVar13 = func_0x000144e05fa0(plVar27[1]);
              auVar47 = auVar48._0_16_;
              auVar31 = auVar39._0_16_;
              if (iVar6 != iVar13) {
                uVar14 = (**(code **)(*plVar27 + 0xf0))(plVar27,iVar6);
                (**(code **)(*plVar27 + 0x110))(plVar27,uVar14,aauStack_108);
                auVar47 = auVar48._0_16_;
                auVar31 = aauStack_108[0];
              }
              auVar9 = vshufps_avx(auVar31,auVar31,0xff);
              auVar34._0_4_ = (uint)auVar47._0_4_ ^ uVar26;
              auVar34._4_4_ = (uint)auVar47._4_4_ ^ uVar40;
              auVar34._8_4_ = (uint)auVar47._8_4_ ^ uVar41;
              auVar34._12_4_ = (uint)auVar47._12_4_ ^ uVar42;
              fVar30 = auVar31._0_4_;
              auVar32 = vshufps_avx(auVar31,auVar31,0x55);
              auVar35 = vshufps_avx(auVar31,auVar31,0xaa);
              auVar31 = vblendps_avx(auVar34,auVar47,10);
              auVar10 = vshufps_avx(auVar31,auVar31,0x1b);
              auVar8 = vshufpd_avx(auVar47,auVar34,1);
              auVar31 = vblendps_avx(auVar34,auVar47,9);
              auVar31 = vshufps_avx(auVar31,auVar31,0xb1);
              fVar33 = auVar35._0_4_ * auVar31._0_4_ +
                       auVar32._0_4_ * auVar8._0_4_ +
                       fVar30 * auVar10._0_4_ + auVar47._0_4_ * auVar9._0_4_;
              fVar36 = auVar35._4_4_ * auVar31._4_4_ +
                       auVar32._4_4_ * auVar8._4_4_ +
                       fVar30 * auVar10._4_4_ + auVar47._4_4_ * auVar9._4_4_;
              fVar37 = auVar35._8_4_ * auVar31._8_4_ +
                       auVar32._8_4_ * auVar8._8_4_ +
                       fVar30 * auVar10._8_4_ + auVar47._8_4_ * auVar9._8_4_;
              fVar38 = auVar35._12_4_ * auVar31._12_4_ +
                       auVar32._12_4_ * auVar8._12_4_ +
                       fVar30 * auVar10._12_4_ + auVar47._12_4_ * auVar9._12_4_;
              auVar31._0_4_ = fVar33 * fVar33;
              auVar31._4_4_ = fVar36 * fVar36;
              auVar31._8_4_ = fVar37 * fVar37;
              auVar31._12_4_ = fVar38 * fVar38;
              auVar31 = vhaddps_avx(auVar31,auVar31);
              auVar31 = vhaddps_avx(auVar31,auVar31);
              auVar47 = vrsqrtps_avx(auVar31);
              fVar30 = auVar47._0_4_;
              fVar1 = auVar47._4_4_;
              fVar2 = auVar47._8_4_;
              fVar3 = auVar47._12_4_;
              aauStack_98[0]._0_4_ =
                   ((fVar43 * fVar30 * fVar30 * auVar31._0_4_ - fVar43) * fVar30 + fVar30) * fVar33;
              aauStack_98[0]._4_4_ =
                   ((fVar44 * fVar1 * fVar1 * auVar31._4_4_ - fVar44) * fVar1 + fVar1) * fVar36;
              aauStack_98[0]._8_4_ =
                   ((fVar45 * fVar2 * fVar2 * auVar31._8_4_ - fVar45) * fVar2 + fVar2) * fVar37;
              aauStack_98[0]._12_4_ =
                   ((fVar46 * fVar3 * fVar3 * auVar31._12_4_ - fVar46) * fVar3 + fVar3) * fVar38;
              FUN_144e030b0(plVar27,iVar6,aauStack_98);
              if (*(longlong *)(lVar19 + uVar29 * 4) != 0) {
                FUN_144e065a0(aauStack_108,&plStack_e8);
              }
              uVar29 = uVar29 + 2;
            } while ((uint)bVar23 * 2 != uVar29);
          }
        }
      }
      bVar25 = bVar25 + 1;
    } while (bVar25 <= bVar4);
  }
  else if (bVar4 != 0) {
    uVar26 = 0;
    do {
      uVar21 = func_0x000144f8b860(lVar16,param_2,uVar26);
      uVar22 = func_0x0001400230b0(param_1,param_2,uVar26);
      FUN_1400232d0(*(undefined8 *)(param_1 + 0x20),uVar17,param_3,uVar21,cVar5,uVar22,uVar12);
      uVar26 = uVar26 + 1;
    } while (bVar4 != uVar26);
  }
  return;
}

