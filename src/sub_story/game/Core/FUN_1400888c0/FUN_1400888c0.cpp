// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400888c0  size: 181 bytes
// Name:    FUN_1400888c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400888c0(int param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  byte bVar9;
  uint uVar11;
  undefined1 auVar12 [16];
  byte bVar10;
  
  uVar8 = 0xffffffff;
  if (param_1 != 0) {
    bVar10 = (byte)param_3;
    bVar9 = bVar10 & 0x7f;
    uVar6 = param_3 >> 7;
    auVar12._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar12[8] = bVar9;
    auVar12[9] = bVar9;
    auVar12[10] = bVar9;
    auVar12[0xb] = bVar9;
    auVar12[0xc] = bVar9;
    auVar12[0xd] = bVar9;
    auVar12[0xe] = bVar9;
    auVar12[0xf] = bVar9;
    while( true ) {
      uVar6 = uVar6 & param_1 - 1U;
      auVar1 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar6 * 400);
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
        uVar11 = (uint)uVar3;
        do {
          uVar4 = 0;
          for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(uint *)((ulonglong)uVar6 * 400 + param_2 + 0x10 + (ulonglong)uVar4 * 0x18) ==
              param_3) {
            uVar8 = uVar4 | uVar6 << 4;
            goto LAB_14008893c;
          }
          uVar11 = uVar11 - 1 & uVar11;
        } while (uVar11 != 0);
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
      uVar6 = uVar6 + 1;
    }
  }
LAB_14008893c:
  lVar7 = param_2 + (ulonglong)(uVar8 >> 4) * 400 + 0x10 + (ulonglong)(uVar8 & 0xf) * 0x18;
  if (uVar8 == 0xffffffff) {
    lVar7 = 0;
  }
  lVar7 = lVar7 + 8;
  if (uVar8 == 0xffffffff) {
    lVar7 = 0;
  }
  return lVar7;
}

