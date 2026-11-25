// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070790  size: 103 bytes
// Name:    FUN_140070790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140070790(longlong param_1,uint param_2)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong in_RAX;
  ushort *puVar8;
  bool bVar9;
  
  if ((*(int *)(param_1 + 0xa4) != 0) &&
     (in_RAX = (ulonglong)*(uint *)(param_1 + 0x88),
     (*(uint *)(param_1 + 0x88) >> (param_2 & 0x1f) & 1) != 0)) {
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 1 << (param_2 & 0x1f);
    lVar5 = *(longlong *)(*(longlong *)(_DAT_14ab760a0 + 0x440) + 0x78);
    in_RAX = func_0x000140070800(lVar5,param_1);
    if ((char)in_RAX == '\0') {
      lVar6 = *plRam00000001499aae40;
      uVar4 = *(uint *)(plRam00000001499aae40 + 1);
      uVar7 = FUN_1455ae4b0(CONCAT71((uint7)(uint3)(uVar4 >> 8),3));
      *(short *)(_DAT_147649c28 + 2 + (ulonglong)uVar7 * 6) =
           (short)((ulonglong)(param_1 - lVar6) / (ulonglong)uVar4);
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
      bVar2 = *(byte *)(lVar5 + 0x188);
      *(byte *)(lVar5 + 0x188) = 1;
      UNLOCK();
      return (ulonglong)bVar2;
    }
  }
  return in_RAX;
}

