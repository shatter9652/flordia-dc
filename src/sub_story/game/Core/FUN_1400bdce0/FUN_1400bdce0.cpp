// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bdce0  size: 135 bytes
// Name:    FUN_1400bdce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f4e520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bdce0(void)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  LOCK();
  uVar2 = _DAT_14aaf6b44 + 1;
  UNLOCK();
  uVar5 = (uint)_DAT_14aaf6b28;
  bVar7 = _DAT_14aaf6b44 < uVar5;
  lVar6 = _DAT_14aaf6b20;
  uVar3 = _DAT_14aaf6b44;
  _DAT_14aaf6b44 = uVar2;
  if (bVar7) {
    do {
      lVar1 = *(longlong *)((ulonglong)*(byte *)(lVar6 + (ulonglong)uVar3) * 8 + 0x14aaf4228);
      if ((lVar1 != 0) && (lVar4 = func_0x00014527b310(*(undefined4 *)(lVar1 + 0x140c)), lVar4 != 0)
         ) {
        FUN_144f4e520(lVar1);
        uVar5 = (uint)_DAT_14aaf6b28;
        lVar6 = _DAT_14aaf6b20;
      }
      LOCK();
      uVar2 = _DAT_14aaf6b44 + 1;
      UNLOCK();
      bVar7 = _DAT_14aaf6b44 < uVar5;
      uVar3 = _DAT_14aaf6b44;
      _DAT_14aaf6b44 = uVar2;
    } while (bVar7);
  }
  return;
}

