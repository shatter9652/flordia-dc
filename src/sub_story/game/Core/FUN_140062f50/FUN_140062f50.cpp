// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062f50  size: 46 bytes
// Name:    FUN_140062f50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140062f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140062f5d) */
/* WARNING: Removing unreachable block (ram,0x000140062f67) */
/* WARNING: Removing unreachable block (ram,0x000140062f71) */
/* WARNING: Removing unreachable block (ram,0x000144ea3690) */

void FUN_140062f50(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar1 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (((longlong *)param_1[1] == plVar1) &&
     (plVar3 = (longlong *)plVar1[6], plVar3 != (longlong *)0x0)) {
    if (plVar3 == param_1) {
      plVar2 = plVar1 + 6;
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (longlong *)plVar2[2];
        if (plVar3 == (longlong *)0x0) {
          return;
        }
      } while (plVar3 != param_1);
      plVar2 = plVar2 + 2;
    }
    *plVar2 = plVar3[2];
    plVar3[2] = 0;
    if ((*(byte *)((longlong)plVar1 + 0x16) & 4) != 0) {
      uStack_50 = 0;
      uStack_48 = 0x10002;
      if (*(code **)(*param_1 + 0x10) == (code *)&UNK_144ea3280) {
        func_0x000144ea3280(param_1,&uStack_50);
      }
      else {
        (**(code **)(*param_1 + 0x10))(param_1,&uStack_50);
      }
    }
    plVar3[1] = 0;
    LOCK();
    plVar2 = plVar3 + 3;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3,1);
    }
    if (*(code **)(*plVar1 + 0x58) == FUN_144ea32a0) {
      FUN_144ea32a0(plVar1);
    }
    else {
      (**(code **)(*plVar1 + 0x58))(plVar1);
    }
  }
  return;
}

