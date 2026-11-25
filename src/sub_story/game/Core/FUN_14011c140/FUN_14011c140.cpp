// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011c140  size: 1061 bytes
// Name:    FUN_14011c140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fcc8f0, FUN_144fcc8c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011c140(uint param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  char *pcVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong in_stack_ffffffffffffff58;
  undefined8 uStack_98;
  undefined1 auStack_88 [16];
  byte abStack_78 [16];
  undefined1 auStack_68 [16];
  char acStack_48 [8];
  byte bVar10;
  
  if (param_7 == '\0') {
    FUN_144fcc8c0(param_3,param_4,param_5,param_6,in_stack_ffffffffffffff58 & 0xffffffffffffff00);
    return;
  }
  if (param_4 == 0) {
    return;
  }
  auStack_88[1] = DAT_146159485;
  auStack_88[0] = DAT_146159485;
  auStack_88[2] = DAT_146159485;
  auStack_88[3] = DAT_146159485;
  auStack_88[4] = DAT_146159485;
  auStack_88[5] = DAT_146159485;
  auStack_88[6] = DAT_146159485;
  auStack_88[7] = DAT_146159485;
  auStack_88[8] = DAT_146159485;
  auStack_88[9] = DAT_146159485;
  auStack_88[10] = DAT_146159485;
  auStack_88[0xb] = DAT_146159485;
  auStack_88[0xc] = DAT_146159485;
  auStack_88[0xd] = DAT_146159485;
  auStack_88[0xe] = DAT_146159485;
  auStack_88[0xf] = DAT_146159485;
  pcVar17 = auStack_88;
  uStack_98 = 2;
  auStack_68 = auStack_88;
  if (param_1 != 0) {
    lVar1 = param_2 + (ulonglong)param_1 * 0x18;
    uVar13 = 2;
LAB_14011c1bf:
    uVar11 = 0;
    if (uVar13 != 0) {
      uVar7 = uVar13 * 0x10;
      uVar11 = (uint)*(byte *)(param_2 + 8) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar11 = uVar11 >> 0x10 ^ uVar11;
      uVar12 = uVar11 >> 7;
      bVar9 = (byte)uVar11;
      bVar14 = bVar9 & 0x7f;
      auVar19._0_8_ =
           CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9))))))) & 0x7f7f7f7f7f7f7f7f;
      auVar19[8] = bVar14;
      auVar19[9] = bVar14;
      auVar19[10] = bVar14;
      auVar19[0xb] = bVar14;
      auVar19[0xc] = bVar14;
      auVar19[0xd] = bVar14;
      auVar19[0xe] = bVar14;
      auVar19[0xf] = bVar14;
      while( true ) {
        uVar12 = uVar12 & uVar13 - 1;
        auVar20 = *(undefined1 (*) [16])(pcVar17 + (ulonglong)uVar12 * 0x20);
        auVar3 = vpcmpeqb_avx(auVar20,auVar19);
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
        uVar8 = (uint)uVar4;
        uVar11 = uVar7;
        if (uVar4 != 0) {
          do {
            uVar15 = 0;
            for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            if (abStack_78[(ulonglong)uVar15 + (ulonglong)uVar12 * 0x20] == *(byte *)(param_2 + 8))
            {
              uVar15 = uVar15 | uVar12 << 4;
              if ((uVar15 == 0xffffffff) || (uVar15 == uVar7)) goto LAB_14011c297;
              goto LAB_14011c270;
            }
            uVar8 = uVar8 - 1 & uVar8;
          } while (uVar8 != 0);
        }
        auVar20 = vpsignb_avx(auVar20,auVar20);
        if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x1f,0) & 1) != 0) || (SUB161(auVar20 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
        uVar12 = uVar12 + 1;
      }
    }
    goto LAB_14011c297;
  }
  pcVar6 = acStack_48;
LAB_14011c494:
  do {
    if (!SBORROW1('\0',*pcVar17)) {
      *pcVar17 = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[1])) {
      pcVar17[1] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[2])) {
      pcVar17[2] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[3])) {
      pcVar17[3] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[4])) {
      pcVar17[4] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[5])) {
      pcVar17[5] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[6])) {
      pcVar17[6] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[7])) {
      pcVar17[7] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[8])) {
      pcVar17[8] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[9])) {
      pcVar17[9] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[10])) {
      pcVar17[10] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[0xb])) {
      pcVar17[0xb] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[0xc])) {
      pcVar17[0xc] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[0xd])) {
      pcVar17[0xd] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[0xe])) {
      pcVar17[0xe] = -0x80;
    }
    if (!SBORROW1('\0',pcVar17[0xf])) {
      pcVar17[0xf] = -0x80;
    }
    pcVar17 = pcVar17 + 0x20;
  } while (pcVar17 != pcVar6);
  return;
  while (uVar15 = uVar15 + 1, uVar11 = uVar7, uVar7 != uVar15) {
LAB_14011c270:
    uVar11 = uVar15;
    if (!SBORROW1('\0',pcVar17[(ulonglong)(uVar15 & 0xf) + (ulonglong)(uVar15 >> 4) * 0x20])) break;
  }
