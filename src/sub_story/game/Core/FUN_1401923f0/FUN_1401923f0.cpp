// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401923f0  size: 370 bytes
// Name:    FUN_1401923f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140192770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401923f0(int *param_1,longlong *param_2,uint *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar13;
  undefined1 auVar14 [16];
  byte bVar12;
  
  do {
    iVar3 = *param_1;
    if (iVar3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *param_3;
      lVar4 = *(longlong *)(param_1 + 2);
      bVar12 = (byte)uVar9;
      bVar11 = bVar12 & 0x7f;
      uVar8 = uVar9 >> 7;
      auVar14._0_8_ =
           CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar14[8] = bVar11;
      auVar14[9] = bVar11;
      auVar14[10] = bVar11;
      auVar14[0xb] = bVar11;
      auVar14[0xc] = bVar11;
      auVar14[0xd] = bVar11;
      auVar14[0xe] = bVar11;
      auVar14[0xf] = bVar11;
      while( true ) {
        uVar8 = uVar8 & iVar3 - 1U;
        auVar2 = *(undefined1 (*) [16])(lVar4 + (ulonglong)uVar8 * 0x690);
        lVar1 = lVar4 + (ulonglong)uVar8 * 0x690;
        auVar5 = vpcmpeqb_avx(auVar2,auVar14);
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
          uVar10 = (uint)uVar6;
          do {
            uVar13 = 0;
            for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
              uVar13 = uVar13 + 1;
            }
            if (*(uint *)(lVar1 + 0x10 + (ulonglong)uVar13 * 0x68) == uVar9) {
              uVar9 = iVar3 << 4;
              uVar13 = uVar13 | uVar8 << 4;
              while ((uVar8 = uVar9, uVar13 != uVar9 &&
                     (uVar8 = uVar13,
                     SBORROW1('\0',*(char *)((ulonglong)(uVar13 & 0xf) +
                                            (ulonglong)(uVar13 >> 4) * 0x690 + lVar4))))) {
                uVar13 = uVar13 + 1;
              }
              *(uint *)(param_2 + 1) = uVar9;
              *(uint *)((longlong)param_2 + 0xc) = uVar8;
              *(undefined1 *)(param_2 + 2) = 0;
              *param_2 = lVar4;
              return;
            }
            uVar10 = uVar10 - 1 & uVar10;
          } while (uVar10 != 0);
        }
        auVar2 = vpsignb_avx(auVar2,auVar2);
        uVar6 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
        if (uVar6 != 0) break;
        uVar8 = uVar8 + 1;
      }
      uVar9 = param_1[1];
      if (uVar9 != (uint)(iVar3 * 0x570) / 100) {
        uVar9 = 0;
        for (uVar10 = (uint)uVar6; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        *(byte *)(lVar1 + (ulonglong)uVar9) = bVar11;
        param_1[1] = param_1[1] + 1;
        uVar9 = uVar8 << 4 | uVar9;
        uVar10 = *param_1 << 4;
        uVar8 = uVar9;
        while ((uVar9 != uVar10 &&
               (uVar8 = uVar9,
               SBORROW1('\0',*(char *)((ulonglong)(uVar9 & 0xf) +
                                      (ulonglong)(uVar9 >> 4) * 0x690 + *(longlong *)(param_1 + 2)))
               ))) {
          uVar9 = uVar9 + 1;
          uVar8 = uVar10;
        }
        *param_2 = *(longlong *)(param_1 + 2);
        *(uint *)(param_2 + 1) = uVar10;
        *(uint *)((longlong)param_2 + 0xc) = uVar8;
        *(undefined1 *)(param_2 + 2) = 1;
        return;
      }
    }
    FUN_140192770(param_1,uVar9 * 2);
  } while( true );
}

