// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400155c0  size: 795 bytes
// Name:    FUN_1400155c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400155c0(uint *param_1,longlong *param_2,uint *param_3)

{
  undefined1 auVar1 [16];
  uint *puVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  byte bVar10;
  
  auVar19 = ZEXT1664(CONCAT115(DAT_1461595a8,
                               CONCAT114(DAT_1461595a8,
                                         CONCAT113(DAT_1461595a8,
                                                   CONCAT112(DAT_1461595a8,
                                                             CONCAT111(DAT_1461595a8,
                                                                       CONCAT110(DAT_1461595a8,
                                                                                 CONCAT19(
                                                  DAT_1461595a8,
                                                  CONCAT18(DAT_1461595a8,
                                                           CONCAT17(DAT_1461595a8,
                                                                    CONCAT16(DAT_1461595a8,
                                                                             CONCAT15(DAT_1461595a8,
                                                                                      CONCAT14(
                                                  DAT_1461595a8,
                                                  CONCAT13(DAT_1461595a8,
                                                           CONCAT12(DAT_1461595a8,
                                                                    CONCAT11(DAT_1461595a8,
                                                                             DAT_1461595a8))))))))))
                                                  ))))));
  do {
    uVar15 = *param_1;
    puVar2 = *(uint **)(param_1 + 4);
    uVar12 = 0;
    uVar11 = 0;
    if (uVar15 != 0) {
      uVar12 = *param_3;
      bVar10 = (byte)uVar12;
      bVar9 = bVar10 & 0x7f;
      uVar6 = uVar12 >> 7;
      auVar18._0_8_ =
           CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar18[8] = bVar9;
      auVar18[9] = bVar9;
      auVar18[10] = bVar9;
      auVar18[0xb] = bVar9;
      auVar18[0xc] = bVar9;
      auVar18[0xd] = bVar9;
      auVar18[0xe] = bVar9;
      auVar18[0xf] = bVar9;
      while( true ) {
        uVar6 = uVar6 & uVar15 - 1;
        uVar7 = (ulonglong)uVar6;
        auVar1 = *(undefined1 (*) [16])(puVar2 + uVar7 * 0x34);
        auVar3 = vpcmpeqb_avx(auVar1,auVar18);
        uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
        uVar11 = (uint)uVar4;
        if (uVar4 != 0) {
          do {
            uVar14 = 0;
            for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            if (puVar2[uVar7 * 0x34 + (ulonglong)uVar14 * 3 + 4] == uVar12) {
              uVar15 = uVar15 << 4;
              uVar14 = uVar14 | uVar6 << 4;
              while ((uVar12 = uVar15, uVar14 != uVar15 &&
                     (uVar12 = uVar14,
                     SBORROW1('\0',*(char *)((longlong)puVar2 +
                                            (ulonglong)(uVar14 & 0xf) +
                                            (ulonglong)(uVar14 >> 4) * 0xd0))))) {
                uVar14 = uVar14 + 1;
              }
              *(uint *)(param_2 + 1) = uVar15;
              *(uint *)((longlong)param_2 + 0xc) = uVar12;
              *(undefined1 *)(param_2 + 2) = 0;
              *param_2 = (longlong)puVar2;
              return;
            }
            uVar11 = uVar11 - 1 & uVar11;
          } while (uVar11 != 0);
        }
        auVar1 = vpsignb_avx(auVar1,auVar1);
        uVar4 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
        if (uVar4 != 0) break;
        uVar6 = uVar6 + 1;
      }
      uVar12 = param_1[1];
      uVar11 = uVar15;
      if (uVar12 != (uVar15 * 0x570) / 100) {
        uVar15 = 0;
        for (uVar12 = (uint)uVar4; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        *(byte *)((longlong)puVar2 + (ulonglong)uVar15 + uVar7 * 0xd0) = bVar9;
        param_1[1] = param_1[1] + 1;
        uVar15 = uVar6 << 4 | uVar15;
        uVar11 = *param_1 << 4;
        uVar12 = uVar15;
        while ((uVar15 != uVar11 &&
               (uVar12 = uVar15,
               SBORROW1('\0',*(char *)((ulonglong)(uVar15 & 0xf) +
                                      (ulonglong)(uVar15 >> 4) * 0xd0 + *(longlong *)(param_1 + 4)))
               ))) {
          uVar15 = uVar15 + 1;
          uVar12 = uVar11;
        }
        *param_2 = *(longlong *)(param_1 + 4);
        *(uint *)(param_2 + 1) = uVar11;
        *(uint *)((longlong)param_2 + 0xc) = uVar12;
        *(undefined1 *)(param_2 + 2) = 1;
        return;
      }
    }
    uVar15 = uVar12 * 2;
    if (uVar12 * 2 < 0x11) {
      uVar15 = 0x10;
    }
    uVar12 = 1;
    uVar7 = ((ulonglong)uVar15 * 100 + 0x56) / 0x57 - 1;
    uVar7 = uVar7 >> 1 | uVar7;
    uVar7 = uVar7 >> 2 | uVar7;
    uVar7 = uVar7 >> 4 | uVar7;
    uVar7 = uVar7 >> 8 | uVar7;
    uVar7 = uVar7 >> 0x10 | uVar7;
    uVar16 = uVar7 + 1 >> 4;
    puVar8 = param_1 + 8;
    if (0x1e < uVar7) {
      puVar8 = (uint *)func_0x000144d9c140(0x10,uVar16 * 0xd0);
      uVar12 = (uint)uVar16;
    }
    *(uint **)(param_1 + 4) = puVar8;
    *param_1 = uVar12;
    lVar13 = 0;
    do {
      *(undefined1 (*) [16])((longlong)puVar8 + lVar13) = auVar19._0_16_;
      lVar13 = lVar13 + 0xd0;
    } while (uVar16 * 0xd0 - lVar13 != 0);
    puVar8 = puVar2;
    if (uVar11 != 0) {
      do {
        lVar13 = 0;
        do {
          if (!SBORROW1('\0',*(char *)((longlong)puVar8 + lVar13))) {
            uVar15 = puVar8[lVar13 * 3 + 4] >> 7;
            while( true ) {
              uVar15 = uVar15 & *param_1 - 1;
              lVar17 = (ulonglong)uVar15 * 0xd0;
              auVar18 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 4) + lVar17);
              auVar18 = vpsignb_avx(auVar18,auVar18);
              uVar4 = (ushort)(SUB161(auVar18 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
              if (uVar4 != 0) break;
              uVar15 = uVar15 + 1;
            }
            uVar15 = 0;
            for (uVar12 = (uint)uVar4; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar7 = (ulonglong)uVar15;
            lVar17 = *(longlong *)(param_1 + 4) + lVar17;
            *(byte *)(lVar17 + uVar7) = (byte)puVar8[lVar13 * 3 + 4] & 0x7f;
            *(uint *)(lVar17 + 0x18 + uVar7 * 0xc) = (puVar8 + lVar13 * 3 + 4)[2];
            *(undefined8 *)(lVar17 + 0x10 + uVar7 * 0xc) = *(undefined8 *)(puVar8 + lVar13 * 3 + 4);
            *(undefined1 *)((longlong)puVar8 + lVar13) = 0x80;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x10);
        puVar8 = puVar8 + 0x34;
      } while (puVar8 != puVar2 + (ulonglong)uVar11 * 0x34);
    }
    if (puVar2 != (uint *)0x0 && param_1 + 8 != puVar2) {
      func_0x000144d9c130(puVar2);
    }
  } while( true );
}

