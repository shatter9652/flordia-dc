// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140100070  size: 927 bytes
// Name:    FUN_140100070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142f95740, FUN_1400746e0, FUN_1400ff260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140100070(int *param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  int iStack_130;
  int iStack_12c;
  undefined1 auStack_128 [20];
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [16];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [104];
  undefined1 auVar14 [64];
  
  plVar3 = (longlong *)func_0x000144fa4640(param_3);
  if (((plVar3 != (longlong *)0x0 && param_2 != 0) &&
      (cVar1 = (**(code **)(*plVar3 + 0x288))(plVar3), cVar1 != '\0')) &&
     (lVar4 = (**(code **)(*plVar3 + 0xa8))(plVar3), lVar4 != 0)) {
    if (param_4 != 0) {
      if (((*(byte *)(param_2 + 0xa4) & 4) != 0) &&
         (lVar5 = FUN_1400ff260(*(undefined8 *)(_DAT_14ab7f650 + 0x328),
                                *(undefined2 *)(_DAT_14ab7f650 + 0x330),0x6714a58a), lVar5 != 0)) {
        uStack_b8 = *(undefined8 *)(param_4 + 0x70);
        uStack_b0 = *(undefined8 *)(param_4 + 0x78);
        func_0x000144dc3790(&uStack_b8,auStack_a8);
        FUN_142f95740(param_1,lVar5,auStack_a8,plVar3);
        auStack_128._0_4_ = 0xffffffff;
        cVar1 = FUN_1400746e0(lVar4,*param_1);
        if ((cVar1 != '\0') && (auStack_128._0_4_ != -1)) {
          return;
        }
      }
      if (*(short *)(param_2 + 0x88) != 0) {
        uStack_c8 = *(undefined8 *)(param_4 + 0x70);
        uStack_c0 = *(undefined8 *)(param_4 + 0x78);
        func_0x000144dc3790(&uStack_c8,auStack_e8);
        iStack_12c = -1;
        bVar2 = FUN_1400746e0(lVar4,*(undefined4 *)(param_2 + 0x74),&iStack_12c);
        if ((iStack_12c != -1 & bVar2) == 1) {
          iStack_130 = *(int *)(param_2 + 0x74);
          stack0xfffffffffffffedc = ZEXT828(SUB128(ZEXT812(0),4));
          auStack_128._0_4_ = 0x3f800000;
          uStack_114 = 0x3f800000;
          uStack_110 = 0;
          auStack_108._0_12_ = ZEXT412(0x3f800000) << 0x40;
          auStack_108 = ZEXT1232(auStack_108._0_12_);
          (**(code **)(*plVar3 + 0xe8))(plVar3,iStack_12c,auStack_128);
          auVar13._0_12_ = ZEXT812(0);
          auVar13._12_4_ = 0;
          auVar14 = ZEXT1664(auVar13);
          auVar9 = vsubps_avx(auStack_108._16_16_,auStack_e8);
          auVar12 = ZEXT1664(auVar9);
          auVar8._0_4_ = auVar9._0_4_ * auVar9._0_4_;
          auVar8._4_4_ = auVar9._4_4_ * auVar9._4_4_;
          auVar8._8_4_ = auVar9._8_4_ * auVar9._8_4_;
          auVar8._12_4_ = auVar9._12_4_ * auVar9._12_4_;
          auVar9 = vblendps_avx(auVar8,auVar13,8);
          auVar9 = vhaddps_avx(auVar9,auVar9);
          auVar9 = vhaddps_avx(auVar9,auVar9);
          auVar15 = ZEXT1664(auVar9);
          func_0x000144f7ac60(&fStack_d8);
          auVar9._0_4_ = auVar12._0_4_ * fStack_d8;
          auVar9._4_4_ = auVar12._4_4_ * fStack_d4;
          auVar9._8_4_ = auVar12._8_4_ * fStack_d0;
          auVar9._12_4_ = auVar12._12_4_ * fStack_cc;
          auVar9 = vblendps_avx(auVar9,auVar14._0_16_,8);
          auVar9 = vhaddps_avx(auVar9,auVar9);
          auVar9 = vhaddps_avx(auVar9,auVar9);
          auVar12 = ZEXT1664(CONCAT124(auVar9._4_12_,-(auVar9._0_4_ * auVar9._0_4_) + auVar15._0_4_)
                            );
        }
        else {
          auVar12 = ZEXT464(_DAT_145fc6f50);
          iStack_130 = 0;
        }
        if (*(short *)(param_2 + 0x88) != 0) {
          auVar14 = ZEXT1664(auStack_e8);
          uVar6 = 0;
          auVar15 = ZEXT1264(ZEXT812(0));
          do {
            bVar2 = FUN_1400746e0(lVar4,*(undefined4 *)(*(longlong *)(param_2 + 0x80) + uVar6 * 4),
                                  &iStack_12c);
            if ((iStack_12c != -1 & bVar2) == 1) {
              stack0xfffffffffffffedc = ZEXT828(SUB128(ZEXT812(0),4));
              auStack_128._0_4_ = 0x3f800000;
              uStack_114 = 0x3f800000;
              uStack_110 = 0;
              auStack_108._0_12_ = ZEXT412(0x3f800000) << 0x40;
              auStack_108 = ZEXT1232(auStack_108._0_12_);
              auVar12 = ZEXT1664(auVar12._0_16_);
              auVar14 = ZEXT1664(auVar14._0_16_);
              auVar15 = ZEXT1664(auVar15._0_16_);
              (**(code **)(*plVar3 + 0xe8))(plVar3,iStack_12c,auStack_128);
              auVar9 = vsubps_avx(auStack_108._16_16_,auVar14._0_16_);
              auVar16 = ZEXT1664(auVar9);
              auVar10._0_4_ = auVar9._0_4_ * auVar9._0_4_;
              auVar10._4_4_ = auVar9._4_4_ * auVar9._4_4_;
              auVar10._8_4_ = auVar9._8_4_ * auVar9._8_4_;
              auVar10._12_4_ = auVar9._12_4_ * auVar9._12_4_;
              auVar9 = vblendps_avx(auVar10,auVar15._0_16_,8);
              auVar9 = vhaddps_avx(auVar9,auVar9);
              auVar9 = vhaddps_avx(auVar9,auVar9);
              auVar17 = ZEXT1664(auVar9);
              func_0x000144f7ac60(&fStack_d8);
              auVar11._0_4_ = auVar16._0_4_ * fStack_d8;
              auVar11._4_4_ = auVar16._4_4_ * fStack_d4;
              auVar11._8_4_ = auVar16._8_4_ * fStack_d0;
              auVar11._12_4_ = auVar16._12_4_ * fStack_cc;
              auVar9 = vblendps_avx(auVar11,auVar15._0_16_,8);
              auVar9 = vhaddps_avx(auVar9,auVar9);
              auVar9 = vhaddps_avx(auVar9,auVar9);
              fVar7 = -(auVar9._0_4_ * auVar9._0_4_) + auVar17._0_4_;
              if (fVar7 < auVar12._0_4_) {
                auVar12 = ZEXT1664(CONCAT124(auVar9._4_12_,fVar7));
                iStack_130 = *(int *)(*(longlong *)(param_2 + 0x80) + uVar6 * 4);
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(ushort *)(param_2 + 0x88));
        }
        *param_1 = iStack_130;
        if (iStack_130 != 0) {
          return;
        }
      }
    }
    if (*(int *)(param_2 + 0x74) != 0) {
      auStack_128._0_4_ = 0xffffffff;
      cVar1 = FUN_1400746e0(lVar4);
      if ((cVar1 != '\0') && (auStack_128._0_4_ != -1)) {
        *param_1 = *(int *)(param_2 + 0x74);
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}

