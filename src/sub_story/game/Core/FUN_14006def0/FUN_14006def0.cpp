// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006def0  size: 234 bytes
// Name:    FUN_14006def0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b5afd0, FUN_1417297d0, FUN_144ec6670, FUN_144ec6720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14006def0(undefined8 param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar2 = func_0x000144f2a060(param_1,(longlong)param_2 << 2,0);
  uVar6 = (ulonglong)_DAT_149c4e1d8;
  puVar3 = (uint *)0x149c4c1d8;
  if (0 < (longlong)uVar6) {
    puVar3 = (uint *)0x149c4c1d8;
    uVar7 = uVar6;
    do {
      uVar8 = uVar7 >> 1;
      uVar9 = ~uVar8 + uVar7;
      uVar7 = uVar8;
      if ((puVar3 + uVar8 * 4 + 4)[-4] < uVar2) {
        puVar3 = puVar3 + uVar8 * 4 + 4;
        uVar7 = uVar9;
      }
    } while (0 < (longlong)uVar7);
  }
  if ((puVar3 == (uint *)(uVar6 * 0x10 + 0x149c4c1d8)) || (*puVar3 != uVar2)) {
    FUN_144ec6720();
    lVar4 = FUN_140b5afd0(param_1,param_2,0,param_3);
    if (lVar4 != 0) {
      lVar1 = (longlong)_DAT_149c4e1d8 + 1;
      lVar5 = (longlong)_DAT_149c4e1d8 * 0x10;
      _DAT_149c4e1d8 = (int)lVar1;
      *(uint *)(lVar5 + 0x149c4c1d8) = uVar2;
      *(longlong *)(lVar5 + 0x149c4c1e0) = lVar4;
      FUN_1417297d0(0x149c4c1d8,lVar1 * 0x10 + 0x149c4c1d8);
    }
    FUN_144ec6670();
  }
  else {
    lVar4 = *(longlong *)(puVar3 + 2);
  }
  return lVar4;
}

