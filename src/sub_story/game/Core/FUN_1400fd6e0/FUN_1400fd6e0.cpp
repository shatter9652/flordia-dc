// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fd6e0  size: 395 bytes
// Name:    FUN_1400fd6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_1400063f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fd6e0(uint *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong unaff_GS_OFFSET;
  bool bVar12;
  ulonglong uStack_40;
  
  lVar9 = *(longlong *)(param_1 + 6);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    plVar11 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
    lVar8 = *plVar11;
  }
  else {
    lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar2 + 0x1440) = 1;
    lVar8 = FUN_1400063f0();
    plVar11 = (longlong *)(lVar2 + 0x1438);
    *plVar11 = lVar8;
  }
  if (lVar8 == lVar9) {
    *(char *)(param_1 + 8) = (char)param_1[8] + '\x01';
  }
  else {
    puVar1 = (ulonglong *)(param_1 + 4);
    uVar5 = *param_1;
LAB_1400fd74d:
    do {
      uVar4 = uVar5;
      if ((uVar4 & 0x10000ff) != 0) {
        LOCK();
        uVar5 = *param_1;
        bVar12 = uVar4 == uVar5;
        if (bVar12) {
          *param_1 = uVar4 + 0x10000;
          uVar5 = uVar4;
        }
        UNLOCK();
        if (bVar12) {
          uVar10 = (uint)(*puVar1 >> 7) & 0xffffff;
          uVar7 = *puVar1;
          if ((*puVar1 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar7 < 0x100000000) {
                uVar6 = *puVar1;
              }
              else {
                LOCK();
                uVar6 = *puVar1;
                if (uVar7 == uVar6) {
                  *puVar1 = uVar7 - 0x100000000;
                  uVar6 = uVar7;
                }
                UNLOCK();
                uVar5 = uVar4;
                if (uVar7 == uVar6) goto LAB_1400fd74d;
              }
              uVar10 = uVar10 - 1;
              uVar7 = uVar6;
            } while (uVar10 != 0);
          }
          uVar7 = *puVar1;
          do {
            while (uStack_40 = uVar7, 0xffffffff < (longlong)uStack_40) {
              LOCK();
              uVar7 = *puVar1;
              if (uStack_40 == uVar7) {
                *puVar1 = uStack_40 - 0x100000000;
                uVar7 = uStack_40;
              }
              UNLOCK();
              uVar5 = uVar4;
              if (uStack_40 == uVar7) goto LAB_1400fd74d;
            }
            cVar3 = FUN_140006180(puVar1,1,&uStack_40);
            uVar5 = uVar4;
            uVar7 = uStack_40;
          } while (cVar3 == '\0');
        }
        goto LAB_1400fd74d;
      }
      LOCK();
      uVar5 = *param_1;
      bVar12 = uVar4 == uVar5;
      if (bVar12) {
        *param_1 = uVar4 | 0x1000000;
        uVar5 = uVar4;
      }
      UNLOCK();
    } while (!bVar12);
    *(undefined1 *)(param_1 + 8) = 1;
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
      lVar9 = *plVar11;
    }
    else {
      *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
      lVar9 = FUN_1400063f0();
      *plVar11 = lVar9;
    }
    *(longlong *)(param_1 + 6) = lVar9;
  }
  return;
}

