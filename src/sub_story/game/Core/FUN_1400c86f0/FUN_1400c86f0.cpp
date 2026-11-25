// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c86f0  size: 221 bytes
// Name:    FUN_1400c86f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de6230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c86f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_2 + 8) == 0) ||
     ((*(byte *)(*(longlong *)(param_2 + 8) + 0x23b) & 1) == 0)) {
    lVar4 = *(longlong *)(param_2 + 0x38);
    if (lVar4 != 0) {
      uVar3 = (uint)*(byte *)(lVar4 + 0x30);
      do {
        uVar1 = *(undefined4 *)(lVar4 + 0x9c);
        if (((char)uVar3 == '\x04') && (cVar2 = func_0x0001450ed730(uVar1), cVar2 != '\0'))
        goto LAB_1400c876c;
        lVar4 = FUN_144de6230(uVar1);
      } while ((lVar4 != 0) && (uVar3 = *(uint *)(lVar4 + 0x30), (0x1cU >> (uVar3 & 0x1f) & 1) != 0)
              );
    }
    if ((param_1 != 0 & *(byte *)(param_2 + 0xe1)) == 1) {
      uVar3 = (uint)*(byte *)(param_1 + 0x30);
      do {
        uVar1 = *(undefined4 *)(param_1 + 0x9c);
        if (((char)uVar3 == '\x04') && (cVar2 = func_0x0001450ed730(uVar1), cVar2 != '\0'))
        goto LAB_1400c876c;
        param_1 = FUN_144de6230(uVar1);
      } while ((param_1 != 0) &&
              (uVar3 = *(uint *)(param_1 + 0x30), (0x1cU >> (uVar3 & 0x1f) & 1) != 0));
    }
  }
  else {
LAB_1400c876c:
    *(byte *)(param_2 + 0xf0) = *(byte *)(param_2 + 0xf0) | 8;
  }
  return;
}

