// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194870  size: 129 bytes
// Name:    FUN_140194870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd9c70, FUN_144dd3030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140194870(undefined8 param_1,int param_2,char param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_2 == -0x61f1d663) {
    uVar4 = _DAT_145fc6ed8;
    if (param_3 == '\x02') {
      uVar4 = 0;
    }
LAB_1401948e8:
    uVar2 = 1;
    *param_4 = uVar4;
  }
  else {
    if ((param_2 == -0x1d70c502) &&
       (plVar1 = (longlong *)FUN_144dd3030(), plVar1 != (longlong *)0x0)) {
      uVar2 = (**(code **)(*plVar1 + 0x160))(plVar1);
      lVar3 = FUN_144dd9c70(uVar2,0xf48be66a);
      if (lVar3 != 0) {
        uVar4 = _DAT_145fc6ed8;
        if (*(char *)(lVar3 + 0xee) == '\0') {
          uVar4 = 0;
        }
        goto LAB_1401948e8;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

