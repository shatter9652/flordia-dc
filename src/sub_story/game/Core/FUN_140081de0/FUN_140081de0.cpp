// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081de0  size: 373 bytes
// Name:    FUN_140081de0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140081de0(int param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  byte bVar10;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar7 = (param_3 >> 0x10 ^ param_3) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar8 = uVar7 >> 7;
  bVar10 = (byte)uVar7;
  bVar9 = bVar10 & 0x7f;
  auVar13._0_8_ =
       CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
       0x7f7f7f7f7f7f7f7f;
  auVar13[8] = bVar9;
  auVar13[9] = bVar9;
  auVar13[10] = bVar9;
  auVar13[0xb] = bVar9;
  auVar13[0xc] = bVar9;
  auVar13[0xd] = bVar9;
  auVar13[0xe] = bVar9;
  auVar13[0xf] = bVar9;
  do {
    uVar8 = uVar8 & param_1 - 1U;
    auVar1 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar8 * 0x1c10);
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
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    if (uVar4 != 0) {
      uVar7 = (uint)uVar4;
      do {
        uVar5 = 0;
        for (uVar6 = uVar7; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar6 = *(uint *)((ulonglong)uVar8 * 0x1c10 + param_2 + 0x20 + (ulonglong)uVar5 * 0x1c0);
        if (uVar6 == 0x1ffff) {
LAB_140081f24:
          lVar12 = 0;
        }
        else {
          uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar6 & 0x1ffff) * 4);
          if (((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
             ((uVar2 & 0x7fe0000) != (uVar6 & 0xfffe0000))) goto LAB_140081f24;
          lVar12 = (ulonglong)((uVar6 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
        }
        if ((param_3 == 0x1ffff) ||
           (uVar6 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(param_3 & 0x1ffff) * 4),
           (~uVar6 & *(uint *)(_DAT_14abb6918 + 6)) != 0)) {
          lVar11 = 0;
        }
        else {
          lVar11 = 0;
          if ((uVar6 & 0x7fe0000) == (param_3 & 0xfffe0000)) {
            lVar11 = (ulonglong)((int)_DAT_14abb6918[1] * (param_3 & 0x1ffff)) + *_DAT_14abb6918;
          }
        }
        if (lVar12 == lVar11) {
          return uVar5 | uVar8 << 4;
        }
        uVar7 = uVar7 - 1 & uVar7;
      } while (uVar7 != 0);
    }
    auVar1 = vpsignb_avx(auVar1,auVar1);
    if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0) ||
                  (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x37,0) & 1) != 0) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') {
      return 0xffffffff;
    }
    uVar8 = uVar8 + 1;
  } while( true );
}

