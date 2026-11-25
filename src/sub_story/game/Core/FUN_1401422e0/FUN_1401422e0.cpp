// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401422e0  size: 48 bytes
// Name:    FUN_1401422e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401431e0, FUN_1419c6070, FUN_1401436a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401422e0(longlong param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  FUN_1401436a0();
  FUN_1401431e0(param_1 + 0xd8);
  FUN_1419c6070(param_1,0);
  uVar3 = *(uint *)(param_1 + 0x474);
  if ((0 < (int)uVar3) && (iVar4 = *(int *)(param_1 + 0x2ac), 0 < (longlong)iVar4)) {
    lVar5 = *(longlong *)(param_1 + 0x2b0);
    lVar10 = 0;
    do {
      lVar8 = *(longlong *)(lVar5 + lVar10 * 8);
      lVar6 = *(longlong *)(lVar8 + 0xf0);
      if (((((lVar6 != 0) && (uVar9 = *(uint *)(lVar6 + 0xd8), (uVar9 & 0xc0000) == 0)) &&
           ((uVar9 >> 0xe & 1) == 0)) &&
          ((uVar3 <= *(uint *)(lVar8 + 0xf8) && (*(undefined **)(lVar8 + 0x158) == &DAT_14abbef40)))
          ) && (*(char *)(lVar8 + 0x196) == '\0')) {
        *(uint *)(lVar6 + 0xd8) = uVar9 | 0x80000;
      }
      lVar10 = lVar10 + 1;
    } while (iVar4 != lVar10);
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  if (0 < (longlong)iVar4) {
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar10 = *(longlong *)(param_1 + 0xe8);
    uVar3 = *(uint *)(param_1 + 0xe4);
    lVar8 = 0;
    uVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar8 * 8);
      if ((*(byte *)(lVar6 + 0xda) & 8) != 0) {
        bVar1 = *(byte *)(lVar10 + 4 + (ulonglong)uVar9 * 8);
        *(byte *)(lVar6 + 0xe3) = bVar1;
        uVar7 = 1 << (bVar1 & 0x1f);
        if (bVar1 == 0xff) {
          uVar7 = 0;
        }
        uVar9 = uVar9 + 1;
        *(short *)(lVar6 + 0xe4) = (short)uVar7;
        if (uVar9 == uVar3) {
          uVar9 = 0;
        }
      }
      lVar8 = lVar8 + 1;
    } while (iVar4 != lVar8);
  }
  iVar4 = *(int *)(param_1 + 0x2ac);
  if (0 < (longlong)iVar4) {
    lVar5 = *(longlong *)(param_1 + 0x2b0);
    lVar10 = *(longlong *)(param_1 + 0x68);
    lVar8 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar8 * 8);
      if (((*(longlong *)(lVar6 + 0xf0) != 0) &&
          (cVar2 = *(char *)(*(longlong *)(lVar6 + 0xf0) + 0xe3), cVar2 != -1)) &&
         (*(undefined **)(lVar6 + 0x158) == &DAT_14abbef40)) {
        *(ulonglong *)(lVar6 + 0x158) = (ulonglong)(uint)(int)cVar2 * 0x20 + lVar10;
      }
      lVar8 = lVar8 + 1;
    } while (iVar4 != lVar8);
  }
  return;
}

