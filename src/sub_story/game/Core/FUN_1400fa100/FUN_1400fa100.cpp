// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fa100  size: 2460 bytes
// Name:    FUN_1400fa100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141adcbd0, FUN_141de4400, FUN_1455bf800, FUN_140006180, FUN_14557a5a0, FUN_140323580, FUN_1451e4410, FUN_1401bd1f0, FUN_1403c9020, FUN_144fc21d0, FUN_140465670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400fa100(uint *param_1,undefined4 *param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  byte bVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong unaff_GS_OFFSET;
  bool bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulonglong uStack_a0;
  undefined4 uStack_94;
  ulonglong uStack_90;
  uint uStack_84;
  char cStack_80;
  int iStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  uint *puStack_68;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  uint *puStack_50;
  undefined4 *puStack_48;
  
  if (param_3 == 0) {
    return (undefined8 *)0x0;
  }
  uStack_a0 = 0;
  uVar10 = uStack_a0;
  puStack_68 = param_1;
  puStack_48 = param_2;
  if (*(short *)(param_3 + 0x18) != 0) {
    uVar10 = 0;
    uVar17 = 0;
    do {
      FUN_14557a5a0(&uStack_90,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar17 * 8));
      iVar5 = (int)uStack_90;
      if ((int)uStack_90 == 0) {
        return (undefined8 *)0x0;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        iStack_6c = iVar5;
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
      }
      else {
        iStack_6c = (int)uStack_90;
      }
      uStack_54 = *puStack_48;
      FUN_1455bf800(&uStack_94,&uStack_54,&iStack_6c);
      uVar10 = func_0x000144db9180(&uStack_94,4,uVar10);
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(ushort *)(param_3 + 0x18));
  }
  uStack_a0 = uVar10;
  puVar1 = puStack_68 + 8;
  puVar2 = (ulonglong *)(puStack_68 + 10);
  uVar8 = puStack_68[8];
LAB_1400fa232:
  do {
    uVar22 = uVar8;
    puVar6 = puStack_68;
    if ((uVar22 & 0x1ff0000) != 0) {
      LOCK();
      uVar8 = *puVar1;
      bVar23 = uVar22 == uVar8;
      if (bVar23) {
        *puVar1 = uVar22 + 0x100;
        uVar8 = uVar22;
      }
      UNLOCK();
      if (bVar23) {
        uVar15 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar10 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar10 < 0x100000000) {
              uVar17 = *puVar2;
            }
            else {
              LOCK();
              uVar17 = *puVar2;
              if (uVar10 == uVar17) {
                *puVar2 = uVar10 - 0x100000000;
                uVar17 = uVar10;
              }
              UNLOCK();
              uVar8 = uVar22;
              if (uVar10 == uVar17) goto LAB_1400fa232;
            }
            uVar15 = uVar15 - 1;
            uVar10 = uVar17;
          } while (uVar15 != 0);
        }
        uVar10 = *puVar2;
        do {
          while (uStack_90 = uVar10, (longlong)uStack_90 < 0x100000000) {
            cVar7 = FUN_140006180(puVar2,1,&uStack_90);
            uVar8 = uVar22;
            uVar10 = uStack_90;
            if (cVar7 != '\0') goto LAB_1400fa232;
          }
          LOCK();
          uVar10 = *puVar2;
          if (uStack_90 == uVar10) {
            *puVar2 = uStack_90 - 0x100000000;
            uVar10 = uStack_90;
          }
          UNLOCK();
          uVar8 = uVar22;
        } while (uStack_90 != uVar10);
      }
      goto LAB_1400fa232;
    }
    LOCK();
    uVar8 = *puVar1;
    bVar23 = uVar22 == uVar8;
    if (bVar23) {
      *puVar1 = uVar22 + 1;
      uVar8 = uVar22;
    }
    UNLOCK();
  } while (!bVar23);
  uVar8 = puStack_68[4];
  if (uVar8 == 0) {
    lVar12 = *(longlong *)(puStack_68 + 6);
  }
  else {
    uVar10 = (uStack_a0 >> 0x21 ^ uStack_a0) * -0xae502812aa7333;
    lVar12 = *(longlong *)(puStack_68 + 6);
    uVar10 = (uVar10 >> 0x21 ^ uVar10) * -0x3b314601e57a13ad;
    uVar10 = uVar10 >> 0x21 ^ uVar10;
    bVar19 = (byte)uVar10;
    uVar22 = (uint)uVar10 >> 7;
    bVar14 = bVar19 & 0x7f;
    auVar24._0_8_ =
         CONCAT17(bVar19,CONCAT16(bVar19,CONCAT15(bVar19,CONCAT14(bVar19,CONCAT13(bVar19,CONCAT12(
                                                  bVar19,CONCAT11(bVar19,bVar19))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar24[8] = bVar14;
    auVar24[9] = bVar14;
    auVar24[10] = bVar14;
    auVar24[0xb] = bVar14;
    auVar24[0xc] = bVar14;
    auVar24[0xd] = bVar14;
    auVar24[0xe] = bVar14;
    auVar24[0xf] = bVar14;
    while( true ) {
      uVar22 = uVar22 & uVar8 - 1;
      auVar25 = *(undefined1 (*) [16])(lVar12 + (ulonglong)uVar22 * 0x110);
      auVar26 = vpcmpeqb_avx(auVar25,auVar24);
      uVar3 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
      if (uVar3 != 0) {
        uVar15 = (uint)uVar3;
        do {
          uVar20 = 0;
          for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar20 = uVar20 + 1;
          }
          if (*(ulonglong *)((ulonglong)uVar22 * 0x110 + lVar12 + 0x10 + (ulonglong)(uVar20 << 4))
              == uStack_a0) {
            uVar20 = uVar20 | uVar22 << 4;
            if (uVar20 == 0xffffffff) goto LAB_1400fa414;
            uVar15 = uVar8 * 0x10;
            uVar22 = uVar20;
            goto joined_r0x0001400fa3aa;
          }
          uVar15 = uVar15 - 1 & uVar15;
        } while (uVar15 != 0);
      }
      auVar25 = vpsignb_avx(auVar25,auVar25);
      if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar25 >> 0x4f,0) & 1) != 0) || (SUB161(auVar25 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar25 >> 0x5f,0) & 1) != 0) || (SUB161(auVar25 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar25 >> 0x6f,0) & 1) != 0) || (SUB161(auVar25 >> 0x77,0) & 1) != 0) ||
          auVar25[0xf] < '\0') break;
      uVar22 = uVar22 + 1;
    }
  }
