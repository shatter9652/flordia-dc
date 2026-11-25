// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400867a0  size: 141 bytes
// Name:    FUN_1400867a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1448e7080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400867a0(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  
  iVar9 = (**(code **)(*param_3 + 8))(param_3);
  if (iVar9 == 6) {
    if (*(uint *)(param_3 + 1) < 2) {
      cVar8 = func_0x00014069fde0(*(undefined8 *)(param_2 + 0x10));
      if (cVar8 != '\0') {
        lVar10 = FUN_1448e7080(*(undefined8 *)(param_2 + 0x10));
        if (lVar10 != 0) {
          lVar10 = param_3[3];
          lVar11 = FUN_1448e7080(*(undefined8 *)(param_2 + 0x10));
          *(undefined1 *)(lVar10 + 0x50) = 1;
          uVar1 = *(undefined8 *)(lVar11 + 0x58);
          uVar2 = *(undefined8 *)(lVar11 + 0x60);
          uVar3 = *(undefined8 *)(lVar11 + 0x68);
          uVar4 = *(undefined8 *)(lVar11 + 0x70);
          uVar5 = *(undefined8 *)(lVar11 + 0x78);
          uVar6 = *(undefined8 *)(lVar11 + 0x80);
          uVar7 = *(undefined8 *)(lVar11 + 0x88);
          *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar11 + 0x50);
          *(undefined8 *)(lVar10 + 0x18) = uVar1;
          *(undefined8 *)(lVar10 + 0x20) = uVar2;
          *(undefined8 *)(lVar10 + 0x28) = uVar3;
          *(undefined8 *)(lVar10 + 0x30) = uVar4;
          *(undefined8 *)(lVar10 + 0x38) = uVar5;
          *(undefined8 *)(lVar10 + 0x40) = uVar6;
          *(undefined8 *)(lVar10 + 0x48) = uVar7;
          *(undefined1 *)(lVar10 + 0x51) = 0;
        }
      }
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x850) = 0;
    }
  }
  return;
}

