// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140180d00  size: 499 bytes
// Name:    FUN_140180d00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14200ab10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140180d00(int *param_1,longlong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  
  do {
    iVar3 = *param_1;
    if (iVar3 == 0) {
      uVar13 = 0;
    }
    else {
      uVar4 = *param_3;
      uVar10 = (uVar4 >> 0x21 ^ uVar4) * -0xae502812aa7333;
      lVar5 = *(longlong *)(param_1 + 2);
      uVar10 = (uVar10 >> 0x21 ^ uVar10) * -0x3b314601e57a13ad;
      uVar10 = uVar10 >> 0x21 ^ uVar10;
      bVar9 = (byte)uVar10;
      uVar12 = (uint)uVar10 >> 7;
      bVar11 = bVar9 & 0x7f;
      auVar15._0_8_ =
           CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9))))))) & 0x7f7f7f7f7f7f7f7f;
      auVar15[8] = bVar11;
      auVar15[9] = bVar11;
      auVar15[10] = bVar11;
      auVar15[0xb] = bVar11;
      auVar15[0xc] = bVar11;
      auVar15[0xd] = bVar11;
      auVar15[0xe] = bVar11;
      auVar15[0xf] = bVar11;
      while( true ) {
        uVar12 = uVar12 & iVar3 - 1U;
        auVar2 = *(undefined1 (*) [16])(lVar5 + (ulonglong)uVar12 * 0x790);
        lVar1 = lVar5 + (ulonglong)uVar12 * 0x790;
        auVar6 = vpcmpeqb_avx(auVar2,auVar15);
        uVar7 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf;
        uVar13 = (uint)uVar7;
        if (uVar7 != 0) {
          do {
            uVar14 = 0;
            for (uVar8 = uVar13; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            if (*(ulonglong *)(lVar1 + 0x10 + (ulonglong)uVar14 * 0x78) == uVar4) {
              uVar13 = iVar3 << 4;
              uVar14 = uVar14 | uVar12 << 4;
              while ((uVar12 = uVar13, uVar14 != uVar13 &&
                     (uVar12 = uVar14,
                     SBORROW1('\0',*(char *)((ulonglong)(uVar14 & 0xf) +
                                            (ulonglong)(uVar14 >> 4) * 0x790 + lVar5))))) {
                uVar14 = uVar14 + 1;
              }
              *(uint *)(param_2 + 1) = uVar13;
              *(uint *)((longlong)param_2 + 0xc) = uVar12;
              *(undefined1 *)(param_2 + 2) = 0;
              *param_2 = lVar5;
              return;
            }
            uVar13 = uVar13 - 1 & uVar13;
          } while (uVar13 != 0);
        }
        auVar2 = vpsignb_avx(auVar2,auVar2);
        uVar7 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
        if (uVar7 != 0) break;
        uVar12 = uVar12 + 1;
      }
      uVar13 = param_1[1];
      if (uVar13 != (uint)(iVar3 * 0x570) / 100) {
        uVar13 = 0;
        for (uVar14 = (uint)uVar7; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        *(byte *)(lVar1 + (ulonglong)uVar13) = bVar11;
        param_1[1] = param_1[1] + 1;
        uVar13 = uVar12 << 4 | uVar13;
        uVar14 = *param_1 << 4;
        uVar12 = uVar13;
        while ((uVar13 != uVar14 &&
               (uVar12 = uVar13,
               SBORROW1('\0',*(char *)((ulonglong)(uVar13 & 0xf) +
                                      (ulonglong)(uVar13 >> 4) * 0x790 + *(longlong *)(param_1 + 2))
                       )))) {
          uVar13 = uVar13 + 1;
          uVar12 = uVar14;
        }
        *param_2 = *(longlong *)(param_1 + 2);
        *(uint *)(param_2 + 1) = uVar14;
        *(uint *)((longlong)param_2 + 0xc) = uVar12;
        *(undefined1 *)(param_2 + 2) = 1;
        return;
      }
    }
    FUN_14200ab10(param_1,uVar13 * 2);
  } while( true );
}

