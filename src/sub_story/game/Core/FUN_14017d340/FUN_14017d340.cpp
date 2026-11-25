// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017d340  size: 770 bytes
// Name:    FUN_14017d340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14138f290, FUN_140006180, FUN_140437e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017d340(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  byte bVar15;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  ulonglong uStack_48;
  byte bVar16;
  
  puVar1 = (uint *)(param_1 + 0x4070);
  puVar2 = (ulonglong *)(param_1 + 0x4080);
  uVar14 = *(uint *)(param_1 + 0x4070);
LAB_14017d383:
  do {
    uVar20 = uVar14;
    if ((uVar20 & 0x10000ff) != 0) {
      LOCK();
      uVar14 = *puVar1;
      bVar21 = uVar20 == uVar14;
      if (bVar21) {
        *puVar1 = uVar20 + 0x10000;
        uVar14 = uVar20;
      }
      UNLOCK();
      if (bVar21) {
        uVar10 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar11 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar11 < 0x100000000) {
              uVar8 = *puVar2;
            }
            else {
              LOCK();
              uVar8 = *puVar2;
              if (uVar11 == uVar8) {
                *puVar2 = uVar11 - 0x100000000;
                uVar8 = uVar11;
              }
              UNLOCK();
              uVar14 = uVar20;
              if (uVar11 == uVar8) goto LAB_14017d383;
            }
            uVar10 = uVar10 - 1;
            uVar11 = uVar8;
          } while (uVar10 != 0);
        }
        uVar11 = *puVar2;
        do {
          while (uStack_48 = uVar11, (longlong)uStack_48 < 0x100000000) {
            cVar7 = FUN_140006180(puVar2,1,&uStack_48);
            uVar14 = uVar20;
            uVar11 = uStack_48;
            if (cVar7 != '\0') goto LAB_14017d383;
          }
          LOCK();
          uVar11 = *puVar2;
          if (uStack_48 == uVar11) {
            *puVar2 = uStack_48 - 0x100000000;
            uVar11 = uStack_48;
          }
          UNLOCK();
          uVar14 = uVar20;
        } while (uStack_48 != uVar11);
      }
      goto LAB_14017d383;
    }
    LOCK();
    uVar14 = *puVar1;
    bVar21 = uVar20 == uVar14;
    if (bVar21) {
      *puVar1 = uVar20 | 0x1000000;
      uVar14 = uVar20;
    }
    UNLOCK();
  } while (!bVar21);
  uVar14 = *(uint *)(param_1 + 0x3840);
  uVar20 = (uint)(param_2 >> 0x20);
  if (uVar14 != 0) {
    uVar11 = ((param_2 & 0xffffffff) + 0x651e95c4d06fbfb1 ^ param_2 >> 0x20) * -0x622015f714c7d297;
    lVar12 = (uVar11 >> 0x2f ^ param_2 >> 0x20 ^ uVar11) * -0x622015f714c7d297;
    uVar10 = ((uint)((ulonglong)lVar12 >> 0x2f) ^ (uint)lVar12) * -0x14c7d297;
    lVar12 = *(longlong *)(param_1 + 0x3850);
    uVar9 = uVar10 >> 7;
    bVar16 = (byte)uVar10;
    bVar15 = bVar16 & 0x7f;
    auVar23._0_8_ =
         CONCAT17(bVar16,CONCAT16(bVar16,CONCAT15(bVar16,CONCAT14(bVar16,CONCAT13(bVar16,CONCAT12(
                                                  bVar16,CONCAT11(bVar16,bVar16))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar23[8] = bVar15;
    auVar23[9] = bVar15;
    auVar23[10] = bVar15;
    auVar23[0xb] = bVar15;
    auVar23[0xc] = bVar15;
    auVar23[0xd] = bVar15;
    auVar23[0xe] = bVar15;
    auVar23[0xf] = bVar15;
    do {
      uVar9 = uVar9 & uVar14 - 1;
      auVar3 = *(undefined1 (*) [16])(lVar12 + (ulonglong)uVar9 * 0x310);
      auVar4 = vpcmpeqb_avx(auVar3,auVar23);
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
      if (uVar5 != 0) {
        lVar19 = (ulonglong)uVar9 * 0x310 + lVar12;
        uVar10 = (uint)uVar5;
LAB_14017d4c8:
        uVar17 = 0;
        for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar17 = uVar17 + 1;
        }
        if ((*(uint *)(lVar19 + 0x14 + (ulonglong)(uVar17 * 0x30)) != uVar20) ||
           (*(int *)(lVar19 + 0x10 + (ulonglong)(uVar17 * 0x30)) != (int)param_2))
        goto LAB_14017d4e2;
        uVar17 = uVar17 | uVar9 << 4;
        uVar11 = (ulonglong)uVar17;
        if (uVar17 != 0xffffffff) {
          uVar10 = uVar14 * 0x10;
          uVar8 = uVar11;
          while ((uVar18 = uVar8, uVar17 != uVar10 &&
                 (uVar8 = (ulonglong)uVar10, uVar18 = uVar11,
                 SBORROW1('\0',*(char *)((ulonglong)((uint)uVar11 & 0xf) +
                                        (uVar11 >> 4) * 0x310 + lVar12))))) {
            uVar17 = (uint)uVar11 + 1;
            uVar11 = (ulonglong)uVar17;
          }
          goto LAB_14017d54e;
        }
        goto LAB_14017d546;
      }
LAB_14017d4e9:
      auVar3 = vpsignb_avx(auVar3,auVar3);
      if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 || (SUB161(auVar3 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar3 >> 0x17,0) & 1) != 0) || (SUB161(auVar3 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar3 >> 0x27,0) & 1) != 0) || (SUB161(auVar3 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar3 >> 0x37,0) & 1) != 0) || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar3 >> 0x47,0) & 1) != 0) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') goto LAB_14017d546;
      uVar9 = uVar9 + 1;
    } while( true );
  }
  lVar12 = *(longlong *)(param_1 + 0x3850);
