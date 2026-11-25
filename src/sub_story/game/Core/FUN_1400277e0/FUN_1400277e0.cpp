// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400277e0  size: 998 bytes
// Name:    FUN_1400277e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400277e0(longlong param_1,uint param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  uint uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  byte bVar26;
  undefined8 *puVar27;
  uint uVar28;
  longlong lVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  
  auVar31 = ZEXT1664(CONCAT115(DAT_146159686,
                               CONCAT114(DAT_146159686,
                                         CONCAT113(DAT_146159686,
                                                   CONCAT112(DAT_146159686,
                                                             CONCAT111(DAT_146159686,
                                                                       CONCAT110(DAT_146159686,
                                                                                 CONCAT19(
                                                  DAT_146159686,
                                                  CONCAT18(DAT_146159686,
                                                           CONCAT17(DAT_146159686,
                                                                    CONCAT16(DAT_146159686,
                                                                             CONCAT15(DAT_146159686,
                                                                                      CONCAT14(
                                                  DAT_146159686,
                                                  CONCAT13(DAT_146159686,
                                                           CONCAT12(DAT_146159686,
                                                                    CONCAT11(DAT_146159686,
                                                                             DAT_146159686))))))))))
                                                  ))))));
  bVar8 = (byte)param_3;
  bVar26 = bVar8 & 0x7f;
  auVar30 = ZEXT1664(CONCAT115(bVar26,CONCAT114(bVar26,CONCAT113(bVar26,CONCAT112(bVar26,CONCAT111(
                                                  bVar26,CONCAT110(bVar26,CONCAT19(bVar26,CONCAT18(
                                                  bVar26,CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(
                                                  bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8
                                                  ,CONCAT11(bVar8,bVar8))))))) & 0x7f7f7f7f7f7f7f7f)
                                                  ))))))));
  do {
    uVar21 = *(uint *)(param_1 + 0x10);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar28 = 0;
    uVar25 = 0;
    if (uVar21 != 0) {
      uVar22 = param_3 >> 7 & 0x1ffffff;
      while( true ) {
        uVar20 = (uint)uVar22 & uVar21 - 1;
        auVar3 = *(undefined1 (*) [16])(lVar4 + (ulonglong)uVar20 * 0x510);
        lVar23 = lVar4 + (ulonglong)uVar20 * 0x510;
        auVar5 = vpcmpeqb_avx(auVar3,auVar30._0_16_);
        uVar6 = (ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf;
        if (uVar6 != 0) {
          uVar28 = (uint)uVar6;
          do {
            uVar25 = 0;
            for (uVar7 = uVar28; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar25 = uVar25 + 1;
            }
            if ((*(uint *)(lVar23 + 0x10 + (ulonglong)(uVar25 * 0x50)) == param_2) &&
               (*(int *)(lVar23 + 0x14 + (ulonglong)(uVar25 * 0x50)) == (int)param_3)) {
              uVar25 = uVar25 | uVar20 << 4;
              if (uVar25 == uVar21 << 4) {
                return;
              }
              do {
                if (!SBORROW1('\0',*(char *)((ulonglong)(uVar25 & 0xf) +
                                            (ulonglong)(uVar25 >> 4) * 0x510 + lVar4))) {
                  return;
                }
                uVar25 = uVar25 + 1;
              } while (uVar21 << 4 != uVar25);
              return;
            }
            uVar28 = uVar28 - 1 & uVar28;
          } while (uVar28 != 0);
        }
        auVar3 = vpsignb_avx(auVar3,auVar3);
        uVar6 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
        if (uVar6 != 0) break;
        uVar22 = (ulonglong)(uVar20 + 1);
      }
      uVar28 = *(uint *)(param_1 + 0x14);
      uVar25 = uVar21;
      if (uVar28 != (uVar21 * 0x570) / 100) {
        uVar21 = 0;
        for (uVar28 = (uint)uVar6; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
          uVar21 = uVar21 + 1;
        }
        *(byte *)(lVar23 + (ulonglong)uVar21) = bVar26;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        uVar25 = _DAT_145fc6ed8;
        uVar21 = uVar20 << 4 | uVar21;
        uVar20 = *(int *)(param_1 + 0x10) << 4;
        uVar28 = uVar21;
        while ((uVar21 != uVar20 &&
               (uVar28 = uVar21,
               SBORROW1('\0',*(char *)((ulonglong)(uVar21 & 0xf) +
                                      (ulonglong)(uVar21 >> 4) * 0x510 +
                                      *(longlong *)(param_1 + 0x18)))))) {
          uVar21 = uVar21 + 1;
          uVar28 = uVar20;
        }
        pauVar2 = (undefined1 (*) [16])
                  ((ulonglong)((uVar28 & 0xf) * 0x50) + 0x20 +
                  *(longlong *)(param_1 + 0x18) + (ulonglong)(uVar28 >> 4) * 0x510);
        *(ulonglong *)pauVar2[-1] = (ulonglong)param_2 | param_3 << 0x20;
        *pauVar2 = ZEXT416(uVar25);
        *(undefined8 *)pauVar2[1] = _DAT_146159bc0;
        *(undefined8 *)(pauVar2[1] + 8) = 0;
        uVar9 = _UNK_14614f7f8;
        *(undefined8 *)pauVar2[2] = _DAT_14614f7f0;
        *(undefined8 *)(pauVar2[2] + 8) = uVar9;
        pauVar2[3] = ZEXT816(0) << 0x20;
        if (*param_4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140027bc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)param_4[1])(pauVar2);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000140027b9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)param_4[1])();
        return;
      }
    }
    uVar21 = uVar28 * 2;
    if (uVar28 * 2 < 0x11) {
      uVar21 = 0x10;
    }
    uVar22 = ((ulonglong)uVar21 * 100 + 0x56) / 0x57 - 1;
    uVar22 = uVar22 >> 1 | uVar22;
    uVar22 = uVar22 >> 2 | uVar22;
    uVar22 = uVar22 >> 4 | uVar22;
    uVar22 = uVar22 >> 8 | uVar22;
    uVar22 = (uVar22 >> 0x10 | uVar22) + 1 >> 4;
    auVar30 = ZEXT1664(auVar30._0_16_);
    auVar31 = ZEXT1664(auVar31._0_16_);
    lVar23 = func_0x000144d9c140(0x10);
    lVar24 = 0;
    *(longlong *)(param_1 + 0x18) = lVar23;
    *(int *)(param_1 + 0x10) = (int)uVar22;
    do {
      *(undefined1 (*) [16])(lVar23 + lVar24) = auVar31._0_16_;
      lVar24 = lVar24 + 0x510;
    } while (uVar22 * 0x510 - lVar24 != 0);
    if ((ulonglong)uVar25 != 0) {
      lVar23 = lVar4;
      do {
        lVar24 = 0;
        do {
          if (!SBORROW1('\0',*(char *)(lVar23 + lVar24))) {
            uVar21 = *(uint *)(lVar23 + 0x14 + lVar24 * 0x50);
            uVar28 = uVar21 >> 7;
            while( true ) {
              uVar28 = uVar28 & *(int *)(param_1 + 0x10) - 1U;
              lVar29 = (ulonglong)uVar28 * 0x510;
              auVar3 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x18) + lVar29);
              auVar3 = vpsignb_avx(auVar3,auVar3);
              uVar6 = (ushort)(SUB161(auVar3 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
              if (uVar6 != 0) break;
              uVar28 = uVar28 + 1;
            }
            uVar28 = 0;
            for (uVar20 = (uint)uVar6; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
              uVar28 = uVar28 + 1;
            }
            lVar29 = *(longlong *)(param_1 + 0x18) + lVar29;
            puVar27 = (undefined8 *)(lVar24 * 0x50 + lVar23 + 0x10);
            *(byte *)(lVar29 + (ulonglong)uVar28) = (byte)uVar21 & 0x7f;
            uVar9 = *puVar27;
            uVar10 = puVar27[1];
            uVar11 = puVar27[2];
            uVar12 = puVar27[3];
            uVar13 = puVar27[4];
            uVar14 = puVar27[5];
            uVar15 = puVar27[6];
            uVar16 = puVar27[7];
            uVar17 = puVar27[7];
            uVar18 = puVar27[8];
            uVar19 = puVar27[9];
            uVar22 = (ulonglong)(uVar28 * 0x50);
            puVar1 = (undefined8 *)(lVar29 + 0x40 + uVar22);
            *puVar1 = puVar27[6];
            puVar1[1] = uVar17;
            puVar1[2] = uVar18;
            puVar1[3] = uVar19;
            puVar1 = (undefined8 *)(lVar29 + 0x30 + uVar22);
            *puVar1 = uVar13;
            puVar1[1] = uVar14;
            puVar1[2] = uVar15;
            puVar1[3] = uVar16;
            puVar1 = (undefined8 *)(lVar29 + 0x10 + uVar22);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            puVar1[2] = uVar11;
            puVar1[3] = uVar12;
            *(undefined1 *)(lVar23 + lVar24) = 0x80;
          }
          lVar24 = lVar24 + 1;
        } while (lVar24 != 0x10);
        lVar23 = lVar23 + 0x510;
      } while (lVar23 != (ulonglong)uVar25 * 0x510 + lVar4);
    }
    if (lVar4 != 0) {
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar31 = ZEXT1664(auVar31._0_16_);
      func_0x000144d9c130(lVar4);
    }
  } while( true );
}

