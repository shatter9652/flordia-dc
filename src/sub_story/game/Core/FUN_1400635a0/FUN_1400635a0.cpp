// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400635a0  size: 331 bytes
// Name:    FUN_1400635a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400636f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400635a0(int *param_1,uint param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  longlong lStack_c8;
  uint uStack_c0;
  int *apiStack_b8 [3];
  int *piStack_a0;
  uint uStack_98;
  undefined *puStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  
  if (&piStack_a0 != (int **)0x0) {
    piStack_a0 = param_1;
    uStack_98 = param_2;
  }
  puStack_58 = &UNK_144784650;
  puStack_50 = &UNK_1408d04c0;
  pcStack_48 = (code *)&SUB_140004380;
  if (param_2 != 0) {
    piVar1 = param_1 + param_2;
    do {
      iVar2 = *param_1;
      func_0x000140b56a70(*(undefined4 *)(param_3 + 0xb4),*(undefined8 *)(param_3 + 0xb8),&lStack_c8
                         );
      piVar4 = (int *)((ulonglong)uStack_c0 * 4 + lStack_c8);
      func_0x000140b56a70(*(undefined4 *)(param_3 + 0xb4),*(undefined8 *)(param_3 + 0xb8),
                          apiStack_b8);
      for (piVar3 = apiStack_b8[0];
          (piVar5 = piVar4, piVar3 != piVar4 && (piVar5 = piVar3, *piVar3 != iVar2));
          piVar3 = piVar3 + 1) {
      }
      func_0x000140b56a70(*(undefined4 *)(param_3 + 0xb4),*(undefined8 *)(param_3 + 0xb8),&lStack_c8
                         );
      if (piVar5 != (int *)((ulonglong)uStack_c0 * 4 + lStack_c8)) {
        func_0x000140b56a70(*(undefined4 *)(param_3 + 0xb4),*(undefined8 *)(param_3 + 0xb8),
                            &lStack_c8);
        FUN_1400636f0(param_3,(ulonglong)((longlong)piVar5 - lStack_c8) >> 2 & 0xffffffff);
      }
      param_1 = param_1 + 1;
    } while (param_1 != piVar1);
    if (pcStack_48 == (code *)0x0) {
      return;
    }
  }
  (*pcStack_48)(&piStack_a0);
  return;
}

