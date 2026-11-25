// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003ee70  size: 105 bytes
// Name:    FUN_14003ee70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140735660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14003ee70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 8);
  uVar3 = FUN_140735660(*(undefined8 *)(lVar1 + 0x90));
  if ((short)uVar3 == -1) {
    uVar5 = 0;
  }
  else {
    cVar2 = func_0x0001400761a0(param_1,uVar3);
    if (cVar2 == '\0') {
      puVar4 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x28 +
               (ulonglong)((uint)(ushort)(*(short *)(param_1 + 0x20) + (short)uVar3) * 0x50));
    }
    else {
      puVar4 = (undefined8 *)((ulonglong)((uVar3 & 0xffff) << 3) + *(longlong *)(lVar1 + 0x70));
    }
    uVar5 = *puVar4;
  }
  return uVar5;
}

