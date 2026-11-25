// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ade30  size: 155 bytes
// Name:    FUN_1401ade30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1436dabb0, FUN_145071430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ade30(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = func_0x000145071410(*(undefined4 *)((longlong)param_2 + 0x8c),param_2[0x4a]);
  if (cVar2 != '\0') {
    cVar2 = FUN_145071430(param_2,0,0,1);
    if ((cVar2 != '\0') &&
       (*(byte *)((longlong)param_2 + 0x8f) = *(byte *)((longlong)param_2 + 0x8f) | 8,
       (*(byte *)((longlong)param_2 + 0xe1) & 0x20) != 0)) {
      iVar3 = (**(code **)(*param_2 + 0x3a8))(param_2);
      if (iVar3 != 0) {
        FUN_1436dabb0(param_1,param_2);
        uVar1 = *(uint *)((longlong)param_2 + 0x8c);
        *(uint *)((longlong)param_2 + 0x8c) = uVar1 | 0x40000;
        if ((uVar1 >> 0x11 & 1) == 0) {
          *(uint *)((longlong)param_2 + 0x8c) = uVar1 | 0x60000;
          *(undefined4 *)(param_2 + 0x47) = _DAT_14a943768;
        }
      }
    }
  }
  return;
}

