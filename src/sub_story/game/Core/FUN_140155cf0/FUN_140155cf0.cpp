// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140155cf0  size: 224 bytes
// Name:    FUN_140155cf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14512ab80, FUN_140155dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140155cf0(undefined4 *param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 2);
  if ((ulonglong)(uint)param_1[1] != 0) {
    lVar5 = (ulonglong)(uint)param_1[1] * 0x58 + lVar3;
    do {
      if (*(short *)(lVar3 + 0x52) != 0) {
        FUN_140155dd0(*(undefined8 *)(lVar3 + 0x48));
      }
      uVar1 = *(ushort *)(lVar3 + 0x3a);
      if (uVar1 != 0) {
        lVar2 = *(longlong *)(lVar3 + 0x30);
        lVar4 = 0;
        do {
          *(undefined4 *)(lVar2 + 0xc + lVar4) = 0;
          if (*(longlong *)(lVar2 + 0x10 + lVar4) != 0) {
            func_0x000144d9c130();
          }
          *(undefined4 *)(lVar2 + 8 + lVar4) = 0;
          *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
          lVar4 = lVar4 + 0x18;
        } while ((ulonglong)uVar1 * 0x18 != lVar4);
        if (lVar2 != 0) {
          func_0x000144d9c130(lVar2);
        }
      }
      FUN_14512ab80(lVar3 + 8);
      lVar3 = lVar3 + 0x58;
    } while (lVar3 != lVar5);
    lVar3 = *(longlong *)(param_1 + 2);
  }
  param_1[1] = 0;
  if (lVar3 != 0) {
    func_0x000144d9c130(lVar3);
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}

