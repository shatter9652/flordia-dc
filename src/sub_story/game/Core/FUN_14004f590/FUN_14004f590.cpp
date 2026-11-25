// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004f590  size: 271 bytes
// Name:    FUN_14004f590
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14004f590(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar11;
  undefined1 auVar12 [16];
  byte bVar10;
  
  cVar5 = func_0x00014004f6a0();
  if (cVar5 == '\0') {
    lVar6 = 0;
  }
  else {
    if (*_DAT_147612cc0 == 0) {
      lVar6 = *(longlong *)(_DAT_147612cc0 + 2);
      uVar7 = 0xffffffff;
    }
    else {
      lVar6 = *(longlong *)(_DAT_147612cc0 + 2);
      uVar7 = ((uint)((ulonglong)param_1 >> 0x10) & 0xffff ^ (uint)param_1) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar7 = uVar7 >> 0x10 ^ uVar7;
      uVar8 = uVar7 >> 7;
      bVar10 = (byte)uVar7;
      bVar9 = bVar10 & 0x7f;
      auVar12._0_8_ =
           CONCAT17(bVar10,CONCAT16(bVar10,CONCAT15(bVar10,CONCAT14(bVar10,CONCAT13(bVar10,CONCAT12(
                                                  bVar10,CONCAT11(bVar10,bVar10))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar12[8] = bVar9;
      auVar12[9] = bVar9;
      auVar12[10] = bVar9;
      auVar12[0xb] = bVar9;
      auVar12[0xc] = bVar9;
      auVar12[0xd] = bVar9;
      auVar12[0xe] = bVar9;
      auVar12[0xf] = bVar9;
      while( true ) {
        uVar8 = uVar8 & *_DAT_147612cc0 - 1U;
        auVar1 = *(undefined1 (*) [16])(lVar6 + (ulonglong)uVar8 * 0xd0);
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
          uVar11 = (uint)uVar3;
          do {
            uVar7 = 0;
            for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
              uVar7 = uVar7 + 1;
            }
            if (*(uint *)((ulonglong)uVar8 * 0xd0 + lVar6 + 0x10 + (ulonglong)uVar7 * 0xc) ==
                (uint)param_1) {
              uVar7 = uVar7 | uVar8 << 4;
              goto LAB_14004f632;
            }
            uVar11 = uVar11 - 1 & uVar11;
          } while (uVar11 != 0);
        }
        auVar1 = vpsignb_avx(auVar1,auVar1);
        uVar7 = 0xffffffff;
        if ((((((((((((((((SUB161(auVar1 >> 7,0) & 1) != 0 || (SUB161(auVar1 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar1 >> 0x17,0) & 1) != 0) || (SUB161(auVar1 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar1 >> 0x27,0) & 1) != 0) || (SUB161(auVar1 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar1 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar1 >> 0x3f,0) & 1) != 0) || (SUB161(auVar1 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar1 >> 0x4f,0) & 1) != 0) || (SUB161(auVar1 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || (SUB161(auVar1 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar1 >> 0x6f,0) & 1) != 0) || (SUB161(auVar1 >> 0x77,0) & 1) != 0) ||
            auVar1[0xf] < '\0') break;
        uVar8 = uVar8 + 1;
      }
    }
LAB_14004f632:
    lVar6 = (ulonglong)(uVar7 >> 4) * 0xd0 + lVar6 + 0x10 + (ulonglong)(uVar7 & 0xf) * 0xc;
    if (uVar7 == 0xffffffff) {
      lVar6 = 0;
    }
    lVar6 = lVar6 + 4;
    if (uVar7 == 0xffffffff) {
      lVar6 = 0;
    }
  }
  return lVar6;
}

