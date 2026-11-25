// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140bb2c30  size: 2636 bytes
// Name:    fwAnimDirectorComponentFacialRig::FacialFilter::CalcSignature
// Subsystem: rage
// Class:   fwAnimDirectorComponentFacialRig
//
// Evidence:
//   GTAVSRC: fwAnimDirectorComponentFacialRig::FacialFilter::CalcSignature  (rage/framework/src/fwanimation/directorcomponentfacialrig.cpp)
//   literal: FacialFilter
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc21d0, FUN_1402a23d0, FUN_144d9e2f0, FUN_1401acbb0, FUN_145071070, FUN_145070b70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/fwAnimDirectorComponentFacialRig.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong fwAnimDirectorComponentFacialRig__FacialFilter__CalcSignature
                    (longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  byte bVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ushort uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  
  if ((~param_2[4] & 0xcU) == 0) {
    return 0;
  }
  if ((float)param_2[5] < 0.0) {
    return 0;
  }
  if ((float)param_2[6] < 0.0) {
    return 0;
  }
  if ((float)param_2[6] < (float)param_2[5]) {
    return 0;
  }
  fVar32 = (float)param_2[7];
  if (fVar32 < 0.0) {
    return 0;
  }
  if (_DAT_145fc6ed8 < fVar32) {
    return 0;
  }
  fVar4 = (float)param_2[8];
  if ((fVar4 != _DAT_145fc6f48) || (NAN(fVar4) || NAN(_DAT_145fc6f48))) {
    auVar27 = vcmpps_avx(ZEXT416((uint)fVar32),ZEXT416((uint)fVar4),2);
    auVar28 = vcmpps_avx(ZEXT416((uint)fVar4),ZEXT416((uint)_DAT_145fc6ed8),2);
    if ((auVar28[0] & auVar27[0] & 0.0 <= fVar4) == 0) {
      return 0;
    }
  }
  if ((float)param_2[0xf] < 0.0) {
    return 0;
  }
  if ((float)param_2[0x10] < 0.0) {
    return 0;
  }
  bVar13 = *(byte *)(param_1 + 0xd8);
  if ((bVar13 & 0x20) != 0) {
    return 0;
  }
  if (((param_2[1] == 0) && (*param_2 == 0)) && (*(longlong *)(param_2 + 2) == 0)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(int *)(param_1 + 0x40) = *param_2;
  *(int *)(param_1 + 0x44) = param_2[1];
  puVar6 = *(undefined8 **)(param_2 + 2);
  puVar19 = *(undefined8 **)(param_1 + 0x48);
  if (puVar19 != puVar6) {
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar6 + 2) = *(int *)(puVar6 + 2) + 1;
      UNLOCK();
      if (puVar6[3] != 0) {
        LOCK();
        piVar1 = (int *)(puVar6[3] + 0x10);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      puVar19 = *(undefined8 **)(param_1 + 0x48);
    }
    if (puVar19 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)puVar19[3];
      LOCK();
      piVar1 = (int *)(puVar19 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar19)();
      }
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar9 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar9)(puVar9);
        }
      }
    }
    *(undefined8 **)(param_1 + 0x48) = puVar6;
    bVar13 = *(byte *)(param_1 + 0xd8);
  }
  uVar16 = param_2[4];
  auVar27._0_12_ = ZEXT812(0);
  auVar27._12_4_ = 0;
  *(uint *)(param_1 + 0x50) = uVar16;
  if ((uVar16 & 0x10) == 0) {
    iVar15 = param_2[10];
  }
  else {
    iVar15 = 0;
  }
  *(int *)(param_1 + 0x88) = iVar15;
  uVar5 = *(undefined8 *)(param_2 + 7);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0x60) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0xf);
  auVar28 = vcmpss_avx(auVar27,ZEXT416((uint)param_2[0x11]),6);
  auVar28 = vblendvps_avx(ZEXT416((uint)param_2[0x11]),ZEXT416((uint)param_2[0xf]),auVar28);
  *(int *)(param_1 + 0x80) = auVar28._0_4_;
  auVar27 = vcmpss_avx(auVar27,ZEXT416((uint)param_2[0x12]),6);
  auVar27 = vblendvps_avx(ZEXT416((uint)param_2[0x12]),ZEXT416((uint)param_2[0x10]),auVar27);
  *(int *)(param_1 + 0x84) = auVar27._0_4_;
  bVar13 = bVar13 & 0xfd | *(char *)((longlong)param_2 + 0x71) * '\x02';
  *(byte *)(param_1 + 0xd8) = bVar13;
  bVar13 = bVar13 & 0xef | *(char *)((longlong)param_2 + 0x72) << 4;
  *(byte *)(param_1 + 0xd8) = bVar13;
  bVar18 = *(char *)((longlong)param_2 + 0x73) << 5;
  *(byte *)(param_1 + 0xd8) = bVar13 & 0xdf | bVar18;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0xb);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0xd);
  *(byte *)(param_1 + 0xd8) = bVar13 & 0xde | bVar18;
  *(byte *)(param_1 + 0xd8) = bVar13 & 0xda | bVar18 | (char)param_2[0x1c] << 2;
  puVar7 = *(undefined1 **)(param_2 + 0x16);
  if (puVar7 == (undefined1 *)0x0) {
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0xb0) = 1;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0xb8);
    *(undefined1 *)(param_1 + 0xb0) = *puVar7;
    if (plVar2 != (longlong *)(puVar7 + 8)) {
      uVar14 = *(ushort *)(param_1 + 0xc0);
      uVar16 = (uint)*(ushort *)(puVar7 + 0x10);
      if (((uVar14 != *(ushort *)(puVar7 + 0x10)) && (*(short *)(param_1 + 0xc2) != 0)) &&
         (*plVar2 != 0)) {
        func_0x000144d9c130();
        uVar14 = *(ushort *)(param_1 + 0xc0);
        uVar16 = (uint)*(ushort *)(puVar7 + 0x10);
      }
      uVar21 = (ushort)uVar16;
      if (uVar14 == uVar21) {
        lVar20 = *plVar2;
      }
      else {
        *(ushort *)(param_1 + 0xc0) = uVar21;
        *(ushort *)(param_1 + 0xc2) = uVar21;
        if (uVar21 == 0) {
          *plVar2 = 0;
          goto LAB_140bb2f6a;
        }
        lVar23 = (ulonglong)(uVar16 << 2) * 3;
        lVar20 = func_0x000144d9c140(4,lVar23);
        auVar28._4_4_ = _DAT_145fc6ed8;
        auVar28._0_4_ = _DAT_145fc6ed8;
        auVar28._8_4_ = _DAT_145fc6ed8;
        auVar28._12_4_ = _DAT_145fc6ed8;
        lVar24 = 0;
        do {
          if (lVar20 + lVar24 != 0) {
            *(undefined4 *)(lVar20 + lVar24) = 0;
            uVar5 = vmovlps_avx(auVar28);
            *(undefined8 *)(lVar20 + 4 + lVar24) = uVar5;
          }
          lVar24 = lVar24 + 0xc;
        } while (lVar23 != lVar24);
        *(longlong *)(param_1 + 0xb8) = lVar20;
        uVar16 = (uint)*(ushort *)(param_1 + 0xc0);
      }
      if ((short)uVar16 != 0) {
        lVar23 = *(longlong *)(puVar7 + 8);
        lVar24 = 0;
        do {
          *(undefined4 *)(lVar20 + 8 + lVar24) = *(undefined4 *)(lVar23 + 8 + lVar24);
          *(undefined8 *)(lVar20 + lVar24) = *(undefined8 *)(lVar23 + lVar24);
          lVar24 = lVar24 + 0xc;
        } while ((ulonglong)(uVar16 << 2) * 3 != lVar24);
      }
    }
  }
