// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017c310  size: 1458 bytes
// Name:    FUN_14017c310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1431bd710, FUN_140006180, FUN_140437e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017c310(longlong param_1,ulonglong param_2,float *param_3,undefined2 param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  byte bVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ulonglong uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  float *pfStack_50;
  ulonglong uStack_48;
  
  puVar1 = (uint *)(param_1 + 0x4070);
  puVar2 = (ulonglong *)(param_1 + 0x4080);
  uVar21 = *(uint *)(param_1 + 0x4070);
  pfStack_50 = param_3;
LAB_14017c35e:
  do {
    uVar14 = uVar21;
    if ((uVar14 & 0x10000ff) != 0) {
      LOCK();
      uVar21 = *puVar1;
      bVar29 = uVar14 == uVar21;
      if (bVar29) {
        *puVar1 = uVar14 + 0x10000;
        uVar21 = uVar14;
      }
      UNLOCK();
      if (bVar29) {
        uVar13 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar16 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar16 < 0x100000000) {
              uVar12 = *puVar2;
            }
            else {
              LOCK();
              uVar12 = *puVar2;
              if (uVar16 == uVar12) {
                *puVar2 = uVar16 - 0x100000000;
                uVar12 = uVar16;
              }
              UNLOCK();
              uVar21 = uVar14;
              if (uVar16 == uVar12) goto LAB_14017c35e;
            }
            uVar13 = uVar13 - 1;
            uVar16 = uVar12;
          } while (uVar13 != 0);
        }
        uVar16 = *puVar2;
        do {
          while (uStack_68 = uVar16, (longlong)uStack_68 < 0x100000000) {
            cVar9 = FUN_140006180(puVar2,1,&uStack_68);
            uVar21 = uVar14;
            uVar16 = uStack_68;
            if (cVar9 != '\0') goto LAB_14017c35e;
          }
          LOCK();
          uVar16 = *puVar2;
          if (uStack_68 == uVar16) {
            *puVar2 = uStack_68 - 0x100000000;
            uVar16 = uStack_68;
          }
          UNLOCK();
          uVar21 = uVar14;
        } while (uStack_68 != uVar16);
      }
      goto LAB_14017c35e;
    }
    LOCK();
    uVar21 = *puVar1;
    bVar29 = uVar14 == uVar21;
    if (bVar29) {
      *puVar1 = uVar14 | 0x1000000;
      uVar21 = uVar14;
    }
    UNLOCK();
  } while (!bVar29);
  iVar20 = (int)param_2;
  uVar21 = (uint)(param_2 >> 0x20);
  uStack_48 = param_2;
  if (*(int *)(param_1 + 0x2570) != 0) {
    uVar16 = ((param_2 & 0xffffffff) + 0x651e95c4d06fbfb1 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    lVar17 = (uVar16 >> 0x2f ^ param_2 >> 0x20 ^ uVar16) * -0x622015f714c7d297;
    uVar14 = ((uint)((ulonglong)lVar17 >> 0x2f) ^ (uint)lVar17) * -0x14c7d297;
    lVar17 = *(longlong *)(param_1 + 0x2580);
    uVar13 = uVar14 >> 7;
    bVar10 = (byte)uVar14;
    bVar22 = bVar10 & 0x7f;
    auVar31._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar31[8] = bVar22;
    auVar31[9] = bVar22;
    auVar31[10] = bVar22;
    auVar31[0xb] = bVar22;
    auVar31[0xc] = bVar22;
    auVar31[0xd] = bVar22;
    auVar31[0xe] = bVar22;
    auVar31[0xf] = bVar22;
    while( true ) {
      uVar13 = uVar13 & *(int *)(param_1 + 0x2570) - 1U;
      auVar32 = *(undefined1 (*) [16])(lVar17 + (ulonglong)uVar13 * 0x110);
      auVar33 = vpcmpeqb_avx(auVar32,auVar31);
      uVar7 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar33[0xf] >> 7) << 0xf;
      if (uVar7 != 0) {
        lVar24 = (ulonglong)uVar13 * 0x110 + lVar17;
        uVar14 = (uint)uVar7;
        do {
          uVar15 = 0;
          for (uVar26 = uVar14; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          if ((*(uint *)(lVar24 + 0x14 + (ulonglong)(uVar15 << 4)) == uVar21) &&
             (*(int *)(lVar24 + 0x10 + (ulonglong)(uVar15 << 4)) == iVar20)) {
            uVar14 = uVar13 << 4 | uVar15;
            if (uVar14 == 0xffffffff) goto LAB_14017c549;
            uVar16 = (ulonglong)((uVar15 & 0xf) << 4);
            fVar4 = *pfStack_50;
            lVar17 = lVar17 + (ulonglong)(uVar14 >> 4) * 0x110;
            bVar22 = *(byte *)(uVar16 + 0x1c + lVar17);
            fVar5 = *(float *)(uVar16 + 0x18 + lVar17);
            sVar6 = *(short *)(uVar16 + 0x1e + lVar17);
            *(float *)(uVar16 + 0x18 + lVar17) = fVar4;
            *(undefined2 *)(uVar16 + 0x1e + lVar17) = param_4;
            *(byte *)(uVar16 + 0x1c + lVar17) = bVar22 & 0xfe;
            if (sVar6 == 0) {
              bVar10 = 6;
            }
            else if ((fVar5 != fVar4) || (NAN(fVar5) || NAN(fVar4))) {
              bVar10 = 0xc;
            }
            else {
              bVar10 = 4;
            }
            if (((bVar22 & 6) == 0) || ((ulonglong)*(uint *)(param_1 + 4) == 0)) goto LAB_14017c7fd;
            lVar17 = *(longlong *)(param_1 + 8);
            lVar24 = 0;
            goto LAB_14017c893;
          }
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
      auVar32 = vpsignb_avx(auVar32,auVar32);
      if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar32 >> 0x3f,0) & 1) != 0) || (SUB161(auVar32 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar32 >> 0x4f,0) & 1) != 0) || (SUB161(auVar32 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar32 >> 0x5f,0) & 1) != 0) || (SUB161(auVar32 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar32 >> 0x6f,0) & 1) != 0) || (SUB161(auVar32 >> 0x77,0) & 1) != 0) ||
          auVar32[0xf] < '\0') break;
      uVar13 = uVar13 + 1;
    }
  }
