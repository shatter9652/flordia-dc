// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140066290  size: 280 bytes
// Name:    FUN_140066290
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e3dcc0, FUN_1432ad650, FUN_14550dc10, FUN_144e565a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140066290(longlong *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar1 = param_1[2];
  iVar3 = func_0x000144ee1290();
  if ((int)lVar1 == iVar3) {
    uVar4 = *param_2 - 0x15;
    uVar5 = (ulonglong)uVar4;
    if ((7 < uVar4) &&
       ((uVar4 = *param_2 - 0x30, 0x25 < uVar4 ||
        (uVar5 = 0x3000000001, (0x3000000001U >> ((ulonglong)uVar4 & 0x3f) & 1) == 0)))) {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)((longlong)param_1 + 0x123)) &
              0xffffffffffffff04;
      FUN_144e565a0(CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 2),0x1fff);
      if (((char)param_2[10] == '\x01') && ((*(byte *)((longlong)param_1 + 0x123) & 8) != 0)) {
        (**(code **)(*param_1 + 0x138))(param_1);
      }
    }
    FUN_14550dc10((int)param_1[0x18]);
    if ((*param_2 != 0x2c) && (*param_2 != 0x58)) {
      FUN_144e3dcc0(*(undefined4 *)((longlong)param_1 + 0xe4));
    }
    if (param_1[0x2a] != 0) {
      func_0x000144dda300();
    }
    if (*param_2 == 0x3c) {
      lVar1 = param_1[0x118];
      cVar2 = func_0x0001432ad560(lVar1);
      if (cVar2 != '\0') {
        FUN_1432ad650(lVar1,1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000140066357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1a0))(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}

