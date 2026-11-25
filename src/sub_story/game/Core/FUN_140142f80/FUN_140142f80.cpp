// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140142f80  size: 316 bytes
// Name:    FUN_140142f80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140142f80(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ushort uVar6;
  
  uVar6 = *(ushort *)(param_1 + 0x1ab8);
  iVar1 = *(int *)(param_1 + 0x1b30);
  uVar3 = (uint)uVar6;
  if (iVar1 < (int)(uint)uVar6) {
    lVar5 = *(longlong *)(param_1 + 0x1ab0);
    if (uVar6 != 0) {
      uVar4 = 0;
      do {
        if (*(longlong *)(lVar5 + uVar4) == 0) {
          uVar3 = (uint)(uVar4 >> 3);
          goto LAB_140142fdb;
        }
        uVar4 = uVar4 + 8;
      } while ((uint)uVar6 * 8 != uVar4);
    }
    uVar3 = 0xffffffff;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x1ab0);
    if (uVar6 == *(ushort *)(param_1 + 0x1aba)) {
      lVar2 = func_0x000144d9c140(8,(uint)uVar6 * 8 + 0x80);
      if (uVar6 != 0) {
        func_0x000145f40560(lVar2,lVar5,(uint)uVar6 * 8);
      }
      if (lVar5 != 0) {
        func_0x000144d9c130(lVar5);
      }
      *(ushort *)(param_1 + 0x1aba) = uVar6 + 0x10;
      *(longlong *)(param_1 + 0x1ab0) = lVar2;
      uVar6 = *(ushort *)(param_1 + 0x1ab8);
      iVar1 = *(int *)(param_1 + 0x1b30);
      lVar5 = lVar2;
    }
    *(ushort *)(param_1 + 0x1ab8) = uVar6 + 1;
    *(undefined8 *)(lVar5 + (ulonglong)uVar6 * 8) = 0;
    lVar5 = *(longlong *)(param_1 + 0x1ab0);
  }
LAB_140142fdb:
  *(longlong *)(lVar5 + (ulonglong)uVar3 * 8) = param_2;
  *(int *)(param_1 + 0x1b30) = iVar1 + 1;
  *(short *)(param_2 + 0xce) = (short)uVar3;
  return;
}