LAB_14017c549:
  FUN_1431bd710(param_1 + 0x2570,&uStack_68,&uStack_48);
  if (cStack_58 == '\x01') {
    uVar16 = (ulonglong)((uStack_60._4_4_ & 0xf) << 4);
    lVar17 = (ulonglong)(uStack_60._4_4_ >> 4) * 0x110 + uStack_68;
    *(ulonglong *)(uVar16 + 0x10 + lVar17) = param_2;
    *(float *)(uVar16 + 0x18 + lVar17) = *pfStack_50;
    *(undefined2 *)(uVar16 + 0x1e + lVar17) = param_4;
    pbVar3 = (byte *)(uVar16 + 0x1c + lVar17);
    *pbVar3 = *pbVar3 & 0xc0;
  }
  uVar14 = *(uint *)(param_1 + 0x880);
  bVar22 = (byte)param_2;
  uVar13 = 0;
  if (uVar14 != 0) {
    lVar17 = *(longlong *)(param_1 + 0x890);
    bVar10 = bVar22 & 0x7f;
    uVar15 = uVar14 * 0x10;
    uVar16 = param_2 >> 7 & 0x1ffffff;
    auVar32._0_8_ =
         CONCAT17(bVar22,CONCAT16(bVar22,CONCAT15(bVar22,CONCAT14(bVar22,CONCAT13(bVar22,CONCAT12(
                                                  bVar22,CONCAT11(bVar22,bVar22))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar32[8] = bVar10;
    auVar32[9] = bVar10;
    auVar32[10] = bVar10;
    auVar32[0xb] = bVar10;
    auVar32[0xc] = bVar10;
    auVar32[0xd] = bVar10;
    auVar32[0xe] = bVar10;
    auVar32[0xf] = bVar10;
    while( true ) {
      uVar26 = (uint)uVar16 & uVar14 - 1;
      auVar31 = *(undefined1 (*) [16])(lVar17 + (ulonglong)uVar26 * 0x90);
      auVar33 = vpcmpeqb_avx(auVar31,auVar32);
      uVar7 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar33[0xf] >> 7) << 0xf;
      uVar13 = uVar15;
      if (uVar7 != 0) {
        uVar18 = (uint)uVar7;
        do {
          uVar11 = 0;
          for (uVar28 = uVar18; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          if (*(int *)((ulonglong)uVar26 * 0x90 + lVar17 + 0x10 + (ulonglong)uVar11 * 8) == iVar20)
          {
            uVar11 = uVar11 | uVar26 << 4;
            if (uVar11 == uVar15 || uVar11 == 0xffffffff) goto LAB_14017c67d;
            goto LAB_14017c64b;
          }
          uVar18 = uVar18 - 1 & uVar18;
        } while (uVar18 != 0);
      }
      auVar31 = vpsignb_avx(auVar31,auVar31);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar16 = (ulonglong)(uVar26 + 1);
    }
  }
  goto LAB_14017c67d;
  while (lVar24 = lVar24 + 0x18, (ulonglong)*(uint *)(param_1 + 4) * 0x18 != lVar24) {
LAB_14017c893:
    if (((*(int *)(lVar17 + lVar24) == iVar20) &&
        ((1 << (uVar21 & 0x1f) & (uint)*(byte *)(lVar17 + 5 + lVar24)) != 0)) &&
       ((*(byte *)(lVar17 + 4 + lVar24) >> 3 & bVar10) != 0)) goto LAB_14017c85a;
  }
  goto LAB_14017c7fd;
  while (uVar28 = uVar28 + 1, uVar15 = uVar26, uVar26 != uVar28) {
LAB_14017c74b:
    uVar15 = uVar28;
    if (!SBORROW1('\0',*(char *)((ulonglong)(uVar28 & 0xf) +
                                (ulonglong)(uVar28 >> 4) * 0x90 + _DAT_149aa41a0))) break;
  }
  goto LAB_14017c776;
LAB_14017c85a:
  FUN_140437e10(param_1,param_2,0);
  goto LAB_14017c7fd;
  while (uVar11 = uVar11 + 1, uVar13 = uVar15, uVar15 != uVar11) {
LAB_14017c64b:
    uVar13 = uVar11;
    if (!SBORROW1('\0',*(char *)((ulonglong)(uVar11 & 0xf) +
                                (ulonglong)(uVar11 >> 4) * 0x90 + lVar17))) break;
  }
LAB_14017c67d:
  uVar15 = 0;
  if (_DAT_149aa4190 != 0) {
    bVar10 = bVar22 & 0x7f;
    uVar26 = _DAT_149aa4190 * 0x10;
    uVar16 = param_2 >> 7 & 0x1ffffff;
    auVar33._0_8_ =
         CONCAT17(bVar22,CONCAT16(bVar22,CONCAT15(bVar22,CONCAT14(bVar22,CONCAT13(bVar22,CONCAT12(
                                                  bVar22,CONCAT11(bVar22,bVar22))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar33[8] = bVar10;
    auVar33[9] = bVar10;
    auVar33[10] = bVar10;
    auVar33[0xb] = bVar10;
    auVar33[0xc] = bVar10;
    auVar33[0xd] = bVar10;
    auVar33[0xe] = bVar10;
    auVar33[0xf] = bVar10;
    while( true ) {
      uVar18 = (uint)uVar16 & _DAT_149aa4190 - 1;
      auVar31 = *(undefined1 (*) [16])(_DAT_149aa41a0 + (ulonglong)uVar18 * 0x90);
      auVar32 = vpcmpeqb_avx(auVar31,auVar33);
      uVar7 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
      uVar15 = uVar26;
      if (uVar7 != 0) {
        uVar11 = (uint)uVar7;
        do {
          uVar28 = 0;
          for (uVar8 = uVar11; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar28 = uVar28 + 1;
          }
          if (*(int *)((ulonglong)uVar18 * 0x90 + _DAT_149aa41a0 + 0x10 + (ulonglong)uVar28 * 8) ==
              iVar20) {
            uVar28 = uVar28 | uVar18 << 4;
            if (uVar28 == uVar26 || uVar28 == 0xffffffff) goto LAB_14017c776;
            goto LAB_14017c74b;
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
      }
      auVar31 = vpsignb_avx(auVar31,auVar31);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar16 = (ulonglong)(uVar18 + 1);
    }
  }
LAB_14017c776:
  lVar17 = (ulonglong)(uVar13 >> 4) * 0x90 + 0x10 + (ulonglong)(uVar13 & 0xf) * 8;
  lVar23 = (ulonglong)(uVar14 & 0xfffffff) * 0x90 + 0x10;
  lVar25 = (ulonglong)(_DAT_149aa4190 & 0xfffffff) * 0x90 + 0x10;
  lVar24 = (ulonglong)(uVar15 >> 4) * 0x90 + 0x10 + (ulonglong)(uVar15 & 0xf) * 8;
  if (cStack_58 != '\0') {
    uVar16 = (ulonglong)((uStack_60._4_4_ & 0xf) << 4);
    lVar27 = (ulonglong)(uStack_60._4_4_ >> 4) * 0x110 + uStack_68;
    *(byte *)(uVar16 + 0x1c + lVar27) =
         (lVar24 != lVar25) << 2 |
         *(byte *)(uVar16 + 0x1c + lVar27) & 0xf9 | (lVar17 != lVar23) * '\x02';
  }
  if (((lVar17 != lVar23) || (lVar24 != lVar25)) && ((ulonglong)*(uint *)(param_1 + 4) != 0)) {
    lVar17 = *(longlong *)(param_1 + 8);
    lVar24 = 0;
    do {
      if (((*(int *)(lVar17 + lVar24) == iVar20) &&
          ((1 << (uVar21 & 0x1f) & (uint)*(byte *)(lVar17 + 5 + lVar24)) != 0)) &&
         ((*(byte *)(lVar17 + 4 + lVar24) & 0x30) != 0)) goto LAB_14017c85a;
      lVar24 = lVar24 + 0x18;
    } while ((ulonglong)*(uint *)(param_1 + 4) * 0x18 != lVar24);
  }
LAB_14017c7fd:
  uVar21 = *puVar1;
  do {
    LOCK();
    uVar14 = *puVar1;
    bVar29 = uVar21 == uVar14;
    if (bVar29) {
      *puVar1 = uVar21 & 0xfeffffff;
      uVar14 = uVar21;
    }
    uVar21 = uVar14;
    UNLOCK();
  } while (!bVar29);
  if ((uVar21 & 0xff0000) == 0) {
    if ((uVar21 & 0xff00) != 0) {
      uVar21 = *puVar1;
      do {
        LOCK();
        uVar14 = *puVar1;
        bVar29 = uVar21 == uVar14;
        if (bVar29) {
          *puVar1 = uVar21 & 0xffff00ff;
          uVar14 = uVar21;
        }
        uVar21 = uVar14;
        UNLOCK();
      } while (!bVar29);
      uVar21 = uVar21 >> 8 & 0xff;
      if (uVar21 != 0) {
        plVar19 = (longlong *)(param_1 + 0x4078);
        lVar17 = *(longlong *)(param_1 + 0x4078);
        do {
          while (-1 < lVar17) {
            LOCK();
            lVar24 = *plVar19;
            if (lVar17 == lVar24) {
              *plVar19 = lVar17 + ((ulonglong)uVar21 << 0x20);
              lVar24 = lVar17;
            }
            UNLOCK();
            bVar29 = lVar17 == lVar24;
            lVar17 = lVar24;
            if (bVar29) {
              return;
            }
          }
          uStack_60 = &UNK_14046577c;
          cVar9 = FUN_1400062d0(plVar19,uVar21,&stack0xffffffffffffffc8);
        } while (cVar9 == '\0');
      }
    }
  }
  else {
    uVar21 = uVar21 & 0xfeffffff;
    plVar19 = (longlong *)(param_1 + 0x4080);
    do {
      if ((uVar21 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      uVar14 = *puVar1;
      bVar29 = uVar21 == uVar14;
      if (bVar29) {
        *puVar1 = uVar21 - 0x10000;
        uVar14 = uVar21;
      }
      UNLOCK();
      if (bVar29) {
        lVar17 = *plVar19;
        do {
          while (lVar17 < 0) {
            uStack_60 = &UNK_1404656ef;
            cVar9 = FUN_1400062d0(plVar19,1,&stack0xffffffffffffffc8);
            uVar14 = uVar21;
            if (cVar9 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          lVar24 = *plVar19;
          if (lVar17 == lVar24) {
            *plVar19 = lVar17 + 0x100000000;
            lVar24 = lVar17;
          }
          UNLOCK();
          bVar30 = lVar17 != lVar24;
          uVar14 = uVar21;
          lVar17 = lVar24;
        } while (bVar30);
      }
code_r0x00014046570e:
      uVar21 = uVar14;
    } while (!bVar29);
  }
  return;
}

