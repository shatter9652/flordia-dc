// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006e640  size: 97 bytes
// Name:    FUN_14006e640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14006e640(uint *param_1,ushort param_2,uint param_3)

{
  code *pcVar1;
  uint *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 != 0) {
    uVar4 = (ulonglong)param_2;
    puVar2 = param_1;
    do {
      uVar6 = uVar4 >> 1;
      uVar5 = ~uVar6 + uVar4;
      uVar4 = uVar6;
      if ((puVar2 + uVar6 * 4 + 4)[-4] < param_3) {
        puVar2 = puVar2 + uVar6 * 4 + 4;
        uVar4 = uVar5;
      }
    } while (0 < (longlong)uVar4);
    if (((puVar2 != param_1 + (ulonglong)param_2 * 4) && (*puVar2 == param_3)) &&
       (plVar3 = *(longlong **)(puVar2 + 2), plVar3 != (longlong *)0x0)) {
      pcVar1 = *(code **)(*plVar3 + 0x28);
      if (((pcVar1 == (code *)&SUB_144df8430) || (pcVar1 == (code *)&SUB_144df8430)) ||
         (pcVar1 == (code *)&SUB_144df8430)) {
        plVar3 = plVar3 + 3;
      }
      else {
        plVar3 = (longlong *)(*pcVar1)();
      }
      return 1 < *(byte *)((longlong)plVar3 + 0x22);
    }
  }
  return false;
}

