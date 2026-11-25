// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019a60  size: 200 bytes
// Name:    FUN_140019a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142274a20, FUN_140004b40, FUN_14582c260
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140019a60(uint param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  char cVar3;
  ushort uVar4;
  uint *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  longlong lStack_20;
  
  lVar6 = _DAT_14800a0e8;
  if ((param_1 != 0) && (*(uint *)(_DAT_14800a0e8 + 0x28) != 0)) {
    for (puVar5 = *(uint **)(*(longlong *)(_DAT_14800a0e8 + 0x20) +
                            ((ulonglong)param_1 % (ulonglong)*(uint *)(_DAT_14800a0e8 + 0x28)) * 8);
        puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 4)) {
      if (*puVar5 == param_1) {
        if (puVar5[2] == 0) {
          return;
        }
        puVar5 = puVar5 + 2;
        LOCK();
        *puVar5 = *puVar5 - 1;
        UNLOCK();
        if (*puVar5 != 0) {
          return;
        }
        if (((param_2 == 0) || (*(uint *)(param_2 + 0x30) != param_1)) &&
           (param_2 = FUN_142274a20(), param_2 == 0)) {
          return;
        }
        puVar2 = (ulonglong *)(lVar6 + 0x80);
        FUN_140004b40(puVar2);
        uVar4 = *(ushort *)(lVar6 + 0x78);
        if (uVar4 == *(ushort *)(lVar6 + 0x7a)) {
          FUN_14582c260(lVar6 + 0x70,uVar4 + 0x100);
          uVar4 = *(ushort *)(lVar6 + 0x78);
        }
        *(ushort *)(lVar6 + 0x78) = uVar4 + 1;
        *(longlong *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar4 * 8) = param_2;
        piVar1 = (int *)(lVar6 + 0x90);
        *piVar1 = *piVar1 + -1;
        uVar8 = *puVar2;
        if (*piVar1 != 0) {
          return;
        }
        do {
          uVar7 = uVar8;
          LOCK();
          uVar8 = *puVar2;
          if (uVar7 == uVar8) {
            *puVar2 = (ulonglong)((int)uVar7 - 1) | 0xffffffff00000000;
            uVar8 = uVar7;
          }
          UNLOCK();
        } while (uVar7 != uVar8);
        if ((uVar7 & 0xfffffffe) != 0) {
          plVar9 = (longlong *)(lVar6 + 0x88);
          lStack_20 = *(longlong *)(lVar6 + 0x88);
          do {
            while (lStack_20 < 0) {
              cVar3 = FUN_1400062d0(plVar9,1,&lStack_20);
              if (cVar3 != '\0') {
                return;
              }
            }
            LOCK();
            lVar6 = *plVar9;
            if (lStack_20 == lVar6) {
              *plVar9 = lStack_20 + 0x100000000;
              lVar6 = lStack_20;
            }
            UNLOCK();
            bVar10 = lStack_20 != lVar6;
            lStack_20 = lVar6;
          } while (bVar10);
          return;
        }
        return;
      }
    }
  }
  return;
}

