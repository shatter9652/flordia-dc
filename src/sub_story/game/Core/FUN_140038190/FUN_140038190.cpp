// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140038190  size: 252 bytes
// Name:    FUN_140038190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010a630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


short FUN_140038190(longlong param_1,undefined4 param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x170);
  if (lVar3 != 0) {
    uVar7 = FUN_14010a630(param_1,param_2);
    sVar6 = -1;
    if (uVar7 != 0xffffffff) {
      iVar8 = *(int *)(lVar3 + 0x1c4);
      if (iVar8 <= (int)uVar7) {
        lVar5 = *(longlong *)(lVar3 + 0x100);
        lVar10 = *(longlong *)(lVar5 + 0x1a0);
        lVar9 = lVar5;
        if (lVar10 == 0) {
          lVar9 = *(longlong *)(lVar3 + 0x468);
          if (lVar9 == 0) {
            lVar9 = *(longlong *)(lVar3 + 0x4a0);
          }
          lVar9 = *(longlong *)(lVar9 + 0x100);
        }
        if (*(int *)(*(longlong *)(lVar9 + 0x178) + 0x1d4) <= (int)uVar7) {
          return -1;
        }
        do {
          lVar9 = lVar5;
          if (lVar10 == 0) {
            lVar9 = *(longlong *)(lVar3 + 0x468);
            if (lVar9 == 0) {
              lVar9 = *(longlong *)(lVar3 + 0x4a0);
            }
            lVar9 = *(longlong *)(lVar9 + 0x100);
          }
          uVar7 = func_0x000144e2c200(*(undefined8 *)(lVar9 + 0x178),uVar7);
          if (uVar7 == 0xffffffff) {
            return -1;
          }
        } while (iVar8 <= (int)uVar7);
      }
      sVar6 = *(short *)(*(longlong *)(lVar3 + 0x1c8) + 2 + (ulonglong)uVar7 * 6);
    }
    return sVar6;
  }
  lVar3 = *(longlong *)(param_1 + 0x1a8);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + 0x18);
  uVar1 = *(undefined2 *)(lVar3 + 0x34);
  sVar6 = func_0x00014006bb80(uVar4,uVar1,param_2);
  if (sVar6 == -1) {
    lVar3 = *(longlong *)(lVar5 + 0x28);
    do {
      iVar8 = FUN_1407e0060(lVar5,param_2);
      if (iVar8 == -1) {
        return -1;
      }
      if (lVar3 == 0) {
        return 0;
      }
      uVar2 = *(ushort *)(lVar3 + 0x46 + (longlong)iVar8 * 0x50);
      if ((short)uVar2 < 0) {
        return 0;
      }
      lVar10 = (longlong)iVar8 * 0x50 + lVar3;
      param_2 = *(undefined4 *)
                 (lVar10 + 0x1c + ((ulonglong)uVar2 - (ulonglong)*(ushort *)(lVar10 + 0x48)) * 0x50)
      ;
      sVar6 = func_0x00014006bb80(uVar4,uVar1,param_2);
    } while (sVar6 == -1);
  }
  return sVar6;
}

