// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164480  size: 202 bytes
// Name:    FUN_140164480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140164480(void)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = (ulonglong)_DAT_14aaf691c;
  if (_DAT_14aaf691c != 0) {
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(lVar7 + 0x14aaf6920);
      uVar5 = (ulonglong)uVar1 & 0x1ffff;
      if ((((uVar5 != 0x1ffff) &&
           (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar3 != (longlong *)0x0)) &&
          (uVar2 = *(uint *)(plVar3[5] + uVar5 * 4), (uVar2 >> 0x11 & 0x3ff) == uVar1 >> 0x16)) &&
         ((((uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6) && (*plVar3 != 0)) &&
          ((lVar4 = *(longlong *)(*plVar3 + 0x28 + (ulonglong)(uint)((int)uVar5 * (int)plVar3[1])),
           lVar4 != 0 && ((*(byte *)(lVar4 + 0x2c) & 8) != 0)))))) {
        func_0x000140164550();
      }
      lVar7 = lVar7 + 4;
    } while (uVar6 << 2 != lVar7);
  }
  uVar1 = _DAT_14aaf691c;
  LOCK();
  _DAT_14aaf691c = 0;
  UNLOCK();
  return uVar1;
}

