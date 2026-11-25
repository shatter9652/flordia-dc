// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140132650  size: 222 bytes
// Name:    FUN_140132650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140132650(int param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auVar12 [16];
  byte bVar11;
  
  uVar9 = 0xffffffff;
  if (param_1 != 0) {
    uVar6 = (param_3 >> 0x10 ^ param_3) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    uVar7 = uVar6 >> 7;
    bVar11 = (byte)uVar6;
    bVar10 = bVar11 & 0x7f;
    auVar12._0_8_ =
         CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,CONCAT12(
                                                  bVar11,CONCAT11(bVar11,bVar11))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar12[8] = bVar10;
    auVar12[9] = bVar10;
    auVar12[10] = bVar10;
    auVar12[0xb] = bVar10;
    auVar12[0xc] = bVar10;
    auVar12[0xd] = bVar10;
    auVar12[0xe] = bVar10;
    auVar12[0xf] = bVar10;
    while( true ) {
      uVar7 = uVar7 & param_1 - 1U;
      auVar1 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar7 * 0x410);
      auVar2 = vpcmpeqb_avx(auVar1,auVar12);
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
        uVar6 = (uint)uVar3;
        do {
          uVar4 = 0;
          for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(uint *)((ulonglong)uVar7 * 0x410 + param_2 + 0x10 + (ulonglong)(uVar4 << 6)) ==
              param_3) {
            uVar9 = uVar4 | uVar7 << 4;
            goto LAB_1401326da;
          }
          uVar6 = uVar6 - 1 & uVar6;
        } while (uVar6 != 0);
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
      uVar7 = uVar7 + 1;
    }
  }
LAB_1401326da:
  lVar8 = (ulonglong)((uVar9 & 0xf) << 6) + 0x10 + param_2 + (ulonglong)(uVar9 >> 4) * 0x410;
  if (uVar9 == 0xffffffff) {
    lVar8 = 0;
  }
  lVar8 = lVar8 + 8;
  if (uVar9 == 0xffffffff) {
    lVar8 = 0;
  }
  return lVar8;
}

