// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004ad60  size: 436 bytes
// Name:    FUN_14004ad60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eb3750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14004ad60(longlong param_1)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  byte bVar14;
  float fVar16;
  undefined1 auVar17 [16];
  ulonglong uVar18;
  undefined1 auVar19 [64];
  byte bVar15;
  
  auVar19 = ZEXT464(*(uint *)(param_1 + 0x94));
  uVar3 = *(undefined4 *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c);
  lVar8 = FUN_144eb3750(uVar3);
  if ((lVar8 != 0) && (lVar8 = func_0x000144da6540(*(undefined4 *)(lVar8 + 0x9c)), lVar8 != 0)) {
    fVar16 = *(float *)(lVar8 + 0x29e0);
    if ((fVar16 != _DAT_145fc6f48) || (NAN(fVar16) || NAN(_DAT_145fc6f48))) {
      auVar19 = ZEXT464((uint)(fVar16 * auVar19._0_4_));
    }
  }
  lVar8 = func_0x000144fe37f0(uVar3);
  uVar18 = auVar19._0_8_;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x30) != 0)) {
    uVar11 = *(uint *)(_DAT_146c3e830 + 0x68);
    uVar9 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    lVar12 = *(longlong *)(lVar8 + 0x38);
    uVar10 = uVar9 >> 7;
    bVar15 = (byte)uVar9;
    bVar14 = bVar15 & 0x7f;
    auVar17._0_8_ =
         CONCAT17(bVar15,CONCAT16(bVar15,CONCAT15(bVar15,CONCAT14(bVar15,CONCAT13(bVar15,CONCAT12(
                                                  bVar15,CONCAT11(bVar15,bVar15))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar17[8] = bVar14;
    auVar17[9] = bVar14;
    auVar17[10] = bVar14;
    auVar17[0xb] = bVar14;
    auVar17[0xc] = bVar14;
    auVar17[0xd] = bVar14;
    auVar17[0xe] = bVar14;
    auVar17[0xf] = bVar14;
    while( true ) {
      uVar10 = uVar10 & *(int *)(lVar8 + 0x30) - 1U;
      auVar2 = *(undefined1 (*) [16])(lVar12 + (ulonglong)uVar10 * 0x90);
      auVar4 = vpcmpeqb_avx(auVar2,auVar17);
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
          if (*(uint *)((ulonglong)uVar10 * 0x90 + lVar12 + 0x10 + (ulonglong)uVar6 * 8) == uVar11)
          {
            uVar11 = uVar10 << 4 | uVar6;
            if (uVar11 == 0xffffffff) {
              return uVar18;
            }
            lVar8 = *(longlong *)
                     (*(longlong *)(lVar8 + 0x28) +
                     (ulonglong)
                     *(uint *)(lVar12 + (ulonglong)(uVar11 >> 4) * 0x90 + 0x14 +
                              (ulonglong)(uVar6 & 0xf) * 8) * 8);
            if (lVar8 == 0) {
              return uVar18;
            }
            fVar16 = *(float *)(lVar8 + 0x1c);
            if ((ulonglong)*(uint *)(param_1 + 0xec) != 0) {
              lVar12 = 0;
              bVar13 = false;
              do {
                pfVar1 = (float *)(*(longlong *)(param_1 + 0xf0) + 200 + lVar12);
                lVar12 = lVar12 + 0x120;
                bVar13 = (bool)(bVar13 | 0.0 < *pfVar1);
              } while ((ulonglong)*(uint *)(param_1 + 0xec) * 0x120 != lVar12);
              if (bVar13) {
                fVar16 = fVar16 + *(float *)(lVar8 + 0x20);
              }
            }
            return (ulonglong)(uint)((fVar16 + _DAT_145fc6ed8) * auVar19._0_4_);
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
  return uVar18;
}

