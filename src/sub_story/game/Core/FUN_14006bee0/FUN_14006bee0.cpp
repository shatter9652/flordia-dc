// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006bee0  size: 170 bytes
// Name:    FUN_14006bee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14006bee0(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined1 auVar10 [16];
  byte bVar9;
  
  if (_DAT_14763b510 != 0) {
    bVar9 = (byte)param_1;
    bVar8 = bVar9 & 0x7f;
    uVar7 = param_1 >> 7;
    auVar10._0_8_ =
         CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9,
                                                  CONCAT11(bVar9,bVar9))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar10[8] = bVar8;
    auVar10[9] = bVar8;
    auVar10[10] = bVar8;
    auVar10[0xb] = bVar8;
    auVar10[0xc] = bVar8;
    auVar10[0xd] = bVar8;
    auVar10[0xe] = bVar8;
    auVar10[0xf] = bVar8;
    while( true ) {
      uVar7 = uVar7 & _DAT_14763b510 - 1U;
      auVar1 = *(undefined1 (*) [16])(_DAT_14763b518 + (ulonglong)uVar7 * 0x90);
      auVar2 = vpcmpeqb_avx(auVar1,auVar10);
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
      uVar6 = (uint)uVar3;
      if (uVar3 != 0) {
        do {
          uVar4 = 0;
          for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(uint *)((ulonglong)uVar7 * 0x90 + _DAT_14763b518 + 0x10 + (ulonglong)uVar4 * 8) ==
              param_1) {
            uVar7 = uVar7 << 4 | uVar4;
            if (uVar7 == 0xffffffff) {
              return 0x40;
            }
            return *(undefined4 *)
                    (_DAT_14763b518 + (ulonglong)(uVar7 >> 4) * 0x90 + 0x14 +
                    (ulonglong)(uVar4 & 0xf) * 8);
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
  return 0x40;
}

