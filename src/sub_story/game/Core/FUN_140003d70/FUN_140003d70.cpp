// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003d70  size: 484 bytes
// Name:    FUN_140003d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140003f60, FUN_140003f90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140003d70(uint *param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 < 0x100) {
    uVar1 = func_0x000144d9c140(4,0x400);
    if ((ulonglong)param_1[1] != 0) {
      func_0x000145f40560(uVar1,*(undefined8 *)(param_1 + 2),(ulonglong)param_1[1] << 2);
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      func_0x000144d9c130(*(longlong *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = uVar1;
    *param_1 = 0x100;
  }
  if (param_1[10] < 0x80) {
    uVar1 = func_0x000144d9c140(4,0x200);
    if ((ulonglong)param_1[0xb] != 0) {
      func_0x000145f40560(uVar1,*(undefined8 *)(param_1 + 0xc),(ulonglong)param_1[0xb] << 2);
    }
    if (*(longlong *)(param_1 + 0xc) != 0) {
      func_0x000144d9c130(*(longlong *)(param_1 + 0xc));
    }
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    param_1[10] = 0x80;
  }
  if (param_1[0x14] < 0x100) {
    uVar1 = func_0x000144d9c140(4,0x400);
    if ((ulonglong)param_1[0x15] != 0) {
      func_0x000145f40560(uVar1,*(undefined8 *)(param_1 + 0x16),(ulonglong)param_1[0x15] << 2);
    }
    if (*(longlong *)(param_1 + 0x16) != 0) {
      func_0x000144d9c130(*(longlong *)(param_1 + 0x16));
    }
    *(undefined8 *)(param_1 + 0x16) = uVar1;
    param_1[0x14] = 0x100;
  }
  if (param_1[0x1e] < 0x80) {
    uVar1 = func_0x000144d9c140(4,0x200);
    if ((ulonglong)param_1[0x1f] != 0) {
      func_0x000145f40560(uVar1,*(undefined8 *)(param_1 + 0x20),(ulonglong)param_1[0x1f] << 2);
    }
    if (*(longlong *)(param_1 + 0x20) != 0) {
      func_0x000144d9c130(*(longlong *)(param_1 + 0x20));
    }
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    param_1[0x1e] = 0x80;
  }
  FUN_140003f60(param_1,param_2);
  FUN_140003f90(param_1 + 10,param_2);
  FUN_140003f60(param_1 + 0x14,param_3);
  FUN_1400039c0();
  *(undefined1 *)(param_1 + 0x27) = 1;
  if (param_3 != 0xffffffff) {
    if ((char)param_1[0x27] == '\0') {
      if (param_1[0x26] == param_3) {
        return;
      }
      if (param_1[0x23] != 0) {
        lVar2 = 0;
        uVar3 = 0;
        do {
          FUN_145002750(*(longlong *)(param_1 + 0x24) + lVar2,param_3);
          uVar3 = uVar3 + 1;
          lVar2 = lVar2 + 0x10;
        } while (uVar3 < param_1[0x23]);
      }
    }
    param_1[0x26] = param_3;
  }
  return;
}

