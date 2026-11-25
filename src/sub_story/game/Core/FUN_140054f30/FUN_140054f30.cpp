// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140054f30  size: 111 bytes
// Name:    FUN_140054f30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140054ff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140054f30(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = _DAT_149f36124;
  if (3 < *(byte *)(*(longlong *)(param_1 + 0x188) + 0xc1)) {
    iVar2 = func_0x000140054fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x20));
    if (iVar2 != 0) {
      iVar4 = 0;
      do {
        lVar3 = func_0x000140054fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 0x20),iVar4);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0x30) != '\t')) {
          FUN_140054ff0(lVar3,uVar1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar2 != iVar4);
    }
  }
  return;
}

