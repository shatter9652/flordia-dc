// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e8820  size: 97 bytes
// Name:    FUN_1400e8820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400e8820(uint *param_1,ushort param_2,uint param_3)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    puVar1 = param_1;
    do {
      uVar5 = uVar3 >> 1;
      uVar4 = ~uVar5 + uVar3;
      uVar3 = uVar5;
      if ((puVar1 + uVar5 * 4 + 4)[-4] < param_3) {
        puVar1 = puVar1 + uVar5 * 4 + 4;
        uVar3 = uVar4;
      }
    } while (0 < (longlong)uVar3);
    if (((puVar1 != param_1 + (ulonglong)param_2 * 4) && (*puVar1 == param_3)) &&
       (plVar2 = *(longlong **)(puVar1 + 2), plVar2 != (longlong *)0x0)) {
      if (*(code **)(*plVar2 + 0x28) == (code *)&SUB_144df8430) {
        plVar2 = plVar2 + 3;
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x28))();
      }
      return *(char *)((longlong)plVar2 + 0x22) == '\x03';
    }
  }
  return false;
}

