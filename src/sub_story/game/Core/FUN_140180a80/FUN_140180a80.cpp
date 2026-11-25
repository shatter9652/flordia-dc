// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140180a80  size: 55 bytes
// Name:    FUN_140180a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140180a80(ulonglong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = func_0x000144dc3fe0(*(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c));
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x40) != 0)) {
    uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x40) + 0x9c);
    if (((uVar1 & 0x3e0000) == 0x40000) &&
       (*(short *)(lRam000000014abbdff0 +
                  (ulonglong)((uVar1 & 0x1ffff) * iRam000000014abbdfe4 + 0x25) * 2) != -1)) {
      bVar3 = *(longlong *)(lRam000000014abbe000 + 0x250) != 0;
    }
    else {
      bVar3 = false;
    }
    return bVar3;
  }
  return false;
}

