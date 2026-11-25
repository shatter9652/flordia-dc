// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e2fd0  size: 549 bytes
// Name:    FUN_1400e2fd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143405160, FUN_1434050f0, FUN_140c2a520, FUN_145358a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400e2fd0(uint *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  undefined4 uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  longlong unaff_GS_OFFSET;
  bool bVar21;
  bool bVar22;
  undefined1 auVar23 [16];
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  uint uStack_48;
  uint uStack_44;
  
  FUN_1434050f0(&uStack_44,*param_2,0);
  FUN_140c2a520(param_1,(ulonglong)uStack_44 | 0x2deefadd00000000,2);
  FUN_143405160(&uStack_48,*param_2,6);
  FUN_145358a00(param_1,(ulonglong)uStack_48 | 0x2deefadd00000000,2);
  FUN_143405160((longlong)&uStack_50 + 4,*param_2,7);
  FUN_145358a00(param_1,uStack_50 >> 0x20 | 0x2deefadd00000000,2);
  FUN_1434050f0(&uStack_50,*param_2,1);
  FUN_140c2a520(param_1,uStack_50 & 0xffffffff | 0x2deefadd00000000,2);
  FUN_1434050f0(&uStack_54,*param_2,3);
  FUN_140c2a520(param_1,(ulonglong)uStack_54 | 0x2deefadd00000000,2);
  FUN_143405160(&uStack_58,*param_2,0);
  FUN_145358a00(param_1,(ulonglong)uStack_58 | 0x2deefadd00000000,2);
  FUN_143405160(&uStack_5c,*param_2,2);
  FUN_145358a00(param_1,(ulonglong)uStack_5c | 0x2deefadd00000000,2);
  FUN_143405160(&uStack_60,*param_2,4);
  FUN_145358a00(param_1,(ulonglong)uStack_60 | 0x2deefadd00000000,2);
  FUN_1434050f0(&uStack_50,*param_2,2);
  FUN_140c2a520(param_1,uStack_50 & 0xffffffff | 0x2deefadd00000000,2);
  FUN_1434050f0(&uStack_54,*param_2,4);
  FUN_140c2a520(param_1,(ulonglong)uStack_54 | 0x2deefadd00000000,2);
  FUN_143405160(&uStack_58,*param_2,1);
  FUN_145358a00(param_1,(ulonglong)uStack_58 | 0x2deefadd00000000,2);
  FUN_143405160(&uStack_5c,*param_2,3);
  FUN_145358a00(param_1,(ulonglong)uStack_5c | 0x2deefadd00000000,2);
  FUN_143405160(&uStack_60,*param_2,5);
  uVar11 = (ulonglong)uStack_60 | 0x2deefadd00000000;
  lVar8 = *(longlong *)(param_1 + 6);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    plVar12 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
    lVar9 = *plVar12;
  }
  else {
    lVar13 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar13 + 0x1440) = 1;
    lVar9 = FUN_1400063f0();
    plVar12 = (longlong *)(lVar13 + 0x1438);
    *plVar12 = lVar9;
  }
  uStack_44 = 2;
  if (lVar9 == lVar8) {
    *(char *)(param_1 + 8) = (char)param_1[8] + '\x01';
  }
  else {
    puVar1 = (ulonglong *)(param_1 + 4);
    uVar17 = *param_1;
code_r0x000145358ac6:
    do {
      uVar18 = uVar17;
      if ((uVar18 & 0x10000ff) != 0) {
        LOCK();
        uVar17 = *param_1;
        bVar21 = uVar18 == uVar17;
        if (bVar21) {
          *param_1 = uVar18 + 0x10000;
          uVar17 = uVar18;
        }
        UNLOCK();
        if (bVar21) {
          uVar6 = *puVar1;
          uVar10 = (uint)(*puVar1 >> 7) & 0xffffff;
          if ((*puVar1 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar6 < 0x100000000) {
                uVar19 = *puVar1;
              }
              else {
                LOCK();
                uVar19 = *puVar1;
                if (uVar6 == uVar19) {
                  *puVar1 = uVar6 - 0x100000000;
                  uVar19 = uVar6;
                }
                UNLOCK();
                uVar17 = uVar18;
                if (uVar6 == uVar19) goto code_r0x000145358ac6;
              }
              uVar10 = uVar10 - 1;
              uVar6 = uVar19;
            } while (uVar10 != 0);
          }
          uVar6 = *puVar1;
          do {
            while (uStack_50 = uVar6, 0xffffffff < (longlong)uStack_50) {
              LOCK();
              uVar6 = *puVar1;
              if (uStack_50 == uVar6) {
                *puVar1 = uStack_50 - 0x100000000;
                uVar6 = uStack_50;
              }
              UNLOCK();
              uVar17 = uVar18;
              if (uStack_50 == uVar6) goto code_r0x000145358ac6;
            }
            cVar4 = FUN_140006180(puVar1,1,&uStack_50);
            uVar17 = uVar18;
            uVar6 = uStack_50;
          } while (cVar4 == '\0');
        }
        goto code_r0x000145358ac6;
      }
      LOCK();
      uVar17 = *param_1;
      bVar21 = uVar18 == uVar17;
      if (bVar21) {
        *param_1 = uVar18 | 0x1000000;
        uVar17 = uVar18;
      }
      UNLOCK();
    } while (!bVar21);
    *(undefined1 *)(param_1 + 8) = 1;
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
      lVar8 = *plVar12;
    }
    else {
      *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
      lVar8 = FUN_1400063f0();
      *plVar12 = lVar8;
    }
    *(longlong *)(param_1 + 6) = lVar8;
  }
  uVar15 = 0;
  if ((uVar11 != 0) && (uVar17 = param_1[10], uVar17 != 0)) {
    lVar8 = *(longlong *)(param_1 + 0xc);
    uVar6 = (uVar11 + 0x651e95c4d06fbfb1 ^ 10) * -0x622015f714c7d297;
    lVar9 = (uVar6 >> 0x2f ^ uVar6 ^ 10) * -0x622015f714c7d297;
    uVar18 = uVar17 - 1;
    lVar9 = (ulonglong)(((uint)((ulonglong)lVar9 >> 0x2f) ^ (uint)lVar9) * -0x14c7d297 & uVar18) *
            0x10;
    uVar6 = *(ulonglong *)(lVar8 + lVar9);
    while (uVar6 != 0) {
      lVar9 = lVar9 + lVar8;
      if ((uVar6 == uVar11) &&
         (uVar6 = *(ulonglong *)(lVar9 + 8), (uVar6 & 0x3c00000000000000) == 0x2800000000000000)) {
        if ((short)(uVar6 >> 0x1a) == 0) {
          pauVar7 = (undefined1 (*) [16])func_0x0001456cffc0(uVar17,lVar8);
          if (pauVar7 != (undefined1 (*) [16])0x0) {
            lVar13 = (ulonglong)
                     (uVar18 & (uint)((ulonglong)((longlong)pauVar7 + (0x10 - lVar8)) >> 4)) * 0x10;
            lVar9 = *(longlong *)(lVar8 + lVar13);
            if (lVar9 != 0) {
              pauVar14 = (undefined1 (*) [16])(lVar13 + lVar8);
              do {
                uVar19 = *(ulonglong *)(*pauVar14 + 8) >> 0x3a & 0xf;
                uVar11 = (lVar9 + 0x651e95c4d06fbfb1U ^ uVar19) * -0x622015f714c7d297;
                lVar9 = (uVar11 >> 0x2f ^ uVar19 ^ uVar11) * -0x622015f714c7d297;
                uVar18 = uVar17 - 1;
                pauVar20 = (undefined1 (*) [16])
                           ((ulonglong)
                            (((uint)((ulonglong)lVar9 >> 0x2f) ^ (uint)lVar9) * -0x14c7d297 & uVar18
                            ) * 0x10 + lVar8);
                uVar11 = 0;
                if (pauVar7 < pauVar20) {
                  uVar11 = (ulonglong)uVar17;
                }
                uVar19 = (ulonglong)uVar17;
                if (pauVar20 <= pauVar14) {
                  uVar19 = 0;
                }
                if ((uint)((longlong)pauVar7 + (uVar11 * 0x10 - (longlong)pauVar20) >> 4) <
                    (uint)((longlong)pauVar14 + (uVar19 * 0x10 - (longlong)pauVar20) >> 4)) {
                  uVar3 = *(undefined8 *)(*pauVar14 + 8);
                  *(undefined8 *)*pauVar7 = *(undefined8 *)*pauVar14;
                  *(undefined8 *)(*pauVar7 + 8) = uVar3;
                  uVar17 = param_1[10];
                  lVar8 = *(longlong *)(param_1 + 0xc);
                  uVar18 = uVar17 - 1;
                  pauVar7 = pauVar14;
                }
                lVar9 = (ulonglong)
                        (uVar18 & (uint)((ulonglong)((longlong)pauVar14 + (0x10 - lVar8)) >> 4)) *
                        0x10;
                pauVar14 = (undefined1 (*) [16])(lVar8 + lVar9);
                lVar9 = *(longlong *)(lVar8 + lVar9);
              } while (lVar9 != 0);
            }
            auVar23._0_12_ = ZEXT812(0);
            auVar23._12_4_ = 0;
            *pauVar7 = auVar23;
            param_1[0xb] = param_1[0xb] - 1;
          }
          func_0x000140276920(param_1 + 0xe,
                              (ulonglong)((uint)uVar6 & 0x3ffffff) + *(longlong *)(param_1 + 0x12),
                              uVar6 & 0xffffffff,10);
        }
        else {
          uVar19 = uVar6 >> 0x2a;
          *(ulonglong *)(lVar9 + 8) = uVar6 & 0x2bffffffffffffff | 0x4000000000000000;
          bVar5 = 0;
          if (((short)uVar19 != -1) && (bVar5 = 0, param_1[0x14] != 0)) {
            bVar5 = 0;
            do {
              uVar6 = (ulonglong)(((uint)uVar19 & 0xffff) << 4);
              uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x1a) + 8 + uVar6);
              uVar19 = (ulonglong)uVar2;
              bVar5 = bVar5 | *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x1a) + uVar6) + 0x10)
              ;
            } while (uVar2 != 0xffff);
          }
          uStack_58 = CONCAT31(uStack_58._1_3_,bVar5);
          FUN_144f82a00(param_1,uVar11,uStack_44,10);
        }
        uVar15 = 0xd06fbf01;
        goto code_r0x000145358d5d;
      }
      lVar9 = (ulonglong)(uVar18 & (uint)((lVar9 - lVar8) + 0x10U >> 4)) * 0x10;
      uVar6 = *(ulonglong *)(lVar8 + lVar9);
    }
    uVar15 = 0;
  }
