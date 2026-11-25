// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400818b0  size: 134 bytes
// Name:    FUN_1400818b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e92640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400818b0(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = func_0x000144f68b80();
  if (lVar4 == 0) {
    bVar1 = false;
  }
  else {
    if (*(longlong *)(lVar4 + 0xcc98) == 0) {
      if (*(char *)(lVar4 + 0xccbe) != '\0') {
        uVar3 = func_0x000144dc06c0(*(undefined4 *)(lVar4 + 0xcca4));
        return uVar3 < 5000;
      }
    }
    else {
      lVar5 = func_0x000144da10f0(*(undefined4 *)(*(longlong *)(lVar4 + 0xcc98) + 0x9c));
      if ((lVar5 != 0) && (iVar2 = FUN_144e92640(lVar5 + 0x120,0x52), iVar2 != -1)) {
        return true;
      }
    }
    bVar1 = (bool)((*(byte *)(lVar4 + 0xccc0) & 4) >> 2);
  }
  return bVar1;
}

