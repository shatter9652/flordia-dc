// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140130150  size: 595 bytes
// Name:    FUN_140130150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1406b6070, FUN_140c10e10, FUN_1400bf810, FUN_140950110, FUN_1452afef0, FUN_141a602d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140130150(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uStack_5c;
  undefined1 auStack_58 [32];
  undefined1 auStack_30 [8];
  
  if ((*(byte *)(param_1 + 0x105) & 0x10) != 0) {
    func_0x0001407e2a20(param_1);
  }
  lVar8 = func_0x000145309310(*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10),
                              *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48));
  if (lVar8 != 0) {
    if (*(int *)(*(longlong *)(lVar8 + 8) + 0x34) == 0) {
      if (*(int *)(*(longlong *)(lVar8 + 8) + 0x38) != 0) {
        *(undefined4 *)(param_1 + 0x34) = 1;
        bVar4 = func_0x0001407957a0();
        *(byte *)(param_1 + 0x39) = bVar4;
        if ((bVar4 != 0xff) && (_DAT_14a4a03d0 != 0)) {
          lVar8 = _DAT_14a4a03d0 + (ulonglong)bVar4 * 0x48;
          uVar5 = *(ushort *)(lVar8 + 0x28);
          if (*(uint *)(param_1 + 0x88) < (uint)uVar5) {
            FUN_140c10e10(param_1 + 0x88);
            uVar5 = *(ushort *)(lVar8 + 0x28);
          }
          if (uVar5 != 0) {
            lVar8 = *(longlong *)(lVar8 + 0x20);
            lVar10 = 0;
            do {
              auStack_58._0_4_ = 0x3fffff;
              FUN_1400bf810(*(undefined8 *)(lVar8 + lVar10),auStack_58,0);
              if ((~auStack_58._0_4_ & 0x3fffff) != 0) {
                uVar6 = *(uint *)(param_1 + 0x8c);
                lVar2 = *(longlong *)(param_1 + 0x90);
                *(uint *)(param_1 + 0x8c) = uVar6 + 1;
                if (lVar2 != 0) {
                  *(undefined4 *)(lVar2 + (ulonglong)uVar6 * 4) = 0x3fffff;
                }
                *(undefined4 *)(lVar2 + (ulonglong)uVar6 * 4) = auStack_58._0_4_;
              }
              lVar10 = lVar10 + 0x28;
            } while ((ulonglong)uVar5 * 0x28 != lVar10);
          }
          *(byte *)(param_1 + 0x105) = *(byte *)(param_1 + 0x105) | 0x10;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x34) = 2;
      lVar8 = _DAT_14a9ec8e0;
      uVar6 = FUN_1452afef0(_DAT_14a9ec8e0,2);
      if (-1 < (int)uVar6) {
        auStack_58 = ZEXT1232(ZEXT812(0));
        FUN_1406b6070(*(undefined8 *)(*(longlong *)(lVar8 + 0x90) + (ulonglong)uVar6 * 8),&uStack_5c
                      ,auStack_58,0);
        if ((~uStack_5c & 0x3fffff) != 0) {
          *(uint *)(param_1 + 0x80) = uStack_5c;
          *(uint *)(param_1 + 0x98) = uVar6;
          *(byte *)(param_1 + 0x105) = *(byte *)(param_1 + 0x105) | 0x10;
          uVar7 = FUN_140950110((ulonglong)uVar6,uStack_5c,auStack_30,0);
          *(undefined4 *)(param_1 + 0x9c) = uVar7;
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 0x104) & 0x3000) == 0x2000) {
    FUN_141a602d0(param_1,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 == *(int *)(param_1 + 0x34)) {
      if (iVar1 == 2) {
        uVar9 = *(uint *)(param_1 + 0x80) & 0x3fffff;
        uVar6 = *(uint *)(param_1 + 0x3c) & 0x3fffff;
        bVar3 = uVar6 == 0x3fffff;
        if (uVar9 != 0x3fffff) {
          bVar3 = uVar6 == uVar9 && uVar6 != 0x3fffff;
        }
        if (!bVar3) {
          return;
        }
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        if (*(char *)(param_1 + 0x38) != *(char *)(param_1 + 0x39)) {
          return;
        }
      }
      func_0x0001407e2a20(param_1);
    }
  }
  return;
}

