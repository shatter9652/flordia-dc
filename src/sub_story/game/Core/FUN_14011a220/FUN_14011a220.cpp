// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a220  size: 734 bytes
// Name:    FUN_14011a220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14011a220(uint *param_1,int *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  byte bVar20;
  
  if (param_1[1] == param_2[1]) {
    lVar4 = *(longlong *)(param_1 + 2);
    uVar12 = *param_1 << 4;
    uVar10 = 0;
    if (uVar12 != 0) {
      uVar14 = 0;
      do {
        uVar10 = uVar14;
        if (!SBORROW1('\0',*(char *)((ulonglong)(uVar14 & 0xf) +
                                    (ulonglong)(uVar14 >> 4) * 0x1d0 + lVar4))) break;
        uVar14 = uVar14 + 1;
        uVar10 = uVar12;
      } while (uVar12 != uVar14);
    }
    lVar13 = (ulonglong)(*param_1 & 0xfffffff) * 0x1d0;
    lVar15 = (ulonglong)(uVar10 >> 4) * 0x1d0;
    uVar9 = 1;
    uVar11 = (ulonglong)((uVar10 & 0xf) * 0x1c);
    if (lVar15 + uVar11 != lVar13) {
      lVar15 = lVar15 + 0x10 + uVar11;
      lVar5 = *(longlong *)(param_2 + 2);
      uVar14 = *param_2 - 1;
LAB_14011a2df:
      if (*param_2 != 0) {
        uVar18 = *(uint *)(lVar4 + lVar15);
        uVar16 = (uVar18 >> 0x10 ^ uVar18) * -0x7a143595;
        uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
        uVar16 = uVar16 >> 0x10 ^ uVar16;
        uVar17 = uVar16 >> 7;
        bVar20 = (byte)uVar16;
        bVar19 = bVar20 & 0x7f;
        auVar21._0_8_ =
             CONCAT17(bVar20,CONCAT16(bVar20,CONCAT15(bVar20,CONCAT14(bVar20,CONCAT13(bVar20,
                                                  CONCAT12(bVar20,CONCAT11(bVar20,bVar20))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar21[8] = bVar19;
        auVar21[9] = bVar19;
        auVar21[10] = bVar19;
        auVar21[0xb] = bVar19;
        auVar21[0xc] = bVar19;
        auVar21[0xd] = bVar19;
        auVar21[0xe] = bVar19;
        auVar21[0xf] = bVar19;
        while( true ) {
          uVar17 = uVar17 & uVar14;
          auVar22 = *(undefined1 (*) [16])(lVar5 + (ulonglong)uVar17 * 0x1d0);
          auVar23 = vpcmpeqb_avx(auVar22,auVar21);
          uVar6 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar23[0xf] >> 7) << 0xf;
          if (uVar6 != 0) {
            uVar16 = (uint)uVar6;
            do {
              uVar7 = 0;
              for (uVar8 = uVar16; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              if (*(uint *)((ulonglong)uVar17 * 0x1d0 + lVar5 + 0x10 + (ulonglong)uVar7 * 0x1c) ==
                  uVar18) {
                uVar18 = uVar17 << 4 | uVar7;
                lVar1 = (ulonglong)(uVar18 >> 4) * 0x1d0 + lVar5 + 0x10 +
                        (ulonglong)(uVar7 & 0xf) * 0x1c;
                if (((((uVar18 == 0xffffffff) ||
                      (*(int *)(lVar4 + 0x14 + lVar15) != *(int *)(lVar1 + 0x14))) ||
                     (fVar2 = *(float *)(lVar4 + 4 + lVar15), fVar2 != *(float *)(lVar1 + 4))) ||
                    ((NAN(fVar2) || NAN(*(float *)(lVar1 + 4)) ||
                     (fVar2 = *(float *)(lVar4 + 8 + lVar15), fVar2 != *(float *)(lVar1 + 8))))) ||
                   ((NAN(fVar2) || NAN(*(float *)(lVar1 + 8)) ||
                    ((fVar2 = *(float *)(lVar4 + 0xc + lVar15), fVar2 != *(float *)(lVar1 + 0xc) ||
                     (NAN(fVar2) || NAN(*(float *)(lVar1 + 0xc)))))))) goto LAB_14011a4f2;
                fVar2 = *(float *)(lVar1 + 0x10);
                fVar3 = *(float *)(lVar4 + 0x10 + lVar15);
                auVar22._0_4_ = (uint)(fVar3 - fVar2) ^ _DAT_145fc6f10;
                auVar22._4_4_ = _DAT_145fc6f10;
                auVar22._8_4_ = _DAT_145fc6f10;
                auVar22._12_4_ = _DAT_145fc6f10;
                auVar21 = vmaxss_avx(auVar22,ZEXT416((uint)(fVar3 - fVar2)));
                auVar23._0_4_ = (uint)fVar2 ^ _DAT_145fc6f10;
                auVar23._4_4_ = _DAT_145fc6f10;
                auVar23._8_4_ = _DAT_145fc6f10;
                auVar23._12_4_ = _DAT_145fc6f10;
                auVar22 = vmaxss_avx(auVar23,ZEXT416((uint)fVar2));
                auVar24._0_4_ = (uint)fVar3 ^ _DAT_145fc6f10;
                auVar24._4_4_ = _DAT_145fc6f10;
                auVar24._8_4_ = _DAT_145fc6f10;
                auVar24._12_4_ = _DAT_145fc6f10;
                auVar23 = vmaxss_avx(auVar24,ZEXT416((uint)fVar3));
                auVar23 = vmaxss_avx(ZEXT416(_DAT_145fc6ed8),auVar23);
                auVar22 = vmaxss_avx(auVar23,auVar22);
                uVar18 = uVar10;
                if (auVar22._0_4_ * _DAT_145fc6f00 < auVar21._0_4_) goto LAB_14011a4f2;
                goto joined_r0x00014011a44c;
              }
              uVar16 = uVar16 - 1 & uVar16;
            } while (uVar16 != 0);
          }
          auVar22 = vpsignb_avx(auVar22,auVar22);
          if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x2f,0) & 1) != 0) || (SUB161(auVar22 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar22 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x47,0) & 1) != 0) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
          uVar17 = uVar17 + 1;
        }
      }
      goto LAB_14011a4f2;
    }
  }
  else {
LAB_14011a4f2:
    uVar9 = 0;
  }
  return uVar9;
joined_r0x00014011a44c:
  uVar10 = uVar12;
  if (uVar18 == uVar12) goto LAB_14011a47d;
  while (uVar10 = uVar18 + 1, uVar18 = uVar10, uVar10 < uVar12) {
    if (!SBORROW1('\0',*(char *)((ulonglong)(uVar10 & 0xf) +
                                (ulonglong)(uVar10 >> 4) * 0x1d0 + lVar4))) goto LAB_14011a47d;
  }
  goto joined_r0x00014011a44c;
LAB_14011a47d:
  lVar15 = (ulonglong)(uVar10 >> 4) * 0x1d0 + 0x10 + (ulonglong)((uVar10 & 0xf) * 0x1c);
  if (lVar15 == lVar13 + 0x10) {
    return CONCAT71((uint7)(uint3)(uVar14 >> 8),1);
  }
  goto LAB_14011a2df;
}

