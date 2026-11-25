// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003ad80  size: 278 bytes
// Name:    FUN_14003ad80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143dad940, FUN_1402675a0, FUN_1457d1ec0, FUN_143daa820, FUN_1456cdd20, FUN_145a8b140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003ad80(void)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = _DAT_149891d6c;
  if (_DAT_149891e84 == 1) {
    return;
  }
  if (_DAT_149891e84 != 3) {
    func_0x000143dc0720(6);
    FUN_143dad940();
    goto LAB_14003ada5;
  }
  lVar2 = func_0x000140c01760(_DAT_149891d50,_DAT_149891d6c);
  if (DAT_149891f0d == '\x01') {
    if (uVar3 < 0x11) {
      FUN_1457d1ec0(0x146cb4b88,1,0xd6a,0x9fb6f6ef);
    }
    else {
      cVar1 = FUN_1456cdd20(lVar2,uVar3);
      if (cVar1 != '\0') {
        lVar2 = lVar2 + 0x10;
        uVar3 = uVar3 - 0x10;
        goto LAB_14003ae33;
      }
    }
  }
  else {
LAB_14003ae33:
    cVar1 = FUN_145a8b140(lVar2,uVar3);
    if (cVar1 != '\0') {
      FUN_143daa820(5);
      goto LAB_14003ada5;
    }
  }
  FUN_1402675a0(0x146cb4b88,1);
  func_0x000143dc0720(7);
LAB_14003ada5:
  if ((bRam0000000149891d75 & 2) == 0) {
    if (_DAT_149891d50 != 0) {
      func_0x0001403014a0(uRam0000000149891d60,uRam0000000149891d74);
    }
    _DAT_149891d50 = 0;
    uRam0000000149891d68 = 0;
  }
  _DAT_149891d6c = 0;
  if (lRam0000000149891d58 != -1) {
    (**(code **)(lRam00000001478f6888 + 0x88))(0x1478f6888);
    lRam0000000149891d58 = -1;
  }
  return;
}

