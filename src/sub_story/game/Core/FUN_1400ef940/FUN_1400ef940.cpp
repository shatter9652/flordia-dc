// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ef940  size: 206 bytes
// Name:    FUN_1400ef940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407b7640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ef940(longlong param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  if ((param_2[1] != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    func_0x0001400efa10(param_1,param_2);
    plVar2 = (longlong *)param_2[1];
    cVar3 = func_0x000144e52850(*(undefined4 *)(*plVar2 + 0x9c));
    if ((cVar3 == '\0') && ((plVar2[1] != 0 && (plVar2[2] == param_1)))) {
      cVar3 = FUN_1407b7640();
      if (cVar3 == '\0') {
        cVar3 = FUN_1407b7640(*(undefined8 *)(param_2[1] + 0x10));
        if (cVar3 != '\0') {
          *param_3 = *param_3 + *(float *)(lVar1 + 0x28);
        }
      }
    }
  }
  return;
}