LAB_1400fa414:
  uVar22 = uVar8 << 4;
LAB_1400fa419:
  uVar10 = (ulonglong)((uVar22 & 0xf) << 4);
  lVar21 = (ulonglong)(uVar22 >> 4) * 0x110;
  if (lVar21 + uVar10 == (ulonglong)(uVar8 & 0xfffffff) * 0x110) {
    puStack_50 = puStack_68 + 4;
    FUN_140323580(puVar1);
    puVar2 = (ulonglong *)(puVar6 + 0xc);
    uVar8 = puVar6[8];
LAB_1400fa46a:
    do {
      uVar22 = uVar8;
      if ((uVar22 & 0x10000ff) != 0) {
        LOCK();
        uVar8 = *puVar1;
        bVar23 = uVar22 == uVar8;
        if (bVar23) {
          *puVar1 = uVar22 + 0x10000;
          uVar8 = uVar22;
        }
        UNLOCK();
        if (bVar23) {
          uVar15 = (uint)(*puVar2 >> 7) & 0xffffff;
          uVar10 = *puVar2;
          if ((*puVar2 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar10 < 0x100000000) {
                uVar17 = *puVar2;
              }
              else {
                LOCK();
                uVar17 = *puVar2;
                if (uVar10 == uVar17) {
                  *puVar2 = uVar10 - 0x100000000;
                  uVar17 = uVar10;
                }
                UNLOCK();
                uVar8 = uVar22;
                if (uVar10 == uVar17) goto LAB_1400fa46a;
              }
              uVar15 = uVar15 - 1;
              uVar10 = uVar17;
            } while (uVar15 != 0);
          }
          uVar10 = *puVar2;
          do {
            while (uStack_90 = uVar10, (longlong)uStack_90 < 0x100000000) {
              cVar7 = FUN_140006180(puVar2,1,&uStack_90);
              uVar8 = uVar22;
              uVar10 = uStack_90;
              if (cVar7 != '\0') goto LAB_1400fa46a;
            }
            LOCK();
            uVar10 = *puVar2;
            if (uStack_90 == uVar10) {
              *puVar2 = uStack_90 - 0x100000000;
              uVar10 = uStack_90;
            }
            UNLOCK();
            uVar8 = uVar22;
          } while (uStack_90 != uVar10);
        }
        goto LAB_1400fa46a;
      }
      LOCK();
      uVar8 = *puVar1;
      bVar23 = uVar22 == uVar8;
      if (bVar23) {
        *puVar1 = uVar22 | 0x1000000;
        uVar8 = uVar22;
      }
      UNLOCK();
    } while (!bVar23);
    uVar8 = puStack_68[4];
    lVar12 = *(longlong *)(puStack_68 + 6);
    if (uVar8 != 0) {
      uVar10 = (uStack_a0 >> 0x21 ^ uStack_a0) * -0xae502812aa7333;
      uVar10 = (uVar10 >> 0x21 ^ uVar10) * -0x3b314601e57a13ad;
      uVar10 = uVar10 >> 0x21 ^ uVar10;
      bVar19 = (byte)uVar10;
      uVar22 = (uint)uVar10 >> 7;
      bVar14 = bVar19 & 0x7f;
      auVar25._0_8_ =
           CONCAT17(bVar19,CONCAT16(bVar19,CONCAT15(bVar19,CONCAT14(bVar19,CONCAT13(bVar19,CONCAT12(
                                                  bVar19,CONCAT11(bVar19,bVar19))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar25[8] = bVar14;
      auVar25[9] = bVar14;
      auVar25[10] = bVar14;
      auVar25[0xb] = bVar14;
      auVar25[0xc] = bVar14;
      auVar25[0xd] = bVar14;
      auVar25[0xe] = bVar14;
      auVar25[0xf] = bVar14;
      while( true ) {
        uVar22 = uVar22 & uVar8 - 1;
        auVar24 = *(undefined1 (*) [16])(lVar12 + (ulonglong)uVar22 * 0x110);
        auVar26 = vpcmpeqb_avx(auVar24,auVar25);
        uVar3 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
        if (uVar3 != 0) {
          uVar15 = (uint)uVar3;
          do {
            uVar20 = 0;
            for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar20 = uVar20 + 1;
            }
            if (*(ulonglong *)((ulonglong)uVar22 * 0x110 + lVar12 + 0x10 + (ulonglong)(uVar20 << 4))
                == uStack_a0) {
              uVar20 = uVar20 | uVar22 << 4;
              if (uVar20 == 0xffffffff) goto LAB_1400fa619;
              uVar15 = uVar8 * 0x10;
              uVar22 = uVar20;
              goto joined_r0x0001400fa5ed;
            }
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        auVar24 = vpsignb_avx(auVar24,auVar24);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        uVar22 = uVar22 + 1;
      }
    }
LAB_1400fa619:
    uVar22 = uVar8 << 4;
LAB_1400fa650:
    uVar10 = (ulonglong)((uVar22 & 0xf) << 4);
    lVar21 = (ulonglong)(uVar22 >> 4) * 0x110;
    if (lVar21 + uVar10 == (ulonglong)(uVar8 & 0xfffffff) * 0x110) {
      uVar3 = *(ushort *)(param_3 + 0x18);
      puVar11 = (undefined8 *)func_0x000144d9c160(0x38,8);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &UNK_1465f6d88;
        puVar11[4] = 0;
        *(undefined4 *)(puVar11 + 5) = 0;
        puVar11[6] = 0;
        *(undefined1 (*) [16])(puVar11 + 1) = (undefined1  [16])0x0;
        *(undefined4 *)(puVar11 + 3) = 0;
        if (uVar3 != 0) {
          lVar12 = func_0x000144d9c140(8,(ulonglong)uVar3 * 8);
          lVar21 = 0;
          do {
            if (lVar12 + lVar21 != 0) {
              FUN_1451e4410();
            }
            lVar21 = lVar21 + 8;
          } while ((ulonglong)uVar3 * 8 != lVar21);
          *(ushort *)((longlong)puVar11 + 0x1a) = uVar3;
          puVar11[2] = lVar12;
        }
      }
      if (*(short *)(param_3 + 0x18) != 0) {
        uVar10 = 0;
        do {
          FUN_14557a5a0(&uStack_94,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + uVar10 * 8));
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
            uStack_70 = uStack_94;
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
          }
          else {
            uStack_70 = uStack_94;
          }
          uStack_5c = *puStack_48;
          FUN_1455bf800(&uStack_58,&uStack_5c,&uStack_70);
          uVar8 = *puStack_68;
          lVar12 = *(longlong *)(puStack_68 + 2);
          if (uVar8 != 0) {
            uVar22 = (uStack_58 >> 0x10 ^ uStack_58) * -0x7a143595;
            uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
            uVar22 = uVar22 >> 0x10 ^ uVar22;
            uVar15 = uVar22 >> 7;
            bVar14 = (byte)uVar22;
            bVar19 = bVar14 & 0x7f;
            auVar26._0_8_ =
                 CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,
                                                  CONCAT12(bVar14,CONCAT11(bVar14,bVar14))))))) &
                 0x7f7f7f7f7f7f7f7f;
            auVar26[8] = bVar19;
            auVar26[9] = bVar19;
            auVar26[10] = bVar19;
            auVar26[0xb] = bVar19;
            auVar26[0xc] = bVar19;
            auVar26[0xd] = bVar19;
            auVar26[0xe] = bVar19;
            auVar26[0xf] = bVar19;
            do {
              uVar15 = uVar15 & uVar8 - 1;
              auVar24 = *(undefined1 (*) [16])(lVar12 + (ulonglong)uVar15 * 0x110);
              auVar25 = vpcmpeqb_avx(auVar24,auVar26);
              uVar3 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar25[0xf] >> 7) << 0xf;
              if (uVar3 != 0) {
                uVar22 = (uint)uVar3;
LAB_1400fa81d:
                uVar20 = 0;
                for (uVar4 = uVar22; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar20 = uVar20 + 1;
                }
                if (*(uint *)((ulonglong)uVar15 * 0x110 + lVar12 + 0x10 + (ulonglong)(uVar20 << 4))
                    != uStack_58) goto code_r0x0001400fa82f;
                uVar20 = uVar20 | uVar15 << 4;
                if (uVar20 != 0xffffffff) {
                  uVar22 = uVar20;
                  while ((uVar20 != uVar8 * 0x10 &&
                         (uVar22 = uVar20,
                         SBORROW1('\0',*(char *)((ulonglong)(uVar20 & 0xf) +
                                                (ulonglong)(uVar20 >> 4) * 0x110 + lVar12))))) {
                    uVar20 = uVar20 + 1;
                    uVar22 = uVar8 * 0x10;
                  }
                  goto LAB_1400fa88f;
                }
                break;
              }
LAB_1400fa836:
              auVar24 = vpsignb_avx(auVar24,auVar24);
              if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
              uVar15 = uVar15 + 1;
            } while( true );
          }
          uVar22 = uVar8 << 4;
