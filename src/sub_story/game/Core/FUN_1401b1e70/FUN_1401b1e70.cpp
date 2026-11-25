// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b1e70  size: 585 bytes
// Name:    FUN_1401b1e70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b1e70(longlong param_1,uint param_2,uint param_3,char param_4)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (param_4 == '\0') {
    uVar5 = *(ulonglong *)(param_1 + 0x80);
    if (param_2 != 0) {
      uVar6 = _DAT_1487663a0;
      while (uVar6 != 0) {
        uVar8 = 0x1f - LZCOUNT(param_2);
        uVar6 = (uVar8 >> 0x10 ^ uVar8) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar6 = uVar6 >> 0x10 ^ uVar6;
        uVar7 = uVar6 >> 7;
        bVar9 = (byte)uVar6;
        bVar10 = bVar9 & 0x7f;
        auVar11._0_8_ =
             CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(
                                                  bVar9,CONCAT11(bVar9,bVar9))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar11[8] = bVar10;
        auVar11[9] = bVar10;
        auVar11[10] = bVar10;
        auVar11[0xb] = bVar10;
        auVar11[0xc] = bVar10;
        auVar11[0xd] = bVar10;
        auVar11[0xe] = bVar10;
        auVar11[0xf] = bVar10;
        while( true ) {
          uVar7 = uVar7 & _DAT_1487663a0 - 1;
          auVar12 = *(undefined1 (*) [16])(_DAT_1487663b0 + (ulonglong)uVar7 * 0x110);
          auVar1 = vpcmpeqb_avx(auVar12,auVar11);
          uVar2 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
          uVar6 = (uint)uVar2;
          if (uVar2 != 0) {
            do {
              uVar3 = 0;
              for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar3 = uVar3 + 1;
              }
              if (*(uint *)((ulonglong)uVar7 * 0x110 + _DAT_1487663b0 + 0x10 +
                           (ulonglong)(uVar3 << 4)) == uVar8) {
                uVar6 = uVar7 << 4 | uVar3;
                if (uVar6 != 0xffffffff) {
                  uVar5 = ~*(ulonglong *)
                            ((ulonglong)((uVar3 & 0xf) << 4) + 0x18 +
                            (ulonglong)(uVar6 >> 4) * 0x110 + _DAT_1487663b0) & uVar5;
                }
                goto LAB_1401b1f66;
              }
              uVar6 = uVar6 - 1 & uVar6;
            } while (uVar6 != 0);
          }
          auVar12 = vpsignb_avx(auVar12,auVar12);
          if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar12 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar12 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar12 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar12 >> 0x2f,0) & 1) != 0) || (SUB161(auVar12 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar12 >> 0x47,0) & 1) != 0) || (SUB161(auVar12 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar12 >> 0x57,0) & 1) != 0) || (SUB161(auVar12 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar12 >> 0x67,0) & 1) != 0) || (SUB161(auVar12 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar12 >> 0x77,0) & 1) != 0) || auVar12[0xf] < '\0') break;
          uVar7 = uVar7 + 1;
        }
LAB_1401b1f66:
        param_2 = ~(0x80000000U >> (LZCOUNT(param_2) & 0x1fU)) & param_2;
        uVar6 = param_2;
      }
    }
    if (param_3 != 0) {
      uVar6 = _DAT_1487663a0;
      while (uVar6 != 0) {
        uVar6 = LZCOUNT(param_3) ^ 0x3f;
        uVar7 = (uVar6 * -0x7a143595 >> 0xd ^ uVar6 * -0x7a143595) * -0x3d4d51cb;
        uVar7 = uVar7 >> 0x10 ^ uVar7;
        uVar8 = uVar7 >> 7;
        bVar9 = (byte)uVar7;
        bVar10 = bVar9 & 0x7f;
        auVar12._0_8_ =
             CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(
                                                  bVar9,CONCAT11(bVar9,bVar9))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar12[8] = bVar10;
        auVar12[9] = bVar10;
        auVar12[10] = bVar10;
        auVar12[0xb] = bVar10;
        auVar12[0xc] = bVar10;
        auVar12[0xd] = bVar10;
        auVar12[0xe] = bVar10;
        auVar12[0xf] = bVar10;
        while( true ) {
          uVar8 = uVar8 & _DAT_1487663a0 - 1;
          auVar11 = *(undefined1 (*) [16])(_DAT_1487663b0 + (ulonglong)uVar8 * 0x110);
          auVar1 = vpcmpeqb_avx(auVar11,auVar12);
          uVar2 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
          uVar7 = (uint)uVar2;
          if (uVar2 != 0) {
            do {
              uVar3 = 0;
              for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar3 = uVar3 + 1;
              }
              if (*(uint *)((ulonglong)uVar8 * 0x110 + _DAT_1487663b0 + 0x10 +
                           (ulonglong)(uVar3 << 4)) == uVar6) {
                uVar7 = uVar8 << 4 | uVar3;
                if (uVar7 != 0xffffffff) {
                  uVar5 = ~*(ulonglong *)
                            ((ulonglong)((uVar3 & 0xf) << 4) + 0x18 +
                            (ulonglong)(uVar7 >> 4) * 0x110 + _DAT_1487663b0) & uVar5;
                }
                goto LAB_1401b2032;
              }
              uVar7 = uVar7 - 1 & uVar7;
            } while (uVar7 != 0);
          }
          auVar11 = vpsignb_avx(auVar11,auVar11);
          if ((((((((((((((((SUB161(auVar11 >> 7,0) & 1) != 0 || (SUB161(auVar11 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar11 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar11 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar11 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar11 >> 0x2f,0) & 1) != 0) || (SUB161(auVar11 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar11 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar11 >> 0x47,0) & 1) != 0) || (SUB161(auVar11 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar11 >> 0x57,0) & 1) != 0) || (SUB161(auVar11 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar11 >> 0x67,0) & 1) != 0) || (SUB161(auVar11 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar11 >> 0x77,0) & 1) != 0) || auVar11[0xf] < '\0') break;
          uVar8 = uVar8 + 1;
        }
LAB_1401b2032:
        param_3 = param_3 & ~(1 << (uVar6 & 0x1f));
        uVar6 = param_3;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  *(ulonglong *)(param_1 + 0x80) = uVar5;
  return;
}

