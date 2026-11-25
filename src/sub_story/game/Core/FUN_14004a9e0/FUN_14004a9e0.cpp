// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004a9e0  size: 263 bytes
// Name:    FUN_14004a9e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14004a9e0(ulonglong param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  undefined1 auVar14 [16];
  byte bVar13;
  
  lVar8 = func_0x000144fe37f0(*(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c));
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x30) != 0)) {
    uVar11 = *(uint *)(_DAT_146c3e830 + 0x68);
    uVar9 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    lVar3 = *(longlong *)(lVar8 + 0x38);
    uVar10 = uVar9 >> 7;
    bVar13 = (byte)uVar9;
    bVar12 = bVar13 & 0x7f;
    auVar14._0_8_ =
         CONCAT17(bVar13,CONCAT16(bVar13,CONCAT15(bVar13,CONCAT14(bVar13,CONCAT13(bVar13,CONCAT12(
                                                  bVar13,CONCAT11(bVar13,bVar13))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar14[8] = bVar12;
    auVar14[9] = bVar12;
    auVar14[10] = bVar12;
    auVar14[0xb] = bVar12;
    auVar14[0xc] = bVar12;
    auVar14[0xd] = bVar12;
    auVar14[0xe] = bVar12;
    auVar14[0xf] = bVar12;
    while( true ) {
      uVar10 = uVar10 & *(int *)(lVar8 + 0x30) - 1U;
      auVar2 = *(undefined1 (*) [16])(lVar3 + (ulonglong)uVar10 * 0x90);
      auVar4 = vpcmpeqb_avx(auVar2,auVar14);
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
      uVar9 = (uint)uVar5;
      if (uVar5 != 0) {
        do {
          uVar6 = 0;
          for (uVar7 = uVar9; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          if (*(uint *)((ulonglong)uVar10 * 0x90 + lVar3 + 0x10 + (ulonglong)uVar6 * 8) == uVar11) {
            uVar11 = uVar10 << 4 | uVar6;
            if (uVar11 == 0xffffffff) {
              return 0.0;
            }
            lVar8 = *(longlong *)
                     (*(longlong *)(lVar8 + 0x28) +
                     (ulonglong)
                     *(uint *)(lVar3 + (ulonglong)(uVar11 >> 4) * 0x90 + 0x14 +
                              (ulonglong)(uVar6 & 0xf) * 8) * 8);
            if (lVar8 == 0) {
              return 0.0;
            }
            fVar1 = *(float *)(lVar8 + 0x10);
            if (fVar1 < 0.0) {
              return 0.0;
            }
            return fVar1;
          }
          uVar9 = uVar9 - 1 & uVar9;
        } while (uVar9 != 0);
      }
      auVar2 = vpsignb_avx(auVar2,auVar2);
      if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 || (SUB161(auVar2 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar2 >> 0x17,0) & 1) != 0) || (SUB161(auVar2 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar2 >> 0x27,0) & 1) != 0) || (SUB161(auVar2 >> 0x2f,0) & 1) != 0)
                  || (SUB161(auVar2 >> 0x37,0) & 1) != 0) || (SUB161(auVar2 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar2 >> 0x47,0) & 1) != 0) || (SUB161(auVar2 >> 0x4f,0) & 1) != 0) ||
              (SUB161(auVar2 >> 0x57,0) & 1) != 0) || (SUB161(auVar2 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar2 >> 0x67,0) & 1) != 0) || (SUB161(auVar2 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar2 >> 0x77,0) & 1) != 0) || auVar2[0xf] < '\0') break;
      uVar10 = uVar10 + 1;
    }
  }
  return 0.0;
}

