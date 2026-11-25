// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140167cf0  size: 97 bytes
// Name:    FUN_140167cf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407a07b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_140167cf0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  ushort uVar4;
  
  sVar1 = -2;
  if ((short)(param_3 >> 0x20) != -2) {
    sVar1 = func_0x0001403dc2f0(param_2,param_3 >> 0x20);
    if (sVar1 == -1) {
      return 0xff;
    }
  }
  uVar2 = FUN_1407a07b0(param_2);
  lVar3 = (ulonglong)((uVar2 & 0xffff) << 5) + *(longlong *)(param_1 + 0x528);
  if ((sVar1 == -2) || (*(char *)(lVar3 + 0x18) == '\0')) {
    uVar4 = *(ushort *)
             (*(longlong *)(param_1 + 0x538) + 0x1c + (ulonglong)*(ushort *)(lVar3 + 0x14) * 0x40);
    if (uVar4 == 0xffff) {
      return 0;
    }
  }
  else {
    uVar4 = sVar1 + *(short *)(lVar3 + 0x14);
  }
  return *(undefined1 *)(*(longlong *)(param_1 + 0x538) + 0xc + (ulonglong)uVar4 * 0x40);
}

