// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017c8d0  size: 1887 bytes
// Name:    FUN_14017c8d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1431bb470, FUN_140006180, FUN_140437e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017c8d0(longlong param_1,ulonglong param_2,char *param_3,undefined2 param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  byte *pbVar4;
  char cVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  ulonglong uStack_70;
  char *pcStack_68;
  undefined *puStack_60;
  
  puVar1 = (uint *)(param_1 + 0x4070);
  puVar2 = (ulonglong *)(param_1 + 0x4080);
  uVar18 = *(uint *)(param_1 + 0x4070);
  pcStack_68 = param_3;
LAB_14017c924:
  do {
    uVar19 = uVar18;
    if ((uVar19 & 0x10000ff) != 0) {
      LOCK();
      uVar18 = *puVar1;
      bVar26 = uVar19 == uVar18;
      if (bVar26) {
        *puVar1 = uVar19 + 0x10000;
        uVar18 = uVar19;
      }
      UNLOCK();
      if (bVar26) {
        uVar13 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar22 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar22 < 0x100000000) {
              uVar21 = *puVar2;
            }
            else {
              LOCK();
              uVar21 = *puVar2;
              if (uVar22 == uVar21) {
                *puVar2 = uVar22 - 0x100000000;
                uVar21 = uVar22;
              }
              UNLOCK();
              uVar18 = uVar19;
              if (uVar22 == uVar21) goto LAB_14017c924;
            }
            uVar13 = uVar13 - 1;
            uVar22 = uVar21;
          } while (uVar13 != 0);
        }
        uVar22 = *puVar2;
        do {
          while (uStack_70 = uVar22, (longlong)uStack_70 < 0x100000000) {
            cVar9 = FUN_140006180(puVar2,1,&uStack_70);
            uVar18 = uVar19;
            uVar22 = uStack_70;
            if (cVar9 != '\0') goto LAB_14017c924;
          }
          LOCK();
          uVar22 = *puVar2;
          if (uStack_70 == uVar22) {
            *puVar2 = uStack_70 - 0x100000000;
            uVar22 = uStack_70;
          }
          UNLOCK();
          uVar18 = uVar19;
        } while (uStack_70 != uVar22);
      }
      goto LAB_14017c924;
    }
    LOCK();
    uVar18 = *puVar1;
    bVar26 = uVar19 == uVar18;
    if (bVar26) {
      *puVar1 = uVar19 | 0x1000000;
      uVar18 = uVar19;
    }
    UNLOCK();
  } while (!bVar26);
  iVar11 = *(int *)(param_1 + 0x1850);
  uVar22 = param_2 >> 0x20;
  iVar17 = (int)param_2;
  uVar18 = (uint)(param_2 >> 0x20);
  if (iVar11 != 0) {
    uVar21 = ((param_2 & 0xffffffff) + 0x651e95c4d06fbfb1 ^ uVar22) * -0x622015f714c7d297;
    uVar21 = (uVar21 >> 0x2f ^ uVar22 ^ uVar21) * -0x622015f714c7d297;
    lVar24 = *(longlong *)(param_1 + 0x1860);
    lVar20 = (uVar21 >> 0x2f ^ uVar21) * 0xeb382d69;
    bVar10 = (byte)lVar20;
    uVar19 = (uint)lVar20 >> 7;
    bVar15 = bVar10 & 0x7f;
    auVar29._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar29[8] = bVar15;
    auVar29[9] = bVar15;
    auVar29[10] = bVar15;
    auVar29[0xb] = bVar15;
    auVar29[0xc] = bVar15;
    auVar29[0xd] = bVar15;
    auVar29[0xe] = bVar15;
    auVar29[0xf] = bVar15;
    while( true ) {
      uVar19 = uVar19 & iVar11 - 1U;
      auVar30 = *(undefined1 (*) [16])(lVar24 + (ulonglong)uVar19 * 0xd0);
      auVar31 = vpcmpeqb_avx(auVar30,auVar29);
      uVar7 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar31[0xf] >> 7) << 0xf;
      if (uVar7 != 0) {
        lVar20 = (ulonglong)uVar19 * 0xd0 + lVar24;
        uVar13 = (uint)uVar7;
        do {
          uVar12 = 0;
          for (uVar23 = uVar13; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          if ((*(uint *)(lVar20 + 0x14 + (ulonglong)uVar12 * 0xc) == uVar18) &&
             (*(int *)(lVar20 + 0x10 + (ulonglong)uVar12 * 0xc) == iVar17)) {
            uVar19 = uVar19 << 4 | uVar12;
            if (uVar19 == 0xffffffff) goto LAB_14017cb81;
            uVar22 = (ulonglong)(uVar12 & 0xf);
            cVar9 = *pcStack_68;
            lVar24 = lVar24 + (ulonglong)(uVar19 >> 4) * 0xd0;
            sVar6 = *(short *)(lVar24 + 0x1a + uVar22 * 0xc);
            bVar10 = *(byte *)(lVar24 + 0x19 + uVar22 * 0xc);
            cVar5 = *(char *)(lVar24 + 0x18 + uVar22 * 0xc);
            *(char *)(lVar24 + 0x18 + uVar22 * 0xc) = cVar9;
            *(undefined2 *)(lVar24 + 0x1a + uVar22 * 0xc) = param_4;
            *(byte *)(lVar24 + 0x19 + uVar22 * 0xc) = bVar10 & 0xfe;
            if ((bVar10 & 6) == 0) goto LAB_14017cf2a;
            bVar10 = 6;
            if (sVar6 != 0) {
              bVar10 = (cVar5 != cVar9) << 3 | 4;
            }
            if ((ulonglong)*(uint *)(param_1 + 4) == 0) goto LAB_14017cf2a;
            lVar24 = *(longlong *)(param_1 + 8);
            lVar20 = 0;
            goto LAB_14017cb41;
          }
          uVar13 = uVar13 - 1 & uVar13;
        } while (uVar13 != 0);
      }
      auVar30 = vpsignb_avx(auVar30,auVar30);
      if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar30 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar30 >> 0x3f,0) & 1) != 0) || (SUB161(auVar30 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar30 >> 0x4f,0) & 1) != 0) || (SUB161(auVar30 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar30 >> 0x5f,0) & 1) != 0) || (SUB161(auVar30 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar30 >> 0x6f,0) & 1) != 0) || (SUB161(auVar30 >> 0x77,0) & 1) != 0) ||
          auVar30[0xf] < '\0') break;
      uVar19 = uVar19 + 1;
    }
  }