LAB_140bb2f6a:
  puVar7 = *(undefined1 **)(param_2 + 0x14);
  if (puVar7 == (undefined1 *)0x0) {
    *(undefined2 *)(param_1 + 0xa8) = 0;
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0x98) = *puVar7;
    if (plVar2 != (longlong *)(puVar7 + 8)) {
      uVar14 = *(ushort *)(param_1 + 0xa8);
      uVar16 = (uint)*(ushort *)(puVar7 + 0x10);
      if (((uVar14 != *(ushort *)(puVar7 + 0x10)) && (*(short *)(param_1 + 0xaa) != 0)) &&
         (*plVar2 != 0)) {
        func_0x000144d9c130();
        uVar14 = *(ushort *)(param_1 + 0xa8);
        uVar16 = (uint)*(ushort *)(puVar7 + 0x10);
      }
      uVar21 = (ushort)uVar16;
      if (uVar14 == uVar21) {
        lVar20 = *plVar2;
      }
      else {
        *(ushort *)(param_1 + 0xa8) = uVar21;
        *(ushort *)(param_1 + 0xaa) = uVar21;
        if (uVar21 == 0) {
          *plVar2 = 0;
          goto LAB_140bb3081;
        }
        lVar23 = (ulonglong)(uVar16 << 2) * 3;
        lVar20 = func_0x000144d9c140(4,lVar23);
        auVar29._4_4_ = _DAT_145fc6ed8;
        auVar29._0_4_ = _DAT_145fc6ed8;
        auVar29._8_4_ = _DAT_145fc6ed8;
        auVar29._12_4_ = _DAT_145fc6ed8;
        lVar24 = 0;
        do {
          if (lVar20 + lVar24 != 0) {
            *(undefined4 *)(lVar20 + lVar24) = 0;
            uVar5 = vmovlps_avx(auVar29);
            *(undefined8 *)(lVar20 + 4 + lVar24) = uVar5;
          }
          lVar24 = lVar24 + 0xc;
        } while (lVar23 != lVar24);
        *(longlong *)(param_1 + 0xa0) = lVar20;
        uVar16 = (uint)*(ushort *)(param_1 + 0xa8);
      }
      if ((short)uVar16 != 0) {
        lVar23 = *(longlong *)(puVar7 + 8);
        lVar24 = 0;
        do {
          *(undefined4 *)(lVar20 + 8 + lVar24) = *(undefined4 *)(lVar23 + 8 + lVar24);
          *(undefined8 *)(lVar20 + lVar24) = *(undefined8 *)(lVar23 + lVar24);
          lVar24 = lVar24 + 0xc;
        } while ((ulonglong)(uVar16 << 2) * 3 != lVar24);
      }
    }
  }
