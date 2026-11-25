// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400735c0  size: 359 bytes
// Name:    FUN_1400735c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400063f0, FUN_144f16960, FUN_144f16a90, FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400735c0(uint *param_1)

{
  ulonglong *puVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong unaff_GS_OFFSET;
  bool bVar13;
  ulonglong uStack_38;
  
  lVar3 = *(longlong *)(param_1 + 6);
  if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
    lVar8 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
  }
  else {
    lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    *(undefined1 *)(lVar4 + 0x1440) = 1;
    lVar8 = FUN_1400063f0();
    *(longlong *)(lVar4 + 0x1438) = lVar8;
  }
  if (lVar8 == lVar3) {
    return;
  }
  cVar5 = FUN_144f16960(param_1);
  if (cVar5 == '\0') {
    puVar1 = (ulonglong *)(param_1 + 2);
    uVar7 = *param_1;
LAB_140073638:
    do {
      uVar6 = uVar7;
      if ((uVar6 & 0x1ff0000) != 0) {
        LOCK();
        uVar7 = *param_1;
        bVar13 = uVar6 == uVar7;
        if (bVar13) {
          *param_1 = uVar6 + 0x100;
          uVar7 = uVar6;
        }
        UNLOCK();
        if (bVar13) {
          uVar10 = (uint)(*puVar1 >> 7) & 0xffffff;
          uVar9 = *puVar1;
          if ((*puVar1 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar9 < 0x100000000) {
                uVar11 = *puVar1;
              }
              else {
                LOCK();
                uVar11 = *puVar1;
                if (uVar9 == uVar11) {
                  *puVar1 = uVar9 - 0x100000000;
                  uVar11 = uVar9;
                }
                UNLOCK();
                uVar7 = uVar6;
                if (uVar9 == uVar11) goto LAB_140073638;
              }
              uVar10 = uVar10 - 1;
              uVar9 = uVar11;
            } while (uVar10 != 0);
          }
          uVar9 = *puVar1;
          do {
            while (uStack_38 = uVar9, (longlong)uStack_38 < 0x100000000) {
              cVar5 = FUN_140006180(puVar1,1,&uStack_38);
              uVar7 = uVar6;
              uVar9 = uStack_38;
              if (cVar5 != '\0') goto LAB_140073638;
            }
            LOCK();
            uVar9 = *puVar1;
            if (uStack_38 == uVar9) {
              *puVar1 = uStack_38 - 0x100000000;
              uVar9 = uStack_38;
            }
            UNLOCK();
            uVar7 = uVar6;
          } while (uStack_38 != uVar9);
        }
        goto LAB_140073638;
      }
      LOCK();
      uVar7 = *param_1;
      bVar13 = uVar6 == uVar7;
      if (bVar13) {
        *param_1 = uVar6 + 1;
        uVar7 = uVar6;
      }
      UNLOCK();
    } while (!bVar13);
    FUN_144f16a90(param_1);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar9 = (ulonglong)*(uint *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x468);
  if (uVar9 != 0) {
    puVar12 = (undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x420);
    uVar11 = 0;
    do {
      if ((uint *)*puVar12 == param_1) {
        pcVar2 = (char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x460 + uVar11);
        *pcVar2 = *pcVar2 + '\x01';
        return;
      }
      uVar11 = uVar11 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar9 != uVar11);
  }
  return;
}

