// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f25f0  size: 511 bytes
// Name:    FUN_1400f25f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f25f0(undefined1 (*param_1) [16])

{
  uint uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int *piVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  longlong lStack_48;
  
  uVar1 = *(uint *)param_1[1];
  piVar13 = *(int **)(param_1[1] + 8);
  uVar12 = 0;
  piVar7 = piVar13;
  if ((ulonglong)uVar1 == 0) {
LAB_1400f262b:
    if ((uint)uVar12 != uVar1) {
      do {
        uVar8 = uVar12 & 0xffffffff;
        uVar10 = 0;
        puVar2 = *(undefined8 **)(piVar13 + uVar8 * 0xc + 2);
        if (((char)piVar13[uVar8 * 0xc + 10] == '\0') || (uVar10 = 1, puVar2 != (undefined8 *)0x0))
        {
          (**(code **)*puVar2)(puVar2,uVar10);
        }
        puVar3 = *(uint **)(piVar13 + uVar8 * 0xc + 8);
        if (puVar3 != (uint *)0x0) {
          LOCK();
          uVar14 = *puVar3;
          *puVar3 = *puVar3 - 1;
          UNLOCK();
          uVar14 = uVar14 - 1;
          if ((char)uVar14 == '\0') {
            if ((uVar14 & 0xff0000) == 0) {
              if ((uVar14 & 0xff00) != 0) {
                uVar14 = *puVar3;
                do {
                  LOCK();
                  uVar5 = *puVar3;
                  bVar15 = uVar14 == uVar5;
                  if (bVar15) {
                    *puVar3 = uVar14 & 0xffff00ff;
                    uVar5 = uVar14;
                  }
                  uVar14 = uVar5;
                  UNLOCK();
                } while (!bVar15);
                uVar14 = uVar14 >> 8 & 0xff;
                if (uVar14 != 0) {
                  puVar11 = puVar3 + 2;
                  lVar9 = *(longlong *)(puVar3 + 2);
                  do {
                    while (lStack_48 = lVar9, -1 < lStack_48) {
                      LOCK();
                      lVar9 = *(longlong *)puVar11;
                      if (lStack_48 == lVar9) {
                        *(ulonglong *)puVar11 = lStack_48 + ((ulonglong)uVar14 << 0x20);
                        lVar9 = lStack_48;
                      }
                      UNLOCK();
                      if (lStack_48 == lVar9) goto LAB_1400f2675;
                    }
                    cVar4 = FUN_1400062d0(puVar11,uVar14,&lStack_48);
                    lVar9 = lStack_48;
                  } while (cVar4 == '\0');
                }
              }
            }
            else {
              puVar11 = puVar3 + 4;
              do {
                if ((uVar14 & 0xff0000) == 0) break;
                LOCK();
                uVar5 = *puVar3;
                bVar15 = uVar14 == uVar5;
                if (bVar15) {
                  *puVar3 = uVar14 - 0x10000;
                  uVar5 = uVar14;
                }
                UNLOCK();
                if (bVar15) {
                  lVar9 = *(longlong *)puVar11;
                  do {
                    while (lStack_48 = lVar9, -1 < lStack_48) {
                      LOCK();
                      lVar9 = *(longlong *)puVar11;
                      if (lStack_48 == lVar9) {
                        *(longlong *)puVar11 = lStack_48 + 0x100000000;
                        lVar9 = lStack_48;
                      }
                      UNLOCK();
                      uVar5 = uVar14;
                      if (lStack_48 == lVar9) goto LAB_1400f2708;
                    }
                    cVar4 = FUN_1400062d0(puVar11,1,&lStack_48);
                    uVar5 = uVar14;
                    lVar9 = lStack_48;
                  } while (cVar4 == '\0');
                }
LAB_1400f2708:
                uVar14 = uVar5;
              } while (!bVar15);
            }
          }
        }
LAB_1400f2675:
        do {
          uVar14 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar14;
          if (uVar1 <= uVar14) {
            if (uVar14 == uVar1) {
              piVar13 = *(int **)(param_1[1] + 8);
              goto LAB_1400f27b2;
            }
            goto LAB_1400f2675;
          }
        } while (piVar13[(ulonglong)uVar14 * 0xc] == 0);
      } while( true );
    }
  }
  else {
    do {
      if (*piVar7 != 0) goto LAB_1400f262b;
      uVar12 = uVar12 + 1;
      piVar7 = piVar7 + 0xc;
    } while (uVar1 != uVar12);
  }
LAB_1400f27b2:
  iVar6 = *(int *)(param_1[1] + 4);
  while (iVar6 != 0) {
    if (*piVar13 != 0) {
      *piVar13 = 0;
      iVar6 = *(int *)(param_1[1] + 4) + -1;
      *(int *)(param_1[1] + 4) = iVar6;
    }
    piVar13 = piVar13 + 0xc;
  }
  auVar16._0_12_ = ZEXT812(0);
  auVar16._12_4_ = 0;
  *param_1 = auVar16;
  return;
}

