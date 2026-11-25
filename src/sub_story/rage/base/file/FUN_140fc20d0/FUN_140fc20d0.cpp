// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140fc20d0  size: 230 bytes
// Name:    FUN_140fc20d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140fc21c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140fc20d0(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plStack_20;
  
  FUN_140fc21c0(&plStack_20,param_2,0);
  plVar1 = (longlong *)*param_1;
  if (plVar1 == plStack_20) {
    plVar3 = plStack_20;
    if (plVar1 == (longlong *)0x0) {
      return;
    }
LAB_140fc215e:
    (**(code **)*plVar3)(plVar3,1);
    plVar4 = (longlong *)*param_1;
  }
  else {
    *param_1 = (longlong)plStack_20;
    plVar3 = plVar1;
    plVar4 = plStack_20;
    if (plVar1 != (longlong *)0x0) goto LAB_140fc215e;
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 8))(plVar4,&plStack_20,0,0,0,param_3,0);
  plVar3 = plStack_20;
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != plStack_20) {
    plStack_20 = (longlong *)0x0;
    param_1[1] = (longlong)plVar3;
    if (plVar1 == (longlong *)0x0) goto LAB_140fc2149;
    (**(code **)*plVar1)(plVar1,1);
  }
  if (plStack_20 != (longlong *)0x0) {
    (**(code **)*plStack_20)(plStack_20,1);
  }
  plVar3 = (longlong *)param_1[1];
LAB_140fc2149:
  if (plVar3 == (longlong *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    *param_1 = 0;
  }
  return;
}

