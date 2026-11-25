// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006e7f0  size: 40 bytes
// Name:    FUN_14006e7f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14006e7f0(undefined8 param_1,uint param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  byte bVar8;
  
  lVar10 = func_0x000144db7b80();
  if (lVar10 == 0) {
    return 0;
  }
  if ((ulonglong)*(uint *)(lVar10 + 0x15c) != 0) {
    lVar14 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar10 + 0x160) + lVar14);
      if (*(uint *)(lVar3 + 8) == param_2) {
        return lVar3;
      }
      lVar14 = lVar14 + 8;
    } while ((ulonglong)*(uint *)(lVar10 + 0x15c) << 3 != lVar14);
  }
  lVar10 = func_0x000144f7c720(*(undefined8 *)(lVar10 + 8));
  if (lVar10 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(lVar10 + 8);
  lVar10 = *(longlong *)(lVar10 + 0x10);
  if (uVar2 != 0) {
    bVar8 = (byte)param_2;
    bVar7 = bVar8 & 0x7f;
    uVar13 = param_2 >> 7;
    auVar15._0_8_ =
         CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8,
                                                  CONCAT11(bVar8,bVar8))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar15[8] = bVar7;
    auVar15[9] = bVar7;
    auVar15[10] = bVar7;
    auVar15[0xb] = bVar7;
    auVar15[0xc] = bVar7;
    auVar15[0xd] = bVar7;
    auVar15[0xe] = bVar7;
    auVar15[0xf] = bVar7;
    while( true ) {
      uVar13 = uVar13 & uVar2 - 1;
      auVar1 = *(undefined1 (*) [16])(lVar10 + (ulonglong)uVar13 * 0x810);
      auVar4 = vpcmpeqb_avx(auVar1,auVar15);
      uVar5 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
      if (uVar5 != 0) {
        uVar12 = (uint)uVar5;
        do {
          uVar9 = 0;
          for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          if (*(uint *)((ulonglong)uVar13 * 0x810 + lVar10 + 0x10 + (ulonglong)(uVar9 << 7)) ==
              param_2) {
            uVar9 = uVar9 | uVar13 << 4;
            if (uVar9 != 0xffffffff) {
              uVar13 = uVar9;
              while ((uVar9 != uVar2 << 4 &&
                     (uVar13 = uVar9,
                     SBORROW1('\0',*(char *)((ulonglong)(uVar9 & 0xf) +
                                            (ulonglong)(uVar9 >> 4) * 0x810 + lVar10))))) {
                uVar9 = uVar9 + 1;
                uVar13 = uVar2 << 4;
              }
              goto code_r0x000142b7ebbb;
            }
            goto code_r0x000142b7ebb6;
          }
          uVar12 = uVar12 - 1 & uVar12;
        } while (uVar12 != 0);
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
      uVar13 = uVar13 + 1;
    }
  }
code_r0x000142b7ebb6:
  uVar13 = uVar2 << 4;
code_r0x000142b7ebbb:
  uVar11 = (ulonglong)((uVar13 & 0xf) << 7);
  lVar14 = (ulonglong)(uVar13 >> 4) * 0x810;
  if (lVar14 + uVar11 == (ulonglong)(uVar2 & 0xfffffff) * 0x810) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)(lVar10 + lVar14 + 0x80 + uVar11);
  }
  return lVar10;
}

