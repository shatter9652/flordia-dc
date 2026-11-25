// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008ce40  size: 1082 bytes
// Name:    FUN_14008ce40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008ce40(ulonglong param_1,int param_2,undefined2 param_3,int *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  ushort uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  ulonglong auStack_68 [2];
  uint uStack_54;
  ulonglong uStack_50;
  ulonglong uStack_48;
  byte bVar10;
  
  uStack_50 = param_1 >> 0x10 & 0xffff;
  uVar6 = (ushort)param_1;
  uVar11 = (ushort)(param_1 >> 0x10);
  if (uVar6 == uVar11) {
    return;
  }
  if ((uVar11 & uVar6) == 0xffff) {
    return;
  }
  iVar1 = *param_4;
  uStack_48 = param_1 & 0xffff;
  if (iVar1 != 0) {
    auStack_68[0] = uStack_48;
    auStack_68[1] = uStack_50;
    uVar14 = (auStack_68[uVar11 < uVar6] + 0x651e95c4d06fbfb1 ^ auStack_68[uVar6 <= uVar11]) *
             -0x622015f714c7d297;
    lVar5 = *(longlong *)(param_4 + 2);
    lVar15 = (uVar14 >> 0x2f ^ auStack_68[uVar6 <= uVar11] ^ uVar14) * -0x622015f714c7d297;
    uVar7 = ((uint)((ulonglong)lVar15 >> 0x2f) ^ (uint)lVar15) * -0x14c7d297;
    uVar8 = uVar7 >> 7;
    bVar10 = (byte)uVar7;
    bVar9 = bVar10 & 0x7f;
    auVar16._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar16[8] = bVar9;
    auVar16[9] = bVar9;
    auVar16[10] = bVar9;
    auVar16[0xb] = bVar9;
    auVar16[0xc] = bVar9;
    auVar16[0xd] = bVar9;
    auVar16[0xe] = bVar9;
    auVar16[0xf] = bVar9;
    uVar14 = param_1;
    while( true ) {
      uVar8 = uVar8 & iVar1 - 1U;
      auVar17 = *(undefined1 (*) [16])(lVar5 + (ulonglong)uVar8 * 0x90);
      auVar3 = vpcmpeqb_avx(auVar17,auVar16);
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
      if (uVar6 != 0) {
        uVar7 = (uint)uVar6;
        do {
          uVar12 = 0;
          for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          uVar4 = *(uint *)((ulonglong)uVar8 * 0x90 + lVar5 + 0x10 + (ulonglong)uVar12 * 8);
          param_1 = uVar14 & 0xffffffff;
          if (((ushort)uVar4 == (ushort)uVar14 && uVar4 >> 0x10 == (uint)uStack_50) ||
             ((ushort)(uVar4 >> 0x10) == (ushort)uVar14 && (ushort)uVar4 == uVar11)) {
            uVar7 = uVar8 << 4 | uVar12;
            if (uVar7 == 0xffffffff) goto LAB_14008cf31;
            lVar5 = lVar5 + (ulonglong)(uVar7 >> 4) * 0x90 + 0x14 + (ulonglong)(uVar12 & 0xf) * 8;
            goto LAB_14008d087;
          }
          uVar14 = uVar14 & 0xffffffff;
          uVar7 = uVar7 - 1 & uVar7;
        } while (uVar7 != 0);
      }
      auVar17 = vpsignb_avx(auVar17,auVar17);
      param_1 = uVar14;
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar8 = uVar8 + 1;
    }
  }
