// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004e4a0  size: 754 bytes
// Name:    FUN_14004e4a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004e4a0(uint *param_1,longlong *param_2,uint *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  byte bVar14;
  
  auVar21 = ZEXT1664(CONCAT115(DAT_14615926e,
                               CONCAT114(DAT_14615926e,
                                         CONCAT113(DAT_14615926e,
                                                   CONCAT112(DAT_14615926e,
                                                             CONCAT111(DAT_14615926e,
                                                                       CONCAT110(DAT_14615926e,
                                                                                 CONCAT19(
                                                  DAT_14615926e,
                                                  CONCAT18(DAT_14615926e,
                                                           CONCAT17(DAT_14615926e,
                                                                    CONCAT16(DAT_14615926e,
                                                                             CONCAT15(DAT_14615926e,
                                                                                      CONCAT14(
                                                  DAT_14615926e,
                                                  CONCAT13(DAT_14615926e,
                                                           CONCAT12(DAT_14615926e,
                                                                    CONCAT11(DAT_14615926e,
                                                                             DAT_14615926e))))))))))
                                                  ))))));
  do {
    uVar9 = *param_1;
    lVar3 = *(longlong *)(param_1 + 2);
    uVar18 = 0;
    uVar15 = 0;
    if (uVar9 != 0) {
      uVar18 = *param_3;
      bVar14 = (byte)uVar18;
      bVar13 = bVar14 & 0x7f;
      uVar8 = uVar18 >> 7;
      auVar20._0_8_ =
           CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,CONCAT12(
                                                  bVar14,CONCAT11(bVar14,bVar14))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar20[8] = bVar13;
      auVar20[9] = bVar13;
      auVar20[10] = bVar13;
      auVar20[0xb] = bVar13;
      auVar20[0xc] = bVar13;
      auVar20[0xd] = bVar13;
      auVar20[0xe] = bVar13;
      auVar20[0xf] = bVar13;
      while( true ) {
        uVar8 = uVar8 & uVar9 - 1;
        auVar2 = *(undefined1 (*) [16])(lVar3 + (ulonglong)uVar8 * 0x110);
        lVar11 = lVar3 + (ulonglong)uVar8 * 0x110;
        auVar4 = vpcmpeqb_avx(auVar2,auVar20);
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
        uVar15 = (uint)uVar5;
        if (uVar5 != 0) {
          do {
            uVar17 = 0;
            for (uVar6 = uVar15; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar17 = uVar17 + 1;
            }
            if (*(uint *)(lVar11 + 0x10 + (ulonglong)(uVar17 << 4)) == uVar18) {
              uVar9 = uVar9 << 4;
              uVar17 = uVar17 | uVar8 << 4;
              while ((uVar18 = uVar9, uVar17 != uVar9 &&
                     (uVar18 = uVar17,
                     SBORROW1('\0',*(char *)((ulonglong)(uVar17 & 0xf) +
                                            (ulonglong)(uVar17 >> 4) * 0x110 + lVar3))))) {
                uVar17 = uVar17 + 1;
              }
              *(uint *)(param_2 + 1) = uVar9;
              *(uint *)((longlong)param_2 + 0xc) = uVar18;
              *(undefined1 *)(param_2 + 2) = 0;
              *param_2 = lVar3;
              return;
            }
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        auVar2 = vpsignb_avx(auVar2,auVar2);
        uVar5 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
        if (uVar5 != 0) break;
        uVar8 = uVar8 + 1;
      }
      uVar18 = param_1[1];
      uVar15 = uVar9;
      if (uVar18 != (uVar9 * 0x570) / 100) {
        uVar9 = 0;
        for (uVar18 = (uint)uVar5; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        *(byte *)(lVar11 + (ulonglong)uVar9) = bVar13;
        param_1[1] = param_1[1] + 1;
        uVar9 = uVar8 << 4 | uVar9;
        uVar15 = *param_1 << 4;
        uVar18 = uVar9;
        while ((uVar9 != uVar15 &&
               (uVar18 = uVar9,
               SBORROW1('\0',*(char *)((ulonglong)(uVar9 & 0xf) +
                                      (ulonglong)(uVar9 >> 4) * 0x110 + *(longlong *)(param_1 + 2)))
               ))) {
          uVar9 = uVar9 + 1;
          uVar18 = uVar15;
        }
        *param_2 = *(longlong *)(param_1 + 2);
        *(uint *)(param_2 + 1) = uVar15;
        *(uint *)((longlong)param_2 + 0xc) = uVar18;
        *(undefined1 *)(param_2 + 2) = 1;
        return;
      }
    }
    uVar9 = uVar18 * 2;
    if (uVar18 * 2 < 0x11) {
      uVar9 = 0x10;
    }
    uVar10 = ((ulonglong)uVar9 * 100 + 0x56) / 0x57 - 1;
    uVar10 = uVar10 >> 1 | uVar10;
    uVar10 = uVar10 >> 2 | uVar10;
    uVar10 = uVar10 >> 4 | uVar10;
    uVar10 = uVar10 >> 8 | uVar10;
    uVar10 = (uVar10 >> 0x10 | uVar10) + 1 >> 4;
    lVar19 = uVar10 * 0x110;
    lVar11 = func_0x000144d9c140(0x10,lVar19);
    lVar12 = 0;
    *(longlong *)(param_1 + 2) = lVar11;
    *param_1 = (uint)uVar10;
    do {
      *(undefined1 (*) [16])(lVar11 + lVar12) = auVar21._0_16_;
      lVar12 = lVar12 + 0x110;
    } while (lVar19 - lVar12 != 0);
    if ((ulonglong)uVar15 != 0) {
      lVar11 = lVar3;
      do {
        lVar12 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lVar11 + lVar12))) {
            uVar9 = *(uint *)(lVar11 + 0x10 + lVar12 * 0x10);
            uVar18 = uVar9 >> 7;
            while( true ) {
              uVar18 = uVar18 & *param_1 - 1;
              lVar19 = (ulonglong)uVar18 * 0x110;
              auVar20 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 2) + lVar19);
              auVar20 = vpsignb_avx(auVar20,auVar20);
              uVar5 = (ushort)(SUB161(auVar20 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar20[0xf] >> 7) << 0xf;
              if (uVar5 != 0) break;
              uVar18 = uVar18 + 1;
            }
            lVar19 = *(longlong *)(param_1 + 2) + lVar19;
            uVar18 = 0;
            for (uVar8 = (uint)uVar5; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar18 = uVar18 + 1;
            }
            puVar16 = (undefined8 *)(lVar12 * 0x10 + lVar11 + 0x10);
            *(byte *)(lVar19 + (ulonglong)uVar18) = (byte)uVar9 & 0x7f;
            uVar7 = puVar16[1];
            puVar1 = (undefined8 *)(lVar19 + 0x10 + (ulonglong)(uVar18 << 4));
            *puVar1 = *puVar16;
            puVar1[1] = uVar7;
            *(undefined1 *)(lVar11 + lVar12) = 0x80;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x10);
        lVar11 = lVar11 + 0x110;
      } while (lVar11 != (ulonglong)uVar15 * 0x110 + lVar3);
    }
    if (lVar3 != 0) {
      func_0x000144d9c130(lVar3);
    }
  } while( true );
}

