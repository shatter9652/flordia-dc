// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140162ee0  size: 260 bytes
// Name:    FUN_140162ee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e8f70, FUN_1400e8c30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140162ee0(longlong param_1,ulonglong param_2,byte param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_24 [12];
  
  FUN_1400e8f70(auStack_24,0);
  lVar7 = (ulonglong)(param_3 ^ 1) * 0x10;
  if (*(int *)(param_1 + lVar7) == 0) {
    lVar8 = *(longlong *)(param_1 + 8 + lVar7);
    uVar12 = 0xffffffff;
  }
  else {
    bVar6 = (byte)param_2;
    lVar8 = *(longlong *)(param_1 + 8 + lVar7);
    bVar11 = bVar6 & 0x7f;
    uVar12 = param_2 >> 7 & 0x1ffffff;
    auVar14._0_8_ =
         CONCAT17(bVar6,CONCAT16(bVar6,CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,
                                                  CONCAT11(bVar6,bVar6))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar14[8] = bVar11;
    auVar14[9] = bVar11;
    auVar14[10] = bVar11;
    auVar14[0xb] = bVar11;
    auVar14[0xc] = bVar11;
    auVar14[0xd] = bVar11;
    auVar14[0xe] = bVar11;
    auVar14[0xf] = bVar11;
    while( true ) {
      uVar10 = (uint)uVar12 & *(int *)(param_1 + lVar7) - 1U;
      auVar1 = *(undefined1 (*) [16])(lVar8 + (ulonglong)uVar10 * 0x210);
      auVar2 = vpcmpeqb_avx(auVar1,auVar14);
      uVar3 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar2[0xf] >> 7) << 0xf;
      if (uVar3 != 0) {
        uVar13 = (uint)uVar3;
        do {
          uVar4 = 0;
          for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(ulonglong *)((ulonglong)uVar10 * 0x210 + lVar8 + 0x10 + (ulonglong)(uVar4 << 5)) ==
              param_2) {
            uVar12 = (ulonglong)(uVar4 | uVar10 << 4);
            goto LAB_140162f94;
          }
          uVar13 = uVar13 - 1 & uVar13;
        } while (uVar13 != 0);
      }
      auVar1 = vpsignb_avx(auVar1,auVar1);
      uVar12 = 0xffffffff;
      if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x37,0) & 1) != 0) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
      uVar12 = (ulonglong)(uVar10 + 1);
    }
  }
LAB_140162f94:
  uVar10 = (uint)uVar12;
  piVar9 = (int *)((ulonglong)((uVar10 & 0xf) << 5) + 0x10 + (uVar12 >> 4) * 0x210 + lVar8);
  if (uVar10 == 0xffffffff) {
    piVar9 = (int *)0x0;
  }
  piVar9 = piVar9 + 2;
  if (uVar10 == 0xffffffff) {
    piVar9 = (int *)0x0;
  }
  LOCK();
  *piVar9 = *piVar9 + -1;
  UNLOCK();
  if (*piVar9 == 0) {
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  FUN_1400e8c30(auStack_24);
  return;
}