LAB_14008cf31:
  if (iVar1 != 0) {
    auStack_68[0] = uStack_48;
    auStack_68[1] = uStack_50;
    uVar14 = (auStack_68[uVar11 < (ushort)param_1] + 0x651e95c4d06fbfb1 ^
             auStack_68[(ushort)param_1 <= uVar11]) * -0x622015f714c7d297;
    lVar5 = *(longlong *)(param_4 + 2);
    lVar15 = (uVar14 >> 0x2f ^ auStack_68[(ushort)param_1 <= uVar11] ^ uVar14) * -0x622015f714c7d297
    ;
    uVar7 = ((uint)((ulonglong)lVar15 >> 0x2f) ^ (uint)lVar15) * -0x14c7d297;
    uVar8 = uVar7 >> 7;
    bVar10 = (byte)uVar7;
    bVar9 = bVar10 & 0x7f;
    auVar17._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar17[8] = bVar9;
    auVar17[9] = bVar9;
    auVar17[10] = bVar9;
    auVar17[0xb] = bVar9;
    auVar17[0xc] = bVar9;
    auVar17[0xd] = bVar9;
    auVar17[0xe] = bVar9;
    auVar17[0xf] = bVar9;
    while( true ) {
      uVar8 = uVar8 & iVar1 - 1U;
      auVar16 = *(undefined1 (*) [16])(lVar5 + (ulonglong)uVar8 * 0x90);
      lVar15 = lVar5 + (ulonglong)uVar8 * 0x90;
      auVar3 = vpcmpeqb_avx(auVar16,auVar17);
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
      if (uVar6 != 0) {
        uVar7 = (uint)uVar6;
        do {
          uVar12 = 0;
          for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          uStack_54 = *(uint *)(lVar15 + 0x10 + (ulonglong)uVar12 * 8);
          if (((ushort)uStack_54 == (ushort)param_1 && uStack_54 >> 0x10 == (uint)uStack_50) ||
             ((ushort)(uStack_54 >> 0x10) == (ushort)param_1 && (ushort)uStack_54 == uVar11)) {
            uVar12 = uVar12 | uVar8 << 4;
            while ((uVar7 = iVar1 << 4, uVar12 != iVar1 << 4 &&
                   (uVar7 = uVar12,
                   SBORROW1('\0',*(char *)((ulonglong)(uVar12 & 0xf) +
                                          (ulonglong)(uVar12 >> 4) * 0x90 + lVar5))))) {
              uVar12 = uVar12 + 1;
            }
            uVar14 = (ulonglong)(uVar7 & 0xf);
            uVar13 = (ulonglong)(uVar7 >> 4);
            goto LAB_14008d077;
          }
          uVar7 = uVar7 - 1 & uVar7;
          param_1 = param_1 & 0xffffffff;
        } while (uVar7 != 0);
      }
      auVar16 = vpsignb_avx(auVar16,auVar16);
      uVar6 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar16[0xf] >> 7) << 0xf;
      if (uVar6 != 0) break;
      uVar8 = uVar8 + 1;
    }
    if (param_4[1] != (uint)(iVar1 * 0x570) / 100) {
      uVar7 = 0;
      for (uVar12 = (uint)uVar6; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      *(byte *)(lVar15 + (ulonglong)uVar7) = bVar9;
      param_4[1] = param_4[1] + 1;
      uVar7 = uVar8 << 4 | uVar7;
      lVar5 = *(longlong *)(param_4 + 2);
      uVar8 = uVar7;
      while ((uVar7 != *param_4 << 4 &&
             (uVar8 = uVar7,
             SBORROW1('\0',*(char *)((ulonglong)(uVar7 & 0xf) +
                                    (ulonglong)(uVar7 >> 4) * 0x90 + lVar5))))) {
        uVar7 = uVar7 + 1;
        uVar8 = *param_4 << 4;
      }
      uVar14 = (ulonglong)(uVar8 & 0xf);
      uVar13 = (ulonglong)(uVar8 >> 4);
      lVar15 = uVar13 * 0x90 + lVar5;
      *(int *)(lVar15 + 0x10 + uVar14 * 8) = (int)param_1;
      *(undefined4 *)(lVar15 + 0x14 + uVar14 * 8) = 0xffffffff;
LAB_14008d077:
      lVar5 = uVar13 * 0x90 + lVar5 + 0x14 + uVar14 * 8;
LAB_14008d087:
      *(undefined2 *)(lVar5 + ((ulonglong)(param_2 * 2 & 2) ^ 2)) = param_3;
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

