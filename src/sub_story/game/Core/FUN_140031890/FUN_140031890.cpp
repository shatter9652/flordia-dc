// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140031890  size: 360 bytes
// Name:    FUN_140031890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e55330, FUN_142032840, FUN_1450eb750, FUN_1451fc0d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140031890(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar6 = *(int *)(param_1 + 0x180) - 0x16;
  lVar4 = (longlong)*(int *)(param_1 + 0x184) * 0x10;
  uVar1 = *(uint *)(lVar4 + 0x148563f0c);
  if ((ulonglong)uVar1 != 0) {
    lVar9 = 0;
    lVar10 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x148563f10) + 8 + lVar9);
      if ((*(byte *)(lVar2 + 0x33c) & 4) == 0) {
        if (lVar2 != lVar10) {
          lVar5 = FUN_144e55330(lVar2,*(undefined4 *)(param_1 + 0x184),0);
          lVar10 = lVar2;
        }
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar3 = *(longlong *)(lVar4 + 0x148563f10);
          FUN_1450eb750(*(undefined4 *)(lVar2 + 0x228),*(undefined8 *)(lVar3 + lVar9),lVar5,
                        *(undefined2 *)(lVar3 + 0x10 + lVar9),*(undefined2 *)(lVar3 + 0x12 + lVar9),
                        uVar6 < 0x40 & (byte)(0x800000000400007f >> ((ulonglong)uVar6 & 0x3f)),
                        *(undefined1 *)(lVar3 + 0x14 + lVar9));
        }
      }
      lVar9 = lVar9 + 0x18;
    } while ((ulonglong)uVar1 * 0x18 != lVar9);
  }
  FUN_142032840(*(undefined8 *)(param_1 + 0x150));
  lVar4 = (longlong)*(int *)(param_1 + 0x184) * 0x10;
  uVar8 = (ulonglong)*(uint *)(lVar4 + 0x147650634);
  if (uVar8 != 0) {
    lVar10 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x147650638) + lVar10);
      if ((*(byte *)(lVar5 + 0x33c) & 4) == 0) {
        FUN_1451fc0d0(lVar5,*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x180),
                      *(undefined8 *)(lVar5 + 8),*(undefined8 *)(param_1 + 0x150));
      }
      lVar10 = lVar10 + 0x10;
    } while (uVar8 << 4 != lVar10);
  }
  uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x150) + 0x78);
  if (uVar8 != 0) {
    uVar7 = uVar8 & 0xffffffffffffffc0;
    do {
      xsaveopt(uVar7,0x200);
      uVar7 = uVar7 + 0x40;
    } while (uVar7 <= ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x150) + 0x80) - 1) + uVar8);
    return;
  }
  return;
}

