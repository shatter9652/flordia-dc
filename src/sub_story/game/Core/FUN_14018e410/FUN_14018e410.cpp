// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018e410  size: 190 bytes
// Name:    FUN_14018e410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443b10a0, FUN_144e665b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018e410(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x80) != 1) {
      return;
    }
    uVar3 = 2;
    if ((*(longlong *)(param_1 + 0x78) != 0) &&
       (iVar1 = func_0x000140553000(), uVar3 = 2, iVar1 == 0)) {
      uVar3 = 3;
      lVar2 = *(longlong *)(param_1 + 0x78);
      if (lVar2 != 0) {
        FUN_1443b10a0(lVar2,*(undefined4 *)(param_1 + 0x6c));
        func_0x0001408925f0((longlong *)(param_1 + 0x78));
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 3) {
      return;
    }
    if (0xfffffffd < *(uint *)(param_1 + 0x6c)) {
      return;
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      return;
    }
    uVar3 = 0;
    lVar2 = FUN_144e665b0(0x149e2ced0,*(uint *)(param_1 + 0x6c),0x7d27b1e8,0,
                          (*(byte *)(*(longlong *)(param_1 + 0x40) + 0x120) & 1) * '\x03');
    *(longlong *)(param_1 + 0x78) = lVar2;
    if (lVar2 == 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  return;
}

