// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a7b0  size: 231 bytes
// Name:    FUN_14011a7b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011a9e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011a7b0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  
  FUN_14011a9e0();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  if (param_1 != param_2) {
    uVar2 = *(ushort *)(param_1 + 0x30);
    uVar5 = (uint)*(ushort *)(param_2 + 0x30);
    if (((uVar2 != *(ushort *)(param_2 + 0x30)) && (*(short *)(param_1 + 0x32) != 0)) &&
       (*(longlong *)(param_1 + 0x28) != 0)) {
      func_0x000144d9c130();
      uVar2 = *(ushort *)(param_1 + 0x30);
      uVar5 = (uint)*(ushort *)(param_2 + 0x30);
    }
    uVar4 = (ushort)uVar5;
    if (uVar2 == uVar4) {
      lVar3 = *(longlong *)(param_1 + 0x28);
    }
    else {
      *(ushort *)(param_1 + 0x30) = uVar4;
      *(ushort *)(param_1 + 0x32) = uVar4;
      if (uVar4 == 0) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        goto LAB_14011a841;
      }
      lVar3 = func_0x000144d9c140(4,uVar5 << 2);
      *(longlong *)(param_1 + 0x28) = lVar3;
      uVar4 = *(ushort *)(param_1 + 0x30);
    }
    if (uVar4 != 0) {
      lVar1 = *(longlong *)(param_2 + 0x28);
      lVar6 = 0;
      do {
        *(undefined4 *)(lVar3 + lVar6) = *(undefined4 *)(lVar1 + lVar6);
        lVar6 = lVar6 + 4;
      } while ((ulonglong)uVar4 * 4 != lVar6);
    }
  }
LAB_14011a841:
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  *(undefined1 *)(param_1 + 0x45) = *(undefined1 *)(param_2 + 0x45);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  return;
}

