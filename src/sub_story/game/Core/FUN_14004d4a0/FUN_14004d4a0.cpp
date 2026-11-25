// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004d4a0  size: 528 bytes
// Name:    FUN_14004d4a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14004d4a0(longlong param_1,ulonglong param_2,undefined1 *param_3)

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
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  byte bVar15;
  bool bVar17;
  undefined1 auVar18 [16];
  ulonglong uStack_50;
  undefined1 *puStack_48;
  byte bVar16;
  
  puVar1 = (uint *)(param_1 + 0x4070);
  puVar2 = (ulonglong *)(param_1 + 0x4078);
  uVar10 = *(uint *)(param_1 + 0x4070);
  puStack_48 = param_3;
LAB_14004d4e8:
  do {
    do {
      while (uVar11 = uVar10, (uVar11 & 0x1ff0000) == 0) {
        LOCK();
        uVar10 = *puVar1;
        bVar17 = uVar11 == uVar10;
        if (bVar17) {
          *puVar1 = uVar11 + 1;
          uVar10 = uVar11;
        }
        UNLOCK();
        if (bVar17) {
          if (*(int *)(param_1 + 0x1850) != 0) {
            uVar12 = ((param_2 & 0xffffffff) + 0x651e95c4d06fbfb1 ^ param_2 >> 0x20) *
                     -0x622015f714c7d297;
            lVar13 = (uVar12 >> 0x2f ^ param_2 >> 0x20 ^ uVar12) * -0x622015f714c7d297;
            lVar14 = *(longlong *)(param_1 + 0x1860);
            uVar10 = ((uint)((ulonglong)lVar13 >> 0x2f) ^ (uint)lVar13) * -0x14c7d297;
            uVar11 = uVar10 >> 7;
            bVar16 = (byte)uVar10;
            bVar15 = bVar16 & 0x7f;
            auVar18._0_8_ =
                 CONCAT17(bVar16,CONCAT16(bVar16,CONCAT15(bVar16,CONCAT14(bVar16,CONCAT13(bVar16,
                                                  CONCAT12(bVar16,CONCAT11(bVar16,bVar16))))))) &
                 0x7f7f7f7f7f7f7f7f;
            auVar18[8] = bVar15;
            auVar18[9] = bVar15;
            auVar18[10] = bVar15;
            auVar18[0xb] = bVar15;
            auVar18[0xc] = bVar15;
            auVar18[0xd] = bVar15;
            auVar18[0xe] = bVar15;
            auVar18[0xf] = bVar15;
            while( true ) {
              uVar11 = uVar11 & *(int *)(param_1 + 0x1850) - 1U;
              auVar3 = *(undefined1 (*) [16])(lVar14 + (ulonglong)uVar11 * 0xd0);
              auVar4 = vpcmpeqb_avx(auVar3,auVar18);
              uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
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
                lVar13 = (ulonglong)uVar11 * 0xd0 + lVar14;
                uVar10 = (uint)uVar5;
                do {
                  uVar9 = 0;
                  for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar9 = uVar9 + 1;
                  }
                  uVar12 = (ulonglong)uVar9;
                  if ((*(int *)(lVar13 + 0x14 + uVar12 * 0xc) == (int)(param_2 >> 0x20)) &&
                     (*(int *)(lVar13 + 0x10 + uVar12 * 0xc) == (int)param_2)) {
                    uVar10 = uVar11 << 4 | uVar9;
                    if (uVar10 == 0xffffffff) goto LAB_14004d693;
                    lVar14 = lVar14 + (ulonglong)(uVar10 >> 4) * 0xd0;
                    if (*(short *)(lVar14 + 0x1a + (ulonglong)(uVar9 & 0xf) * 0xc) == 0)
                    goto LAB_14004d693;
                    uVar12 = CONCAT71((int7)(uVar12 * 3 >> 8),1);
                    *puStack_48 = *(undefined1 *)(lVar14 + 0x18 + (ulonglong)(uVar9 & 0xf) * 0xc);
                    goto LAB_14004d695;
                  }
                  uVar10 = uVar10 - 1 & uVar10;
                } while (uVar10 != 0);
              }
              auVar3 = vpsignb_avx(auVar3,auVar3);
              if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar3 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar3 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar3 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar3 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar3 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar3 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar3 >> 0x3f,0) & 1) != 0) || (SUB161(auVar3 >> 0x47,0) & 1) != 0
                        ) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0) ||
                      (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0)
                    || (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') break;
              uVar11 = uVar11 + 1;
            }
          }
LAB_14004d693:
          uVar12 = 0;
LAB_14004d695:
          FUN_140323580(puVar1);
          return uVar12 & 0xffffffff;
        }
      }
      LOCK();
      uVar10 = *puVar1;
      bVar17 = uVar11 == uVar10;
      if (bVar17) {
        *puVar1 = uVar11 + 0x100;
        uVar10 = uVar11;
      }
      UNLOCK();
    } while (!bVar17);
    uVar9 = (uint)(*puVar2 >> 7) & 0xffffff;
    uVar12 = *puVar2;
    if ((*puVar2 >> 7 & 0xffffff) != 0) {
      do {
        if ((longlong)uVar12 < 0x100000000) {
          uVar8 = *puVar2;
        }
        else {
          LOCK();
          uVar8 = *puVar2;
          if (uVar12 == uVar8) {
            *puVar2 = uVar12 - 0x100000000;
            uVar8 = uVar12;
          }
          UNLOCK();
          uVar10 = uVar11;
          if (uVar12 == uVar8) goto LAB_14004d4e8;
        }
        uVar9 = uVar9 - 1;
        uVar12 = uVar8;
      } while (uVar9 != 0);
    }
    uVar12 = *puVar2;
    do {
      while (uStack_50 = uVar12, 0xffffffff < (longlong)uStack_50) {
        LOCK();
        uVar12 = *puVar2;
        if (uStack_50 == uVar12) {
          *puVar2 = uStack_50 - 0x100000000;
          uVar12 = uStack_50;
        }
        UNLOCK();
        uVar10 = uVar11;
        if (uStack_50 == uVar12) goto LAB_14004d4e8;
      }
      cVar7 = FUN_140006180(puVar2,1,&uStack_50);
      uVar10 = uVar11;
      uVar12 = uStack_50;
    } while (cVar7 == '\0');
  } while( true );
}