LAB_1400fa88f:
          uVar17 = (ulonglong)((uVar22 & 0xf) << 4);
          lVar21 = (ulonglong)(uVar22 >> 4) * 0x110;
          if (lVar21 + uVar17 == (ulonglong)(uVar8 & 0xfffffff) * 0x110) {
            FUN_141de4400(puStack_50,&uStack_90,&uStack_a0);
            if (cStack_80 == '\x01') {
              uVar10 = (ulonglong)((uStack_84 & 0xf) << 4);
              lVar12 = (ulonglong)(uStack_84 >> 4) * 0x110 + uStack_90;
              *(ulonglong *)(uVar10 + 0x10 + lVar12) = uStack_a0;
              *(undefined8 *)(uVar10 + 0x18 + lVar12) = 0;
            }
            puVar18 = (undefined8 *)0x0;
            goto LAB_1400faa18;
          }
          lVar21 = lVar21 + 0x10 + uVar17;
          lVar13 = FUN_141adcbd0(*(undefined8 *)(lVar12 + 8 + lVar21));
          lVar16 = *(longlong *)(lVar12 + 8 + lVar21);
          if (lVar16 == 0) {
            lVar16 = 0;
            uVar9 = 0;
          }
          else {
            uVar9 = func_0x000145f407f0(lVar16);
          }
          FUN_1401bd1f0(&uStack_90,lVar16,uVar9);
          iStack_74 = FUN_144fc21d0(*(undefined8 *)(lVar12 + 8 + lVar21),0);
          uVar17 = func_0x000145431020(&iStack_74);
          lVar12 = *(longlong *)(_DAT_148d479c8 + 8 + (uVar17 & _DAT_148d479e0) * 0x10);
          if (lVar12 != _DAT_148d479b8) {
            if (iStack_74 != *(int *)(lVar12 + 0x10)) {
              do {
                if (lVar12 == *(longlong *)(_DAT_148d479c8 + (uVar17 & _DAT_148d479e0) * 0x10))
                goto LAB_1400fa96e;
                lVar12 = *(longlong *)(lVar12 + 8);
              } while (iStack_74 != *(int *)(lVar12 + 0x10));
            }
            if (lVar12 != _DAT_148d479b8) {
              *(uint *)(lVar13 + 0x3c) = (uint)*(ushort *)(lVar12 + 0x14);
            }
          }
