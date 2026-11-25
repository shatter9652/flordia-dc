// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140093fd0  size: 212 bytes
// Name:    FUN_140093fd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140093fd0(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  bool bVar10;
  undefined1 auVar11 [16];
  byte bVar9;
  
  FUN_140004b40(0x149283b70);
  if (_DAT_149287da0 != 0) {
    uVar6 = (param_1 >> 0x10 ^ param_1) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    uVar7 = uVar6 >> 7;
    bVar9 = (byte)uVar6;
    bVar8 = bVar9 & 0x7f;
    auVar11._0_8_ =
         CONCAT17(bVar9,CONCAT16(bVar9,CONCAT15(bVar9,CONCAT14(bVar9,CONCAT13(bVar9,CONCAT12(bVar9,
                                                  CONCAT11(bVar9,bVar9))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar11[8] = bVar8;
    auVar11[9] = bVar8;
    auVar11[10] = bVar8;
    auVar11[0xb] = bVar8;
    auVar11[0xc] = bVar8;
    auVar11[0xd] = bVar8;
    auVar11[0xe] = bVar8;
    auVar11[0xf] = bVar8;
    while( true ) {
      uVar7 = uVar7 & _DAT_149287da0 - 1U;
      auVar1 = *(undefined1 (*) [16])((ulonglong)uVar7 * 0x2d0 + 0x149287db0);
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
        uVar6 = (uint)uVar3;
        do {
          uVar4 = 0;
          for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(uint *)((ulonglong)uVar7 * 0x2d0 + 0x149287dc0 + (ulonglong)uVar4 * 0x2c) == param_1
             ) {
            bVar10 = (uVar4 | uVar7 << 4) != 0xffffffff;
            goto LAB_14009407c;
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
  bVar10 = false;
LAB_14009407c:
  func_0x000144d9dab0(0x149283b70);
  return bVar10;
}

