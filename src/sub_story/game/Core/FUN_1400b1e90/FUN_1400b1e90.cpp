// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1e90  size: 187 bytes
// Name:    FUN_1400b1e90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1400b1e90(uint param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  undefined1 auVar11 [16];
  byte bVar10;
  
  if (*(int *)(_DAT_14abb6910 + 0xe8) != 0) {
    lVar2 = *(longlong *)(_DAT_14abb6910 + 0xf0);
    bVar10 = (byte)param_1;
    bVar9 = bVar10 & 0x7f;
    uVar8 = param_1 >> 7;
    auVar11._0_8_ =
         CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar11[8] = bVar9;
    auVar11[9] = bVar9;
    auVar11[10] = bVar9;
    auVar11[0xb] = bVar9;
    auVar11[0xc] = bVar9;
    auVar11[0xd] = bVar9;
    auVar11[0xe] = bVar9;
    auVar11[0xf] = bVar9;
    while( true ) {
      uVar8 = uVar8 & *(int *)(_DAT_14abb6910 + 0xe8) - 1U;
      auVar1 = *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar8 * 0x290);
      auVar3 = vpcmpeqb_avx(auVar1,auVar11);
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
      uVar7 = (uint)uVar4;
      if (uVar4 != 0) {
        do {
          uVar5 = 0;
          for (uVar6 = uVar7; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (*(uint *)((ulonglong)uVar8 * 0x290 + lVar2 + 0x10 + (ulonglong)uVar5 * 0x28) ==
              param_1) {
            uVar8 = uVar8 << 4 | uVar5;
            if (uVar8 == 0xffffffff) {
              return 1;
            }
            return *(undefined4 *)
                    (lVar2 + (ulonglong)(uVar8 >> 4) * 0x290 + 0x30 +
                    (ulonglong)(uVar5 & 0xf) * 0x28);
          }
          uVar7 = uVar7 - 1 & uVar7;
        } while (uVar7 != 0);
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
      uVar8 = uVar8 + 1;
    }
  }
  return 1;
}

