// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b24f0  size: 1552 bytes
// Name:    FUN_1401b24f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b1e00, FUN_14286ced0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b24f0(longlong param_1,undefined8 param_2,undefined8 *param_3,int *param_4,int param_5,
                  longlong param_6)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  char cVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int *piVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined8 uStack_78;
  undefined8 uStack_70;
  byte bVar11;
  
  if (param_5 == 0) {
    param_5 = *param_4;
  }
  auVar24 = ZEXT464((uint)param_4[1]);
  auVar25 = ZEXT464((uint)param_4[3]);
  uVar13 = func_0x000143628dc0(param_4[8]);
  uVar21 = param_4[6];
  if (uVar21 == 0) {
    uVar21 = param_4[7];
    if (uVar21 == 0) {
      uVar19 = 0;
      goto LAB_1401b2739;
    }
    uVar19 = 0;
  }
  else {
    if (_DAT_1487663a0 == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      do {
        uVar20 = 0x1f - LZCOUNT(uVar21);
        uVar14 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar14 = uVar14 >> 0x10 ^ uVar14;
        uVar16 = uVar14 >> 7;
        bVar11 = (byte)uVar14;
        bVar10 = bVar11 & 0x7f;
        auVar22._0_8_ =
             CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,
                                                  CONCAT12(bVar11,CONCAT11(bVar11,bVar11))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar22[8] = bVar10;
        auVar22[9] = bVar10;
        auVar22[10] = bVar10;
        auVar22[0xb] = bVar10;
        auVar22[0xc] = bVar10;
        auVar22[0xd] = bVar10;
        auVar22[0xe] = bVar10;
        auVar22[0xf] = bVar10;
        while( true ) {
          uVar16 = uVar16 & _DAT_1487663a0 - 1;
          auVar23 = *(undefined1 (*) [16])(_DAT_1487663b0 + (ulonglong)uVar16 * 0x110);
          auVar6 = vpcmpeqb_avx(auVar23,auVar22);
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
          if (uVar7 != 0) {
            uVar14 = (uint)uVar7;
            do {
              uVar8 = 0;
              for (uVar9 = uVar14; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              if (*(uint *)((ulonglong)uVar16 * 0x110 + _DAT_1487663b0 + 0x10 +
                           (ulonglong)(uVar8 << 4)) == uVar20) {
                uVar14 = uVar16 << 4 | uVar8;
                if (uVar14 != 0xffffffff) {
                  uVar19 = uVar19 | *(ulonglong *)
                                     ((ulonglong)((uVar8 & 0xf) << 4) + 0x18 +
                                     (ulonglong)(uVar14 >> 4) * 0x110 + _DAT_1487663b0);
                }
                goto LAB_1401b2645;
              }
              uVar14 = uVar14 - 1 & uVar14;
            } while (uVar14 != 0);
          }
          auVar23 = vpsignb_avx(auVar23,auVar23);
          if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar23 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x2f,0) & 1) != 0) || (SUB161(auVar23 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
          uVar16 = uVar16 + 1;
        }
LAB_1401b2645:
        uVar21 = ~(0x80000000U >> (LZCOUNT(uVar21) & 0x1fU)) & uVar21;
      } while (uVar21 != 0);
    }
    uVar21 = param_4[7];
    if (uVar21 == 0) goto LAB_1401b2739;
  }
  uVar14 = _DAT_1487663a0;
  while (uVar14 != 0) {
    uVar20 = LZCOUNT(uVar21) ^ 0x3f;
    uVar14 = (uVar20 * -0x7a143595 >> 0xd ^ uVar20 * -0x7a143595) * -0x3d4d51cb;
    uVar14 = uVar14 >> 0x10 ^ uVar14;
    uVar16 = uVar14 >> 7;
    bVar11 = (byte)uVar14;
    bVar10 = bVar11 & 0x7f;
    auVar23._0_8_ =
         CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar23[8] = bVar10;
    auVar23[9] = bVar10;
    auVar23[10] = bVar10;
    auVar23[0xb] = bVar10;
    auVar23[0xc] = bVar10;
    auVar23[0xd] = bVar10;
    auVar23[0xe] = bVar10;
    auVar23[0xf] = bVar10;
    while( true ) {
      uVar16 = uVar16 & _DAT_1487663a0 - 1;
      auVar22 = *(undefined1 (*) [16])(_DAT_1487663b0 + (ulonglong)uVar16 * 0x110);
      auVar6 = vpcmpeqb_avx(auVar22,auVar23);
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
      if (uVar7 != 0) {
        uVar14 = (uint)uVar7;
        do {
          uVar8 = 0;
          for (uVar9 = uVar14; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          if (*(uint *)((ulonglong)uVar16 * 0x110 + _DAT_1487663b0 + 0x10 + (ulonglong)(uVar8 << 4))
              == uVar20) {
            uVar14 = uVar16 << 4 | uVar8;
            if (uVar14 != 0xffffffff) {
              uVar19 = uVar19 | *(ulonglong *)
                                 ((ulonglong)((uVar8 & 0xf) << 4) + 0x18 +
                                 (ulonglong)(uVar14 >> 4) * 0x110 + _DAT_1487663b0);
            }
            goto LAB_1401b272a;
          }
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
      auVar22 = vpsignb_avx(auVar22,auVar22);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar16 = uVar16 + 1;
    }
LAB_1401b272a:
    uVar21 = uVar21 & ~(1 << (uVar20 & 0x1f));
    uVar14 = uVar21;
  }
LAB_1401b2739:
  uStack_78 = *param_3;
  uStack_70 = param_3[1];
  FUN_14286ced0(param_1,param_5,auVar24._0_8_,auVar25._0_8_,uVar19,param_2,&uStack_78,uVar13,
                param_4[0x18],param_4[0x19]);
  *(undefined1 *)(param_1 + 0xd8) = 1;
  iVar3 = param_4[5];
  cVar12 = func_0x0001422d7950(iVar3);
  if (cVar12 != '\0') {
    lVar15 = func_0x0001422d7fa0(iVar3);
    *(float *)(param_1 + 0x30) = (float)*(uint *)(lVar15 + 8) * _DAT_146159ec4;
  }
  iVar3 = param_4[4];
  cVar12 = func_0x0001422d7950(iVar3);
  if (cVar12 != '\0') {
    lVar15 = func_0x0001422d7fa0(iVar3);
    *(float *)(param_1 + 0x34) = (float)*(uint *)(lVar15 + 8) * _DAT_146159ec4;
  }
  puVar1 = (uint *)(param_1 + 0xa8);
  if ((uint *)(param_4 + 0x1a) != puVar1) {
    *(undefined4 *)(param_1 + 0xac) = 0;
    uVar21 = param_4[0x1b];
    if ((ulonglong)uVar21 != 0) {
      uVar4 = *(undefined8 *)(param_4 + 0x1c);
      if (*puVar1 < uVar21) {
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          func_0x000144d9c130();
        }
        *(undefined8 *)(param_1 + 0xb0) = 0;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        lVar15 = func_0x000144d9c140(4,(ulonglong)uVar21 << 2);
        *(longlong *)(param_1 + 0xb0) = lVar15;
        if (lVar15 == 0) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *puVar1 = uVar21;
      }
      func_0x000145f40560(*(undefined8 *)(param_1 + 0xb0),uVar4);
      *(uint *)(param_1 + 0xac) = uVar21;
    }
  }
  uVar21 = param_4[0x16];
  if (uVar21 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    do {
      uVar16 = LZCOUNT(uVar21);
      uVar21 = ~(0x80000000U >> (uVar16 & 0x1f)) & uVar21;
      uVar14 = uVar14 | uVar16 ^ 0x1f;
    } while (uVar21 != 0);
  }
  *(uint *)(param_1 + 0x50) = uVar14;
  if ((ulonglong)(uint)param_4[0x1f] != 0) {
    piVar17 = *(int **)(param_4 + 0x20);
    piVar2 = piVar17 + (uint)param_4[0x1f];
    do {
      iVar3 = *piVar17;
      lVar15 = FUN_1401b1e00(iVar3);
      if (lVar15 != 0) {
        lVar15 = *(longlong *)(param_1 + 0xd0);
        uVar21 = *(uint *)(param_1 + 0xcc);
        uVar19 = (ulonglong)uVar21;
        if (uVar19 != 0) {
          lVar18 = 0;
          do {
            if (*(int *)(lVar15 + lVar18) == iVar3) goto LAB_1401b296c;
            lVar18 = lVar18 + 4;
          } while (uVar19 * 4 - lVar18 != 0);
        }
        if (uVar21 == *(uint *)(param_1 + 200)) {
          uVar14 = uVar21 >> 1;
          if (uVar21 < 2) {
            uVar14 = 1;
          }
          lVar15 = func_0x000144d9c140(4,(ulonglong)(uVar14 + uVar21) * 4);
          if (*(int *)(param_1 + 0xcc) != 0) {
            func_0x000145f40560(lVar15,*(undefined8 *)(param_1 + 0xd0));
          }
          if (*(longlong *)(param_1 + 0xd0) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(param_1 + 0xd0) = lVar15;
          *(uint *)(param_1 + 200) = uVar14 + uVar21;
          uVar19 = (ulonglong)*(uint *)(param_1 + 0xcc);
        }
        *(int *)(param_1 + 0xcc) = (int)uVar19 + 1;
        *(int *)(lVar15 + uVar19 * 4) = iVar3;
      }
LAB_1401b296c:
      piVar17 = piVar17 + 1;
    } while (piVar17 != piVar2);
  }
  if ((param_6 != 0) && ((ulonglong)*(uint *)(param_6 + 4) != 0)) {
    piVar17 = *(int **)(param_6 + 8);
    piVar2 = piVar17 + *(uint *)(param_6 + 4);
    do {
      iVar3 = *piVar17;
      lVar15 = FUN_1401b1e00(iVar3);
      if (lVar15 != 0) {
        lVar15 = *(longlong *)(param_1 + 0xd0);
        uVar21 = *(uint *)(param_1 + 0xcc);
        uVar19 = (ulonglong)uVar21;
        if (uVar19 != 0) {
          lVar18 = 0;
          do {
            if (*(int *)(lVar15 + lVar18) == iVar3) goto LAB_1401b2a66;
            lVar18 = lVar18 + 4;
          } while (uVar19 * 4 - lVar18 != 0);
        }
        if (uVar21 == *(uint *)(param_1 + 200)) {
          uVar14 = uVar21 >> 1;
          if (uVar21 < 2) {
            uVar14 = 1;
          }
          lVar15 = func_0x000144d9c140(4,(ulonglong)(uVar14 + uVar21) * 4);
          if (*(int *)(param_1 + 0xcc) != 0) {
            func_0x000145f40560(lVar15,*(undefined8 *)(param_1 + 0xd0));
          }
          if (*(longlong *)(param_1 + 0xd0) != 0) {
            func_0x000144d9c130();
          }
          *(longlong *)(param_1 + 0xd0) = lVar15;
          *(uint *)(param_1 + 200) = uVar14 + uVar21;
          uVar19 = (ulonglong)*(uint *)(param_1 + 0xcc);
        }
        *(int *)(param_1 + 0xcc) = (int)uVar19 + 1;
        *(int *)(lVar15 + uVar19 * 4) = iVar3;
      }
LAB_1401b2a66:
      piVar17 = piVar17 + 1;
    } while (piVar17 != piVar2);
  }
  return;
}