LAB_1400fa96e:
          uVar3 = *(ushort *)(puVar11 + 3);
          *(ushort *)(puVar11 + 3) = uVar3 + 1;
          *(longlong *)(puVar11[2] + (ulonglong)uVar3 * 8) = lVar13;
          func_0x0001451e4400(puVar11);
          FUN_1403c9020(&uStack_90);
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(param_3 + 0x18));
      }
      FUN_141de4400(puStack_50,&uStack_90,&uStack_a0);
      if (cStack_80 == '\0') {
        puVar18 = *(undefined8 **)
                   ((ulonglong)((uStack_84 & 0xf) << 4) + 0x18 +
                   (ulonglong)(uStack_84 >> 4) * 0x110 + uStack_90);
      }
      else {
        uVar10 = (ulonglong)((uStack_84 & 0xf) << 4);
        lVar12 = (ulonglong)(uStack_84 >> 4) * 0x110 + uStack_90;
        *(ulonglong *)(uVar10 + 0x10 + lVar12) = uStack_a0;
        *(undefined8 **)(uVar10 + 0x18 + lVar12) = puVar11;
        puVar18 = puVar11;
        puVar11 = (undefined8 *)0x0;
      }
LAB_1400faa18:
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)(puVar11,1);
      }
    }
    else {
      puVar18 = *(undefined8 **)(lVar12 + lVar21 + 0x18 + uVar10);
    }
    FUN_140465670(puVar1);
  }
  else {
    puVar18 = *(undefined8 **)(lVar12 + lVar21 + 0x18 + uVar10);
    FUN_140323580(puVar1);
  }
  return puVar18;
