// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400491c0  size: 198 bytes
// Name:    FUN_1400491c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400491c0(longlong param_1,uint param_2,undefined1 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if (param_2 < 0xfffffffe) {
    FUN_140004b40(0x149ab3cf8);
    if ((*(uint *)(param_1 + 0xa8) == param_2) && (*(int *)(param_1 + 0x1c) == 0)) {
      bVar1 = 0;
      param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    }
    else {
      iVar2 = func_0x000144fb9860(*(undefined2 *)(param_1 + 0xb4));
      if ((iVar2 == 0) &&
         ((*(int *)(*(longlong *)(param_1 + 8) + 0x70) == 0 && (DAT_146cee0ac == '\x01')))) {
        *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
        *(uint *)(param_1 + 0xa4) = param_2;
        bVar1 = DAT_149e2fec9;
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0xba) = param_3;
        *(byte *)(param_1 + 0xbc) =
             *(byte *)(param_1 + 0xbc) & 0xf5 | (bVar1 & *(byte *)(param_1 + 0xbc) & 1) << 3 | 2;
        uVar3 = func_0x0001425a8ea0();
        *(undefined4 *)(param_1 + 0x24) = uVar3;
        bVar1 = 1;
      }
      else {
        param_1 = 0;
        bVar1 = 0;
      }
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),(byte)param_1 | bVar1);
    func_0x000144d9dab0(0x149ab3cf8);
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 0xffffff01;
}

