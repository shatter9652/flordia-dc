// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140057530  size: 180 bytes
// Name:    FUN_140057530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140057530(ulonglong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  if (_DAT_1487ba4c8 != 0) {
    bVar6 = (byte)param_1;
    bVar9 = bVar6 & 0x7f;
    uVar8 = param_1 >> 7 & 0x1ffffff;
    auVar11._0_8_ =
         CONCAT17(bVar6,CONCAT16(bVar6,CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,
                                                  CONCAT11(bVar6,bVar6))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar11[8] = bVar9;
    auVar11[9] = bVar9;
    auVar11[10] = bVar9;
    auVar11[0xb] = bVar9;
    auVar11[0xc] = bVar9;
    auVar11[0xd] = bVar9;
    auVar11[0xe] = bVar9;
    auVar11[0xf] = bVar9;
    while( true ) {
      uVar7 = (uint)uVar8 & _DAT_1487ba4c8 - 1U;
      auVar1 = *(undefined1 (*) [16])(_DAT_1487ba4d0 + (ulonglong)uVar7 * 0x110);
      auVar2 = vpcmpeqb_avx(auVar1,auVar11);
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
        uVar10 = (uint)uVar3;
        do {
          uVar4 = 0;
          for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(ulonglong *)
               ((ulonglong)uVar7 * 0x110 + _DAT_1487ba4d0 + 0x10 + (ulonglong)(uVar4 << 4)) ==
              param_1) {
            uVar7 = uVar7 << 4 | uVar4;
            if (uVar7 == 0xffffffff) {
              return _DAT_145fc6ed8;
            }
            return *(undefined4 *)
                    ((ulonglong)((uVar4 & 0xf) << 4) + 0x18 +
                    _DAT_1487ba4d0 + (ulonglong)(uVar7 >> 4) * 0x110);
          }
          uVar10 = uVar10 - 1 & uVar10;
        } while (uVar10 != 0);
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
  return _DAT_145fc6ed8;
}

