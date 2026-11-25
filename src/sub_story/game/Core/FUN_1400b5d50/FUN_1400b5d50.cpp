// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b5d50  size: 213 bytes
// Name:    FUN_1400b5d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400b5d50(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  byte bVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  FUN_140004b40(0x1477ae418);
  if (_DAT_1477ae438 == 0) {
LAB_1400b5e0d:
    uVar9 = 0;
  }
  else {
    bVar6 = (byte)param_1;
    uVar9 = 0;
    bVar10 = bVar6 & 0x7f;
    uVar8 = param_1 >> 7 & 0x1ffffff;
    auVar12._0_8_ =
         CONCAT17(bVar6,CONCAT16(bVar6,CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,
                                                  CONCAT11(bVar6,bVar6))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar12[8] = bVar10;
    auVar12[9] = bVar10;
    auVar12[10] = bVar10;
    auVar12[0xb] = bVar10;
    auVar12[0xc] = bVar10;
    auVar12[0xd] = bVar10;
    auVar12[0xe] = bVar10;
    auVar12[0xf] = bVar10;
    while( true ) {
      uVar7 = (uint)uVar8 & _DAT_1477ae438 - 1U;
      auVar1 = *(undefined1 (*) [16])(_DAT_1477ae440 + (ulonglong)uVar7 * 0x110);
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
          if (*(ulonglong *)
               ((ulonglong)uVar7 * 0x110 + _DAT_1477ae440 + 0x10 + (ulonglong)(uVar4 << 4)) ==
              param_1) {
            uVar7 = uVar7 << 4 | uVar4;
            if (uVar7 == 0xffffffff) goto LAB_1400b5e0d;
            uVar9 = *(undefined8 *)
                     ((ulonglong)((uVar4 & 0xf) << 4) + 0x18 +
                     _DAT_1477ae440 + (ulonglong)(uVar7 >> 4) * 0x110);
            goto LAB_1400b5e0f;
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
      uVar8 = (ulonglong)(uVar7 + 1);
    }
  }
LAB_1400b5e0f:
  func_0x000144d9dab0(0x1477ae418);
  return uVar9;
}

