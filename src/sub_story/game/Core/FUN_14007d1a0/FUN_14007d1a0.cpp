// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d1a0  size: 122 bytes
// Name:    FUN_14007d1a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f12fd0, FUN_14007d330, FUN_14007d3e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007d1a0(longlong param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  if (*(short *)(param_1 + 0x28) == -1) {
    uVar1 = FUN_14007d330();
    *(ushort *)(param_1 + 0x28) = uVar1;
    if (uVar1 != 0xffff) {
      if (param_2 != 0) {
        lVar3 = 0;
        if (-1 < (short)uVar1) {
          lVar3 = (ulonglong)uVar1 * 0x18 + 0x14a9240e8;
        }
        FUN_14007d3e0(lVar3,param_2);
        uVar1 = *(ushort *)(param_1 + 0x28);
      }
      lVar3 = 0;
      if (-1 < (short)uVar1) {
        lVar3 = (longlong)(short)uVar1 * 0x18 + 0x14a9240e8;
      }
      uVar2 = FUN_144f12fd0(param_1);
      *(undefined2 *)(lVar3 + 0x10) = uVar2;
    }
  }
  return;
}

