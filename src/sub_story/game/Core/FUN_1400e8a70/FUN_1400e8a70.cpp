// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e8a70  size: 418 bytes
// Name:    FUN_1400e8a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f66640, FUN_144eaa760, FUN_145350ed0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e8a70(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  int iStack_40;
  undefined *puStack_38;
  
  puStack_38 = &DAT_14aad3da0;
  FUN_145350ed0(&puStack_38,&lStack_48);
  if (iStack_40 != -1 || lStack_48 != 0) {
    do {
      func_0x000144eaa740(*(undefined4 *)(lStack_48 + 0xc),iStack_40,&uStack_4c);
      uVar1 = uStack_4c;
      cVar2 = func_0x000144f66610(&DAT_14aad3da0,uStack_4c);
      if (cVar2 != '\0') {
        func_0x000144d9edb0(_DAT_14aad3da8,&uStack_50,uVar1);
        FUN_144f66640(uStack_50,1);
        func_0x000144d9edb0(_DAT_14aad3da8,&uStack_50,uVar1);
        func_0x000144f665e0(uStack_50);
      }
      FUN_144eaa760(&lStack_48);
    } while (iStack_40 != -1 || lStack_48 != 0);
  }
  puStack_38 = &DAT_14aad3da0;
  FUN_145350ed0(&puStack_38,&lStack_48);
  if (iStack_40 != -1 || lStack_48 != 0) {
    do {
      func_0x000144eaa740(*(undefined4 *)(lStack_48 + 0xc),iStack_40,&uStack_4c);
      uVar1 = uStack_4c;
      cVar2 = func_0x0001400e9ba0(uStack_4c);
      if (cVar2 != '\0') {
        func_0x000144d9edb0(_DAT_14aad3da8,&uStack_50,uVar1);
        FUN_144f66640(uStack_50,1);
        func_0x000144d9edb0(_DAT_14aad3da8,&uStack_50,uVar1);
        func_0x000144f665e0(uStack_50);
      }
      FUN_144eaa760(&lStack_48);
    } while (iStack_40 != -1 || lStack_48 != 0);
  }
  return;
}

