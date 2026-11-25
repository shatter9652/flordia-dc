// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c9200  size: 460 bytes
// Name:    FUN_1400c9200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f82240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c9200(longlong param_1,uint *param_2)

{
  uint *puVar1;
  ushort uVar2;
  undefined1 (*pauVar3) [16];
  char cVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong unaff_GS_OFFSET;
  bool bVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined1 auVar22 [64];
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 uStack_50;
  
  uStack_50 = 0x1400c9236;
  FUN_144f82240(param_2,0x2deefadd9eac6fdb,*(undefined4 *)(param_1 + 0x278),2);
  uStack_50 = 0x1400c9253;
  FUN_144f82240(param_2,0x2deefaddac45de1b,*(undefined4 *)(param_1 + 0x27c),2);
  uStack_50 = 0x1400c9281;
  FUN_144f82240(param_2,0x2deefadd4fc46e44,*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x174),2
               );
  uStack_50 = 0x1400c92a5;
  FUN_144f82240(param_2,0x2deefadd3d3f680d,*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x178),2
               );
  uStack_50 = 0x1400c92c9;
  FUN_144f82240(param_2,0x2deefadd8ef3ac2e,*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x17c),2
               );
  uStack_50 = 0x1400c92ed;
  FUN_144f82240(param_2,0x2deefadd653e0fe1,*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x324),2
               );
  uStack_50 = 0x1400c930d;
  FUN_144f82240(param_2,0x2deefadd1363ffb8,*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x328),2
               );
  uStack_50 = 0x1400c9331;
  FUN_144f82240(param_2,0x2deefadd620592a7,*(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0x32c),2
               );
  uStack_50 = 0x1400c9358;
  FUN_144f82240(param_2,0x2deefadd28142724,*(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0x90),2)
  ;
  uStack_50 = 0x1400c937c;
  FUN_144f82240(param_2,0x2deefaddd34a72e7,*(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0x140),2
               );
  uStack_50 = 0x1400c939c;
  FUN_144f82240(param_2,0x2deefadd9ac32f42,*(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0x94),2)
  ;
  uVar21 = *(undefined4 *)(*(longlong *)(param_1 + 0x198) + 0x144);
  uStack_68 = CONCAT44(uStack_68._4_4_,2);
  lVar10 = *(longlong *)(param_2 + 6);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    plVar18 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
    lVar17 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
  }
  else {
    lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar7 + 0x1440) = 1;
    lVar17 = FUN_1400063f0();
    plVar18 = (longlong *)(lVar7 + 0x1438);
    *plVar18 = lVar17;
  }
  if (lVar17 == lVar10) {
    *(char *)(param_2 + 8) = (char)param_2[8] + '\x01';
  }
  else {
    puVar15 = (ulonglong *)(param_2 + 4);
    uVar14 = *param_2;
code_r0x000144f82306:
    do {
      uVar6 = uVar14;
      if ((uVar6 & 0x10000ff) != 0) {
        LOCK();
        uVar14 = *param_2;
        bVar19 = uVar6 == uVar14;
        if (bVar19) {
          *param_2 = uVar6 + 0x10000;
          uVar14 = uVar6;
        }
        UNLOCK();
        if (bVar19) {
          uVar11 = *puVar15;
          uVar13 = (uint)(*puVar15 >> 7) & 0xffffff;
          if ((*puVar15 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar11 < 0x100000000) {
                uVar12 = *puVar15;
              }
              else {
                LOCK();
                uVar12 = *puVar15;
                if (uVar11 == uVar12) {
                  *puVar15 = uVar11 - 0x100000000;
                  uVar12 = uVar11;
                }
                UNLOCK();
                uVar14 = uVar6;
                if (uVar11 == uVar12) goto code_r0x000144f82306;
              }
              uVar13 = uVar13 - 1;
              uVar11 = uVar12;
            } while (uVar13 != 0);
          }
          uVar11 = *puVar15;
          do {
            while (uStack_70 = uVar11, 0xffffffff < (longlong)uStack_70) {
              LOCK();
              uVar11 = *puVar15;
              if (uStack_70 == uVar11) {
                *puVar15 = uStack_70 - 0x100000000;
                uVar11 = uStack_70;
              }
              UNLOCK();
              uVar14 = uVar6;
              if (uStack_70 == uVar11) goto code_r0x000144f82306;
            }
            cVar4 = FUN_140006180(puVar15,1,&uStack_70);
            uVar14 = uVar6;
            uVar11 = uStack_70;
          } while (cVar4 == '\0');
        }
        goto code_r0x000144f82306;
      }
      LOCK();
      uVar14 = *param_2;
      bVar19 = uVar6 == uVar14;
      if (bVar19) {
        *param_2 = uVar6 | 0x1000000;
        uVar14 = uVar6;
      }
      UNLOCK();
    } while (!bVar19);
    *(undefined1 *)(param_2 + 8) = 1;
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
      lVar10 = *plVar18;
    }
    else {
      *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
      lVar10 = FUN_1400063f0();
      *plVar18 = lVar10;
    }
    *(longlong *)(param_2 + 6) = lVar10;
  }
  if (param_2[10] != 0) {
    uVar14 = param_2[10] - 1;
    lVar10 = *(longlong *)(param_2 + 0xc);
    lVar7 = (ulonglong)(uVar14 & 0xe6ee4311) * 0x10;
    lVar17 = *(longlong *)(lVar10 + lVar7);
    if (lVar17 != 0) {
code_r0x000144f8245e:
      lVar7 = lVar7 + lVar10;
      if ((lVar17 != 0x2deefaddef1d6681) ||
         ((*(ulonglong *)(lVar7 + 8) & 0x3c00000000000000) != 0x1400000000000000))
      goto code_r0x000144f82463;
      *(undefined4 *)
       (*(longlong *)(param_2 + 0x12) + (ulonglong)((uint)*(ulonglong *)(lVar7 + 8) & 0x3ffffff)) =
           uVar21;
      uVar11 = *(ulonglong *)(lVar7 + 8);
      if (((uint)(uVar11 >> 0x3e) | 2) == 3) {
        uVar11 = uVar11 & 0x3fffffffffffffff;
      }
      else {
        uVar11 = uVar11 & 0x3fffffffffffffff | 0x8000000000000000;
      }
      *(ulonglong *)(lVar7 + 8) = uVar11;
      if ((short)(uVar11 >> 0x1a) != 0) {
        uVar11 = uVar11 >> 0x2a;
        bVar5 = 0;
        if (((short)uVar11 != -1) && (bVar5 = 0, param_2[0x14] != 0)) {
          bVar5 = 0;
          do {
            uVar12 = (ulonglong)(((uint)uVar11 & 0xffff) << 4);
            uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x1a) + 8 + uVar12);
            uVar11 = (ulonglong)uVar2;
            bVar5 = bVar5 | *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x1a) + uVar12) + 0x10);
          } while (uVar2 != 0xffff);
        }
        FUN_144f82a00(param_2,0x2deefaddef1d6681,uStack_68 & 0xffffffff,5,bVar5);
      }
