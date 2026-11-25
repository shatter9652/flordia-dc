// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188290  size: 263 bytes
// Name:    FUN_140188290
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140244f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140188290(longlong *param_1,byte *param_2,byte param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 unaff_RSI;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  bool bVar14;
  undefined1 auVar15 [16];
  byte bVar13;
  
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xffffffef | (uint)param_3 << 4;
  uVar11 = *(uint *)(param_1[1] + 8);
  if (uVar11 != 0) {
    if (*(int *)(_DAT_14ab73ae8 + 0x20) != 0) {
      lVar2 = *(longlong *)(_DAT_14ab73ae8 + 0x28);
      bVar13 = (byte)uVar11;
      bVar12 = bVar13 & 0x7f;
      uVar10 = uVar11 >> 7;
      auVar15._0_8_ =
           CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,CONCAT12(
                                                  bVar13,CONCAT11(bVar13,bVar13))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar15[8] = bVar12;
      auVar15[9] = bVar12;
      auVar15[10] = bVar12;
      auVar15[0xb] = bVar12;
      auVar15[0xc] = bVar12;
      auVar15[0xd] = bVar12;
      auVar15[0xe] = bVar12;
      auVar15[0xf] = bVar12;
      while( true ) {
        uVar10 = uVar10 & *(int *)(_DAT_14ab73ae8 + 0x20) - 1U;
        auVar1 = *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar10 * 0x110);
        auVar3 = vpcmpeqb_avx(auVar1,auVar15);
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
        if (uVar4 != 0) {
          uVar9 = (uint)uVar4;
          do {
            uVar5 = 0;
            for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            if (*(uint *)((ulonglong)uVar10 * 0x110 + lVar2 + 0x10 + (ulonglong)(uVar5 << 4)) ==
                uVar11) {
              uVar11 = uVar10 << 4 | uVar5;
              if (uVar11 == 0xffffffff) goto LAB_140188331;
              cVar7 = FUN_140244f40((ulonglong)((uVar5 & 0xf) << 4) + 0x14 +
                                    lVar2 + (ulonglong)(uVar11 >> 4) * 0x110,0);
              if (cVar7 != '\0') {
                *param_2 = 1;
                return 0;
              }
              uVar11 = *(uint *)(param_1 + 9);
              if (iRam000000014ab5cde0 != 2) {
                *(uint *)(param_1 + 9) = uVar11 & 0xfffffff1;
                uVar11 = (**(code **)(*param_1 + 0x40))
                                   (param_1,param_2,0,uVar11 & 0xfffffff1,unaff_RSI);
                uVar8 = (ulonglong)uVar11;
                *param_2 = (byte)uVar11 ^ 1;
                goto code_r0x000140242846;
              }
              uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
              if ((uVar11 & 4) != 0) goto code_r0x000140242846;
              uVar10 = uRam00000001492d7af4;
              if ((uVar11 & 1) == 0) goto code_r0x0001402427e5;
              if ((uVar11 & 2) == 0) goto code_r0x000140242846;
              uVar11 = uVar11 & 0xfffffff9;
              goto code_r0x000140242842;
            }
            uVar9 = uVar9 - 1 & uVar9;
          } while (uVar9 != 0);
        }
        auVar1 = vpsignb_avx(auVar1,auVar1);
        if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar1 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar1 >> 0x3f,0) & 1) != 0) || (SUB161(auVar1 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar1 >> 0x4f,0) & 1) != 0) || (SUB161(auVar1 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || (SUB161(auVar1 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar1 >> 0x6f,0) & 1) != 0) || (SUB161(auVar1 >> 0x77,0) & 1) != 0) ||
            auVar1[0xf] < '\0') break;
        uVar10 = uVar10 + 1;
      }
    }
LAB_140188331:
    *param_2 = 1;
  }
  return 0;
code_r0x0001402427e5:
  do {
    if (uVar10 == uRam00000001492d7af0) goto code_r0x000140242813;
    LOCK();
    bVar14 = uVar10 != uRam00000001492d7af4;
    uVar9 = uVar10 + 1;
    if (bVar14) {
      uVar10 = uRam00000001492d7af4;
      uVar9 = uRam00000001492d7af4;
    }
    uRam00000001492d7af4 = uVar9;
    UNLOCK();
  } while (bVar14);
  *(longlong **)(lRam00000001492d7af8 + (ulonglong)uVar10 * 8) = param_1;
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar10 == uRam00000001492d7af0) {
code_r0x000140242813:
    uVar11 = uVar11 | 4;
  }
  else {
    uVar11 = (uVar11 & 0xfffffff4) + 1;
  }
code_r0x000140242842:
  *(uint *)(param_1 + 9) = uVar11;
code_r0x000140242846:
  return uVar8 & 0xffffffff;
}

