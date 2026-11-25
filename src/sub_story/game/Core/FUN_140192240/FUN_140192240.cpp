// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192240  size: 240 bytes
// Name:    FUN_140192240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140192240(uint param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  
  if (param_1 != 0) {
    bVar5 = (byte)param_3;
    bVar6 = bVar5 & 0x7f;
    uVar10 = param_3 >> 7;
    auVar12._0_8_ =
         CONCAT17(bVar5,CONCAT16(bVar5,CONCAT15(bVar5,CONCAT14(bVar5,CONCAT13(bVar5,CONCAT12(bVar5,
                                                  CONCAT11(bVar5,bVar5))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar12[8] = bVar6;
    auVar12[9] = bVar6;
    auVar12[10] = bVar6;
    auVar12[0xb] = bVar6;
    auVar12[0xc] = bVar6;
    auVar12[0xd] = bVar6;
    auVar12[0xe] = bVar6;
    auVar12[0xf] = bVar6;
    while( true ) {
      uVar10 = uVar10 & param_1 - 1;
      auVar1 = *(undefined1 (*) [16])(param_2 + (ulonglong)uVar10 * 0x690);
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
        uVar9 = (uint)uVar3;
        do {
          uVar7 = 0;
          for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          if (*(uint *)((ulonglong)uVar10 * 0x690 + param_2 + 0x10 + (ulonglong)uVar7 * 0x68) ==
              param_3) {
            uVar7 = uVar7 | uVar10 << 4;
            if (uVar7 != 0xffffffff) {
              uVar10 = uVar7;
              while ((uVar7 != param_1 * 0x10 &&
                     (uVar10 = uVar7,
                     SBORROW1('\0',*(char *)((ulonglong)(uVar7 & 0xf) +
                                            (ulonglong)(uVar7 >> 4) * 0x690 + param_2))))) {
                uVar7 = uVar7 + 1;
                uVar10 = param_1 * 0x10;
              }
              goto LAB_1401922fa;
            }
            goto LAB_1401922f5;
          }
          uVar9 = uVar9 - 1 & uVar9;
        } while (uVar9 != 0);
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
      uVar10 = uVar10 + 1;
    }
  }
LAB_1401922f5:
  uVar10 = param_1 << 4;
LAB_1401922fa:
  lVar11 = (ulonglong)((uVar10 & 0xf) * 0x68) + (ulonglong)(uVar10 >> 4) * 0x690;
  lVar8 = 0;
  if (lVar11 != (ulonglong)(param_1 & 0xfffffff) * 0x690) {
    lVar8 = param_2 + 0x18 + lVar11;
  }
  return lVar8;
}

