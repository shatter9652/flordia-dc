// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400275d0  size: 520 bytes
// Name:    FUN_1400275d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400275d0(uint param_1,longlong param_2,int param_3,uint param_4)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  bVar10 = (byte)param_4;
  if (param_1 != 0) {
    bVar11 = bVar10 & 0x7f;
    uVar4 = param_4 >> 7;
    auVar15._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar15[8] = bVar11;
    auVar15[9] = bVar11;
    auVar15[10] = bVar11;
    auVar15[0xb] = bVar11;
    auVar15[0xc] = bVar11;
    auVar15[0xd] = bVar11;
    auVar15[0xe] = bVar11;
    auVar15[0xf] = bVar11;
    do {
      uVar4 = uVar4 & param_1 - 1;
      auVar16 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar4 * 0x510);
      auVar1 = vpcmpeqb_avx(auVar16,auVar15);
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
      uVar8 = (uint)uVar2;
      if (uVar2 != 0) {
        lVar6 = (ulonglong)uVar4 * 0x510 + param_2;
LAB_14002761d:
        uVar12 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar12 = uVar12 + 1;
        }
        if ((*(int *)(lVar6 + 0x10 + (ulonglong)(uVar12 * 0x50)) != param_3) ||
           (*(uint *)(lVar6 + 0x14 + (ulonglong)(uVar12 * 0x50)) != param_4)) goto LAB_140027636;
        uVar12 = uVar12 | uVar4 << 4;
        if (uVar12 != 0xffffffff) {
          uVar8 = param_1 * 0x10;
          uVar4 = uVar12;
          while ((uVar5 = uVar4, uVar12 != uVar8 &&
                 (uVar4 = uVar12, uVar5 = uVar8,
                 SBORROW1('\0',*(char *)((ulonglong)(uVar12 & 0xf) +
                                        (ulonglong)(uVar12 >> 4) * 0x510 + param_2))))) {
            uVar12 = uVar12 + 1;
            uVar4 = uVar8;
          }
          goto LAB_14002769c;
        }
        break;
      }
LAB_14002763d:
      auVar16 = vpsignb_avx(auVar16,auVar16);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar4 = uVar4 + 1;
    } while( true );
  }
  uVar4 = param_1 << 4;
  uVar5 = uVar4;
LAB_14002769c:
  uVar8 = uVar4 & 0xf;
  uVar14 = (ulonglong)(uVar4 >> 4);
  lVar6 = uVar14 * 0x510;
  uVar4 = uVar8 * 0x50;
  if (lVar6 + (ulonglong)uVar4 != (ulonglong)(param_1 & 0xfffffff) * 0x510) goto LAB_1400277be;
  uVar12 = uVar5;
  if (param_1 != 0) {
    bVar11 = bVar10 & 0x7f;
    uVar8 = param_4 >> 7;
    auVar16._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar16[8] = bVar11;
    auVar16[9] = bVar11;
    auVar16[10] = bVar11;
    auVar16[0xb] = bVar11;
    auVar16[0xc] = bVar11;
    auVar16[0xd] = bVar11;
    auVar16[0xe] = bVar11;
    auVar16[0xf] = bVar11;
    while( true ) {
      uVar8 = uVar8 & param_1 - 1;
      auVar15 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar8 * 0x510);
      auVar1 = vpcmpeqb_avx(auVar15,auVar16);
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
      uVar9 = (uint)uVar2;
      if (uVar2 != 0) {
        lVar7 = (ulonglong)uVar8 * 0x510 + param_2;
        do {
          uVar13 = 0;
          for (uVar3 = uVar9; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          if ((*(int *)(lVar7 + 0x10 + (ulonglong)(uVar13 * 0x50)) == -2) &&
             (*(uint *)(lVar7 + 0x14 + (ulonglong)(uVar13 * 0x50)) == param_4)) {
            uVar13 = uVar13 | uVar8 << 4;
            if ((uVar13 == 0xffffffff) || (uVar13 == uVar5)) goto LAB_140027791;
            goto LAB_140027766;
          }
          uVar9 = uVar9 - 1 & uVar9;
        } while (uVar9 != 0);
      }
      auVar15 = vpsignb_avx(auVar15,auVar15);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar8 = uVar8 + 1;
    }
  }
  goto LAB_140027791;
LAB_140027636:
  uVar8 = uVar8 - 1 & uVar8;
  if (uVar8 == 0) goto LAB_14002763d;
  goto LAB_14002761d;
  while (uVar13 = uVar13 + 1, uVar12 = uVar5, uVar5 != uVar13) {
LAB_140027766:
    uVar12 = uVar13;
    if (!SBORROW1('\0',*(char *)((ulonglong)(uVar13 & 0xf) +
                                (ulonglong)(uVar13 >> 4) * 0x510 + param_2))) break;
  }
LAB_140027791:
  uVar8 = uVar12 & 0xf;
  uVar14 = (ulonglong)(uVar12 >> 4);
  if (uVar14 * 0x510 + 0x10 + (ulonglong)(uVar8 * 0x50) == lVar6 + 0x10 + (ulonglong)uVar4) {
    return 0;
  }
LAB_1400277be:
  return (ulonglong)(uVar8 * 0x50) + 0x20 + param_2 + uVar14 * 0x510;
}

