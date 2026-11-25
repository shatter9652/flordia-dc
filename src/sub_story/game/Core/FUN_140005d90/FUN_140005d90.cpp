// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140005d90  size: 619 bytes
// Name:    FUN_140005d90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140007340, FUN_142ba2480, FUN_142363360, FUN_140007380, FUN_1400076c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140005d90(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint uVar12;
  byte bVar13;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_38;
  byte bVar14;
  
  piVar1 = (int *)(param_1 + 0x20 + (longlong)param_3 * 0x18);
  if (piVar1[2] != 0) {
    lVar4 = *(longlong *)(piVar1 + 4);
    bVar14 = (byte)param_2;
    bVar13 = bVar14 & 0x7f;
    uVar12 = param_2 >> 7;
    auVar18._0_8_ =
         CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,CONCAT12(
                                                  bVar14,CONCAT11(bVar14,bVar14))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar18[8] = bVar13;
    auVar18[9] = bVar13;
    auVar18[10] = bVar13;
    auVar18[0xb] = bVar13;
    auVar18[0xc] = bVar13;
    auVar18[0xd] = bVar13;
    auVar18[0xe] = bVar13;
    auVar18[0xf] = bVar13;
    while( true ) {
      uVar12 = uVar12 & piVar1[2] - 1U;
      auVar3 = *(undefined1 (*) [16])(lVar4 + (ulonglong)uVar12 * 0x510);
      auVar5 = vpcmpeqb_avx(auVar3,auVar18);
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
        uVar15 = (uint)uVar6;
        do {
          uVar7 = 0;
          for (uVar8 = uVar15; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          if (*(uint *)((ulonglong)uVar12 * 0x510 + lVar4 + 0x10 + (ulonglong)(uVar7 * 0x50)) ==
              param_2) {
            uVar12 = uVar12 << 4 | uVar7;
            if (uVar12 != 0xffffffff) {
              return (ulonglong)((uVar7 & 0xf) * 0x50) + lVar4 + (ulonglong)(uVar12 >> 4) * 0x510 +
                     0x20;
            }
            goto LAB_140005e62;
          }
          uVar15 = uVar15 - 1 & uVar15;
        } while (uVar15 != 0);
      }
      auVar3 = vpsignb_avx(auVar3,auVar3);
      if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 || (SUB161(auVar3 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar3 >> 0x17,0) & 1) != 0) || (SUB161(auVar3 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar3 >> 0x27,0) & 1) != 0) || (SUB161(auVar3 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar3 >> 0x37,0) & 1) != 0) || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar3 >> 0x47,0) & 1) != 0) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') break;
      uVar12 = uVar12 + 1;
    }
  }
LAB_140005e62:
  iVar9 = *piVar1;
  if (DAT_146d7a564 == '\0') {
    do {
      LOCK();
      iVar2 = *piVar1;
      bVar17 = iVar9 == iVar2;
      if (bVar17) {
        *piVar1 = iVar9 + -1;
        iVar2 = iVar9;
      }
      iVar9 = iVar2;
      UNLOCK();
    } while (!bVar17);
    FUN_142ba2480(&uStack_38,param_1 + 0xc0);
    do {
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = -1;
      }
      UNLOCK();
    } while (iVar9 != 0);
    uVar12 = *(uint *)(param_1 + 0x9c);
    if ((ulonglong)uVar12 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa0);
      lVar16 = 0;
      do {
        lVar11 = FUN_140007340(*(undefined8 *)(lVar4 + lVar16),*(undefined4 *)(lVar4 + 0xc + lVar16)
                              );
        if ((lVar11 != 0) &&
           (lVar11 = FUN_140007380(piVar1,param_2,*(undefined4 *)(lVar11 + 8),
                                   *(undefined8 *)(lVar11 + 0x10)), lVar11 != 0)) {
          FUN_142363360(uStack_38);
          if ((*(byte *)(lVar11 + 0x3d) & 2) == 0) {
            uVar10 = FUN_1400076c0(param_1,param_2,0);
            *(undefined4 *)(lVar11 + 0x38) = uVar10;
            *(byte *)(lVar11 + 0x3d) = *(byte *)(lVar11 + 0x3d) | 2;
          }
          goto LAB_140005f84;
        }
        lVar16 = lVar16 + 0x28;
      } while ((ulonglong)uVar12 * 0x28 != lVar16);
    }
    FUN_142363360(uStack_38);
    lVar11 = 0;
  }
  else {
    do {
      LOCK();
      iVar2 = *piVar1;
      bVar17 = iVar9 == iVar2;
      if (bVar17) {
        *piVar1 = iVar9 + -1;
        iVar2 = iVar9;
      }
      iVar9 = iVar2;
      UNLOCK();
    } while (!bVar17);
    FUN_142ba2480(&uStack_38,param_1 + 0xc0);
    do {
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = -1;
      }
      UNLOCK();
    } while (iVar9 != 0);
    uVar12 = *(uint *)(param_1 + 0x9c);
    if ((ulonglong)uVar12 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa0);
      lVar16 = 0;
      do {
        lVar11 = FUN_140007340(*(undefined8 *)(lVar4 + lVar16),*(undefined4 *)(lVar4 + 0xc + lVar16)
                              );
        if ((lVar11 != 0) &&
           (lVar11 = FUN_140007380(piVar1,param_2,*(undefined4 *)(lVar11 + 8),
                                   *(undefined8 *)(lVar11 + 0x10)), lVar11 != 0)) {
          if ((*(byte *)(lVar11 + 0x3d) & 2) == 0) {
            uVar10 = FUN_1400076c0(param_1,param_2,0);
            *(undefined4 *)(lVar11 + 0x38) = uVar10;
            *(byte *)(lVar11 + 0x3d) = *(byte *)(lVar11 + 0x3d) | 2;
          }
          goto LAB_140005f19;
        }
        lVar16 = lVar16 + 0x28;
      } while ((ulonglong)uVar12 * 0x28 != lVar16);
    }
    lVar11 = 0;
LAB_140005f19:
    FUN_142363360(uStack_38);
  }
LAB_140005f84:
  *piVar1 = 1;
  return lVar11;
}

