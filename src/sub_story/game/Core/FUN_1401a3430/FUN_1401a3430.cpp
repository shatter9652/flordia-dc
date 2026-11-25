// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a3430  size: 236 bytes
// Name:    FUN_1401a3430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401a3430(uint param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  byte bVar8;
  
  if (param_1 == 0 || _DAT_149e2ff18 == (int *)0x0) {
    lVar5 = 0;
  }
  else {
    if (*_DAT_149e2ff18 == 0) {
      lVar5 = *(longlong *)(_DAT_149e2ff18 + 2);
      uVar9 = 0xffffffff;
    }
    else {
      lVar5 = *(longlong *)(_DAT_149e2ff18 + 2);
      bVar8 = (byte)param_1;
      bVar7 = bVar8 & 0x7f;
      uVar6 = param_1 >> 7;
      auVar11._0_8_ =
           CONCAT17(bVar8,CONCAT16(bVar8,CONCAT15(bVar8,CONCAT14(bVar8,CONCAT13(bVar8,CONCAT12(bVar8
                                                  ,CONCAT11(bVar8,bVar8))))))) & 0x7f7f7f7f7f7f7f7f;
      auVar11[8] = bVar7;
      auVar11[9] = bVar7;
      auVar11[10] = bVar7;
      auVar11[0xb] = bVar7;
      auVar11[0xc] = bVar7;
      auVar11[0xd] = bVar7;
      auVar11[0xe] = bVar7;
      auVar11[0xf] = bVar7;
      while( true ) {
        uVar6 = uVar6 & *_DAT_149e2ff18 - 1U;
        auVar1 = *(undefined1 (*) [16])(lVar5 + (ulonglong)uVar6 * 0x1310);
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
          uVar10 = (uint)uVar3;
          do {
            uVar9 = 0;
            for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            if (*(uint *)((ulonglong)uVar6 * 0x1310 + lVar5 + 0x10 + (ulonglong)uVar9 * 0x130) ==
                param_1) {
              uVar9 = uVar9 | uVar6 << 4;
              goto LAB_1401a34e1;
            }
            uVar10 = uVar10 - 1 & uVar10;
          } while (uVar10 != 0);
        }
        auVar1 = vpsignb_avx(auVar1,auVar1);
        uVar9 = 0xffffffff;
        if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar1 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar1 >> 0x3f,0) & 1) != 0) || (SUB161(auVar1 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar1 >> 0x4f,0) & 1) != 0) || (SUB161(auVar1 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || (SUB161(auVar1 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar1 >> 0x6f,0) & 1) != 0) || (SUB161(auVar1 >> 0x77,0) & 1) != 0) ||
            auVar1[0xf] < '\0') break;
        uVar6 = uVar6 + 1;
      }
    }
LAB_1401a34e1:
    lVar5 = (ulonglong)(uVar9 & 0xf) * 0x130 + 0x10 + (ulonglong)(uVar9 >> 4) * 0x1310 + lVar5;
    if (uVar9 == 0xffffffff) {
      lVar5 = 0;
    }
    lVar5 = lVar5 + 8;
    if (uVar9 == 0xffffffff) {
      lVar5 = 0;
    }
  }
  return lVar5;
}

