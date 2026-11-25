// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140035fd0  size: 207 bytes
// Name:    FUN_140035fd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400379f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140035fd0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uStack_10;
  undefined2 uStack_c;
  
  lVar1 = func_0x000144e3eae0();
  if (*param_1 == 0) {
    uStack_c = *(undefined2 *)(lVar1 + 0x16);
    uStack_10 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar1 + 8),&uStack_10,
               CONCAT62((int6)((ulonglong)&uStack_10 >> 0x10),1),1);
  }
  else {
    uStack_c = *(undefined2 *)(lVar1 + 0x16);
    uStack_10 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  lVar1 = FUN_1400379f0();
  if (*param_1 == 0) {
    uStack_c = *(undefined2 *)(lVar1 + 0x16);
    uStack_10 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])
              (*(undefined8 *)(lVar1 + 8),&uStack_10,
               CONCAT62((int6)((ulonglong)&uStack_10 >> 0x10),1),1);
  }
  else {
    uStack_c = *(undefined2 *)(lVar1 + 0x16);
    uStack_10 = *(undefined4 *)(lVar1 + 0x12);
    (*(code *)param_1[1])();
  }
  return;
}