LAB_14017d546:
  uVar8 = (ulonglong)(uVar14 << 4);
  uVar18 = uVar8;
LAB_14017d54e:
  uVar10 = (uint)uVar18;
  lVar19 = (uVar18 >> 4) * 0x310;
  uVar11 = (ulonglong)((uVar10 & 0xf) * 0x30);
  if (lVar19 + uVar11 != (ulonglong)(uVar14 & 0xfffffff) * 0x310) {
    bVar15 = *(byte *)(lVar12 + lVar19 + 0x30 + uVar11);
    while ((uVar11 = uVar8, uVar10 != (uint)uVar8 &&
           (uVar11 = uVar18,
           SBORROW1('\0',*(char *)((ulonglong)((uint)uVar18 & 0xf) + (uVar18 >> 4) * 0x310 + lVar12)
                   )))) {
      uVar10 = (uint)uVar18 + 1;
      uVar18 = (ulonglong)uVar10;
    }
    FUN_14138f290(param_1 + 0x3840,uVar11);
    if (((bVar15 & 6) != 0) && ((ulonglong)*(uint *)(param_1 + 4) != 0)) {
      lVar12 = *(longlong *)(param_1 + 8);
      lVar19 = 0;
      do {
        if (((*(int *)(lVar12 + lVar19) == (int)param_2) &&
            ((1 << (uVar20 & 0x1f) & (uint)*(byte *)(lVar12 + 5 + lVar19)) != 0)) &&
           (*(char *)(lVar12 + 4 + lVar19) < '\0')) {
          FUN_140437e10(param_1,param_2,0);
          break;
        }
        lVar19 = lVar19 + 0x18;
      } while ((ulonglong)*(uint *)(param_1 + 4) * 0x18 != lVar19);
    }
  }
  uVar14 = *puVar1;
  do {
    LOCK();
    uVar20 = *puVar1;
    bVar21 = uVar14 == uVar20;
    if (bVar21) {
      *puVar1 = uVar14 & 0xfeffffff;
      uVar20 = uVar14;
    }
    uVar14 = uVar20;
    UNLOCK();
  } while (!bVar21);
  if ((uVar14 & 0xff0000) == 0) {
    if ((uVar14 & 0xff00) != 0) {
      uVar14 = *puVar1;
      do {
        LOCK();
        uVar20 = *puVar1;
        bVar21 = uVar14 == uVar20;
        if (bVar21) {
          *puVar1 = uVar14 & 0xffff00ff;
          uVar20 = uVar14;
        }
        uVar14 = uVar20;
        UNLOCK();
      } while (!bVar21);
      uVar14 = uVar14 >> 8 & 0xff;
      if (uVar14 != 0) {
        plVar13 = (longlong *)(param_1 + 0x4078);
        lVar12 = *(longlong *)(param_1 + 0x4078);
        do {
          while (-1 < lVar12) {
            LOCK();
            lVar19 = *plVar13;
            if (lVar12 == lVar19) {
              *plVar13 = lVar12 + ((ulonglong)uVar14 << 0x20);
              lVar19 = lVar12;
            }
            UNLOCK();
            bVar21 = lVar12 == lVar19;
            lVar12 = lVar19;
            if (bVar21) {
              return;
            }
          }
          cVar7 = FUN_1400062d0(plVar13,uVar14,&stack0xffffffffffffffc8);
        } while (cVar7 == '\0');
      }
    }
  }
  else {
    uVar14 = uVar14 & 0xfeffffff;
    plVar13 = (longlong *)(param_1 + 0x4080);
    do {
      if ((uVar14 & 0xff0000) == 0) {
        return;
      }
      LOCK();
      uVar20 = *puVar1;
      bVar21 = uVar14 == uVar20;
      if (bVar21) {
        *puVar1 = uVar14 - 0x10000;
        uVar20 = uVar14;
      }
      UNLOCK();
      if (bVar21) {
        lVar12 = *plVar13;
        do {
          while (lVar12 < 0) {
            cVar7 = FUN_1400062d0(plVar13,1,&stack0xffffffffffffffc8);
            uVar20 = uVar14;
            if (cVar7 != '\0') goto code_r0x00014046570e;
          }
          LOCK();
          lVar19 = *plVar13;
          if (lVar12 == lVar19) {
            *plVar13 = lVar12 + 0x100000000;
            lVar19 = lVar12;
          }
          UNLOCK();
          bVar22 = lVar12 != lVar19;
          uVar20 = uVar14;
          lVar12 = lVar19;
        } while (bVar22);
      }
code_r0x00014046570e:
      uVar14 = uVar20;
    } while (!bVar21);
  }
  return;
LAB_14017d4e2:
  uVar10 = uVar10 - 1 & uVar10;
  if (uVar10 == 0) goto LAB_14017d4e9;
  goto LAB_14017d4c8;
}

