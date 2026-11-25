// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140115800  size: 255 bytes
// Name:    FUN_140115800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc1290, FUN_140264850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_140115800(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar5 = *param_3;
  if (lVar5 == 0 && param_5 == '\x01') goto LAB_140115895;
  if (param_2 == (longlong *)0x0) {
    *param_4 = 0;
    return 1;
  }
  if (*param_2 == 0) {
    if (lVar5 == 0) {
      lVar3 = func_0x000144e95f70(*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),0)
      ;
      goto LAB_140115860;
    }
    lVar3 = func_0x000144e95f70(*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                                *(undefined4 *)(lVar5 + 0x68));
LAB_1401158bf:
    if ((lVar3 == 0) || (cVar1 = func_0x000144d9f880(lVar3,lVar5), cVar1 == '\0')) {
      if (param_5 != '\0') {
        *param_3 = 0;
        *param_4 = 0;
        return 0;
      }
      goto LAB_14011586b;
    }
  }
  else {
    uVar2 = FUN_144fc1290(0x1e);
    lVar5 = *param_3;
    lVar3 = func_0x000144e95f70(*(undefined4 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                                uVar2);
    if (lVar5 != 0) goto LAB_1401158bf;
LAB_140115860:
    if (lVar3 == 0) {
LAB_140115895:
      *param_4 = 0;
      return 0;
    }
  }
  *param_3 = lVar3;
  lVar5 = lVar3;
LAB_14011586b:
  uVar4 = FUN_140264850(lVar5);
  *param_4 = uVar4;
  (**(code **)(*(longlong *)*param_3 + 0x18))((longlong *)*param_3,param_2,uVar4);
  return 1;
}