LAB_14011c297:
  if (((ulonglong)(uVar11 >> 4) << 5 | (ulonglong)(uVar11 & 0xf)) == (ulonglong)uVar13 << 5) {
    FUN_144fcc8f0(param_4,*(undefined1 *)(param_2 + 8),param_5,param_3,param_6);
    if ((uint)uStack_98 != 0) {
      bVar14 = *(byte *)(param_2 + 8);
      uVar13 = ((uint)bVar14 * -0x7a143595 >> 0xd ^ (uint)bVar14 * -0x7a143595) * -0x3d4d51cb;
      uVar13 = uVar13 >> 0x10 ^ uVar13;
      uVar11 = uVar13 >> 7;
      bVar10 = (byte)uVar13;
      bVar9 = bVar10 & 0x7f;
      auVar20._0_8_ =
           CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar20[8] = bVar9;
      auVar20[9] = bVar9;
      auVar20[10] = bVar9;
      auVar20[0xb] = bVar9;
      auVar20[0xc] = bVar9;
      auVar20[0xd] = bVar9;
      auVar20[0xe] = bVar9;
      auVar20[0xf] = bVar9;
      while( true ) {
        uVar11 = uVar11 & (uint)uStack_98 - 1;
        lVar16 = (ulonglong)uVar11 * 0x20;
        auVar19 = *(undefined1 (*) [16])(pcVar17 + lVar16);
        auVar3 = vpcmpeqb_avx(auVar19,auVar20);
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
        uVar7 = (uint)uVar4;
        uVar13 = (uint)uStack_98;
        if (uVar4 != 0) {
          do {
            uVar12 = 0;
            for (uVar8 = uVar7; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar12 = uVar12 + 1;
            }
            if (abStack_78[(ulonglong)uVar12 + lVar16] == bVar14) {
              uVar12 = uVar12 | uVar11 << 4;
              if (uVar12 == (uint)uStack_98 * 0x10) goto LAB_14011c414;
              goto LAB_14011c435;
            }
            uVar7 = uVar7 - 1 & uVar7;
          } while (uVar7 != 0);
        }
        auVar19 = vpsignb_avx(auVar19,auVar19);
        uVar4 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar19[0xf] >> 7) << 0xf;
        if (uVar4 != 0) break;
        uVar11 = uVar11 + 1;
      }
      if (uStack_98._4_4_ != ((uint)uStack_98 * 0x570) / 100) {
        uVar7 = 0;
        for (uVar12 = (uint)uVar4; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar11 = uVar11 << 4 | uVar7;
        pcVar17[(ulonglong)uVar7 + lVar16] = bVar9;
        uStack_98 = CONCAT44(uStack_98._4_4_ + 1,(uint)uStack_98);
        while ((uVar7 = (uint)uStack_98 << 4, uVar11 != (uint)uStack_98 << 4 &&
               (uVar7 = uVar11,
               SBORROW1('\0',pcVar17[(ulonglong)(uVar11 & 0xf) + (ulonglong)(uVar11 >> 4) * 0x20])))
              ) {
          uVar11 = uVar11 + 1;
        }
        pcVar17[(ulonglong)(uVar7 & 0xf) + 0x10 + (ulonglong)(uVar7 >> 4) * 0x20] = bVar14;
        goto LAB_14011c414;
      }
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14011c414:
  param_2 = param_2 + 0x18;
  if (param_2 == lVar1) goto LAB_14011c475;
  goto LAB_14011c1bf;
  while (bVar18 = (uint)uStack_98 * 0x10 - 1 != uVar12, uVar12 = uVar12 + 1, bVar18) {
LAB_14011c435:
    if (!SBORROW1('\0',pcVar17[(ulonglong)(uVar12 & 0xf) + (ulonglong)(uVar12 >> 4) * 0x20])) break;
  }
  goto LAB_14011c414;
LAB_14011c475:
  if (uVar13 == 0) {
    return;
  }
  pcVar6 = auStack_88 + (ulonglong)uVar13 * 0x20;
  goto LAB_14011c494;
}