code_r0x000145358d5d:
  puVar16 = param_1 + 8;
  *(char *)puVar16 = (char)*puVar16 + -1;
  if ((char)*puVar16 == '\0') {
    param_1[6] = 0xffffffff;
    param_1[7] = 0xffffffff;
    uVar17 = *param_1;
    do {
      LOCK();
      uVar18 = *param_1;
      bVar21 = uVar17 == uVar18;
      if (bVar21) {
        *param_1 = uVar17 & 0xfeffffff;
        uVar18 = uVar17;
      }
      uVar17 = uVar18;
      UNLOCK();
    } while (!bVar21);
    if ((uVar17 & 0xff0000) == 0) {
      if ((uVar17 & 0xff00) != 0) {
        uVar17 = *param_1;
        do {
          LOCK();
          uVar18 = *param_1;
          bVar21 = uVar17 == uVar18;
          if (bVar21) {
            *param_1 = uVar17 & 0xffff00ff;
            uVar18 = uVar17;
          }
          uVar17 = uVar18;
          UNLOCK();
        } while (!bVar21);
        uVar17 = uVar17 >> 8 & 0xff;
        if (uVar17 != 0) {
          puVar16 = param_1 + 2;
          uStack_50 = *(longlong *)(param_1 + 2);
          do {
            while (-1 < (longlong)uStack_50) {
              LOCK();
              lVar8 = *(longlong *)puVar16;
              if (uStack_50 == lVar8) {
                *(ulonglong *)puVar16 = uStack_50 + ((ulonglong)uVar17 << 0x20);
                lVar8 = uStack_50;
              }
              UNLOCK();
              bVar21 = uStack_50 == lVar8;
              uStack_50 = lVar8;
              if (bVar21) {
                return uVar15;
              }
            }
            cVar4 = FUN_1400062d0(puVar16,uVar17,&uStack_50);
          } while (cVar4 == '\0');
        }
      }
    }
    else {
      uVar17 = uVar17 & 0xfeffffff;
      puVar16 = param_1 + 4;
      do {
        if ((uVar17 & 0xff0000) == 0) {
          return uVar15;
        }
        LOCK();
        uVar18 = *param_1;
        bVar21 = uVar17 == uVar18;
        if (bVar21) {
          *param_1 = uVar17 - 0x10000;
          uVar18 = uVar17;
        }
        UNLOCK();
        if (bVar21) {
          uStack_50 = *(longlong *)puVar16;
          do {
            while (-1 < (longlong)uStack_50) {
              LOCK();
              lVar8 = *(longlong *)puVar16;
              if (uStack_50 == lVar8) {
                *(ulonglong *)puVar16 = uStack_50 + 0x100000000;
                lVar8 = uStack_50;
              }
              UNLOCK();
              bVar22 = uStack_50 == lVar8;
              uVar18 = uVar17;
              uStack_50 = lVar8;
              if (bVar22) goto code_r0x000145358e0b;
            }
            cVar4 = FUN_1400062d0(puVar16,1,&uStack_50);
            uVar18 = uVar17;
          } while (cVar4 == '\0');
        }
code_r0x000145358e0b:
        uVar17 = uVar18;
      } while (!bVar21);
    }
  }
  return uVar15;
}

