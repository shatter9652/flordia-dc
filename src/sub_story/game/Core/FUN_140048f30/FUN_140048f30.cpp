// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048f30  size: 486 bytes
// Name:    FUN_140048f30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140049390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140048f30(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  undefined1 auVar13 [16];
  byte bVar12;
  
  do {
    lVar6 = _DAT_149ab7d88;
    if (_DAT_149ab7d80 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *param_2;
      uVar8 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = uVar8 >> 0x10 ^ uVar8;
      uVar9 = uVar8 >> 7;
      bVar12 = (byte)uVar8;
      bVar11 = bVar12 & 0x7f;
      auVar13._0_8_ =
           CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar13[8] = bVar11;
      auVar13[9] = bVar11;
      auVar13[10] = bVar11;
      auVar13[0xb] = bVar11;
      auVar13[0xc] = bVar11;
      auVar13[0xd] = bVar11;
      auVar13[0xe] = bVar11;
      auVar13[0xf] = bVar11;
      while( true ) {
        uVar9 = uVar9 & _DAT_149ab7d80 - 1U;
        auVar2 = *(undefined1 (*) [16])(_DAT_149ab7d88 + (ulonglong)uVar9 * 400);
        lVar1 = _DAT_149ab7d88 + (ulonglong)uVar9 * 400;
        auVar3 = vpcmpeqb_avx(auVar2,auVar13);
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
        if (uVar4 != 0) {
          uVar8 = (uint)uVar4;
          do {
            uVar7 = 0;
            for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            if (*(uint *)(lVar1 + 0x10 + (ulonglong)uVar7 * 0x18) == uVar10) {
              uVar10 = _DAT_149ab7d80 << 4;
              uVar7 = uVar7 | uVar9 << 4;
              while ((uVar8 = uVar10, uVar7 != uVar10 &&
                     (uVar8 = uVar7,
                     SBORROW1('\0',*(char *)((ulonglong)(uVar7 & 0xf) +
                                            (ulonglong)(uVar7 >> 4) * 400 + _DAT_149ab7d88))))) {
                uVar7 = uVar7 + 1;
              }
              *(uint *)(param_1 + 1) = uVar10;
              *(uint *)((longlong)param_1 + 0xc) = uVar8;
              *(undefined1 *)(param_1 + 2) = 0;
              *param_1 = lVar6;
              return;
            }
            uVar8 = uVar8 - 1 & uVar8;
          } while (uVar8 != 0);
        }
        auVar2 = vpsignb_avx(auVar2,auVar2);
        uVar4 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
        if (uVar4 != 0) break;
        uVar9 = uVar9 + 1;
      }
      uVar10 = _DAT_149ab7d84;
      if (_DAT_149ab7d84 != (uint)(_DAT_149ab7d80 * 0x570) / 100) {
        uVar10 = 0;
        for (uVar8 = (uint)uVar4; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        _DAT_149ab7d84 = _DAT_149ab7d84 + 1;
        uVar8 = _DAT_149ab7d80 << 4;
        *(byte *)(lVar1 + (ulonglong)uVar10) = bVar11;
        uVar10 = uVar9 << 4 | uVar10;
        while ((uVar9 = uVar8, uVar10 != uVar8 &&
               (uVar9 = uVar10,
               SBORROW1('\0',*(char *)((ulonglong)(uVar10 & 0xf) +
                                      (ulonglong)(uVar10 >> 4) * 400 + lVar6))))) {
          uVar10 = uVar10 + 1;
        }
        *param_1 = lVar6;
        *(uint *)(param_1 + 1) = uVar8;
        *(uint *)((longlong)param_1 + 0xc) = uVar9;
        *(undefined1 *)(param_1 + 2) = 1;
        return;
      }
    }
    FUN_140049390(uVar10 * 2);
  } while( true );
}

