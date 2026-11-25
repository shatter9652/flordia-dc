// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400716e0  size: 390 bytes
// Name:    FUN_1400716e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400063f0, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400716e0(uint *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong unaff_GS_OFFSET;
  bool bVar12;
  ulonglong uStack_38;
  
  lVar2 = *(longlong *)(param_1 + 6);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    plVar11 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
    lVar9 = *plVar11;
  }
  else {
    lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar3 + 0x1440) = 1;
    lVar9 = FUN_1400063f0();
    plVar11 = (longlong *)(lVar3 + 0x1438);
    *plVar11 = lVar9;
  }
  if (lVar9 != lVar2) {
    lVar2 = *(longlong *)(param_1 + 6);
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\0') {
      *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
      lVar9 = FUN_1400063f0();
      *plVar11 = lVar9;
    }
    if (lVar9 != lVar2) {
      puVar1 = (ulonglong *)(param_1 + 2);
      uVar6 = *param_1;
LAB_140071771:
      do {
        uVar5 = uVar6;
        if ((uVar5 & 0x1ff0000) != 0) {
          LOCK();
          uVar6 = *param_1;
          bVar12 = uVar5 == uVar6;
          if (bVar12) {
            *param_1 = uVar5 + 0x100;
            uVar6 = uVar5;
          }
          UNLOCK();
          if (bVar12) {
            uVar10 = (uint)(*puVar1 >> 7) & 0xffffff;
            uVar8 = *puVar1;
            if ((*puVar1 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar8 < 0x100000000) {
                  uVar7 = *puVar1;
                }
                else {
                  LOCK();
                  uVar7 = *puVar1;
                  if (uVar8 == uVar7) {
                    *puVar1 = uVar8 - 0x100000000;
                    uVar7 = uVar8;
                  }
                  UNLOCK();
                  uVar6 = uVar5;
                  if (uVar8 == uVar7) goto LAB_140071771;
                }
                uVar10 = uVar10 - 1;
                uVar8 = uVar7;
              } while (uVar10 != 0);
            }
            uStack_38 = *puVar1;
            do {
              while (0xffffffff < (longlong)uStack_38) {
                LOCK();
                uVar8 = *puVar1;
                if (uStack_38 == uVar8) {
                  *puVar1 = uStack_38 - 0x100000000;
                  uVar8 = uStack_38;
                }
                UNLOCK();
                bVar12 = uStack_38 == uVar8;
                uVar6 = uVar5;
                uStack_38 = uVar8;
                if (bVar12) goto LAB_140071771;
              }
              cVar4 = FUN_140006180(puVar1,1,&uStack_38);
              uVar6 = uVar5;
            } while (cVar4 == '\0');
          }
          goto LAB_140071771;
        }
        LOCK();
        uVar6 = *param_1;
        bVar12 = uVar5 == uVar6;
        if (bVar12) {
          *param_1 = uVar5 + 1;
          uVar6 = uVar5;
        }
        UNLOCK();
      } while (!bVar12);
    }
  }
  return;
}

