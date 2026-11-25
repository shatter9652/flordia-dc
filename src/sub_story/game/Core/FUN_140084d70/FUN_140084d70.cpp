// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140084d70  size: 1037 bytes
// Name:    FUN_140084d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ffa120, FUN_145225c60, FUN_145225c30, FUN_140085180, FUN_144e23920, FUN_140085340, FUN_140085660, FUN_1400851e0, FUN_1424a6bf0, FUN_140085420, FUN_144fa1030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144fa0e2c) */
/* WARNING: Removing unreachable block (ram,0x000144fa0e3c) */
/* WARNING: Removing unreachable block (ram,0x000144fa0e48) */
/* WARNING: Removing unreachable block (ram,0x000144fa0e51) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140084d70(undefined1 (*param_1) [16],longlong param_2,longlong *param_3,ulonglong param_4,
                  longlong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  undefined8 unaff_RBX;
  undefined8 *puVar10;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong *plVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  short sVar17;
  short sVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  longlong lStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  if (param_5 == 0) {
LAB_140084d9d:
    if ((((param_4 >> 0x24 & 1) != 0) && (*(char *)(param_2 + 0x30) == '\x03')) &&
       (cVar4 = FUN_140085660(*(undefined4 *)(param_2 + 0x9c),param_3,param_1), cVar4 != '\0')) {
      return;
    }
    if ((param_4 >> 0x2a & 1) != 0 && param_5 != 0) {
      fVar24 = *(float *)(param_5 + 0x4220);
      auVar20 = *(undefined1 (*) [16])(param_3 + 0xe);
      fVar26 = *(float *)(param_5 + 0x4224);
      fVar27 = *(float *)(param_5 + 0x4228);
      auVar14._0_4_ =
           fVar27 * *(float *)(param_3 + 0xc) +
           fVar26 * *(float *)(param_3 + 10) + fVar24 * *(float *)(param_3 + 8) + auVar20._0_4_;
      auVar14._4_4_ =
           fVar27 * *(float *)((longlong)param_3 + 100) +
           fVar26 * *(float *)((longlong)param_3 + 0x54) +
           fVar24 * *(float *)((longlong)param_3 + 0x44) + auVar20._4_4_;
      auVar14._8_4_ =
           fVar27 * *(float *)(param_3 + 0xd) +
           fVar26 * *(float *)(param_3 + 0xb) + fVar24 * *(float *)(param_3 + 9) + auVar20._8_4_;
      auVar14._12_4_ =
           fVar27 * *(float *)((longlong)param_3 + 0x6c) +
           fVar26 * *(float *)((longlong)param_3 + 0x5c) +
           fVar24 * *(float *)((longlong)param_3 + 0x4c) + auVar20._12_4_;
      auVar22._4_4_ = _DAT_14615a290;
      auVar22._0_4_ = _DAT_14615a290;
      auVar22._8_4_ = _DAT_14615a290;
      auVar22._12_4_ = _DAT_14615a290;
      auVar25 = vrcpps_avx(auVar22);
      auVar22 = vblendps_avx(auVar14,auVar20,8);
      fVar24 = auVar25._0_4_;
      fVar26 = auVar25._4_4_;
      fVar27 = auVar25._8_4_;
      fVar28 = auVar25._12_4_;
      auVar25._0_4_ =
           ((-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24) * auVar22._0_4_;
      auVar25._4_4_ =
           ((-(fVar26 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar26 + fVar26) * auVar22._4_4_;
      auVar25._8_4_ =
           ((-(fVar27 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar27 + fVar27) * auVar22._8_4_;
      auVar25._12_4_ =
           ((-(fVar28 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar28 + fVar28) * auVar22._12_4_;
      auVar25 = vroundps_avx(auVar25,3);
      auVar23._0_4_ = -(auVar25._0_4_ * _DAT_14615a290) + auVar22._0_4_;
      auVar23._4_4_ = -(auVar25._4_4_ * _DAT_14615a290) + auVar22._4_4_;
      auVar23._8_4_ = -(auVar25._8_4_ * _DAT_14615a290) + auVar22._8_4_;
      auVar23._12_4_ = -(auVar25._12_4_ * _DAT_14615a290) + auVar22._12_4_;
      auVar19._0_4_ = (int)auVar25._0_4_;
      auVar19._4_4_ = (int)auVar25._4_4_;
      auVar19._8_4_ = (int)auVar25._8_4_;
      auVar19._12_4_ = (int)auVar25._12_4_;
      auVar22 = vblendps_avx(auVar14,auVar23,3);
      auVar25 = vpackssdw_avx(auVar19,auVar19);
      sVar17 = auVar25._0_2_;
      auVar1._0_2_ = sVar17 + auVar20._0_2_;
      sVar21 = auVar25._2_2_;
      auVar1._2_2_ = sVar21 + auVar20._2_2_;
      auVar1._4_2_ = sVar17 + auVar20._4_2_;
      auVar1._6_2_ = sVar21 + auVar20._6_2_;
      auVar1._8_2_ = sVar17 + auVar20._8_2_;
      auVar1._10_2_ = sVar21 + auVar20._10_2_;
      auVar1._12_2_ = sVar17 + auVar20._12_2_;
      auVar1._14_2_ = sVar21 + auVar20._14_2_;
      auVar22 = vpblendd_avx2(auVar22,auVar1,8);
      auVar20 = vpunpckhwd_avx(auVar22,auVar22);
      auVar20 = vpsrad_avx(auVar20,0x10);
      auVar20 = vcvtdq2ps_avx(auVar20);
      auVar20 = vshufpd_avx(auVar20,auVar20,3);
      fVar27 = auVar20._4_4_ * _UNK_146159c94;
      fVar26 = auVar20._8_4_ * _UNK_146159c98;
      fVar24 = auVar20._12_4_ * _UNK_146159c9c;
      *(float *)*param_1 = auVar20._0_4_ * _DAT_146159c90 + auVar22._0_4_;
      *(float *)(*param_1 + 4) = fVar27 + auVar22._4_4_;
      *(float *)(*param_1 + 8) = fVar26 + auVar22._8_4_;
      *(float *)(*param_1 + 0xc) = fVar24 + auVar22._12_4_;
      return;
    }
    if ((char)param_3[6] == '\x03') {
      lVar7 = FUN_144fa1030(*(undefined4 *)((longlong)param_3 + 0x9c));
      lStack_48 = param_3[0xe];
      lStack_40 = param_3[0xf];
      func_0x000144dc3790(&lStack_48,&uStack_98);
      *(undefined8 *)*param_1 = uStack_98;
      *(undefined **)(*param_1 + 8) = puStack_90;
      cVar4 = FUN_140085180((char)param_3[6],*(undefined4 *)((longlong)param_3 + 0x9c));
      if (cVar4 != '\0') {
        return;
      }
      cVar4 = FUN_1400851e0(param_2,param_3);
      if (cVar4 != '\0') {
        uStack_58 = *(undefined8 *)(param_2 + 0x70);
        puStack_50 = *(undefined **)(param_2 + 0x78);
        cVar4 = FUN_1424a6bf0(&uStack_58,param_3);
        if (cVar4 != '\0') {
          return;
        }
      }
      uVar12 = (uint)param_4;
      if ((uVar12 >> 0x1a & 1) != 0) {
        uStack_68 = *(ulonglong *)(param_2 + 0x70);
        uStack_60 = *(undefined8 *)(param_2 + 0x78);
        func_0x000144dc3790(&uStack_68,&uStack_98);
        lStack_78 = param_3[0xe];
        lStack_70 = param_3[0xf];
        func_0x000144dc3790(&lStack_78,&uStack_88);
        if ((*(char *)(param_2 + 0x30) != '\x03') ||
           (cVar4 = func_0x000144da28f0(*(undefined4 *)(param_2 + 0x9c)), cVar4 == '\0')) {
          auVar2._8_8_ = puStack_90;
          auVar2._0_8_ = uStack_98;
          auVar18._0_12_ = ZEXT812(0);
          auVar18._12_4_ = 0;
          auVar3._8_8_ = puStack_80;
          auVar3._0_8_ = uStack_88;
          auVar20 = vsubps_avx(auVar2,auVar3);
          auVar13._0_4_ = auVar20._0_4_ * auVar20._0_4_;
          auVar13._4_4_ = auVar20._4_4_ * auVar20._4_4_;
          auVar13._8_4_ = auVar20._8_4_ * auVar20._8_4_;
          auVar13._12_4_ = auVar20._12_4_ * auVar20._12_4_;
          auVar20 = vblendps_avx(auVar13,auVar18,8);
          auVar20 = vhaddps_avx(auVar20,auVar20);
          auVar20 = vhaddps_avx(auVar20,auVar20);
          if (auVar20._0_4_ < _DAT_145fc6f88) {
            lVar8 = func_0x0001450bd950(*(undefined4 *)((longlong)param_3 + 0x9c));
            if (((lVar8 != 0) && (lVar7 != 0)) && ((*(byte *)(lVar8 + 0x2249) & 1) != 0)) {
              FUN_145225c30(lVar7,param_1);
              return;
            }
            goto LAB_140084e39;
          }
        }
        cVar4 = FUN_140085420(param_3,param_1);
        if (cVar4 != '\0') {
          return;
        }
      }
LAB_140084e39:
      if (lVar7 != 0) {
        if (((((param_4 >> 0x33 & 1) == 0) || (*(char *)(param_2 + 0x30) != '\x03')) ||
            (lVar8 = func_0x000144f20050(*(undefined4 *)(param_2 + 0x9c)), lVar8 == 0)) ||
           (lVar8 = FUN_144ffa120(lVar8,param_3), lVar8 == 0)) {
          if ((uVar12 >> 0x1b & 1) != 0) {
            puStack_50 = (undefined *)0x14008564c;
            FUN_145225c60(lVar7,&stack0xffffffffffffffd8,0x13);
            *(undefined8 *)*param_1 = unaff_RDI;
            *(undefined8 *)(*param_1 + 8) = unaff_RSI;
            return;
          }
          if ((uVar12 >> 0x1c & 1) != 0) {
            auVar15._0_12_ = ZEXT812(0);
            auVar15._12_4_ = 0;
            *param_1 = auVar15;
            if (param_3 != (longlong *)0x0) {
              puStack_80 = &UNK_144fa0cb1;
              lVar7 = func_0x000144fa0d70(*(undefined4 *)((longlong)param_3 + 0x9c));
              if (lVar7 != 0) {
                auVar16._0_12_ = ZEXT812(0);
                auVar16._12_4_ = 0;
                *param_1 = auVar16;
                plVar11 = (longlong *)(*(ulonglong *)(lVar7 + 8) & 0xfffffffffffffff0);
                if (plVar11 != (longlong *)0x0) {
                  cVar4 = (char)plVar11[6];
                  if (cVar4 == '\x03') {
                    uStack_68 = uStack_68 & 0xffffffffffffff00;
                    puStack_90 = &UNK_144fa0e1d;
                    FUN_144fa0ef0(lVar7,plVar11,param_1,0);
                  }
                  else if (cVar4 == '\x04') {
                    puStack_90 = &UNK_144fa0e8e;
                    FUN_140101040(lVar7,plVar11,param_1);
                  }
                  else if (cVar4 == '\x02') {
                    puStack_90 = &UNK_144fa0ea0;
                    FUN_1441178a0(lVar7,plVar11,param_1);
                  }
                  else {
                    if (plVar11[4] == 0) {
                      uStack_38 = plVar11[0xe];
                      puStack_90 = &UNK_144fa0ee9;
                      func_0x000144dc3790(&uStack_38,&uStack_58);
                    }
                    else {
                      puStack_90 = &UNK_144fa0ec0;
                      (**(code **)(*plVar11 + 0x208))(plVar11,&uStack_58);
                    }
                    *(undefined8 *)*param_1 = uStack_58;
                    *(undefined **)(*param_1 + 8) = puStack_50;
                  }
                }
                return;
              }
              if ((param_3[4] == 0) ||
                 (((char)param_3[6] != '\x02' && ((char)param_3[6] != '\x04')))) {
                lStack_48 = param_3[0xe];
                lStack_40 = param_3[0xf];
                puStack_80 = &UNK_144fa0d59;
                func_0x000144dc3790(&lStack_48,&uStack_58);
                *(undefined8 *)*param_1 = uStack_58;
                *(undefined **)(*param_1 + 8) = puStack_50;
              }
              else {
                if (*(code **)(*param_3 + 0x208) == FUN_144fa1230) {
                  puStack_80 = &UNK_144fa0d03;
                  FUN_144fa1230(param_3);
                }
                else {
                  puStack_80 = &UNK_144fa0d68;
                  (**(code **)(*param_3 + 0x208))(param_3,&uStack_58);
                }
                *(undefined8 *)*param_1 = uStack_58;
                *(undefined **)(*param_1 + 8) = puStack_50;
                if ((char)param_3[6] == '\x02') {
                  puStack_80 = &UNK_144fa0d23;
                  func_0x000144fa12d0(&uStack_38,param_3);
                  fVar24 = *(float *)(*param_1 + 4);
                  fVar26 = *(float *)(*param_1 + 8);
                  fVar27 = *(float *)(*param_1 + 0xc);
                  *(float *)*param_1 = *(float *)*param_1 + (float)uStack_38;
                  *(float *)(*param_1 + 4) = fVar24 + uStack_38._4_4_;
                  *(float *)(*param_1 + 8) = fVar26 + (float)unaff_RBX;
                  *(float *)(*param_1 + 0xc) = fVar27 + (float)((ulonglong)unaff_RBX >> 0x20);
                }
              }
            }
            return;
          }
          if ((param_4 >> 0x39 & 1) != 0) {
            if (*(char *)(param_2 + 0x30) != '\x03') {
              return;
            }
            lVar8 = func_0x000144f20050(*(undefined4 *)(param_2 + 0x9c));
            if (lVar8 == 0) {
              return;
            }
            lVar8 = FUN_144ffa120(lVar8,param_3);
            if (lVar8 == 0) {
              return;
            }
            bVar5 = *(byte *)(lVar8 + 0x1cd);
            puVar9 = &UNK_1461efc88;
            goto LAB_140084ee6;
          }
          cVar4 = FUN_144e23920(*(undefined4 *)((longlong)param_3 + 0x9c));
          if (cVar4 == '\0') {
            puStack_50 = &UNK_145225c49;
            FUN_145225c60(lVar7,&stack0xffffffffffffffd8,0);
            *(undefined8 *)*param_1 = unaff_RDI;
            *(undefined8 *)(*param_1 + 8) = unaff_RSI;
            return;
          }
          uVar6 = 0xe;
        }
        else {
          bVar5 = *(byte *)(lVar8 + 0x1cc);
          puVar9 = &UNK_1461efc70;
LAB_140084ee6:
          uVar6 = *(undefined4 *)(puVar9 + (ulonglong)bVar5 * 4);
        }
        FUN_145225c60(lVar7,&uStack_98,uVar6);
        goto LAB_140084f01;
      }
    }
    puVar10 = &uStack_98;
    FUN_140085340(puVar10,param_3);
  }
  else {
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = 0;
    auVar20 = vcmpps_avx(auVar20,*(undefined1 (*) [16])(param_5 + 0x4230),0);
    uVar6 = vmovmskps_avx(auVar20);
    if ((~(byte)uVar6 & 7) == 0) goto LAB_140084d9d;
    puVar10 = (undefined8 *)(param_5 + 0x4230);
  }
  uStack_98 = *puVar10;
  puStack_90 = (undefined *)puVar10[1];
LAB_140084f01:
  *(undefined8 *)*param_1 = uStack_98;
  *(undefined **)(*param_1 + 8) = puStack_90;
  return;
}