joined_r0x0001400fa3aa:
  if (uVar20 == uVar15) goto LAB_1400fa419;
  if (!SBORROW1('\0',*(char *)((ulonglong)(uVar20 & 0xf) + (ulonglong)(uVar20 >> 4) * 0x110 + lVar12
                              ))) goto joined_r0x0001400fa3e0;
  uVar20 = uVar20 + 1;
  uVar22 = uVar15;
  goto joined_r0x0001400fa3aa;
joined_r0x0001400fa3e0:
  while ((uVar22 = uVar15, uVar20 != uVar15 &&
         (uVar22 = uVar20,
         SBORROW1('\0',*(char *)((ulonglong)(uVar20 & 0xf) +
                                (ulonglong)(uVar20 >> 4) * 0x110 + lVar12))))) {
    uVar20 = uVar20 + 1;
  }
  goto LAB_1400fa419;
joined_r0x0001400fa5ed:
  if (uVar20 == uVar15) goto LAB_1400fa650;
  if (!SBORROW1('\0',*(char *)((ulonglong)(uVar20 & 0xf) + (ulonglong)(uVar20 >> 4) * 0x110 + lVar12
                              ))) goto joined_r0x0001400fa623;
  uVar20 = uVar20 + 1;
  uVar22 = uVar15;
  goto joined_r0x0001400fa5ed;
joined_r0x0001400fa623:
  while ((uVar22 = uVar15, uVar20 != uVar15 &&
         (uVar22 = uVar20,
         SBORROW1('\0',*(char *)((ulonglong)(uVar20 & 0xf) +
                                (ulonglong)(uVar20 >> 4) * 0x110 + lVar12))))) {
    uVar20 = uVar20 + 1;
  }
  goto LAB_1400fa650;
code_r0x0001400fa82f:
  uVar22 = uVar22 - 1 & uVar22;
  if (uVar22 == 0) goto LAB_1400fa836;
  goto LAB_1400fa81d;
}

