// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7a40  size: 84 bytes
// Name:    FUN_1400f7a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de8220, FUN_140212360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f7a40(longlong *param_1,uint param_2,ulonglong param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  ushort uVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  byte bVar18;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  bool bVar23;
  undefined1 auVar24 [16];
  longlong lVar25;
  byte bVar19;
  
  if (*param_1 != 0) {
    if (*(uint *)(*param_1 + -4) == param_2) {
      return;
    }
    FUN_144de8220(param_1);
  }
  if (param_2 != 0) {
    FUN_140212360(param_1,param_2);
    lVar25 = _DAT_14ab7f640;
    puVar22 = (uint *)*param_1;
    if (puVar22 != (uint *)0x0) {
      param_3 = param_3 & 0xffffffff;
      if (param_2 != 0) {
        if ((puVar22 != (uint *)0x0) && (puVar22[-1] == param_2)) {
code_r0x000142276399:
          if (*(uint *)(_DAT_14ab7f640 + 0x28) != 0) {
            param_3 = *(ulonglong *)(_DAT_14ab7f640 + 0x20);
            for (puVar12 = *(uint **)(param_3 +
                                     ((ulonglong)param_2 %
                                     (ulonglong)*(uint *)(_DAT_14ab7f640 + 0x28)) * 8);
                puVar12 != (uint *)0x0; puVar12 = *(uint **)(puVar12 + 4)) {
              if (*puVar12 == param_2) {
                LOCK();
                puVar12[2] = puVar12[2] + 1;
                UNLOCK();
                return;
              }
            }
          }
          puVar2 = (ulonglong *)(_DAT_14ab7f640 + 0x50);
          FUN_140004b40(puVar2);
          if (*(uint *)(lVar25 + 0x28) != 0) {
            param_3 = *(ulonglong *)(lVar25 + 0x20);
            for (puVar12 = *(uint **)(param_3 +
                                     ((ulonglong)param_2 % (ulonglong)*(uint *)(lVar25 + 0x28)) * 8)
                ; puVar12 != (uint *)0x0; puVar12 = *(uint **)(puVar12 + 4)) {
              if (*puVar12 == param_2) {
                LOCK();
                puVar12[2] = puVar12[2] + 1;
                UNLOCK();
                goto code_r0x00014227666d;
              }
            }
          }
          uVar11 = *puVar22;
          uVar21 = uVar11 >> 0x17 & 0x7f;
          if (uVar21 != 0) {
            uVar16 = 0;
            do {
              puVar12 = puVar22 + 1;
              if (0x17fffff < (*puVar22 & 0x3f800000)) {
                puVar12 = (uint *)((ulonglong)puVar22[1] * 4 + *(longlong *)(_DAT_14ab73ae8 + 0x68))
                ;
              }
              FUN_142276690(puVar12[uVar16]);
              uVar16 = uVar16 + 1;
            } while (uVar21 != uVar16);
            uVar11 = *puVar22;
          }
          if ((((uVar11 >> 0x1e & 1) != 0) && (*(int *)(_DAT_14ab73ae8 + 0x30) != 0)) &&
             (uVar11 = puVar22[-1], uVar11 != 0)) {
            lVar14 = *(longlong *)(_DAT_14ab73ae8 + 0x38);
            uVar20 = *(int *)(_DAT_14ab73ae8 + 0x30) - 1;
            uVar16 = (ulonglong)(uVar20 & uVar11);
            uVar21 = *(uint *)(lVar14 + uVar16 * 8);
            bVar23 = uVar21 != 0;
            uVar13 = CONCAT71((int7)(param_3 >> 8),bVar23);
            while ((bVar23 && (uVar21 != uVar11))) {
              uVar16 = (ulonglong)((uint)(uVar16 * 8 + 8 >> 3) & uVar20);
              uVar21 = *(uint *)(lVar14 + uVar16 * 8);
              bVar23 = uVar21 != 0;
              uVar13 = CONCAT71((int7)((ulonglong)uVar13 >> 8),bVar23);
            }
            if ((bVar23) && (iVar4 = *(int *)(lVar14 + 4 + uVar16 * 8), iVar4 != 0)) {
              FUN_1422762b0(iVar4,0,CONCAT62((int6)((ulonglong)uVar13 >> 0x10),0xffff));
            }
          }
          uVar11 = *(uint *)(lVar25 + 0x28);
          if (uVar11 == 0) {
            uVar11 = func_0x0001400f6200(10);
            *(uint *)(lVar25 + 0x28) = uVar11;
            lVar14 = -1;
            if (-1 < (int)uVar11) {
              lVar14 = (ulonglong)uVar11 * 8;
            }
            uVar13 = func_0x000144f97130(lVar14);
            *(undefined8 *)(lVar25 + 0x20) = uVar13;
            if (uVar11 != 0) {
              uVar16 = 0;
              do {
                *(undefined8 *)(*(longlong *)(lVar25 + 0x20) + uVar16 * 8) = 0;
                uVar16 = uVar16 + 1;
              } while (uVar11 != uVar16);
            }
            bVar23 = false;
            *(undefined1 *)(lVar25 + 0x40) = 1;
          }
          else {
            bVar23 = *(char *)(lVar25 + 0x40) == '\0';
          }
          uVar21 = *(int *)(lVar25 + 0x30) + 1;
          *(uint *)(lVar25 + 0x30) = uVar21;
          if ((uVar21 != uVar11) || (bVar23)) {
            lVar14 = *(longlong *)(lVar25 + 0x20);
          }
          else {
            uVar21 = func_0x0001400f6200(uVar11);
            lVar14 = -1;
            if (-1 < (int)uVar21) {
              lVar14 = (ulonglong)uVar21 << 3;
            }
            lVar14 = func_0x000144f97130(lVar14);
            func_0x000145f40580(lVar14,0,(ulonglong)uVar21 << 3);
            lVar5 = *(longlong *)(lVar25 + 0x20);
            if (uVar11 != 0) {
              uVar16 = 0;
              do {
                puVar22 = *(uint **)(lVar5 + uVar16 * 8);
                while (puVar22 != (uint *)0x0) {
                  puVar12 = *(uint **)(puVar22 + 4);
                  *(undefined8 *)(puVar22 + 4) =
                       *(undefined8 *)(lVar14 + ((ulonglong)*puVar22 % (ulonglong)uVar21) * 8);
                  *(uint **)(lVar14 + ((ulonglong)*puVar22 % (ulonglong)uVar21) * 8) = puVar22;
                  puVar22 = puVar12;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 != uVar11);
            }
            *(uint *)(lVar25 + 0x28) = uVar21;
            uVar11 = uVar21;
            if (lVar5 != 0) {
              func_0x000144d9c130();
              uVar11 = *(uint *)(lVar25 + 0x28);
            }
            *(longlong *)(lVar25 + 0x20) = lVar14;
          }
          lVar5 = *(longlong *)(lVar25 + 0x38);
          puVar22 = (uint *)0x0;
          if (lVar5 != 0) {
            puVar22 = *(uint **)(lVar5 + 0x10);
            if (puVar22 == (uint *)0x0) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar13 = *(undefined8 *)(lVar14 + ((ulonglong)param_2 % (ulonglong)uVar11) * 8);
            *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)puVar22;
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            *puVar22 = param_2;
            puVar22[1] = 0;
            puVar22[2] = 1;
            *(undefined1 *)(puVar22 + 3) = 0;
            *(undefined8 *)(puVar22 + 4) = uVar13;
          }
          *(uint **)(*(longlong *)(lVar25 + 0x20) + ((ulonglong)param_2 % (ulonglong)uVar11) * 8) =
               puVar22;
code_r0x00014227666d:
          uVar16 = *puVar2;
          piVar1 = (int *)(lVar25 + 0x60);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            do {
              uVar15 = uVar16;
              LOCK();
              uVar16 = *puVar2;
              if (uVar15 == uVar16) {
                *puVar2 = (ulonglong)((int)uVar15 - 1) | 0xffffffff00000000;
                uVar16 = uVar15;
              }
              UNLOCK();
            } while (uVar15 != uVar16);
            if ((uVar15 & 0xfffffffe) != 0) {
              plVar17 = (longlong *)(lVar25 + 0x58);
              lVar25 = *(longlong *)(lVar25 + 0x58);
              do {
                while (lVar25 < 0) {
                  cVar10 = FUN_1400062d0(plVar17,1,&stack0xffffffffffffffe0);
                  if (cVar10 != '\0') {
                    return;
                  }
                }
                LOCK();
                lVar14 = *plVar17;
                if (lVar25 == lVar14) {
                  *plVar17 = lVar25 + 0x100000000;
                  lVar14 = lVar25;
                }
                UNLOCK();
                bVar23 = lVar25 != lVar14;
                lVar25 = lVar14;
              } while (bVar23);
              return;
            }
          }
          return;
        }
        if (*(int *)(_DAT_14ab73ae8 + 0x20) != 0) {
          lVar14 = *(longlong *)(_DAT_14ab73ae8 + 0x28);
          bVar19 = (byte)param_2;
          bVar18 = bVar19 & 0x7f;
          uVar11 = param_2 >> 7;
          auVar24._0_8_ =
               CONCAT17(bVar19,CONCAT16(bVar19,CONCAT15(bVar19,CONCAT14(bVar19,CONCAT13(bVar19,
                                                  CONCAT12(bVar19,CONCAT11(bVar19,bVar19))))))) &
               0x7f7f7f7f7f7f7f7f;
          auVar24[8] = bVar18;
          auVar24[9] = bVar18;
          auVar24[10] = bVar18;
          auVar24[0xb] = bVar18;
          auVar24[0xc] = bVar18;
          auVar24[0xd] = bVar18;
          auVar24[0xe] = bVar18;
          auVar24[0xf] = bVar18;
          while( true ) {
            uVar11 = uVar11 & *(int *)(_DAT_14ab73ae8 + 0x20) - 1U;
            auVar3 = *(undefined1 (*) [16])(lVar14 + (ulonglong)uVar11 * 0x110);
            auVar7 = vpcmpeqb_avx(auVar3,auVar24);
            uVar8 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar7[0xf] >> 7) << 0xf;
            if (uVar8 != 0) {
              uVar21 = (uint)uVar8;
              param_3 = (ulonglong)uVar11 * 0x110 + lVar14 + 0x10;
              do {
                uVar20 = 0;
                for (uVar9 = uVar21; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar20 = uVar20 + 1;
                }
                if (*(uint *)(param_3 + (uVar20 << 4)) == param_2) {
                  uVar11 = uVar11 << 4 | uVar20;
                  if (uVar11 == 0xffffffff) {
                    return;
                  }
                  puVar22 = (uint *)((ulonglong)((uVar20 & 0xf) << 4) +
                                     lVar14 + (ulonglong)(uVar11 >> 4) * 0x110 + 0x14);
                  goto code_r0x000142276399;
                }
                uVar21 = uVar21 - 1 & uVar21;
              } while (uVar21 != 0);
            }
            auVar3 = vpsignb_avx(auVar3,auVar3);
            if ((((((((((((((((SUB161(auVar3 >> 7,0) & 1) != 0 || (SUB161(auVar3 >> 0xf,0) & 1) != 0
                             ) || (SUB161(auVar3 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar3 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar3 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar3 >> 0x2f,0) & 1) != 0) || (SUB161(auVar3 >> 0x37,0) & 1) != 0
                        ) || (SUB161(auVar3 >> 0x3f,0) & 1) != 0) ||
                      (SUB161(auVar3 >> 0x47,0) & 1) != 0) || (SUB161(auVar3 >> 0x4f,0) & 1) != 0)
                    || (SUB161(auVar3 >> 0x57,0) & 1) != 0) || (SUB161(auVar3 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar3 >> 0x67,0) & 1) != 0) || (SUB161(auVar3 >> 0x6f,0) & 1) != 0) ||
                (SUB161(auVar3 >> 0x77,0) & 1) != 0) || auVar3[0xf] < '\0') break;
            uVar11 = uVar11 + 1;
          }
        }
      }
      return;
    }
  }
  return;
}

