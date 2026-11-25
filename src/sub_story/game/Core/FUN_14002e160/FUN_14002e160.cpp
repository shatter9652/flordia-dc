// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002e160  size: 535 bytes
// Name:    FUN_14002e160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141f966f0, FUN_140f519e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002e160(longlong param_1,uint param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  short sVar9;
  undefined8 unaff_RSI;
  ulonglong uVar10;
  bool bVar11;
  
  bVar11 = (char)param_2 == '\x01';
  uVar4 = (uint)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar11);
  if ((bVar11 & param_3) == 1) {
    *(byte *)(param_1 + 0x51a) = *(byte *)(param_1 + 0x51a) | 0x10;
  }
  if ((param_2 & 0xff00) != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  if ((*(byte *)(lVar2 + 0x1bb) & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c4);
  param_2 = (int)param_2 >> 0x10;
  if (((int)param_2 < 0) || (iVar1 <= (int)param_2)) {
    sVar9 = -1;
    uVar10 = 0xffffffffffffffff;
    if (-1 < (int)param_2) {
      lVar6 = *(longlong *)(lVar2 + 0x1a0);
      lVar7 = lVar2;
      if (lVar6 == 0) {
        lVar7 = *(longlong *)(param_1 + 0x468);
        if (lVar7 == 0) {
          lVar7 = *(longlong *)(param_1 + 0x4a0);
        }
        lVar7 = *(longlong *)(lVar7 + 0x100);
      }
      if ((int)param_2 < *(int *)(*(longlong *)(lVar7 + 0x178) + 0x1d4)) {
        lVar7 = *(longlong *)(param_1 + 0x468);
        uVar5 = param_2;
        if (lVar7 == 0) {
          lVar7 = *(longlong *)(param_1 + 0x4a0);
        }
        do {
          lVar8 = lVar2;
          if (lVar6 == 0) {
            lVar8 = *(longlong *)(lVar7 + 0x100);
          }
          uVar5 = func_0x000144e2c200(*(undefined8 *)(lVar8 + 0x178),uVar5);
          if (uVar5 == 0xffffffff) goto LAB_14002e201;
        } while (iVar1 <= (int)uVar5);
        if ((*(byte *)(*(longlong *)(param_1 + 0x1c8) + 4 + (ulonglong)uVar5 * 6) & 4) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x1c8) + (ulonglong)uVar5 * 6;
          goto LAB_14002e1da;
        }
      }
    }
  }
  else {
    if ((*(byte *)(*(longlong *)(param_1 + 0x1c8) + 4 + (ulonglong)param_2 * 6) & 4) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1c8) + (ulonglong)param_2 * 6;
LAB_14002e1da:
      uVar10 = (ulonglong)*(short *)(lVar6 + 2);
      if (uVar10 != 0xffffffffffffffff) {
        sVar9 = *(short *)(*(longlong *)(param_1 + 0x180) + (uVar10 & 0xffffffff) * 2);
        goto LAB_14002e201;
      }
    }
    sVar9 = -1;
    uVar10 = 0xffffffffffffffff;
  }
LAB_14002e201:
  if (*(longlong *)(param_1 + 0x158) == 0 || sVar9 == -1) {
    return;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar2 + 0x1a8) + 0x20) + uVar10 * 0x70);
  if (-1 < (short)uVar3) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x158) + (ulonglong)(uint)(int)sVar9 * 0x18;
  if (param_3 == 0) {
    if (((uint)uVar3 >> 0x15 & 1) != 0) {
      if ((*(byte *)(lVar2 + 0x15) & 1) == 0) {
        return;
      }
      uVar4 = 0;
      goto LAB_14002e275;
    }
    uVar4 = FUN_141f966f0(param_1,param_2);
    uVar4 = uVar4 ^ 1;
  }
  if ((byte)uVar4 == (*(byte *)(lVar2 + 0x15) & 1)) {
    return;
  }
LAB_14002e275:
  FUN_140f519e0(param_1,lVar2,uVar4,0,1,0);
  return;
}

