// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019090  size: 383 bytes
// Name:    FUN_140019090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_14582c260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140019090(uint param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  char cVar8;
  ushort uVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  byte bVar16;
  uint uVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  longlong lStack_20;
  byte bVar17;
  
  lVar12 = _DAT_14ab7f640;
  if ((param_1 != 0) && (*(uint *)(_DAT_14ab7f640 + 0x28) != 0)) {
    for (puVar11 = *(uint **)(*(longlong *)(_DAT_14ab7f640 + 0x20) +
                             ((ulonglong)param_1 % (ulonglong)*(uint *)(_DAT_14ab7f640 + 0x28)) * 8)
        ; puVar11 != (uint *)0x0; puVar11 = *(uint **)(puVar11 + 4)) {
      if (*puVar11 == param_1) {
        if (puVar11[2] == 0) {
          return;
        }
        puVar11 = puVar11 + 2;
        LOCK();
        *puVar11 = *puVar11 - 1;
        UNLOCK();
        if (*puVar11 != 0) {
          return;
        }
        if ((param_2 != 0) && (*(uint *)(param_2 + -4) == param_1)) {
LAB_1400191b2:
          puVar2 = (ulonglong *)(lVar12 + 0x80);
          FUN_140004b40(puVar2);
          uVar9 = *(ushort *)(lVar12 + 0x78);
          if (uVar9 == *(ushort *)(lVar12 + 0x7a)) {
            FUN_14582c260(lVar12 + 0x70,uVar9 + 0x100);
            uVar9 = *(ushort *)(lVar12 + 0x78);
          }
          *(ushort *)(lVar12 + 0x78) = uVar9 + 1;
          *(longlong *)(*(longlong *)(lVar12 + 0x70) + (ulonglong)uVar9 * 8) = param_2;
          piVar1 = (int *)(lVar12 + 0x90);
          *piVar1 = *piVar1 + -1;
          uVar14 = *puVar2;
          if (*piVar1 == 0) {
            do {
              uVar13 = uVar14;
              LOCK();
              uVar14 = *puVar2;
              if (uVar13 == uVar14) {
                *puVar2 = (ulonglong)((int)uVar13 - 1) | 0xffffffff00000000;
                uVar14 = uVar13;
              }
              UNLOCK();
            } while (uVar13 != uVar14);
            if ((uVar13 & 0xfffffffe) != 0) {
              plVar15 = (longlong *)(lVar12 + 0x88);
              lStack_20 = *(longlong *)(lVar12 + 0x88);
              do {
                while (lStack_20 < 0) {
                  cVar8 = FUN_1400062d0(plVar15,1,&lStack_20);
                  if (cVar8 != '\0') {
                    return;
                  }
                }
                LOCK();
                lVar12 = *plVar15;
                if (lStack_20 == lVar12) {
                  *plVar15 = lStack_20 + 0x100000000;
                  lVar12 = lStack_20;
                }
                UNLOCK();
                bVar19 = lStack_20 != lVar12;
                lStack_20 = lVar12;
              } while (bVar19);
              return;
            }
          }
          return;
        }
        if (*(int *)(_DAT_14ab73ae8 + 0x20) == 0) {
          return;
        }
        lVar4 = *(longlong *)(_DAT_14ab73ae8 + 0x28);
        bVar17 = (byte)param_1;
        bVar16 = bVar17 & 0x7f;
        uVar10 = param_1 >> 7;
        auVar20._0_8_ =
             CONCAT17(bVar17,CONCAT16(bVar17,CONCAT15(bVar17,CONCAT14(bVar17,CONCAT13(bVar17,
                                                  CONCAT12(bVar17,CONCAT11(bVar17,bVar17))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar20[8] = bVar16;
        auVar20[9] = bVar16;
        auVar20[10] = bVar16;
        auVar20[0xb] = bVar16;
        auVar20[0xc] = bVar16;
        auVar20[0xd] = bVar16;
        auVar20[0xe] = bVar16;
        auVar20[0xf] = bVar16;
        do {
          uVar10 = uVar10 & *(int *)(_DAT_14ab73ae8 + 0x20) - 1U;
          auVar3 = *(undefined1 (*) [16])(lVar4 + (ulonglong)uVar10 * 0x110);
          auVar5 = vpcmpeqb_avx(auVar3,auVar20);
          uVar9 = (ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
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
          if (uVar9 != 0) {
            uVar18 = (uint)uVar9;
            do {
              uVar6 = 0;
              for (uVar7 = uVar18; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if (*(uint *)((ulonglong)uVar10 * 0x110 + lVar4 + 0x10 + (ulonglong)(uVar6 << 4)) ==
                  param_1) {
                uVar10 = uVar10 << 4 | uVar6;
                if (uVar10 == 0xffffffff) {
                  return;
                }
                param_2 = (ulonglong)((uVar6 & 0xf) << 4) + lVar4 + (ulonglong)(uVar10 >> 4) * 0x110
                          + 0x14;
                goto LAB_1400191b2;
              }
              uVar18 = uVar18 - 1 & uVar18;
            } while (uVar18 != 0);
          }
          auVar3 = vpsignb_avx(auVar3,auVar3);
          if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 || (SUB161(auVar3 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar3 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar3 >> 0x1f,0) & 1) != 0) || (SUB161(auVar3 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar3 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar3 >> 0x37,0) & 1) != 0) || (SUB161(auVar3 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar3 >> 0x47,0) & 1) != 0) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') {
            return;
          }
          uVar10 = uVar10 + 1;
        } while( true );
      }
    }
  }
  return;
}

