// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ca970  size: 46 bytes
// Name:    FUN_1400ca970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400ca970(void)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  ulonglong uStack_48;
  
  lVar10 = func_0x000144e6ea40();
  if (lVar10 == 0) {
    return 0;
  }
  lVar10 = func_0x000144e6e9f0(lVar10);
  puVar1 = (uint *)(lVar10 + 0x4070);
  puVar2 = (ulonglong *)(lVar10 + 0x4078);
  uVar12 = *(uint *)(lVar10 + 0x4070);
LAB_140066b93:
  do {
    do {
      while (uVar16 = uVar12, (uVar16 & 0x1ff0000) == 0) {
        LOCK();
        uVar12 = *puVar1;
        bVar17 = uVar16 == uVar12;
        if (bVar17) {
          *puVar1 = uVar16 + 1;
          uVar12 = uVar16;
        }
        UNLOCK();
        if (bVar17) {
          if (*(int *)(lVar10 + 0x1850) != 0) {
            lVar14 = *(longlong *)(lVar10 + 0x1860);
            uVar12 = 0xf58d74;
            auVar18[8] = 0x54;
            auVar18._0_8_ = 0x5454545454545454;
            auVar18[9] = 0x54;
            auVar18[10] = 0x54;
            auVar18[0xb] = 0x54;
            auVar18[0xc] = 0x54;
            auVar18[0xd] = 0x54;
            auVar18[0xe] = 0x54;
            auVar18[0xf] = 0x54;
            while( true ) {
              uVar12 = uVar12 & *(int *)(lVar10 + 0x1850) - 1U;
              auVar3 = *(undefined1 (*) [16])(lVar14 + (ulonglong)uVar12 * 0xd0);
              auVar4 = vpcmpeqb_avx(auVar3,auVar18);
              uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
              if (uVar5 != 0) {
                lVar15 = (ulonglong)uVar12 * 0xd0 + lVar14;
                uVar16 = (uint)uVar5;
                do {
                  uVar11 = 0;
                  for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                    uVar11 = uVar11 + 1;
                  }
                  if ((*(int *)(lVar15 + 0x14 + (ulonglong)uVar11 * 0xc) == 0) &&
                     (*(int *)(lVar15 + 0x10 + (ulonglong)uVar11 * 0xc) == -0x6084af20)) {
                    uVar12 = uVar12 << 4 | uVar11;
                    if (uVar12 == 0xffffffff) goto LAB_140066d36;
                    lVar14 = lVar14 + (ulonglong)(uVar12 >> 4) * 0xd0;
                    if (*(short *)(lVar14 + 0x1a + (ulonglong)(uVar11 & 0xf) * 0xc) == 0)
                    goto LAB_140066d36;
                    uVar13 = CONCAT71(0x9f7b50,*(undefined1 *)
                                                (lVar14 + 0x18 + (ulonglong)(uVar11 & 0xf) * 0xc));
                    goto LAB_140066d38;
                  }
                  uVar16 = uVar16 - 1 & uVar16;
                } while (uVar16 != 0);
              }
              auVar3 = vpsignb_avx(auVar3,auVar3);
              if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar3 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar3 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar3 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar3 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar3 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar3 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar3 >> 0x3f,0) & 1) != 0) || (SUB161(auVar3 >> 0x47,0) & 1) != 0
                        ) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0) ||
                      (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0)
                    || (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') break;
              uVar12 = uVar12 + 1;
            }
          }
LAB_140066d36:
          uVar13 = 0;
LAB_140066d38:
          FUN_140323580(puVar1);
          return uVar13;
        }
      }
      LOCK();
      uVar12 = *puVar1;
      bVar17 = uVar16 == uVar12;
      if (bVar17) {
        *puVar1 = uVar16 + 0x100;
        uVar12 = uVar16;
      }
      UNLOCK();
    } while (!bVar17);
    uVar11 = (uint)(*puVar2 >> 7) & 0xffffff;
    uVar9 = *puVar2;
    if ((*puVar2 >> 7 & 0xffffff) != 0) {
      do {
        if ((longlong)uVar9 < 0x100000000) {
          uVar8 = *puVar2;
        }
        else {
          LOCK();
          uVar8 = *puVar2;
          if (uVar9 == uVar8) {
            *puVar2 = uVar9 - 0x100000000;
            uVar8 = uVar9;
          }
          UNLOCK();
          uVar12 = uVar16;
          if (uVar9 == uVar8) goto LAB_140066b93;
        }
        uVar11 = uVar11 - 1;
        uVar9 = uVar8;
      } while (uVar11 != 0);
    }
    uVar9 = *puVar2;
    do {
      while (uStack_48 = uVar9, 0xffffffff < (longlong)uStack_48) {
        LOCK();
        uVar9 = *puVar2;
        if (uStack_48 == uVar9) {
          *puVar2 = uStack_48 - 0x100000000;
          uVar9 = uStack_48;
        }
        UNLOCK();
        uVar12 = uVar16;
        if (uStack_48 == uVar9) goto LAB_140066b93;
      }
      cVar7 = FUN_140006180(puVar2,1,&uStack_48);
      uVar12 = uVar16;
      uVar9 = uStack_48;
    } while (cVar7 == '\0');
  } while( true );
}

