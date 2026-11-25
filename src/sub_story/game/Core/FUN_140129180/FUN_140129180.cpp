// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140129180  size: 86 bytes
// Name:    FUN_140129180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140735660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140129180(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar4 = FUN_140735660(*(undefined8 *)(lVar1 + 0x90));
  uVar3 = (ushort)uVar4;
  if (uVar3 != 0xffff) {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x28 +
             (ulonglong)((uint)(ushort)(*(short *)(param_1 + 0x20) + uVar3) * 0x50));
    lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x70) + (ulonglong)uVar3 * 8);
    if (lVar5 == lVar2) {
      lVar5 = FUN_145034810(lVar2);
      FUN_1450349c0(lVar1,uVar4,lVar5,1,1);
      FUN_14017dc60(lVar5,0);
    }
    return lVar5;
  }
  return 0;
}

