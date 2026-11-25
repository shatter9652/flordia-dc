// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140fc2490  size: 158 bytes
// Name:    FUN_140fc2490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140fc2540
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_140fc2490(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,char param_6,undefined1 param_7)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)func_0x000144d9c160(0x80,8);
  if (plVar2 != (longlong *)0x0) {
    FUN_140fc2540(plVar2,param_1,param_3,param_4,param_5,param_7);
  }
  cVar1 = (**(code **)(*plVar2 + 0x3a0))(plVar2);
  if (cVar1 == '\0') {
    *param_2 = 0;
    (**(code **)*plVar2)(plVar2,1);
  }
  else {
    if (param_6 != '\0') {
      LOCK();
      *(longlong **)(param_1 + 0x58) = plVar2;
      UNLOCK();
    }
    *param_2 = plVar2;
  }
  return param_2;
}

