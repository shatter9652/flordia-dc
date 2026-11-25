// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037930  size: 187 bytes
// Name:    FUN_140037930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6cf90, FUN_1450d8be0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140037930(int param_1)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  
  lVar2 = _DAT_147be0328;
  if (_DAT_147be0328 == 0) {
    uVar5 = 0;
  }
  else {
    if ((DAT_147c173a0 & 1) == 0) {
      bVar7 = 1;
      if (DAT_14abbe2e0 == '\0') {
        cVar3 = func_0x000144f7b6a0();
        bVar7 = 1;
        if (cVar3 == '\0') {
          bVar7 = DAT_14abbe2e1;
        }
      }
    }
    else {
      bVar7 = 0;
    }
    bVar8 = bVar7;
    if (param_1 != 0) {
      lVar6 = func_0x000144e3e3c0();
      if (lVar6 != 0) {
        uVar1 = *(ushort *)(lVar6 + 0xa6);
        uVar4 = FUN_1450d8be0(lVar2);
        bVar8 = 1;
        if (((uint)*(byte *)(lVar6 + 0xa9) << ((uVar4 & 7) << 2) & (uint)uVar1) != 0) {
          bVar8 = bVar7;
        }
      }
    }
    if ((bVar8 & 1) == 0) {
      uVar4 = FUN_1450d8be0(lVar2);
    }
    else {
      uVar4 = FUN_144e6cf90();
    }
    uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + (ulonglong)uVar4 * 8) + 0x28);
  }
  return uVar5;
}

