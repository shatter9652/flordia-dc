// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113320  size: 78 bytes
// Name:    FUN_140113320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fbd200
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140113320(longlong param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  
  if (*(int *)(param_1 + 0xbd8) == 0) {
    cVar1 = FUN_144fbd200();
    if ((cVar1 != '\0') || ((*(byte *)(param_1 + 199) & 0x20) != 0)) {
      if (param_3 < *(uint *)(param_1 + 0x40)) {
        uVar2 = *(undefined2 *)(param_1 + 0x30 + (ulonglong)param_3 * 4);
        uVar3 = *(undefined1 *)(param_1 + 0x32 + (ulonglong)param_3 * 4);
      }
      else {
        uVar2 = 0;
        uVar3 = 0;
      }
      *(undefined2 *)param_2 = uVar2;
      *(undefined1 *)((longlong)param_2 + 2) = uVar3;
      *(undefined1 *)((longlong)param_2 + 3) = 0;
      return;
    }
  }
  *param_2 = 0;
  return;
}