LAB_140bb3081:
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x48);
    iVar15 = FUN_144fc21d0(&UNK_14677db21);
    lVar23 = 0;
    if (*(longlong *)(lVar20 + 0x20) != 1) {
      lVar23 = *(longlong *)(lVar20 + 0x20) + 0x20 + lVar20;
    }
    if ((*(uint *)(lVar20 + 0x1c) & 0x7fffffff) != 0) {
      lVar20 = ((ulonglong)*(uint *)(lVar20 + 0x1c) & 0x7fffffff) * 0x48;
      do {
        if (*(int *)(lVar23 + 0x40) == iVar15) {
          uVar26 = 0;
          FUN_144fc21d0(&UNK_146784cda,0);
          lVar20 = FUN_144d9e2f0(lVar23);
          if (lVar20 != 0) {
            if (*(char *)(lVar20 + 4) == '\f') {
              uVar26 = *(undefined4 *)(lVar20 + 8);
            }
            lVar20 = FUN_1402a23d0(uVar26);
            if (lVar20 != 0) {
              *(longlong *)(param_1 + 0x90) = lVar20;
            }
          }
          break;
        }
        lVar23 = lVar23 + 0x48;
        lVar20 = lVar20 + -0x48;
      } while (lVar20 != 0);
    }
  }
  uVar16 = *(uint *)(param_1 + 200);
  if ((ulonglong)uVar16 != 0) {
    lVar20 = *(longlong *)(param_1 + 0xd0);
    lVar23 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(lVar20 + lVar23))) {
        *(undefined1 *)(lVar20 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 1 + lVar23))) {
        *(undefined1 *)(lVar20 + 1 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 2 + lVar23))) {
        *(undefined1 *)(lVar20 + 2 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 3 + lVar23))) {
        *(undefined1 *)(lVar20 + 3 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 4 + lVar23))) {
        *(undefined1 *)(lVar20 + 4 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 5 + lVar23))) {
        *(undefined1 *)(lVar20 + 5 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 6 + lVar23))) {
        *(undefined1 *)(lVar20 + 6 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 7 + lVar23))) {
        *(undefined1 *)(lVar20 + 7 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 8 + lVar23))) {
        *(undefined1 *)(lVar20 + 8 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 9 + lVar23))) {
        *(undefined1 *)(lVar20 + 9 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 10 + lVar23))) {
        *(undefined1 *)(lVar20 + 10 + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 0xb + lVar23))) {
        *(undefined1 *)(lVar20 + 0xb + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 0xc + lVar23))) {
        *(undefined1 *)(lVar20 + 0xc + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 0xd + lVar23))) {
        *(undefined1 *)(lVar20 + 0xd + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 0xe + lVar23))) {
        *(undefined1 *)(lVar20 + 0xe + lVar23) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar20 + 0xf + lVar23))) {
        *(undefined1 *)(lVar20 + 0xf + lVar23) = 0x80;
      }
      lVar23 = lVar23 + 0x90;
    } while ((ulonglong)uVar16 * 0x90 != lVar23);
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  puVar8 = *(uint **)(param_2 + 0x18);
  if (((((puVar8 != (uint *)0x0) && (puVar8[1] != 0)) &&
       (uVar16 = *(uint *)(param_1 + 0x40), uVar16 != 0)) &&
      ((*(int *)(param_1 + 0x44) == 0 && (*(longlong *)(param_1 + 0x48) == 0)))) &&
     (*(int *)(_DAT_14ab73ae8 + 0x20) != 0)) {
    puVar3 = (uint *)(param_1 + 200);
    bVar18 = (byte)uVar16;
    bVar13 = bVar18 & 0x7f;
    uVar22 = uVar16 >> 7;
    auVar30._0_8_ =
         CONCAT17(bVar18,CONCAT16(bVar18,CONCAT15(bVar18,CONCAT14(bVar18,CONCAT13(bVar18,CONCAT12(
                                                  bVar18,CONCAT11(bVar18,bVar18))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar30[8] = bVar13;
    auVar30[9] = bVar13;
    auVar30[10] = bVar13;
    auVar30[0xb] = bVar13;
    auVar30[0xc] = bVar13;
    auVar30[0xd] = bVar13;
    auVar30[0xe] = bVar13;
    auVar30[0xf] = bVar13;
    while( true ) {
      uVar22 = uVar22 & *(int *)(_DAT_14ab73ae8 + 0x20) - 1U;
      auVar27 = *(undefined1 (*) [16])
                 (*(longlong *)(_DAT_14ab73ae8 + 0x28) + (ulonglong)uVar22 * 0x110);
      auVar28 = vpcmpeqb_avx(auVar27,auVar30);
      uVar14 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar28[0xf] >> 7) << 0xf;
      if (uVar14 != 0) {
        uVar25 = (uint)uVar14;
        do {
          uVar11 = 0;
          for (uVar12 = uVar25; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          if (*(uint *)((ulonglong)uVar22 * 0x110 + *(longlong *)(_DAT_14ab73ae8 + 0x28) + 0x10 +
                       (ulonglong)(uVar11 << 4)) == uVar16) {
            if (puVar8 != puVar3 && (uVar11 | uVar22 << 4) != 0xffffffff) {
              uVar16 = *(uint *)(param_1 + 200);
              if ((ulonglong)uVar16 == 0) {
                uVar16 = 0;
              }
              else {
                lVar20 = *(longlong *)(param_1 + 0xd0);
                lVar23 = 0;
                do {
                  if (!SBORROW1('\0',*(char *)(lVar20 + lVar23))) {
                    *(undefined1 *)(lVar20 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 1 + lVar23))) {
                    *(undefined1 *)(lVar20 + 1 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 2 + lVar23))) {
                    *(undefined1 *)(lVar20 + 2 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 3 + lVar23))) {
                    *(undefined1 *)(lVar20 + 3 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 4 + lVar23))) {
                    *(undefined1 *)(lVar20 + 4 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 5 + lVar23))) {
                    *(undefined1 *)(lVar20 + 5 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 6 + lVar23))) {
                    *(undefined1 *)(lVar20 + 6 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 7 + lVar23))) {
                    *(undefined1 *)(lVar20 + 7 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 8 + lVar23))) {
                    *(undefined1 *)(lVar20 + 8 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 9 + lVar23))) {
                    *(undefined1 *)(lVar20 + 9 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 10 + lVar23))) {
                    *(undefined1 *)(lVar20 + 10 + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 0xb + lVar23))) {
                    *(undefined1 *)(lVar20 + 0xb + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 0xc + lVar23))) {
                    *(undefined1 *)(lVar20 + 0xc + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 0xd + lVar23))) {
                    *(undefined1 *)(lVar20 + 0xd + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 0xe + lVar23))) {
                    *(undefined1 *)(lVar20 + 0xe + lVar23) = 0x80;
                  }
                  if (!SBORROW1('\0',*(char *)(lVar20 + 0xf + lVar23))) {
                    *(undefined1 *)(lVar20 + 0xf + lVar23) = 0x80;
                  }
                  lVar23 = lVar23 + 0x90;
                } while ((ulonglong)uVar16 * 0x90 != lVar23);
                uVar16 = *puVar3;
              }
              *(undefined4 *)(param_1 + 0xcc) = 0;
              uVar22 = puVar8[1];
              uVar17 = (ulonglong)uVar22;
              if ((uVar16 * 0x570) / 100 < uVar22) {
                uVar25 = 1;
                if (0xd < uVar22) {
                  uVar17 = (uVar17 * 100 + 0x56) / 0x57 - 1;
                  uVar17 = uVar17 >> 1 | uVar17;
                  uVar17 = uVar17 >> 2 | uVar17;
                  uVar17 = uVar17 >> 4 | uVar17;
                  uVar17 = uVar17 >> 8 | uVar17;
                  uVar17 = uVar17 >> 0x10 | uVar17;
                  uVar25 = (uint)((uVar17 >> 0x20 | uVar17) + 1 >> 4);
                }
                if (uVar16 < uVar25) {
                  if (*(longlong *)(param_1 + 0xd0) != 0) {
                    func_0x000144d9c130();
                  }
                  *(undefined8 *)(param_1 + 0xd0) = 0;
                  *(undefined4 *)(param_1 + 200) = 0;
                  lVar20 = func_0x000144d9c140(0x10);
                  *(longlong *)(param_1 + 0xd0) = lVar20;
                  if (lVar20 == 0) {
                    pcVar10 = (code *)swi(3);
                    uVar17 = (*pcVar10)();
                    return uVar17;
                  }
                  *puVar3 = uVar25;
                  uVar16 = uVar25;
                }
                auVar31[1] = DAT_1461594a0;
                auVar31[0] = DAT_1461594a0;
                auVar31[2] = DAT_1461594a0;
                auVar31[3] = DAT_1461594a0;
                auVar31[4] = DAT_1461594a0;
                auVar31[5] = DAT_1461594a0;
                auVar31[6] = DAT_1461594a0;
                auVar31[7] = DAT_1461594a0;
                auVar31[8] = DAT_1461594a0;
                auVar31[9] = DAT_1461594a0;
                auVar31[10] = DAT_1461594a0;
                auVar31[0xb] = DAT_1461594a0;
                auVar31[0xc] = DAT_1461594a0;
                auVar31[0xd] = DAT_1461594a0;
                auVar31[0xe] = DAT_1461594a0;
                auVar31[0xf] = DAT_1461594a0;
                lVar20 = *(longlong *)(param_1 + 0xd0);
                lVar23 = 0;
                do {
                  *(undefined1 (*) [16])(lVar20 + lVar23) = auVar31;
                  lVar23 = lVar23 + 0x90;
                } while ((ulonglong)uVar16 * 0x90 != lVar23);
                uVar17 = (ulonglong)puVar8[1];
              }
              if ((int)uVar17 == 0) {
                uVar16 = 0;
              }
              else {
                lVar20 = *(longlong *)(puVar8 + 2);
                do {
                  lVar23 = 0;
                  do {
                    if (!SBORROW1('\0',*(char *)(lVar20 + lVar23))) {
                      uVar16 = *(uint *)(lVar20 + 0x10 + lVar23 * 8);
                      uVar22 = uVar16 >> 7;
                      while( true ) {
                        uVar22 = uVar22 & *(int *)(param_1 + 200) - 1U;
                        lVar24 = (ulonglong)uVar22 * 0x90;
                        auVar27 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0xd0) + lVar24);
                        auVar27 = vpsignb_avx(auVar27,auVar27);
                        uVar14 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar27[0xf] >> 7) << 0xf;
                        if (uVar14 != 0) break;
                        uVar22 = uVar22 + 1;
                      }
                      uVar22 = 0;
                      for (uVar25 = (uint)uVar14; (uVar25 & 1) == 0;
                          uVar25 = uVar25 >> 1 | 0x80000000) {
                        uVar22 = uVar22 + 1;
                      }
                      lVar24 = *(longlong *)(param_1 + 0xd0) + lVar24;
                      uVar17 = (ulonglong)((int)uVar17 - 1);
                      *(byte *)(lVar24 + (ulonglong)uVar22) = (byte)uVar16 & 0x7f;
                      *(undefined8 *)(lVar24 + 0x10 + (ulonglong)uVar22 * 8) =
                           *(undefined8 *)(lVar20 + 0x10 + lVar23 * 8);
                    }
                    lVar23 = lVar23 + 1;
                  } while (lVar23 != 0x10);
                  lVar20 = lVar20 + 0x90;
                } while ((int)uVar17 != 0);
                uVar16 = puVar8[1];
              }
              *(uint *)(param_1 + 0xcc) = uVar16;
            }
            goto LAB_140bb35b5;
          }
          uVar25 = uVar25 - 1 & uVar25;
        } while (uVar25 != 0);
      }
      auVar27 = vpsignb_avx(auVar27,auVar27);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar22 = uVar22 + 1;
    }
  }
LAB_140bb35b5:
  lVar20 = param_1 + 8;
  FUN_1401acbb0(lVar20);
  if (((*(int *)(param_1 + 0x44) == 0) && (*(int *)(param_1 + 0x40) == 0)) &&
     (*(longlong *)(param_1 + 0x48) == 0)) {
    return 0;
  }
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | 8;
  fVar32 = 0.0;
  uVar16 = FUN_145070b70(param_1,0,lVar20,param_2[9]);
  uVar17 = (ulonglong)uVar16;
  if (*(float *)(param_1 + 0x88) != fVar32) {
    return uVar17;
  }
  if (!NAN(*(float *)(param_1 + 0x88)) && !NAN(fVar32)) {
    uVar26 = FUN_145071070(param_1,lVar20);
    *(undefined4 *)(param_1 + 0x88) = uVar26;
    return uVar17;
  }
  return uVar17;
}

