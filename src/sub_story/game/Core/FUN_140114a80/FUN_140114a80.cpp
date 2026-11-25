// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114a80  size: 229 bytes
// Name:    FUN_140114a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140114a80(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  
  FUN_140004b40(0x14a945300);
  if (*(int *)(param_1 + 0x1e0) != 0) {
    bVar7 = (byte)param_2;
    lVar2 = *(longlong *)(param_1 + 0x1e8);
    bVar10 = bVar7 & 0x7f;
    uVar9 = param_2 >> 7 & 0x1ffffff;
    auVar12._0_8_ =
         CONCAT17(bVar7,CONCAT16(bVar7,CONCAT15(bVar7,CONCAT14(bVar7,CONCAT13(bVar7,CONCAT12(bVar7,
                                                  CONCAT11(bVar7,bVar7))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar12[8] = bVar10;
    auVar12[9] = bVar10;
    auVar12[10] = bVar10;
    auVar12[0xb] = bVar10;
    auVar12[0xc] = bVar10;
    auVar12[0xd] = bVar10;
    auVar12[0xe] = bVar10;
    auVar12[0xf] = bVar10;
    while( true ) {
      uVar8 = (uint)uVar9 & *(int *)(param_1 + 0x1e0) - 1U;
      auVar1 = *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar8 * 0x1b10);
      auVar3 = vpcmpeqb_avx(auVar1,auVar12);
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
      if (uVar4 != 0) {
        uVar11 = (uint)uVar4;
        do {
          uVar5 = 0;
          for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          if (*(int *)((ulonglong)uVar8 * 0x1b10 + lVar2 + 0x10 + (ulonglong)uVar5 * 0x1b0) ==
              (int)param_2) {
            uVar8 = uVar8 << 4 | uVar5;
            if (uVar8 == 0xffffffff) goto LAB_140114b4d;
            uVar9 = CONCAT71((int7)((ulonglong)param_3 >> 8),
                             *(undefined1 *)
                              ((longlong)(int)param_3 + 0x1bd +
                              lVar2 + (ulonglong)(uVar5 & 0xf) * 0x1b0 +
                              (ulonglong)(uVar8 >> 4) * 0x1b10)) & 0xffffffff;
            goto LAB_140114b4f;
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
      uVar9 = (ulonglong)(uVar8 + 1);
    }
  }
LAB_140114b4d:
  uVar9 = 0;
LAB_140114b4f:
  func_0x000144d9dab0(0x14a945300);
  return uVar9;
}

