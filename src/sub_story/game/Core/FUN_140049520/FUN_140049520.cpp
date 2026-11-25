// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049520  size: 216 bytes
// Name:    FUN_140049520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140049520(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  
  if (_DAT_14909ebe0 == 0) {
    uVar11 = 0xffffffff;
  }
  else {
    bVar5 = (byte)param_1;
    bVar10 = bVar5 & 0x7f;
    uVar8 = param_1 >> 7 & 0x1ffffff;
    auVar13._0_8_ =
         CONCAT17(bVar5,CONCAT16(bVar5,CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5,
                                                  CONCAT11(bVar5,bVar5))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar13[8] = bVar10;
    auVar13[9] = bVar10;
    auVar13[10] = bVar10;
    auVar13[0xb] = bVar10;
    auVar13[0xc] = bVar10;
    auVar13[0xd] = bVar10;
    auVar13[0xe] = bVar10;
    auVar13[0xf] = bVar10;
    while( true ) {
      uVar7 = (uint)uVar8 & _DAT_14909ebe0 - 1U;
      auVar1 = *(undefined1 (*) [16])(_DAT_14909ebe8 + (ulonglong)uVar7 * 400);
      auVar2 = vpcmpeqb_avx(auVar1,auVar13);
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
        uVar12 = (uint)uVar3;
        do {
          uVar11 = 0;
          for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar11 = uVar11 + 1;
          }
          if (*(ulonglong *)
               ((ulonglong)uVar7 * 400 + _DAT_14909ebe8 + 0x10 + (ulonglong)uVar11 * 0x18) ==
              param_1) {
            uVar11 = uVar11 | uVar7 << 4;
            goto LAB_1400495b9;
          }
          uVar12 = uVar12 - 1 & uVar12;
        } while (uVar12 != 0);
      }
      auVar1 = vpsignb_avx(auVar1,auVar1);
      uVar11 = 0xffffffff;
      if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x37,0) & 1) != 0) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
      uVar8 = (ulonglong)(uVar7 + 1);
    }
  }
LAB_1400495b9:
  lVar9 = 0;
  if (uVar11 != 0xffffffff) {
    lVar9 = (ulonglong)(uVar11 >> 4) * 400 + _DAT_14909ebe8 + 0x10 +
            (ulonglong)(uVar11 & 0xf) * 0x18;
  }
  lVar6 = 0x14909ebc8;
  if (uVar11 != 0xffffffff) {
    lVar6 = lVar9 + 8;
  }
  return lVar6;
}

