// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8cd0  size: 148 bytes
// Name:    FUN_1400b8cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407e0060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


short FUN_1400b8cd0(undefined8 param_1,ulonglong param_2,longlong param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  
  sVar3 = func_0x00014006bb80(param_1,param_2,param_4);
  if (sVar3 == -1) {
    lVar2 = *(longlong *)(param_3 + 0x28);
    do {
      iVar4 = FUN_1407e0060(param_3,param_4);
      if (iVar4 == -1) {
        return -1;
      }
      if (lVar2 == 0) {
        return 0;
      }
      uVar1 = *(ushort *)(lVar2 + 0x46 + (longlong)iVar4 * 0x50);
      if ((short)uVar1 < 0) {
        return 0;
      }
      lVar5 = (longlong)iVar4 * 0x50 + lVar2;
      param_4 = *(undefined4 *)
                 (lVar5 + 0x1c + ((ulonglong)uVar1 - (ulonglong)*(ushort *)(lVar5 + 0x48)) * 0x50);
      sVar3 = func_0x00014006bb80(param_1,param_2 & 0xffffffff,param_4);
    } while (sVar3 == -1);
  }
  return sVar3;
}

