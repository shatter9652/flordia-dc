// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b5480  size: 1581 bytes
// Name:    FUN_1400b5480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1417ac070, FUN_1454868d0, FUN_140b99040, FUN_14260c2f0, FUN_140004b40, FUN_140b99630, FUN_14260a000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b5480(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uStack_5c;
  undefined8 uStack_58;
  longlong lStack_50;
  uint uStack_44;
  char cStack_40;
  
  if (param_1 != 0) {
    bVar17 = *(byte *)(param_1 + 0x30);
    plVar2 = *(longlong **)((ulonglong)bVar17 * 8 + 0x14abbe7c0);
    uVar19 = (uint)((ulonglong)(param_1 - *plVar2) / (ulonglong)*(uint *)(plVar2 + 1));
    uVar8 = uVar19 & 0x1ffff;
    uVar19 = uVar19 & 0x1ffff;
    uVar9 = *(uint *)(plVar2[5] + (ulonglong)uVar8 * 4);
    uStack_5c = (bVar17 & 0x1f) << 0x11 | (uVar9 & 0x7fe0000) << 5 | uVar19;
    if ((((uVar19 != 0x1ffff) &&
         (plVar2 = *(longlong **)((ulonglong)(bVar17 & 0x1f) * 8 + 0x14abbe7c0),
         plVar2 != (longlong *)0x0)) &&
        (uVar19 = *(uint *)(plVar2[5] + (ulonglong)uVar8 * 4),
        (uVar19 >> 0x11 & 0x3ff) == (uVar9 & 0x7ffffff) >> 0x11)) &&
       (((uVar19 & *(uint *)(plVar2 + 6)) == *(uint *)(plVar2 + 6) && (*plVar2 != 0)))) {
      uVar9 = (uStack_5c >> 0x10 ^ uStack_5c) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar11 = (ulonglong)(uVar9 >> 0x10 ^ uVar9);
      uVar9 = 0xffffffff;
      if (_DAT_147661198 != 0) {
        lVar15 = (uVar11 * -0xae502812aa7333 >> 0x21 ^ uVar11 * -0xae502812aa7333) *
                 -0x3b314601e57a13ad;
        uVar19 = (uint)((ulonglong)lVar15 >> 0x21) ^ (uint)lVar15;
        uVar8 = uVar19 >> 7;
        bVar18 = (byte)uVar19;
        bVar17 = bVar18 & 0x7f;
        auVar21._0_8_ =
             CONCAT17(bVar18,CONCAT16(bVar18,CONCAT15(bVar18,CONCAT14(bVar18,CONCAT13(bVar18,
                                                  CONCAT12(bVar18,CONCAT11(bVar18,bVar18))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar21[8] = bVar17;
        auVar21[9] = bVar17;
        auVar21[10] = bVar17;
        auVar21[0xb] = bVar17;
        auVar21[0xc] = bVar17;
        auVar21[0xd] = bVar17;
        auVar21[0xe] = bVar17;
        auVar21[0xf] = bVar17;
        while( true ) {
          uVar8 = uVar8 & _DAT_147661198 - 1U;
          auVar22 = *(undefined1 (*) [16])(_DAT_1476611a0 + (ulonglong)uVar8 * 0x2110);
          auVar23 = vpcmpeqb_avx(auVar22,auVar21);
          uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
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
          if (uVar3 != 0) {
            uVar19 = (uint)uVar3;
            do {
              uVar14 = 0;
              for (uVar4 = uVar19; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar14 = uVar14 + 1;
              }
              if (*(ulonglong *)
                   ((ulonglong)uVar8 * 0x2110 + _DAT_1476611a0 + 0x10 + (ulonglong)uVar14 * 0x210)
                  == uVar11) {
                uVar9 = uVar14 | uVar8 << 4;
                goto LAB_1400b5629;
              }
              uVar19 = uVar19 - 1 & uVar19;
            } while (uVar19 != 0);
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
          uVar8 = uVar8 + 1;
        }
      }
LAB_1400b5629:
      if (*(longlong *)(param_1 + 0x20) == 0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x60);
      }
      uVar19 = 0xffffffff;
      if (_DAT_147661188 != 0) {
        bVar17 = (byte)uVar13;
        bVar18 = bVar17 & 0x7f;
        uVar16 = uVar13 >> 7 & 0x1ffffff;
        auVar22._0_8_ =
             CONCAT17(bVar17,CONCAT16(bVar17,CONCAT15(bVar17,CONCAT14(bVar17,CONCAT13(bVar17,
                                                  CONCAT12(bVar17,CONCAT11(bVar17,bVar17))))))) &
             0x7f7f7f7f7f7f7f7f;
        auVar22[8] = bVar18;
        auVar22[9] = bVar18;
        auVar22[10] = bVar18;
        auVar22[0xb] = bVar18;
        auVar22[0xc] = bVar18;
        auVar22[0xd] = bVar18;
        auVar22[0xe] = bVar18;
        auVar22[0xf] = bVar18;
        while( true ) {
          uVar8 = (uint)uVar16 & _DAT_147661188 - 1U;
          auVar21 = *(undefined1 (*) [16])(_DAT_147661190 + (ulonglong)uVar8 * 0x2110);
          auVar23 = vpcmpeqb_avx(auVar21,auVar22);
          uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1
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
          if (uVar3 != 0) {
            uVar14 = (uint)uVar3;
            do {
              uVar4 = 0;
              for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                uVar4 = uVar4 + 1;
              }
              if (*(ulonglong *)
                   ((ulonglong)uVar8 * 0x2110 + _DAT_147661190 + 0x10 + (ulonglong)uVar4 * 0x210) ==
                  uVar13) {
                uVar19 = uVar4 | uVar8 << 4;
                goto LAB_1400b56c9;
              }
              uVar14 = uVar14 - 1 & uVar14;
            } while (uVar14 != 0);
          }
          auVar21 = vpsignb_avx(auVar21,auVar21);
          if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x2f,0) & 1) != 0) || (SUB161(auVar21 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
          uVar16 = (ulonglong)(uVar8 + 1);
        }
      }
LAB_1400b56c9:
      if ((uVar9 & uVar19) != 0xffffffff) {
        FUN_140004b40(0x147663cc0);
        if (*(longlong *)(param_1 + 0x20) == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x60);
        }
        cVar7 = func_0x000141986d40(uVar12);
        if ((cVar7 != '\0') && (_DAT_147663c48 != 0)) {
          lVar15 = (uVar11 * -0xae502812aa7333 >> 0x21 ^ uVar11 * -0xae502812aa7333) *
                   -0x3b314601e57a13ad;
          uVar9 = (uint)((ulonglong)lVar15 >> 0x21) ^ (uint)lVar15;
          uVar8 = uVar9 >> 7;
          bVar18 = (byte)uVar9;
          bVar17 = bVar18 & 0x7f;
          auVar23._0_8_ =
               CONCAT17(bVar18,CONCAT16(bVar18,CONCAT15(bVar18,CONCAT14(bVar18,CONCAT13(bVar18,
                                                  CONCAT12(bVar18,CONCAT11(bVar18,bVar18))))))) &
               0x7f7f7f7f7f7f7f7f;
          auVar23[8] = bVar17;
          auVar23[9] = bVar17;
          auVar23[10] = bVar17;
          auVar23[0xb] = bVar17;
          auVar23[0xc] = bVar17;
          auVar23[0xd] = bVar17;
          auVar23[0xe] = bVar17;
          auVar23[0xf] = bVar17;
          uVar9 = uVar8;
          while( true ) {
            uVar9 = uVar9 & _DAT_147663c48 - 1U;
            auVar21 = *(undefined1 (*) [16])(_DAT_147663c50 + (ulonglong)uVar9 * 0x90);
            auVar22 = vpcmpeqb_avx(auVar21,auVar23);
            uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
            if (uVar3 != 0) {
              uVar14 = (uint)uVar3;
              do {
                uVar4 = 0;
                for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                if (*(ulonglong *)
                     ((ulonglong)uVar9 * 0x90 + _DAT_147663c50 + 0x10 + (ulonglong)uVar4 * 8) ==
                    uVar11) {
                  if ((uVar4 | uVar9 << 4) != 0xffffffff) goto LAB_1400b57b5;
                  goto LAB_1400b5806;
                }
                uVar14 = uVar14 - 1 & uVar14;
              } while (uVar14 != 0);
            }
            auVar21 = vpsignb_avx(auVar21,auVar21);
            if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar21 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar21 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') break;
            uVar9 = uVar9 + 1;
          }
        }
LAB_1400b5806:
        lVar15 = FUN_1454868d0(param_1,0);
        if (((*(byte *)(lVar15 + 0x6d) & 8) == 0) &&
           (FUN_140b99040(param_1,1), uVar19 != 0xffffffff)) {
          if (*(longlong *)(param_1 + 0x20) == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x60);
          }
          uStack_58 = uVar12;
          FUN_14260a000(0x1476611e8,&lStack_50);
          if (cStack_40 == '\0') {
            uVar11 = (ulonglong)(uStack_44 & 0xf);
            uVar13 = (ulonglong)(uStack_44 >> 4);
          }
          else {
            uVar11 = (ulonglong)(uStack_44 & 0xf);
            uVar13 = (ulonglong)(uStack_44 >> 4);
            lVar15 = uVar13 * 400 + lStack_50;
            *(undefined8 *)(lVar15 + 0x10 + uVar11 * 0x18) = uVar12;
            *(undefined1 (*) [16])(lVar15 + 0x18 + uVar11 * 0x18) = (undefined1  [16])0x0;
          }
          FUN_1417ac070(uVar13 * 400 + lStack_50 + 0x18 + uVar11 * 0x18,&lStack_50,&uStack_5c);
          if (cStack_40 == '\x01') {
            *(uint *)((ulonglong)(uStack_44 >> 4) * 0x50 + lStack_50 + 0x10 +
                     (ulonglong)(uStack_44 & 0xf) * 4) = uStack_5c;
          }
          cVar7 = func_0x0001409538b0(param_1);
          if (cVar7 != '\0') {
            if (*(longlong *)(param_1 + 0x20) == 0) {
              uStack_58 = 0;
            }
            else {
              uStack_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x60);
            }
            FUN_140b99630(&lStack_50);
            pbVar1 = (byte *)((ulonglong)(uStack_44 & 0xf) * 0x210 + 0x85 +
                             (ulonglong)(uStack_44 >> 4) * 0x2110 + lStack_50);
            *pbVar1 = *pbVar1 | 0x80;
            if (*(longlong *)(param_1 + 0x20) == 0) {
              uStack_58 = 0;
            }
            else {
              uStack_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x60);
            }
            FUN_140b99630(&lStack_50);
            pbVar1 = (byte *)((ulonglong)(uStack_44 & 0xf) * 0x210 + 0x105 +
                             (ulonglong)(uStack_44 >> 4) * 0x2110 + lStack_50);
            *pbVar1 = *pbVar1 | 0x80;
            if (*(longlong *)(param_1 + 0x20) == 0) {
              uStack_58 = 0;
            }
            else {
              uStack_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x60);
            }
            FUN_140b99630(&lStack_50);
            pbVar1 = (byte *)((ulonglong)(uStack_44 & 0xf) * 0x210 + 0x185 +
                             (ulonglong)(uStack_44 >> 4) * 0x2110 + lStack_50);
            *pbVar1 = *pbVar1 | 0x80;
            if (*(longlong *)(param_1 + 0x20) == 0) {
              uStack_58 = 0;
            }
            else {
              uStack_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x60);
            }
            FUN_140b99630(&lStack_50);
            pbVar1 = (byte *)((ulonglong)(uStack_44 & 0xf) * 0x210 + 0x205 +
                             (ulonglong)(uStack_44 >> 4) * 0x2110 + lStack_50);
            *pbVar1 = *pbVar1 | 0x80;
          }
          if (*(longlong *)(param_1 + 0x20) == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x60);
          }
          cVar7 = func_0x000141986d40(uVar12);
          if ((cVar7 != '\0') &&
             (FUN_1417ac070(0x147663c28,&lStack_50,&uStack_5c), cStack_40 == '\x01')) {
            *(uint *)((ulonglong)(uStack_44 >> 4) * 0x50 + lStack_50 + 0x10 +
                     (ulonglong)(uStack_44 & 0xf) * 4) = uStack_5c;
          }
        }
