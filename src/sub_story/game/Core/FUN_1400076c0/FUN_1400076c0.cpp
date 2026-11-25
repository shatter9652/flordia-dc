// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400076c0  size: 653 bytes
// Name:    FUN_1400076c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f16a00, FUN_142363360, FUN_140006180, FUN_140007340, FUN_1400746e0, FUN_144f16960, FUN_144f16a90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400076c0(longlong param_1,uint param_2,char param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  uint uVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  bool bVar19;
  byte bVar20;
  undefined1 auVar21 [64];
  undefined4 uStack_64;
  ulonglong auStack_60 [4];
  
  if (param_3 != '\0') {
    puVar1 = (uint *)(param_1 + 0xc0);
    cVar10 = FUN_144f16960(puVar1);
    if (cVar10 == '\0') {
      puVar2 = (ulonglong *)(param_1 + 200);
      uVar14 = *(uint *)(param_1 + 0xc0);
LAB_140007728:
      do {
        uVar17 = uVar14;
        if ((uVar17 & 0x1ff0000) != 0) {
          LOCK();
          uVar14 = *puVar1;
          bVar19 = uVar17 == uVar14;
          if (bVar19) {
            *puVar1 = uVar17 + 0x100;
            uVar14 = uVar17;
          }
          UNLOCK();
          if (bVar19) {
            uVar15 = (uint)(*puVar2 >> 7) & 0xffffff;
            uVar12 = *puVar2;
            if ((*puVar2 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar12 < 0x100000000) {
                  uVar11 = *puVar2;
                }
                else {
                  LOCK();
                  uVar11 = *puVar2;
                  if (uVar12 == uVar11) {
                    *puVar2 = uVar12 - 0x100000000;
                    uVar11 = uVar12;
                  }
                  UNLOCK();
                  uVar14 = uVar17;
                  if (uVar12 == uVar11) goto LAB_140007728;
                }
                uVar15 = uVar15 - 1;
                uVar12 = uVar11;
              } while (uVar15 != 0);
            }
            uVar12 = *puVar2;
            do {
              while (auStack_60[0] = uVar12, (longlong)auStack_60[0] < 0x100000000) {
                cVar10 = FUN_140006180(puVar2,1,auStack_60);
                uVar14 = uVar17;
                uVar12 = auStack_60[0];
                if (cVar10 != '\0') goto LAB_140007728;
              }
              LOCK();
              uVar12 = *puVar2;
              if (auStack_60[0] == uVar12) {
                *puVar2 = auStack_60[0] - 0x100000000;
                uVar12 = auStack_60[0];
              }
              UNLOCK();
              uVar14 = uVar17;
            } while (auStack_60[0] != uVar12);
          }
          goto LAB_140007728;
        }
        LOCK();
        uVar14 = *puVar1;
        bVar19 = uVar17 == uVar14;
        if (bVar19) {
          *puVar1 = uVar17 + 1;
          uVar14 = uVar17;
        }
        UNLOCK();
      } while (!bVar19);
      FUN_144f16a90(puVar1);
    }
    FUN_144f16a00(puVar1);
  }
  if ((ulonglong)*(uint *)(param_1 + 0x9c) != 0) {
    puVar18 = *(undefined8 **)(param_1 + 0xa0);
    puVar3 = puVar18 + (ulonglong)*(uint *)(param_1 + 0x9c) * 5;
    bVar9 = (byte)param_2;
    bVar20 = bVar9 & 0x7f;
    auVar21 = ZEXT1664(CONCAT115(bVar20,CONCAT114(bVar20,CONCAT113(bVar20,CONCAT112(bVar20,CONCAT111
                                                  (bVar20,CONCAT110(bVar20,CONCAT19(bVar20,CONCAT18(
                                                  bVar20,CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(
                                                  bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9
                                                  ,CONCAT11(bVar9,bVar9))))))) & 0x7f7f7f7f7f7f7f7f)
                                                  ))))))));
    do {
      lVar13 = FUN_140007340(*puVar18,*(undefined4 *)((longlong)puVar18 + 0xc));
      if ((lVar13 != 0) && (*(int *)(lVar13 + 8) != 0)) {
        lVar5 = *(longlong *)(lVar13 + 0x10);
        uVar14 = param_2 >> 7;
        while( true ) {
          uVar14 = uVar14 & *(int *)(lVar13 + 8) - 1U;
          auVar4 = *(undefined1 (*) [16])(lVar5 + (ulonglong)uVar14 * 0x510);
          auVar6 = vpcmpeqb_avx(auVar4,auVar21._0_16_);
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
            uVar17 = (uint)uVar7;
            do {
              uVar15 = 0;
              for (uVar8 = uVar17; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar15 = uVar15 + 1;
              }
              if (*(uint *)((ulonglong)uVar14 * 0x510 + lVar5 + 0x10 + (ulonglong)(uVar15 * 0x50))
                  == param_2) {
                uVar14 = uVar14 << 4 | uVar15;
                if (uVar14 == 0xffffffff) goto LAB_1400078f2;
                lVar13 = (ulonglong)((uVar15 & 0xf) * 0x50) + 0x10 +
                         lVar5 + (ulonglong)(uVar14 >> 4) * 0x510;
                if (*(int *)(lVar13 + 0x44) == 0) {
                  if ((*(byte *)(lVar13 + 0x4e) & 1) != 0) {
                    uVar16 = 0;
                    goto LAB_140007904;
                  }
                  if (*(int *)(puVar18 + 2) == 0) goto LAB_1400078f2;
                }
                uStack_64 = 0xffffffff;
                cVar10 = FUN_1400746e0(*(undefined8 *)
                                        (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) + 0x40),
                                       auVar6._0_8_,&uStack_64);
                if (cVar10 != '\0') {
                  if (param_3 == '\0') {
                    return uStack_64;
                  }
                  FUN_142363360(param_1 + 0xc0);
                  return uStack_64;
                }
                goto LAB_1400078f2;
              }
              uVar17 = uVar17 - 1 & uVar17;
            } while (uVar17 != 0);
          }
          auVar4 = vpsignb_avx(auVar4,auVar4);
          if ((((((((((((((((SUB161(auVar4 >> 7,0) & 1) != 0 || (SUB161(auVar4 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar4 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar4 >> 0x1f,0) & 1) != 0) || (SUB161(auVar4 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar4 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar4 >> 0x37,0) & 1) != 0) || (SUB161(auVar4 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar4 >> 0x47,0) & 1) != 0) || (SUB161(auVar4 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar4 >> 0x57,0) & 1) != 0) || (SUB161(auVar4 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar4 >> 0x67,0) & 1) != 0) || (SUB161(auVar4 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar4 >> 0x77,0) & 1) != 0) || auVar4[0xf] < '\0') break;
          uVar14 = uVar14 + 1;
        }
      }
LAB_1400078f2:
      puVar18 = puVar18 + 5;
    } while (puVar18 != puVar3);
  }
  uVar16 = 0xffffffff;
LAB_140007904:
  if (param_3 != '\0') {
    FUN_142363360(param_1 + 0xc0);
  }
  return uVar16;
}

