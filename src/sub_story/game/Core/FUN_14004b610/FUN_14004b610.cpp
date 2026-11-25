// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004b610  size: 80 bytes
// Name:    FUN_14004b610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14004b610(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar14;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined8 uVar23;
  undefined8 uVar24;
  uint uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 aauStack_78 [4] [16];
  undefined8 uStack_30;
  ulonglong uVar13;
  byte bVar15;
  undefined1 auVar22 [64];
  
  uVar8 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if (2 < (byte)(*(char *)(uVar8 + 0xfa) - 9U)) {
    uStack_30 = 0x14004b646;
    fVar16 = (float)func_0x00014515d890(uVar8,*(uint *)(param_1 + 0x464));
    return fVar16 * _DAT_146159ef4;
  }
  uVar1 = *(undefined4 *)(uVar8 + 0x9c);
  auVar19 = ZEXT464(*(uint *)(param_1 + 0x464));
  auVar20 = ZEXT464(*(uint *)(param_1 + 0x460));
  lVar7 = func_0x000144fe37f0(uVar1,*(uint *)(param_1 + 0x460));
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x30) != 0)) {
    uVar11 = *(uint *)(lRam0000000146c481c0 + 0x68);
    uVar9 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    lVar2 = *(longlong *)(lVar7 + 0x38);
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
      uVar10 = uVar10 & *(int *)(lVar7 + 0x30) - 1U;
      auVar21 = *(undefined1 (*) [16])(lVar2 + (ulonglong)uVar10 * 0x90);
      auVar3 = vpcmpeqb_avx(auVar21,auVar17);
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
      uVar13 = (ulonglong)uVar4;
      if (uVar4 != 0) {
        do {
          uVar9 = 0;
          uVar12 = (uint)uVar13;
          for (uVar5 = uVar12; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          if (*(uint *)((ulonglong)uVar10 * 0x90 + lVar2 + 0x10 + (ulonglong)uVar9 * 8) == uVar11) {
            uVar11 = uVar10 << 4 | uVar9;
            if (uVar11 == 0xffffffff) {
              return 0.0;
            }
            lVar7 = *(longlong *)
                     (*(longlong *)(lVar7 + 0x28) +
                     (ulonglong)
                     *(uint *)(lVar2 + (ulonglong)(uVar11 >> 4) * 0x90 + 0x14 +
                              (ulonglong)(uVar9 & 0xf) * 8) * 8);
            if (lVar7 == 0) {
              return 0.0;
            }
            bVar14 = *(byte *)(uVar8 + 0x30);
            cVar6 = func_0x000144dd12a0(CONCAT71((int7)(uVar13 >> 8),bVar14),uVar1,&uStack_8c);
            auVar21._0_12_ = ZEXT812(0);
            auVar21._12_4_ = 0;
            if (cVar6 != '\0') {
              auVar21 = *(undefined1 (*) [16])
                         (*(longlong *)(*(longlong *)((ulonglong)bVar14 * 8 + 0x14a951468) + 8) +
                         (ulonglong)uStack_8c * 0x10);
            }
            auVar22 = ZEXT1664(auVar21);
            uVar23 = *(undefined8 *)(uVar8 + 0x50);
            uVar24 = *(undefined8 *)(uVar8 + 0x58);
            fVar16 = (float)func_0x00014515d890(auVar20._0_8_,auVar19._0_8_);
            fVar18 = fVar16 * _DAT_146159ef4 + _DAT_145fc6ed8;
            aauStack_78[0] = auVar22._0_16_;
            uStack_88 = uVar23;
            uStack_80 = uVar24;
            fVar16 = (float)func_0x00014522f5f0(aauStack_78,&uStack_88,
                                                fVar18 * *(float *)(lVar7 + 0x20),fVar18,0);
            return (SQRT(fVar18) * fVar18 * fVar18 + _DAT_145fc6f48) * fVar16;
          }
          uVar12 = uVar12 - 1 & uVar12;
          uVar13 = (ulonglong)uVar12;
        } while (uVar12 != 0);
      }
      auVar21 = vpsignb_avx(auVar21,auVar21);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar10 = uVar10 + 1;
    }
  }
  return 0.0;
}