LAB_1400b5a7b:
        iRam0000000147663cd0 = iRam0000000147663cd0 + -1;
        uVar11 = uRam0000000147663cc0;
        if (iRam0000000147663cd0 == 0) {
          do {
            uVar16 = uVar11;
            LOCK();
            uVar11 = uVar16;
            uVar13 = (ulonglong)((int)uVar16 - 1) | 0xffffffff00000000;
            if (uVar16 != uRam0000000147663cc0) {
              uVar11 = uRam0000000147663cc0;
              uVar13 = uRam0000000147663cc0;
            }
            uRam0000000147663cc0 = uVar13;
            UNLOCK();
          } while (uVar16 != uVar11);
          if ((uVar16 & 0xfffffffe) != 0) {
            iRam0000000147663cd0 = 0;
            lVar15 = lRam0000000147663cc8;
            do {
              while (lVar15 < 0) {
                lStack_50 = 0x140019c89;
                cVar7 = FUN_1400062d0(0x147663cc8,1,&stack0xffffffffffffffe0);
                if (cVar7 != '\0') {
                  return;
                }
              }
              LOCK();
              lVar10 = lVar15;
              lVar6 = lVar15 + 0x100000000;
              if (lVar15 != lRam0000000147663cc8) {
                lVar10 = lRam0000000147663cc8;
                lVar6 = lRam0000000147663cc8;
              }
              lRam0000000147663cc8 = lVar6;
              UNLOCK();
              bVar20 = lVar15 != lVar10;
              lVar15 = lVar10;
            } while (bVar20);
            return;
          }
        }
        return;
      }
    }
  }
  return;
LAB_1400b57b5:
  uVar8 = uVar8 & _DAT_147663c48 - 1U;
  auVar21 = *(undefined1 (*) [16])(_DAT_147663c50 + (ulonglong)uVar8 * 0x90);
  auVar22 = vpcmpeqb_avx(auVar21,auVar23);
  uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar22[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    uVar9 = (uint)uVar3;
    do {
      uVar19 = 0;
      for (uVar14 = uVar9; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
        uVar19 = uVar19 + 1;
      }
      if (*(ulonglong *)((ulonglong)uVar8 * 0x90 + _DAT_147663c50 + 0x10 + (ulonglong)uVar19 * 8) ==
          uVar11) {
        if ((uVar19 | uVar8 << 4) != 0xffffffff) {
          FUN_14260c2f0(&DAT_147663c48);
        }
        goto LAB_1400b5a7b;
      }
      uVar9 = uVar9 - 1 & uVar9;
    } while (uVar9 != 0);
  }
  auVar21 = vpsignb_avx(auVar21,auVar21);
  if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') goto LAB_1400b5a7b;
  uVar8 = uVar8 + 1;
  goto LAB_1400b57b5;
}

