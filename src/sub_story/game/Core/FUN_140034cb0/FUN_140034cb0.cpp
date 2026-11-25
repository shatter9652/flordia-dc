// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140034cb0  size: 132 bytes
// Name:    FUN_140034cb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_140034cb0(longlong param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_3[1] != 0 || param_2[1] != 0) {
    param_2[1] = 0;
    param_3[1] = 0;
  }
  if (*(int *)(param_1 + 100) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x68);
      if (*(char *)(*(longlong *)(lVar2 + lVar3) + 0x1a) == '\x02') {
        uVar1 = param_2[1];
        if (uVar1 != *param_2) {
          param_2[1] = uVar1 + 1;
          *(undefined8 *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar1 * 8) =
               *(undefined8 *)(lVar2 + 0x18 + lVar3);
        }
        uVar1 = param_3[1];
        if (uVar1 != *param_3) {
          lVar2 = *(longlong *)(param_1 + 0x68);
          param_3[1] = uVar1 + 1;
          *(undefined8 *)(*(longlong *)(param_3 + 2) + (ulonglong)uVar1 * 8) =
               *(undefined8 *)(lVar2 + lVar3);
        }
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x38;
    } while (uVar4 < *(uint *)(param_1 + 100));
  }
  return param_2[1];
}

