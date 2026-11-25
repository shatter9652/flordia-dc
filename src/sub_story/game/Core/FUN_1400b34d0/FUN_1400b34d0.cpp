// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b34d0  size: 121 bytes
// Name:    FUN_1400b34d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f3e6e0, FUN_1406d91a0, FUN_140dbe3f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400b34d0(longlong param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_144f3e6e0();
  if ((lVar3 != 0) && (lVar4 = func_0x000145073c10(), *(char *)(lVar4 + 0xbf2) == '\x01')) {
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
    lVar4 = func_0x000144d9f7c0(uVar1);
    if (((lVar4 != 0) &&
        (((lVar4 = *(longlong *)(lVar4 + 0x1e68), lVar4 != 0 &&
          (*(char *)(lVar4 + 0x13) != *(char *)(lVar4 + 0x12))) &&
         (lVar3 = FUN_1406d91a0(uVar1,*(undefined4 *)(lVar3 + 0x10)), lVar3 != 0)))) &&
       (cVar2 = FUN_140dbe3f0(lVar3,0x6fb18363), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}