LAB_14017cb81:
  uVar21 = ((param_2 & 0xffffffff) + 0x651e95c4d06fbfb1 ^ uVar22) * -0x622015f714c7d297;
  uVar22 = (uVar21 >> 0x2f ^ uVar22 ^ uVar21) * -0x622015f714c7d297;
  lVar24 = (uVar22 >> 0x2f ^ uVar22) * 0xeb382d69;
  bVar10 = (byte)lVar24;
  bVar15 = bVar10 & 0x7f;
  auVar32 = ZEXT1664(CONCAT115(bVar15,CONCAT114(bVar15,CONCAT113(bVar15,CONCAT112(bVar15,CONCAT111(
                                                  bVar15,CONCAT110(bVar15,CONCAT19(bVar15,CONCAT18(
                                                  bVar15,CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(
                                                  bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
                                                  0x7f7f7f7f7f7f7f7f)))))))));
LAB_14017cbc8:
  if (iVar11 != 0) {
    lVar20 = *(longlong *)(param_1 + 0x1860);
    uVar13 = (uint)lVar24 >> 7;
    do {
      uVar13 = uVar13 & iVar11 - 1U;
      auVar29 = *(undefined1 (*) [16])(lVar20 + (ulonglong)uVar13 * 0xd0);
      lVar3 = lVar20 + (ulonglong)uVar13 * 0xd0;
      auVar30 = vpcmpeqb_avx(auVar29,auVar32._0_16_);
      uVar7 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
      if (uVar7 != 0) {
        uVar19 = (uint)uVar7;
LAB_14017cc1f:
        uVar12 = 0;
        for (uVar23 = uVar19; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        puStack_60 = (undefined *)(ulonglong)uVar12;
        if ((*(uint *)(lVar3 + 0x14 + (longlong)puStack_60 * 0xc) != uVar18) ||
           (*(int *)(lVar3 + 0x10 + (longlong)puStack_60 * 0xc) != iVar17)) goto LAB_14017cc3f;
        uVar12 = uVar12 | uVar13 << 4;
        while ((uVar19 = iVar11 << 4, uVar12 != iVar11 << 4 &&
               (uVar19 = uVar12,
               SBORROW1('\0',*(char *)((ulonglong)(uVar12 & 0xf) +
                                      (ulonglong)(uVar12 >> 4) * 0xd0 + lVar20))))) {
          uVar12 = uVar12 + 1;
        }
        bVar26 = true;
        goto LAB_14017cd0f;
      }
LAB_14017cc01:
      auVar29 = vpsignb_avx(auVar29,auVar29);
      uVar7 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar29[0xf] >> 7) << 0xf;
      if (uVar7 != 0) goto LAB_14017cc48;
      uVar13 = uVar13 + 1;
    } while( true );
  }
  uVar19 = 0;
  goto LAB_14017cc67;
  while (lVar20 = lVar20 + 0x18, (ulonglong)*(uint *)(param_1 + 4) * 0x18 != lVar20) {
LAB_14017cb41:
    if (((*(int *)(lVar24 + lVar20) == iVar17) &&
        ((1 << (uVar18 & 0x1f) & (uint)*(byte *)(lVar24 + 5 + lVar20)) != 0)) &&
       ((*(byte *)(lVar24 + 4 + lVar20) >> 3 & bVar10) != 0)) goto LAB_14017cb6e;
  }
  goto LAB_14017cf2a;
LAB_14017cc3f:
  uVar19 = uVar19 - 1 & uVar19;
  if (uVar19 == 0) goto LAB_14017cc01;
  goto LAB_14017cc1f;
LAB_14017cc48:
  uVar19 = *(uint *)(param_1 + 0x1854);
  if (uVar19 != (uint)(iVar11 * 0x570) / 100) goto LAB_14017cc79;
LAB_14017cc67:
  FUN_1431bb470((int *)(param_1 + 0x1850),uVar19 * 2);
  iVar11 = *(int *)(param_1 + 0x1850);
  goto LAB_14017cbc8;
LAB_14017cc79:
  uVar12 = 0;
  for (uVar19 = (uint)uVar7; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
    uVar12 = uVar12 + 1;
  }
  *(byte *)(lVar3 + (ulonglong)uVar12) = bVar15;
  *(int *)(param_1 + 0x1854) = *(int *)(param_1 + 0x1854) + 1;
  uVar12 = uVar13 << 4 | uVar12;
  lVar20 = *(longlong *)(param_1 + 0x1860);
  uVar13 = *(int *)(param_1 + 0x1850) << 4;
  uVar19 = uVar12;
  while ((uVar12 != uVar13 &&
         (uVar19 = uVar12,
         SBORROW1('\0',*(char *)((ulonglong)(uVar12 & 0xf) +
                                (ulonglong)(uVar12 >> 4) * 0xd0 + lVar20))))) {
    uVar12 = uVar12 + 1;
    uVar19 = uVar13;
  }
  bVar26 = false;
  uVar22 = (ulonglong)(uVar19 & 0xf);
  lVar24 = (ulonglong)(uVar19 >> 4) * 0xd0 + lVar20;
  *(ulonglong *)(lVar24 + 0x10 + uVar22 * 0xc) = param_2;
  *(char *)(lVar24 + 0x18 + uVar22 * 0xc) = *pcStack_68;
  *(undefined2 *)(lVar24 + 0x1a + uVar22 * 0xc) = param_4;
  pbVar4 = (byte *)(lVar24 + 0x19 + uVar22 * 0xc);
  *pbVar4 = *pbVar4 & 0xc0;
LAB_14017cd0f:
  iVar11 = *(int *)(param_1 + 0x880);
  bVar10 = (byte)param_2;
  uVar13 = 0;
  if (iVar11 != 0) {
    lVar24 = *(longlong *)(param_1 + 0x890);
    bVar15 = bVar10 & 0x7f;
    uVar12 = iVar11 * 0x10;
    uVar22 = param_2 >> 7 & 0x1ffffff;
    auVar30._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar30[8] = bVar15;
    auVar30[9] = bVar15;
    auVar30[10] = bVar15;
    auVar30[0xb] = bVar15;
    auVar30[0xc] = bVar15;
    auVar30[0xd] = bVar15;
    auVar30[0xe] = bVar15;
    auVar30[0xf] = bVar15;
    while( true ) {
      uVar23 = (uint)uVar22 & iVar11 - 1U;
      auVar29 = *(undefined1 (*) [16])(lVar24 + (ulonglong)uVar23 * 0x90);
      auVar31 = vpcmpeqb_avx(auVar29,auVar30);
      uVar7 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar31[0xf] >> 7) << 0xf;
      uVar13 = uVar12;
      if (uVar7 != 0) {
        uVar14 = (uint)uVar7;
        do {
          uVar25 = 0;
          for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar25 = uVar25 + 1;
          }
          if (*(int *)((ulonglong)uVar23 * 0x90 + lVar24 + 0x10 + (ulonglong)uVar25 * 8) == iVar17)
          {
            uVar25 = uVar25 | uVar23 << 4;
            if (uVar25 == uVar12 || uVar25 == 0xffffffff) goto LAB_14017cde8;
            goto LAB_14017cdb8;
          }
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
      auVar29 = vpsignb_avx(auVar29,auVar29);
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar22 = (ulonglong)(uVar23 + 1);
    }
  }
  goto LAB_14017cde8;
  while (uVar25 = uVar25 + 1, uVar13 = uVar12, uVar12 != uVar25) {
LAB_14017cea8:
    uVar13 = uVar25;
    if (!SBORROW1('\0',*(char *)((ulonglong)(uVar25 & 0xf) +
                                (ulonglong)(uVar25 >> 4) * 0x90 + _DAT_149aa41a0))) break;
  }
  goto LAB_14017ced8;
LAB_14017cb6e:
  FUN_140437e10(param_1,param_2,0);
  goto LAB_14017cf2a;
  while (uVar25 = uVar25 + 1, uVar13 = uVar12, uVar12 != uVar25) {
LAB_14017cdb8:
    uVar13 = uVar25;
    if (!SBORROW1('\0',*(char *)((ulonglong)(uVar25 & 0xf) +
                                (ulonglong)(uVar25 >> 4) * 0x90 + lVar24))) break;
  }
LAB_14017cde8:
  bVar27 = (ulonglong)(uVar13 >> 4) * 0x90 + (ulonglong)(uVar13 & 0xf) * 8 !=
           (ulonglong)(uint)(iVar11 << 4) * 9;
  uVar13 = 0;
  if (_DAT_149aa4190 != 0) {
    bVar15 = bVar10 & 0x7f;
    uVar12 = _DAT_149aa4190 * 0x10;
    uVar22 = param_2 >> 7 & 0x1ffffff;
    auVar31._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar31[8] = bVar15;
    auVar31[9] = bVar15;
    auVar31[10] = bVar15;
    auVar31[0xb] = bVar15;
    auVar31[0xc] = bVar15;
    auVar31[0xd] = bVar15;
    auVar31[0xe] = bVar15;
    auVar31[0xf] = bVar15;
    while( true ) {
      uVar23 = (uint)uVar22 & _DAT_149aa4190 - 1U;
      auVar29 = *(undefined1 (*) [16])(_DAT_149aa41a0 + (ulonglong)uVar23 * 0x90);
      auVar30 = vpcmpeqb_avx(auVar29,auVar31);
      uVar7 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
      uVar13 = uVar12;
      if (uVar7 != 0) {
        uVar14 = (uint)uVar7;
        do {
          uVar25 = 0;
          for (uVar8 = uVar14; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar25 = uVar25 + 1;
          }
          if (*(int *)((ulonglong)uVar23 * 0x90 + _DAT_149aa41a0 + 0x10 + (ulonglong)uVar25 * 8) ==
              iVar17) {
            uVar25 = uVar25 | uVar23 << 4;
            if (uVar25 == uVar12 || uVar25 == 0xffffffff) goto LAB_14017ced8;
            goto LAB_14017cea8;
          }
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
      auVar29 = vpsignb_avx(auVar29,auVar29);
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar22 = (ulonglong)(uVar23 + 1);
    }
  }
LAB_14017ced8:
  bVar28 = (ulonglong)(uVar13 >> 4) * 0x90 + (ulonglong)(uVar13 & 0xf) * 8 !=
           (ulonglong)(uint)(_DAT_149aa4190 << 4) * 9;
  if (bVar26 || (bVar27 || bVar28)) {
    if (!bVar26) {
      lVar20 = lVar20 + (ulonglong)(uVar19 >> 4) * 0xd0;
      *(byte *)(lVar20 + 0x19 + (ulonglong)(uVar19 & 0xf) * 0xc) =
           bVar28 << 2 |
           *(byte *)(lVar20 + 0x19 + (ulonglong)(uVar19 & 0xf) * 0xc) & 0xf9 | bVar27 * '\x02';
    }
    if ((bVar27 || bVar28) && ((ulonglong)*(uint *)(param_1 + 4) != 0)) {
      lVar24 = *(longlong *)(param_1 + 8);
      lVar20 = 0;
      do {
        if (((*(int *)(lVar24 + lVar20) == iVar17) &&
            ((1 << (uVar18 & 0x1f) & (uint)*(byte *)(lVar24 + 5 + lVar20)) != 0)) &&
           ((*(byte *)(lVar24 + 4 + lVar20) & 0x30) != 0)) goto LAB_14017cb6e;
        lVar20 = lVar20 + 0x18;
      } while ((ulonglong)*(uint *)(param_1 + 4) * 0x18 != lVar20);
    }
  }
  else {
    pbVar4 = (byte *)(lVar20 + (ulonglong)(uVar19 >> 4) * 0xd0 + 0x19 +
                     (ulonglong)(uVar19 & 0xf) * 0xc);
    *pbVar4 = *pbVar4 & 0xf9;
  }
LAB_14017cf2a:
  uVar18 = *puVar1;
  do {
    LOCK();
    uVar19 = *puVar1;
    bVar26 = uVar18 == uVar19;
    if (bVar26) {
      *puVar1 = uVar18 & 0xfeffffff;
      uVar19 = uVar18;
    }
    uVar18 = uVar19;
    UNLOCK();
  } while (!bVar26);
  if ((uVar18 & 0xff0000) == 0) {
    if ((uVar18 & 0xff00) != 0) {
      uVar18 = *puVar1;
      do {
        LOCK();
        uVar19 = *puVar1;
        bVar26 = uVar18 == uVar19;
        if (bVar26) {
          *puVar1 = uVar18 & 0xffff00ff;
          uVar19 = uVar18;
        }
        uVar18 = uVar19;
        UNLOCK();
      } while (!bVar26);
      uVar18 = uVar18 >> 8 & 0xff;
      if (uVar18 != 0) {
        plVar16 = (longlong *)(param_1 + 0x4078);
        lVar24 = *(longlong *)(param_1 + 0x4078);
        do {
          while (lVar24 < 0) {
            puStack_60 = &UNK_14046577c;
            cVar9 = FUN_1400062d0(plVar16,uVar18,&stack0xffffffffffffffc8);
            if (cVar9 != '\0') {
              return;
            }
          }
          LOCK();
          lVar20 = *plVar16;
          if (lVar24 == lVar20) {
            *plVar16 = lVar24 + ((ulonglong)uVar18 << 0x20);
            lVar20 = lVar24;
          }
          UNLOCK();
          bVar26 = lVar24 != lVar20;
          lVar24 = lVar20;
        } while (bVar26);
      }
    }
  }
  else {
    uVar18 = uVar18 & 0xfeffffff;
    plVar16 = (longlong *)(param_1 + 0x4080);
    do {
      if ((uVar18 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      uVar19 = *puVar1;
      bVar26 = uVar18 == uVar19;
      if (bVar26) {
        *puVar1 = uVar18 - 0x10000;
        uVar19 = uVar18;
      }
      UNLOCK();
      if (bVar26) {
        lVar24 = *plVar16;
        do {
          while (lVar24 < 0) {
            puStack_60 = &UNK_1404656ef;
            cVar9 = FUN_1400062d0(plVar16,1,&stack0xffffffffffffffc8);
            uVar19 = uVar18;
            if (cVar9 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          lVar20 = *plVar16;
          if (lVar24 == lVar20) {
            *plVar16 = lVar24 + 0x100000000;
            lVar20 = lVar24;
          }
          UNLOCK();
          bVar27 = lVar24 != lVar20;
          uVar19 = uVar18;
          lVar24 = lVar20;
        } while (bVar27);
      }
code_r0x00014046570e:
      uVar18 = uVar19;
    } while (!bVar26);
  }
  return;
}

