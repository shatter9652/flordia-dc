// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086fd0  size: 98 bytes
// Name:    FUN_140086fd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140086fff: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140087004) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140086fd0(longlong param_1,longlong param_2)

{
  ushort *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  ushort *puVar8;
  bool bVar9;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x440) + 0x38);
  lVar6 = *_DAT_1499f7248;
  uVar4 = *(uint *)(_DAT_1499f7248 + 1);
  uVar7 = FUN_1455ae4b0(CONCAT71((uint7)(uint3)(uVar4 >> 8),3));
  *(short *)(_DAT_147649c28 + 2 + (ulonglong)uVar7 * 6) =
       (short)((ulonglong)(param_2 - lVar6) / (ulonglong)uVar4);
  puVar8 = (ushort *)(lVar5 + 0x186);
  do {
    while (*puVar8 != 0xffff) {
      puVar1 = (ushort *)(_DAT_147649c28 + (ulonglong)*puVar8 * 6);
      LOCK();
      bVar9 = *puVar1 == 0xfffe;
      if (bVar9) {
        *puVar1 = uVar7;
      }
      UNLOCK();
      if (bVar9) goto LAB_140054dbc;
    }
    LOCK();
    uVar3 = *puVar8;
    if (uVar3 == 0xffff) {
      *puVar8 = uVar7;
    }
    UNLOCK();
  } while (uVar3 != 0xffff);
  puVar8 = (ushort *)(lVar5 + 0x184);
LAB_140054dbc:
  LOCK();
  *puVar8 = uVar7;
  UNLOCK();
  LOCK();
  uVar2 = *(undefined1 *)(lVar5 + 0x188);
  *(undefined1 *)(lVar5 + 0x188) = 1;
  UNLOCK();
  return uVar2;
}

