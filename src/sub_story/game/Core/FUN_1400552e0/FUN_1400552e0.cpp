// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400552e0  size: 306 bytes
// Name:    FUN_1400552e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14195f830, FUN_1414e4fc0, FUN_144da2920, FUN_142433a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140055397: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400552e0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 auStack_68 [2];
  undefined8 uStack_58;
  undefined4 uStack_40;
  int iStack_3c;
  byte bStack_30;
  
  if ((param_2 == 0) || (cVar2 = func_0x000144e7d710(param_1), cVar2 == '\0')) {
    uVar3 = 5;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
    if (cVar2 == '\0') {
      if (*(char *)(param_2 + 0x650) == '\x01') {
        uVar3 = 4;
      }
      else {
        cVar2 = FUN_144da2920(*(undefined4 *)(param_2 + 0x61c));
        if (cVar2 == '\0') {
          cVar2 = (**(code **)(*param_1 + 0x20))(param_1);
          if (cVar2 != '\0') {
            *(float *)(param_2 + 0x624) = _DAT_14a943794 + *(float *)(param_2 + 0x624);
          }
          return;
        }
        uVar3 = 1;
      }
    }
    else {
      LOCK();
      UNLOCK();
      iVar4 = _DAT_149eddca0 + 1;
      _DAT_149eddca0 = _DAT_149eddca0 + 1;
      func_0x0001414e4890(auStack_68);
      uVar1 = _DAT_14ab5cdf8;
      auStack_68[0] = FUN_142433a50(_DAT_14ab5cdf8,param_2);
      uStack_58 = FUN_14195f830(uVar1);
      uStack_40 = (undefined4)param_1[0x3c];
      bStack_30 = bStack_30 & 0xb5 | 0x42;
      iStack_3c = iVar4;
      FUN_1414e4fc0(param_1,auStack_68);
      cVar2 = (**(code **)(*param_1 + 0x20))(param_1);
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x7c) = 1;
      }
      uVar3 = 3;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x38c) = uVar3;
  return;
}

