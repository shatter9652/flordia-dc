// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013fb30  size: 536 bytes
// Name:    FUN_14013fb30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14013fb30(longlong param_1,undefined4 *param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  char cVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  longlong lVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  ulonglong uStack_48;
  byte bVar17;
  
  puVar1 = (uint *)(param_1 + 0x4070);
  puVar2 = (ulonglong *)(param_1 + 0x4078);
  uVar12 = *(uint *)(param_1 + 0x4070);
LAB_14013fb78:
  do {
    uVar13 = uVar12;
    if ((uVar13 & 0x1ff0000) != 0) {
      LOCK();
      uVar12 = *puVar1;
      bVar19 = uVar13 == uVar12;
      if (bVar19) {
        *puVar1 = uVar13 + 0x100;
        uVar12 = uVar13;
      }
      UNLOCK();
      if (bVar19) {
        uVar10 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar14 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar14 < 0x100000000) {
              uVar9 = *puVar2;
            }
            else {
              LOCK();
              uVar9 = *puVar2;
              if (uVar14 == uVar9) {
                *puVar2 = uVar14 - 0x100000000;
                uVar9 = uVar14;
              }
              UNLOCK();
              uVar12 = uVar13;
              if (uVar14 == uVar9) goto LAB_14013fb78;
            }
            uVar10 = uVar10 - 1;
            uVar14 = uVar9;
          } while (uVar10 != 0);
        }
        uVar14 = *puVar2;
        do {
          while (uStack_48 = uVar14, (longlong)uStack_48 < 0x100000000) {
            cVar7 = FUN_140006180(puVar2,1,&uStack_48);
            uVar12 = uVar13;
            uVar14 = uStack_48;
            if (cVar7 != '\0') goto LAB_14013fb78;
          }
          LOCK();
          uVar14 = *puVar2;
          if (uStack_48 == uVar14) {
            *puVar2 = uStack_48 - 0x100000000;
            uVar14 = uStack_48;
          }
          UNLOCK();
          uVar12 = uVar13;
        } while (uStack_48 != uVar14);
      }
      goto LAB_14013fb78;
    }
    LOCK();
    uVar12 = *puVar1;
    bVar19 = uVar13 == uVar12;
    if (bVar19) {
      *puVar1 = uVar13 + 1;
      uVar12 = uVar13;
    }
    UNLOCK();
    if (bVar19) {
      uVar8 = 0;
      if (*(int *)(param_1 + 0x2570) != 0) {
        uVar14 = ((param_3 & 0xffffffff) + 0x651e95c4d06fbfb1 ^ param_3 >> 0x20) *
                 -0x622015f714c7d297;
        lVar15 = (uVar14 >> 0x2f ^ param_3 >> 0x20 ^ uVar14) * -0x622015f714c7d297;
        uVar12 = ((uint)((ulonglong)lVar15 >> 0x2f) ^ (uint)lVar15) * -0x14c7d297;
        lVar15 = *(longlong *)(param_1 + 0x2580);
        uVar13 = uVar12 >> 7;
        bVar17 = (byte)uVar12;
        bVar16 = bVar17 & 0x7f;
        auVar21._0_8_ =
             CONCAT17(bVar17,CONCAT16(bVar17,CONCAT15(bVar17,CONCAT14(bVar17,CONCAT13(bVar17,
                                                  CONCAT12(bVar17,CONCAT11(bVar17,bVar17))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar21[8] = bVar16;
        auVar21[9] = bVar16;
        auVar21[10] = bVar16;
        auVar21[0xb] = bVar16;
        auVar21[0xc] = bVar16;
        auVar21[0xd] = bVar16;
        auVar21[0xe] = bVar16;
        auVar21[0xf] = bVar16;
        while( true ) {
          uVar13 = uVar13 & *(int *)(param_1 + 0x2570) - 1U;
          auVar3 = *(undefined1 (*) [16])(lVar15 + (ulonglong)uVar13 * 0x110);
          auVar4 = vpcmpeqb_avx(auVar3,auVar21);
          uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
          uVar12 = (uint)uVar5;
          if (uVar5 != 0) {
            lVar18 = (ulonglong)uVar13 * 0x110 + lVar15;
            do {
              uVar10 = 0;
              for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar10 = uVar10 + 1;
              }
              if ((*(int *)(lVar18 + 0x14 + (ulonglong)(uVar10 << 4)) == (int)(param_3 >> 0x20)) &&
                 (*(int *)(lVar18 + 0x10 + (ulonglong)(uVar10 << 4)) == (int)param_3)) {
                uVar12 = uVar13 << 4 | uVar10;
                if (uVar12 != 0xffffffff) {
                  uVar14 = (ulonglong)((uVar10 & 0xf) << 4);
                  lVar15 = lVar15 + (ulonglong)(uVar12 >> 4) * 0x110;
                  if (*(short *)(uVar14 + 0x1e + lVar15) != 0) {
                    uVar8 = *(undefined4 *)(uVar14 + 0x18 + lVar15);
                  }
                }
                goto LAB_14013fd2e;
              }
              uVar12 = uVar12 - 1 & uVar12;
            } while (uVar12 != 0);
          }
          auVar3 = vpsignb_avx(auVar3,auVar3);
          if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 || (SUB161(auVar3 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar3 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar3 >> 0x1f,0) & 1) != 0) || (SUB161(auVar3 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar3 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar3 >> 0x37,0) & 1) != 0) || (SUB161(auVar3 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar3 >> 0x47,0) & 1) != 0) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') break;
          uVar13 = uVar13 + 1;
        }
      }
LAB_14013fd2e:
      *param_2 = uVar8;
      LOCK();
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      uVar12 = uVar12 - 1;
      if ((char)uVar12 == '\0') {
        if ((uVar12 & 0xff0000) == 0) {
          if ((uVar12 & 0xff00) != 0) {
            uVar12 = *puVar1;
            do {
              LOCK();
              uVar13 = *puVar1;
              bVar19 = uVar12 == uVar13;
              if (bVar19) {
                *puVar1 = uVar12 & 0xffff00ff;
                uVar13 = uVar12;
              }
              uVar12 = uVar13;
              UNLOCK();
            } while (!bVar19);
            uVar12 = uVar12 >> 8 & 0xff;
            if (uVar12 != 0) {
              plVar11 = (longlong *)(param_1 + 0x4078);
              lVar15 = *(longlong *)(param_1 + 0x4078);
              do {
                while (-1 < lVar15) {
                  LOCK();
                  lVar18 = *plVar11;
                  if (lVar15 == lVar18) {
                    *plVar11 = lVar15 + ((ulonglong)uVar12 << 0x20);
                    lVar18 = lVar15;
                  }
                  UNLOCK();
                  bVar19 = lVar15 == lVar18;
                  lVar15 = lVar18;
                  if (bVar19) {
                    return;
                  }
                }
                cVar7 = FUN_1400062d0(plVar11,uVar12,&stack0xffffffffffffffc8);
              } while (cVar7 == '\0');
            }
          }
        }
        else {
          plVar11 = (longlong *)(param_1 + 0x4080);
          do {
            if ((uVar12 & 0xff0000) == 0) {
              return;
            }
            LOCK();
            uVar13 = *puVar1;
            bVar19 = uVar12 == uVar13;
            if (bVar19) {
              *puVar1 = uVar12 - 0x10000;
              uVar13 = uVar12;
            }
            UNLOCK();
            if (bVar19) {
              lVar15 = *plVar11;
              do {
                while (lVar15 < 0) {
                  cVar7 = FUN_1400062d0(plVar11,1,&stack0xffffffffffffffc8);
                  uVar13 = uVar12;
                  if (cVar7 != '\0') goto code_r0x00014032361d;
                }
                LOCK();
                lVar18 = *plVar11;
                if (lVar15 == lVar18) {
                  *plVar11 = lVar15 + 0x100000000;
                  lVar18 = lVar15;
                }
                UNLOCK();
                bVar20 = lVar15 != lVar18;
                uVar13 = uVar12;
                lVar15 = lVar18;
              } while (bVar20);
            }
code_r0x00014032361d:
            uVar12 = uVar13;
          } while (!bVar19);
        }
      }
      return;
    }
  } while( true );
}

