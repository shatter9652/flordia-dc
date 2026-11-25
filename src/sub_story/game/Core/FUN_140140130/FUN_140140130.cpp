// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140140130  size: 528 bytes
// Name:    FUN_140140130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_140323580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140140130(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  bool bVar18;
  undefined1 auVar19 [16];
  ulonglong uStack_50;
  undefined4 *puStack_48;
  byte bVar17;
  
  puVar1 = (uint *)(param_1 + 0x4070);
  puVar2 = (ulonglong *)(param_1 + 0x4078);
  uVar9 = *(uint *)(param_1 + 0x4070);
  puStack_48 = param_3;
LAB_140140178:
  do {
    do {
      while (uVar10 = uVar9, (uVar10 & 0x1ff0000) == 0) {
        LOCK();
        uVar9 = *puVar1;
        bVar18 = uVar10 == uVar9;
        if (bVar18) {
          *puVar1 = uVar10 + 1;
          uVar9 = uVar10;
        }
        UNLOCK();
        if (bVar18) {
          if (*(int *)(param_1 + 0x2570) != 0) {
            uVar13 = ((param_2 & 0xffffffff) + 0x651e95c4d06fbfb1 ^ param_2 >> 0x20) *
                     -0x622015f714c7d297;
            lVar14 = (uVar13 >> 0x2f ^ param_2 >> 0x20 ^ uVar13) * -0x622015f714c7d297;
            lVar15 = *(longlong *)(param_1 + 0x2580);
            uVar9 = ((uint)((ulonglong)lVar14 >> 0x2f) ^ (uint)lVar14) * -0x14c7d297;
            uVar10 = uVar9 >> 7;
            bVar17 = (byte)uVar9;
            bVar16 = bVar17 & 0x7f;
            auVar19._0_8_ =
                 CONCAT17(bVar17,CONCAT16(bVar17,CONCAT15(bVar17,CONCAT14(bVar17,CONCAT13(bVar17,
                                                  CONCAT12(bVar17,CONCAT11(bVar17,bVar17))))))) &
                 0x7f7f7f7f7f7f7f7f;
            auVar19[8] = bVar16;
            auVar19[9] = bVar16;
            auVar19[10] = bVar16;
            auVar19[0xb] = bVar16;
            auVar19[0xc] = bVar16;
            auVar19[0xd] = bVar16;
            auVar19[0xe] = bVar16;
            auVar19[0xf] = bVar16;
            while( true ) {
              uVar10 = uVar10 & *(int *)(param_1 + 0x2570) - 1U;
              auVar3 = *(undefined1 (*) [16])(lVar15 + (ulonglong)uVar10 * 0x110);
              auVar4 = vpcmpeqb_avx(auVar3,auVar19);
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
                lVar14 = (ulonglong)uVar10 * 0x110 + lVar15;
                uVar9 = (uint)uVar5;
                do {
                  uVar8 = 0;
                  for (uVar11 = uVar9; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                    uVar8 = uVar8 + 1;
                  }
                  uVar11 = uVar8 << 4;
                  if ((*(int *)(lVar14 + 0x14 + (ulonglong)uVar11) == (int)(param_2 >> 0x20)) &&
                     (*(int *)(lVar14 + 0x10 + (ulonglong)uVar11) == (int)param_2)) {
                    uVar9 = uVar10 << 4 | uVar8;
                    if (uVar9 == 0xffffffff) goto LAB_140140323;
                    uVar13 = (ulonglong)((uVar8 & 0xf) << 4);
                    lVar15 = lVar15 + (ulonglong)(uVar9 >> 4) * 0x110;
                    if (*(short *)(uVar13 + 0x1e + lVar15) == 0) goto LAB_140140323;
                    uVar12 = CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
                    *puStack_48 = *(undefined4 *)(uVar13 + 0x18 + lVar15);
                    goto LAB_140140325;
                  }
                  uVar9 = uVar9 - 1 & uVar9;
                } while (uVar9 != 0);
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
              uVar10 = uVar10 + 1;
            }
          }
LAB_140140323:
          uVar12 = 0;
LAB_140140325:
          FUN_140323580(puVar1);
          return uVar12;
        }
      }
      LOCK();
      uVar9 = *puVar1;
      bVar18 = uVar10 == uVar9;
      if (bVar18) {
        *puVar1 = uVar10 + 0x100;
        uVar9 = uVar10;
      }
      UNLOCK();
    } while (!bVar18);
    uVar8 = (uint)(*puVar2 >> 7) & 0xffffff;
    uVar13 = *puVar2;
    if ((*puVar2 >> 7 & 0xffffff) != 0) {
      do {
        if ((longlong)uVar13 < 0x100000000) {
          uVar7 = *puVar2;
        }
        else {
          LOCK();
          uVar7 = *puVar2;
          if (uVar13 == uVar7) {
            *puVar2 = uVar13 - 0x100000000;
            uVar7 = uVar13;
          }
          UNLOCK();
          uVar9 = uVar10;
          if (uVar13 == uVar7) goto LAB_140140178;
        }
        uVar8 = uVar8 - 1;
        uVar13 = uVar7;
      } while (uVar8 != 0);
    }
    uVar13 = *puVar2;
    do {
      while (uStack_50 = uVar13, 0xffffffff < (longlong)uStack_50) {
        LOCK();
        uVar13 = *puVar2;
        if (uStack_50 == uVar13) {
          *puVar2 = uStack_50 - 0x100000000;
          uVar13 = uStack_50;
        }
        UNLOCK();
        uVar9 = uVar10;
        if (uStack_50 == uVar13) goto LAB_140140178;
      }
      cVar6 = FUN_140006180(puVar2,1,&uStack_50);
      uVar9 = uVar10;
      uVar13 = uStack_50;
    } while (cVar6 == '\0');
  } while( true );
}

