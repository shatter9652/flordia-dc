// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004aaf0  size: 335 bytes
// Name:    FUN_14004aaf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004ac40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14004aaf0(longlong param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  byte bVar12;
  
  uVar13 = (ulonglong)(uint)*(float *)(param_1 + 0x90);
  if (*(float *)(param_1 + 0x90) < 0.0) {
    lVar7 = func_0x000144fe37f0(*(undefined4 *)
                                 ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x30) != 0)) {
      uVar10 = *(uint *)(_DAT_146c3e830 + 0x68);
      uVar8 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = uVar8 >> 0x10 ^ uVar8;
      lVar2 = *(longlong *)(lVar7 + 0x38);
      uVar9 = uVar8 >> 7;
      bVar12 = (byte)uVar8;
      bVar11 = bVar12 & 0x7f;
      auVar14._0_8_ =
           CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12))))))) &
           0x7f7f7f7f7f7f7f7f;
      auVar14[8] = bVar11;
      auVar14[9] = bVar11;
      auVar14[10] = bVar11;
      auVar14[0xb] = bVar11;
      auVar14[0xc] = bVar11;
      auVar14[0xd] = bVar11;
      auVar14[0xe] = bVar11;
      auVar14[0xf] = bVar11;
      while( true ) {
        uVar9 = uVar9 & *(int *)(lVar7 + 0x30) - 1U;
        auVar1 = *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar9 * 0x90);
        auVar3 = vpcmpeqb_avx(auVar1,auVar14);
        uVar4 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
        uVar8 = (uint)uVar4;
        if (uVar4 != 0) {
          do {
            uVar5 = 0;
            for (uVar6 = uVar8; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            if (*(uint *)((ulonglong)uVar9 * 0x90 + lVar2 + 0x10 + (ulonglong)uVar5 * 8) == uVar10)
            {
              uVar10 = uVar9 << 4 | uVar5;
              if ((uVar10 != 0xffffffff) &&
                 (lVar7 = *(longlong *)
                           (*(longlong *)(lVar7 + 0x28) +
                           (ulonglong)
                           *(uint *)(lVar2 + (ulonglong)(uVar10 >> 4) * 0x90 + 0x14 +
                                    (ulonglong)(uVar5 & 0xf) * 8) * 8), lVar7 != 0)) {
                fVar15 = 0.0;
                if (0.0 <= *(float *)(lVar7 + 0xc)) {
                  return (ulonglong)(uint)*(float *)(lVar7 + 0xc);
                }
                uVar13 = FUN_14004ac40(param_1,*(undefined4 *)(lVar7 + 0x14),
                                       *(undefined4 *)(lVar7 + 0x18));
                if (fVar15 <= (float)uVar13) {
                  return uVar13;
                }
              }
              goto LAB_14004abcf;
            }
            uVar8 = uVar8 - 1 & uVar8;
          } while (uVar8 != 0);
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
        uVar9 = uVar9 + 1;
      }
    }
LAB_14004abcf:
    uVar13 = 0;
  }
  return uVar13;
}

