// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014a7b0  size: 165 bytes
// Name:    FUN_14014a7b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14014a7b0(int param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  
  if (param_1 != 0) {
    bVar6 = (byte)param_3;
    bVar9 = bVar6 & 0x7f;
    uVar8 = param_3 >> 7;
    auVar10._0_8_ =
         CONCAT17(bVar6,CONCAT16(bVar6,CONCAT15(bVar6,CONCAT14(bVar6,CONCAT13(bVar6,CONCAT12(bVar6,
                                                  CONCAT11(bVar6,bVar6))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar10[8] = bVar9;
    auVar10[9] = bVar9;
    auVar10[10] = bVar9;
    auVar10[0xb] = bVar9;
    auVar10[0xc] = bVar9;
    auVar10[0xd] = bVar9;
    auVar10[0xe] = bVar9;
    auVar10[0xf] = bVar9;
    while( true ) {
      uVar8 = uVar8 & param_1 - 1U;
      auVar1 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar8 * 0x110);
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
      uVar7 = (uint)uVar3;
      if (uVar3 != 0) {
        do {
          uVar4 = 0;
          for (uVar5 = uVar7; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          if (*(uint *)((ulonglong)uVar8 * 0x110 + param_2 + 0x10 + (ulonglong)(uVar4 << 4)) ==
              param_3) {
            uVar8 = uVar8 << 4 | uVar4;
            if (uVar8 == 0xffffffff) {
              return 0;
            }
            return *(undefined8 *)
                    ((ulonglong)((uVar4 & 0xf) << 4) + 0x18 +
                    param_2 + (ulonglong)(uVar8 >> 4) * 0x110);
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
  return 0;
}

