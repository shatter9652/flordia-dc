// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140159300  size: 208 bytes
// Name:    FUN_140159300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f21090
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140159300(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((ulonglong)*(uint *)((longlong)param_1 + 300) != 0) {
    puVar4 = (undefined8 *)param_1[0x26];
    puVar3 = puVar4 + (ulonglong)*(uint *)((longlong)param_1 + 300) * 2;
    do {
      cVar1 = (*(code *)puVar4[1])(*puVar4,param_2);
      if (cVar1 != '\0') {
        return;
      }
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar3);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_3);
  lVar2 = (ulonglong)(param_2 >> 0x11 & 0x1f) * 0x238;
  if (*(byte *)(lVar2 + 0x14abbf3f8) != 0xff) {
    *(undefined2 *)
     (*(longlong *)(lVar2 + 0x14abbf3d0) +
     (ulonglong)
     ((param_2 & 0x1ffff) * *(int *)(lVar2 + 0x14abbf3c4) + (uint)*(byte *)(lVar2 + 0x14abbf3f8)) *
     2) = 0xffff;
  }
  cVar1 = FUN_144f21090(param_3,0x10);
  if ((param_3 != (undefined8 *)0x0) && (cVar1 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001401593c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_3)(param_3,1);
    return;
  }
  return;
}

