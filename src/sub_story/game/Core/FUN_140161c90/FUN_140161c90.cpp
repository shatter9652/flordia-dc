// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140161c90  size: 112 bytes
// Name:    FUN_140161c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140161c9f: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140161cb7: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140161ccf: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000140161ce7: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140161cd4) */
/* WARNING: Removing unreachable block (ram,0x000140161cbc) */
/* WARNING: Removing unreachable block (ram,0x000140161ca4) */
/* WARNING: Removing unreachable block (ram,0x000140161cec) */

void FUN_140161c90(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x1b8);
  if (lVar2 != 0) {
    FUN_14048aae0(lVar2);
    plVar4 = plRam000000014a02df88;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = lVar2 - *plRam000000014a02df88;
    uVar7 = SUB164(auVar3 / ZEXT416(*(uint *)(plRam000000014a02df88 + 1)),0);
    uVar8 = *(uint *)(plRam000000014a02df88[5] +
                     (SUB168(auVar3 / ZEXT416(*(uint *)(plRam000000014a02df88 + 1)),0) & 0xffffffff)
                     * 4) & 0xfffe0000 | uVar7;
    uVar7 = uVar7 & 0x1ffff | 0x20000;
    if (uVar8 < 0xfffe0000) {
      uVar7 = uVar8 + 0x20000;
    }
    puVar1 = (ulonglong *)(plRam000000014a02df88 + 4);
    LOCK();
    *(int *)(plRam000000014a02df88 + 2) = (int)plRam000000014a02df88[2] + -1;
    UNLOCK();
    uVar5 = *puVar1;
    do {
      *(uint *)(plVar4[5] + (ulonglong)(uVar7 & 0x1ffff) * 4) =
           (uint)uVar5 & 0x1ffff | uVar7 & 0xfffe0000;
      LOCK();
      uVar6 = plVar4[4];
      bVar9 = uVar5 == uVar6;
      if (bVar9) {
        plVar4[4] = (uVar5 & 0xffffffff00000000 | (ulonglong)(uVar7 & 0x1ffff)) + 0x100000000;
        uVar6 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar6;
    } while (!bVar9);
    if (plVar4[3] != 0) {
      FUN_140189080(plVar4,lVar2);
    }
  }
  *(longlong *)(param_1 + 0x1b8) = 0;
  return;
}

