// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015dda0  size: 59 bytes
// Name:    FUN_14015dda0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1411a3ea0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015dda0(longlong param_1)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  undefined1 auVar18 [16];
  ulonglong uStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined4 uStack_24;
  byte bVar17;
  
  if (*(int *)(param_1 + 700) != 0) {
    uStack_40 = 0x14015ddd0;
    FUN_1411a3ea0((undefined4 *)(param_1 + 700),0);
    *(undefined4 *)(param_1 + 700) = 0;
  }
  if (*(char *)(param_1 + 0x100) == '\x01') {
    *(undefined1 *)(param_1 + 0x101) = 1;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x280);
    if ((uVar6 != 0) && (iRam00000001492ab2e0 != 0)) {
      bVar17 = (byte)uVar6;
      bVar16 = bVar17 & 0x7f;
      uVar8 = uVar6 >> 7;
      uVar9 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
      auVar18._0_8_ =
           CONCAT17(bVar17,CONCAT16(bVar17,CONCAT15(bVar17,CONCAT14(bVar17,CONCAT13(bVar17,CONCAT12(
                                                  bVar17,CONCAT11(bVar17,bVar17))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar18[8] = bVar16;
      auVar18[9] = bVar16;
      auVar18[10] = bVar16;
      auVar18[0xb] = bVar16;
      auVar18[0xc] = bVar16;
      auVar18[0xd] = bVar16;
      auVar18[0xe] = bVar16;
      auVar18[0xf] = bVar16;
      while( true ) {
        uVar8 = uVar8 & iRam00000001492ab2e0 - 1U;
        auVar1 = *(undefined1 (*) [16])(lRam00000001492ab2e8 + (ulonglong)uVar8 * 0x110);
        auVar4 = vpcmpeqb_avx(auVar1,auVar18);
        uVar2 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
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
        uVar10 = (uint)uVar2;
        if (uVar2 != 0) {
          do {
            uVar11 = 0;
            for (uVar12 = uVar10; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
              uVar11 = uVar11 + 1;
            }
            if (*(uint *)((ulonglong)uVar8 * 0x110 + lRam00000001492ab2e8 + 0x10 +
                         (ulonglong)(uVar11 << 4)) == uVar6) {
              uVar6 = uVar8 << 4 | uVar11;
              if (uVar6 != 0xffffffff) {
                lVar3 = *(longlong *)
                         ((ulonglong)((uVar11 & 0xf) << 4) + 0x18 +
                         lRam00000001492ab2e8 + (ulonglong)(uVar6 >> 4) * 0x110);
                if (lVar3 != 0) {
                  uStack_30 = 0;
                  uStack_28 = 0;
                  uStack_24 = 4;
                  uStack_40 = uVar9;
                  uStack_38 = uVar9;
                  FUN_1401611a0(*(undefined4 *)(lVar3 + 0x28),&uStack_40);
                }
              }
              goto code_r0x00014015e009;
            }
            uVar10 = uVar10 - 1 & uVar10;
          } while (uVar10 != 0);
        }
        auVar1 = vpsignb_avx(auVar1,auVar1);
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
code_r0x00014015e009:
    FUN_14015f800(param_1,0);
    *(byte *)(param_1 + 0x2b8) = *(byte *)(param_1 + 0x2b8) & 0xfc;
    uVar2 = *(ushort *)(param_1 + 0x298);
    if ((uVar2 & 0x40) == 0) {
      uVar7 = uVar2 & 0xffef;
    }
    else {
      uVar7 = uVar2 & 0xffaf;
    }
    uVar5 = uVar7 & 0x20;
    if ((uVar7 & 0x20) != 0) {
      uVar7 = uVar7 & 0xffcf;
    }
    if ((uVar2 & 0x50) != 0 || uVar5 != 0) {
      *(ushort *)(param_1 + 0x298) = uVar7;
    }
    func_0x00014015e240(param_1);
    FUN_14015e250(param_1);
    uVar6 = *(uint *)(param_1 + 0x2b0);
    uVar8 = uVar6 & 1;
    if (uVar8 != 0) {
      uVar6 = uVar6 & 0xfffffffe;
    }
    uVar10 = uVar6 & 2;
    if (uVar10 != 0) {
      uVar6 = uVar6 & 0xfffffffd;
    }
    uVar11 = uVar6 & 4;
    if (uVar11 != 0) {
      uVar6 = uVar6 & 0xfffffffb;
    }
    uVar12 = uVar6 & 8;
    if (uVar12 != 0) {
      uVar6 = uVar6 & 0xfffffff7;
    }
    uVar13 = uVar6 & 0x10;
    if (uVar13 != 0) {
      uVar6 = uVar6 & 0xffffffef;
    }
    uVar14 = uVar6 & 0x20;
    if (uVar14 != 0) {
      uVar6 = uVar6 & 0xffffffdf;
    }
    uVar15 = uVar6 & 0x40;
    if (uVar15 != 0) {
      uVar6 = uVar6 & 0xffffffbf;
    }
    if ((((((uVar8 != 0 || uVar10 != 0) || uVar11 != 0) || uVar12 != 0) || uVar13 != 0) ||
        uVar14 != 0) || uVar15 != 0) {
      *(uint *)(param_1 + 0x2b0) = uVar6;
    }
    if (*(int *)(param_1 + 0x280) != 0) {
      *(undefined4 *)(param_1 + 0x280) = 0;
    }
    *(byte *)(param_1 + 0x2c2) = *(byte *)(param_1 + 0x2c2) & 0xfd;
  }
  return;
}