code_r0x000144f824d9:
      puVar1 = param_2 + 8;
      *(char *)puVar1 = (char)*puVar1 + -1;
      if ((char)*puVar1 != '\0') {
        return;
      }
      goto code_r0x000144f82676;
    }
  }
code_r0x000144f824f9:
  uVar14 = FUN_144f828d0(param_2 + 0xe,4);
  *(undefined4 *)(*(longlong *)(param_2 + 0x12) + (ulonglong)uVar14) = uVar21;
  auVar22 = ZEXT1264(ZEXT812(0));
  do {
    uVar6 = param_2[10];
    uVar11 = (ulonglong)uVar6;
    pauVar3 = *(undefined1 (**) [16])(param_2 + 0xc);
    if (uVar11 != 0) {
      uVar13 = 0xe6ee4311;
      while( true ) {
        uVar13 = uVar6 - 1 & uVar13;
        pauVar8 = pauVar3 + uVar13;
        if ((*(longlong *)pauVar3[uVar13] == 0x2deefaddef1d6681) &&
           ((*(ulonglong *)(*pauVar8 + 8) & 0x3c00000000000000) == 0x1400000000000000))
        goto code_r0x000144f824d9;
        if (*(longlong *)pauVar3[uVar13] == 0) break;
        uVar13 = (uint)((ulonglong)((longlong)pauVar8 + (0x10 - (longlong)pauVar3)) >> 4);
      }
      if (param_2[0xb] != (uVar6 * 0x5f) / 100) {
        *(undefined8 *)*pauVar8 = 0x2deefaddef1d6681;
        *(ulonglong *)(*pauVar8 + 8) = (ulonglong)(uVar14 & 0x3ffffff) | 0x17fffc0000000000;
        param_2[0xb] = param_2[0xb] + 1;
        puVar1 = param_2 + 8;
        *(char *)puVar1 = (char)*puVar1 + -1;
        if ((char)*puVar1 == '\0') {
code_r0x000144f82676:
          param_2[6] = 0xffffffff;
          param_2[7] = 0xffffffff;
          uVar14 = *param_2;
          do {
            LOCK();
            uVar6 = *param_2;
            bVar19 = uVar14 == uVar6;
            if (bVar19) {
              *param_2 = uVar14 & 0xfeffffff;
              uVar6 = uVar14;
            }
            uVar14 = uVar6;
            UNLOCK();
          } while (!bVar19);
          if ((uVar14 & 0xff0000) == 0) {
            if ((uVar14 & 0xff00) != 0) {
              uVar14 = *param_2;
              do {
                LOCK();
                uVar6 = *param_2;
                bVar19 = uVar14 == uVar6;
                if (bVar19) {
                  *param_2 = uVar14 & 0xffff00ff;
                  uVar6 = uVar14;
                }
                uVar14 = uVar6;
                UNLOCK();
              } while (!bVar19);
              uVar14 = uVar14 >> 8 & 0xff;
              if (uVar14 != 0) {
                puVar15 = (ulonglong *)(param_2 + 2);
                uStack_70 = *(ulonglong *)(param_2 + 2);
                do {
                  while ((longlong)uStack_70 < 0) {
                    cVar4 = FUN_1400062d0(puVar15,uVar14,&uStack_70);
                    if (cVar4 != '\0') {
                      return;
                    }
                  }
                  LOCK();
                  uVar11 = *puVar15;
                  if (uStack_70 == uVar11) {
                    *puVar15 = uStack_70 + ((ulonglong)uVar14 << 0x20);
                    uVar11 = uStack_70;
                  }
                  UNLOCK();
                  bVar19 = uStack_70 != uVar11;
                  uStack_70 = uVar11;
                } while (bVar19);
              }
            }
          }
          else {
            uVar14 = uVar14 & 0xfeffffff;
            puVar15 = (ulonglong *)(param_2 + 4);
            do {
              if ((uVar14 & 0xff0000) == 0) {
                return;
              }
              LOCK();
              uVar6 = *param_2;
              bVar19 = uVar14 == uVar6;
              if (bVar19) {
                *param_2 = uVar14 - 0x10000;
                uVar6 = uVar14;
              }
              UNLOCK();
              if (bVar19) {
                uStack_70 = *puVar15;
                do {
                  while (-1 < (longlong)uStack_70) {
                    LOCK();
                    uVar11 = *puVar15;
                    if (uStack_70 == uVar11) {
                      *puVar15 = uStack_70 + 0x100000000;
                      uVar11 = uStack_70;
                    }
                    UNLOCK();
                    bVar20 = uStack_70 == uVar11;
                    uVar6 = uVar14;
                    uStack_70 = uVar11;
                    if (bVar20) goto code_r0x000144f82862;
                  }
                  cVar4 = FUN_1400062d0(puVar15,1,&uStack_70);
                  uVar6 = uVar14;
                } while (cVar4 == '\0');
              }
code_r0x000144f82862:
              uVar14 = uVar6;
            } while (!bVar19);
          }
        }
        return;
      }
    }
    uStack_60 = (ulonglong)(uVar6 * 2);
    if (uVar6 * 2 < 0x21) {
      uStack_60 = 0x20;
    }
    uStack_68 = uStack_60 << 4;
    uVar9 = FUN_1401379f0();
    *(undefined8 *)(param_2 + 0xc) = uVar9;
    param_2[10] = (uint)uStack_60;
    func_0x000145f40580(uVar9,0,uStack_68);
    if (uVar11 != 0) {
      pauVar8 = pauVar3;
      do {
        if (*(longlong *)*pauVar8 != 0) {
          uVar12 = *(ulonglong *)(*pauVar8 + 8) >> 0x3a & 0xf;
          uVar16 = (*(longlong *)*pauVar8 + 0x651e95c4d06fbfb1U ^ uVar12) * -0x622015f714c7d297;
          lVar10 = *(longlong *)(param_2 + 0xc);
          lVar17 = (uVar16 >> 0x2f ^ uVar12 ^ uVar16) * -0x622015f714c7d297;
          uVar12 = (ulonglong)
                   (((uint)((ulonglong)lVar17 >> 0x2f) ^ (uint)lVar17) * -0x14c7d297 &
                   param_2[10] - 1);
          lVar7 = uVar12 * 0x10;
          lVar17 = *(longlong *)(lVar10 + lVar7);
          while (lVar17 != 0) {
            uVar12 = (ulonglong)((uint)(uVar12 * 0x10 + 0x10 >> 4) & param_2[10] - 1);
            lVar7 = uVar12 * 0x10;
            lVar17 = *(longlong *)(lVar10 + lVar7);
          }
          uVar9 = *(undefined8 *)(*pauVar8 + 8);
          *(undefined8 *)(lVar10 + lVar7) = *(undefined8 *)*pauVar8;
          ((undefined8 *)(lVar10 + lVar7))[1] = uVar9;
          *pauVar8 = auVar22._0_16_;
        }
        pauVar8 = pauVar8 + 1;
      } while (pauVar8 != pauVar3 + uVar11);
    }
    FUN_140018ce0(pauVar3);
  } while( true );
code_r0x000144f82463:
  lVar7 = (ulonglong)((uint)((lVar7 - lVar10) + 0x10U >> 4) & uVar14) * 0x10;
  lVar17 = *(longlong *)(lVar10 + lVar7);
  if (lVar17 == 0) goto code_r0x000144f824f9;
  goto code_r0x000144f8245e;
}

