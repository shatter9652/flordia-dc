// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401611e0  size: 237 bytes
// Name:    FUN_1401611e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401611e0(uint param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  
  if ((param_1 != 0) && ((ulonglong)_DAT_1492ab2d4 != 0)) {
    bVar8 = (byte)param_1;
    bVar12 = bVar8 & 0x7f;
    auVar13._0_8_ =
         CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8,
                                                  CONCAT11(bVar8,bVar8))))))) & 0x7f7f7f7f7f7f7f7f;
    auVar13[8] = bVar12;
    auVar13[9] = bVar12;
    auVar13[10] = bVar12;
    auVar13[0xb] = bVar12;
    auVar13[0xc] = bVar12;
    auVar13[0xd] = bVar12;
    auVar13[0xe] = bVar12;
    auVar13[0xf] = bVar12;
    plVar9 = _DAT_1492ab2d8;
    do {
      lVar2 = *plVar9;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1a8) != 0)) {
        lVar3 = *(longlong *)(lVar2 + 0x1b0);
        uVar11 = param_1 >> 7;
        while( true ) {
          uVar11 = uVar11 & *(int *)(lVar2 + 0x1a8) - 1U;
          auVar1 = *(undefined1 (*) [16])(lVar3 + (ulonglong)uVar11 * 0x110);
          auVar4 = vpcmpeqb_avx(auVar1,auVar13);
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
            uVar10 = (uint)uVar5;
            do {
              uVar6 = 0;
              for (uVar7 = uVar10; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              if (*(uint *)((ulonglong)uVar11 * 0x110 + lVar3 + 0x10 + (ulonglong)(uVar6 << 4)) ==
                  param_1) {
                uVar11 = uVar11 << 4 | uVar6;
                if (uVar11 != 0xffffffff) {
                  return *(undefined8 *)
                          ((ulonglong)((uVar6 & 0xf) << 4) + 0x18 +
                          lVar3 + (ulonglong)(uVar11 >> 4) * 0x110);
                }
                goto LAB_14016129a;
              }
              uVar10 = uVar10 - 1 & uVar10;
            } while (uVar10 != 0);
          }
          auVar1 = vpsignb_avx(auVar1,auVar1);
          if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar1 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar1 >> 0x1f,0) & 1) != 0) || (SUB161(auVar1 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar1 >> 0x37,0) & 1) != 0) || (SUB161(auVar1 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar1 >> 0x47,0) & 1) != 0) || (SUB161(auVar1 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar1 >> 0x57,0) & 1) != 0) || (SUB161(auVar1 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar1 >> 0x67,0) & 1) != 0) || (SUB161(auVar1 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar1 >> 0x77,0) & 1) != 0) || auVar1[0xf] < '\0') break;
          uVar11 = uVar11 + 1;
        }
      }
LAB_14016129a:
      plVar9 = plVar9 + 1;
    } while (plVar9 != _DAT_1492ab2d8 + _DAT_1492ab2d4);
  }
  return 0;
}

