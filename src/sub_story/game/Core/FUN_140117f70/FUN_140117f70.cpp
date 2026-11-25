// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140117f70  size: 224 bytes
// Name:    FUN_140117f70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e8c30, FUN_1400e8f70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140117f70(longlong param_1,ulonglong param_2,byte param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_24 [12];
  
  FUN_1400e8f70(auStack_24,0);
  lVar8 = (ulonglong)(param_3 ^ 1) * 0x10;
  iVar2 = *(int *)(param_1 + lVar8);
  if (iVar2 != 0) {
    bVar7 = (byte)param_2;
    lVar8 = *(longlong *)(param_1 + 8 + lVar8);
    bVar11 = bVar7 & 0x7f;
    uVar10 = param_2 >> 7 & 0x1ffffff;
    auVar13._0_8_ =
         CONCAT17(bVar7,CONCAT16(bVar7,CONCAT15(bVar7,CONCAT14(bVar7,CONCAT13(bVar7,CONCAT12(bVar7,
                                                  CONCAT11(bVar7,bVar7))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar13[8] = bVar11;
    auVar13[9] = bVar11;
    auVar13[10] = bVar11;
    auVar13[0xb] = bVar11;
    auVar13[0xc] = bVar11;
    auVar13[0xd] = bVar11;
    auVar13[0xe] = bVar11;
    auVar13[0xf] = bVar11;
    while( true ) {
      uVar9 = (uint)uVar10 & iVar2 - 1U;
      auVar1 = *(undefined1 (*) [16])(lVar8 + (ulonglong)uVar9 * 0x210);
      auVar3 = vpcmpeqb_avx(auVar1,auVar13);
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
        uVar12 = (uint)uVar4;
        do {
          uVar5 = 0;
          for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (*(ulonglong *)((ulonglong)uVar9 * 0x210 + lVar8 + 0x10 + (ulonglong)(uVar5 << 5)) ==
              param_2) {
            uVar9 = uVar9 << 4 | uVar5;
            if ((uVar9 == 0xffffffff) ||
               (uVar10 = CONCAT71((int7)(param_2 >> 8),1),
               *(char *)((ulonglong)((uVar5 & 0xf) << 5) + 0x2f +
                        lVar8 + (ulonglong)(uVar9 >> 4) * 0x210) == '\0')) goto LAB_14011803a;
            goto LAB_14011803c;
          }
          uVar12 = uVar12 - 1 & uVar12;
        } while (uVar12 != 0);
      }
      auVar1 = vpsignb_avx(auVar1,auVar1);
      if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x37,0) & 1) != 0) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
      uVar10 = (ulonglong)(uVar9 + 1);
    }
  }
LAB_14011803a:
  uVar10 = 0;
LAB_14011803c:
  FUN_1400e8c30(auStack_24);
  return uVar10 & 0xffffffff;
}

