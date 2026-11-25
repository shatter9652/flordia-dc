// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8580  size: 167 bytes
// Name:    FUN_1400c8580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c8dc0, FUN_1400c87d0, FUN_1400d0d50, FUN_1400c8630, FUN_1400cc450, FUN_1400ccec0, FUN_1400ca550, FUN_1400d7860, FUN_1400cb5a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c8580(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1400ca550(param_1,param_3);
  FUN_1400c8dc0(param_1,param_3);
  FUN_1400ccec0(param_1,param_3,param_2 + 0x10);
  FUN_1400c87d0(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c),param_3);
  FUN_1400d0d50(param_1,param_3);
  FUN_1400d7860(param_1,param_3,param_2);
  FUN_1400cc450(param_1,param_3);
  FUN_1400c8630(param_1,param_3);
  FUN_1400cb5a0(param_1,param_3);
  lVar4 = *(longlong *)(param_1 + 0x2f8);
  if ((*(longlong *)(param_3 + 8) == 0) ||
     ((*(byte *)(*(longlong *)(param_3 + 8) + 0x23b) & 1) == 0)) {
    lVar5 = *(longlong *)(param_3 + 0x38);
    if (lVar5 != 0) {
      uVar3 = (uint)*(byte *)(lVar5 + 0x30);
      do {
        uVar1 = *(undefined4 *)(lVar5 + 0x9c);
        if (((char)uVar3 == '\x04') && (cVar2 = func_0x0001450ed730(uVar1), cVar2 != '\0'))
        goto LAB_1400c876c;
        lVar5 = FUN_144de6230(uVar1);
      } while ((lVar5 != 0) && (uVar3 = *(uint *)(lVar5 + 0x30), (0x1cU >> (uVar3 & 0x1f) & 1) != 0)
              );
    }
    if ((lVar4 != 0 & *(byte *)(param_3 + 0xe1)) == 1) {
      uVar3 = (uint)*(byte *)(lVar4 + 0x30);
      do {
        uVar1 = *(undefined4 *)(lVar4 + 0x9c);
        if (((char)uVar3 == '\x04') && (cVar2 = func_0x0001450ed730(uVar1), cVar2 != '\0'))
        goto LAB_1400c876c;
        lVar4 = FUN_144de6230(uVar1);
      } while ((lVar4 != 0) && (uVar3 = *(uint *)(lVar4 + 0x30), (0x1cU >> (uVar3 & 0x1f) & 1) != 0)
              );
    }
  }
  else {
LAB_1400c876c:
    *(byte *)(param_3 + 0xf0) = *(byte *)(param_3 + 0xf0) | 8;
  }
  return;
}

