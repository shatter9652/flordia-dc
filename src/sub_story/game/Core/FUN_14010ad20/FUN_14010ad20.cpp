// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010ad20  size: 109 bytes
// Name:    FUN_14010ad20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb2690, FUN_144ffb390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14010ad20(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 unaff_RSI;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  
  uVar8 = (ulonglong)*(byte *)(param_1 + 0xc0 + (ulonglong)DAT_149fee6b8);
  if ((uVar8 != 0xff) && (lVar10 = *(longlong *)(param_1 + 0x10 + uVar8 * 8), lVar10 != 0)) {
    cVar6 = FUN_144ffb390(lVar10,1,0x655615b7);
    if (cVar6 != '\0') {
      iVar7 = FUN_144fb2690(lVar10,1,0x655615b7);
      if (iVar7 != 0) {
        lVar11 = *(longlong *)(lVar10 + 0x38);
        uVar14 = 0xffffffff;
        if (*(int *)(lVar10 + 0x30) != 0) {
          auVar15[1] = DAT_1461595b1;
          auVar15[0] = DAT_1461595b1;
          auVar15[2] = DAT_1461595b1;
          auVar15[3] = DAT_1461595b1;
          auVar15[4] = DAT_1461595b1;
          auVar15[5] = DAT_1461595b1;
          auVar15[6] = DAT_1461595b1;
          auVar15[7] = DAT_1461595b1;
          auVar15[8] = DAT_1461595b1;
          auVar15[9] = DAT_1461595b1;
          auVar15[10] = DAT_1461595b1;
          auVar15[0xb] = DAT_1461595b1;
          auVar15[0xc] = DAT_1461595b1;
          auVar15[0xd] = DAT_1461595b1;
          auVar15[0xe] = DAT_1461595b1;
          auVar15[0xf] = DAT_1461595b1;
          uVar12 = 0x97aece;
          while( true ) {
            uVar12 = uVar12 & *(int *)(lVar10 + 0x30) - 1U;
            auVar1 = *(undefined1 (*) [16])(lVar11 + (ulonglong)uVar12 * 0x210);
            auVar2 = vpcmpeqb_avx(auVar1,auVar15);
            uVar3 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
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
              uVar13 = (uint)uVar3;
              do {
                uVar4 = 0;
                for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                if (*(int *)((ulonglong)uVar12 * 0x210 + lVar11 + 0x10 + (ulonglong)(uVar4 << 5)) ==
                    0x655615b7) {
                  uVar14 = uVar4 | uVar12 << 4;
                  goto LAB_14010adf6;
                }
                uVar13 = uVar13 - 1 & uVar13;
              } while (uVar13 != 0);
            }
            auVar1 = vpsignb_avx(auVar1,auVar1);
            if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0
                             ) || (SUB161(auVar1 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar1 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar1 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar1 >> 0x2f,0) & 1) != 0) || (SUB161(auVar1 >> 0x37,0) & 1) != 0
                        ) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
            uVar12 = uVar12 + 1;
          }
        }
LAB_14010adf6:
        uVar8 = (ulonglong)((uVar14 & 0xf) << 5);
        lVar11 = lVar11 + (ulonglong)(uVar14 >> 4) * 0x210;
        lVar10 = uVar8 + 0x10 + lVar11;
        if (uVar14 == 0xffffffff) {
          lVar10 = 0;
        }
        lVar10 = lVar10 + 8;
        if (uVar14 == 0xffffffff) {
          lVar10 = 0;
        }
        puVar9 = (undefined8 *)FUN_140b02e70(lVar10,lVar11,uVar8,0,unaff_RSI);
        return *puVar9;
      }
    }
  }
  return 0;
}

