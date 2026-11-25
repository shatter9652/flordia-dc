// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7770  size: 456 bytes
// Name:    FUN_1400f7770
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f7b60, FUN_1402450c0, FUN_1400f7940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f7770(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar12;
  undefined1 auVar13 [16];
  byte bVar11;
  
  uVar6 = *(uint *)(param_1 + 0x10) >> 2 & 3;
  if (uVar6 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x38);
    if (lVar8 != 0) {
LAB_1400f779e:
      FUN_1402450c0(lVar8,FUN_1422769e0,param_1);
      if ((((*(byte *)(lVar8 + 3) & 0x40) != 0) && (*(int *)(_DAT_14ab73ae8 + 0x30) != 0)) &&
         (uVar6 = *(uint *)(lVar8 + -4), uVar6 != 0)) {
        lVar8 = *(longlong *)(_DAT_14ab73ae8 + 0x38);
        uVar12 = *(int *)(_DAT_14ab73ae8 + 0x30) - 1;
        uVar9 = (ulonglong)(uVar12 & uVar6);
        uVar7 = *(uint *)(lVar8 + uVar9 * 8);
        while ((uVar7 != 0 && (uVar7 != uVar6))) {
          uVar9 = (ulonglong)((uint)(uVar9 * 8 + 8 >> 3) & uVar12);
          uVar7 = *(uint *)(lVar8 + uVar9 * 8);
        }
        if ((uVar7 != 0) && (*(int *)(_DAT_14ab73ae8 + 0x20) != 0)) {
          uVar6 = *(uint *)(lVar8 + 4 + uVar9 * 8);
          lVar8 = *(longlong *)(_DAT_14ab73ae8 + 0x28);
          bVar11 = (byte)uVar6;
          bVar10 = bVar11 & 0x7f;
          uVar7 = uVar6 >> 7;
          auVar13._0_8_ =
               CONCAT17(bVar11,CONCAT16(bVar11,CONCAT15(bVar11,CONCAT14(bVar11,CONCAT13(bVar11,
                                                  CONCAT12(bVar11,CONCAT11(bVar11,bVar11))))))) &
               0x7f7f7f7f7f7f7f7f;
          auVar13[8] = bVar10;
          auVar13[9] = bVar10;
          auVar13[10] = bVar10;
          auVar13[0xb] = bVar10;
          auVar13[0xc] = bVar10;
          auVar13[0xd] = bVar10;
          auVar13[0xe] = bVar10;
          auVar13[0xf] = bVar10;
          while( true ) {
            uVar7 = uVar7 & *(int *)(_DAT_14ab73ae8 + 0x20) - 1U;
            auVar1 = *(undefined1 (*) [16])(lVar8 + (ulonglong)uVar7 * 0x110);
            auVar2 = vpcmpeqb_avx(auVar1,auVar13);
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
              uVar12 = (uint)uVar3;
              do {
                uVar4 = 0;
                for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                if (*(uint *)((ulonglong)uVar7 * 0x110 + lVar8 + 0x10 + (ulonglong)(uVar4 << 4)) ==
                    uVar6) {
                  uVar6 = uVar7 << 4 | uVar4;
                  lVar8 = (ulonglong)((uVar4 & 0xf) << 4) + 0x10 +
                          lVar8 + (ulonglong)(uVar6 >> 4) * 0x110;
                  if (uVar6 == 0xffffffff) {
                    lVar8 = 0;
                  }
                  lVar8 = lVar8 + 4;
                  if (uVar6 == 0xffffffff) {
                    return;
                  }
                  goto LAB_1400f779e;
                }
                uVar12 = uVar12 - 1 & uVar12;
              } while (uVar12 != 0);
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
            uVar7 = uVar7 + 1;
          }
        }
      }
    }
  }
  else if (uVar6 == 1) {
    for (lVar8 = *(longlong *)(param_1 + 0x38); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x38)) {
      FUN_1400f7940(lVar8,param_1);
    }
  }
  else if (uVar6 == 2) {
    for (lVar8 = *(longlong *)(param_1 + 0x38); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x38)) {
      FUN_1400f7b60(lVar8,param_1);
    }
  }
  return;
}

