// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140088980  size: 282 bytes
// Name:    FUN_140088980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f3add0, FUN_144f3afc0, FUN_1452e3590
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140088980(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar6 = (ulonglong)uVar1 & 0x1ffff;
  if ((((uVar6 == 0x1ffff) ||
       (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar3 == (longlong *)0x0)) ||
      (uVar2 = *(uint *)(plVar3[5] + uVar6 * 4), (uVar2 >> 0x11 & 0x3ff) != uVar1 >> 0x16)) ||
     (((uVar2 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6) ||
      (uVar5 = 1, (ulonglong)(uint)((int)uVar6 * (int)plVar3[1]) + *plVar3 != param_2)))) {
    cVar4 = FUN_144f3add0(param_1,0x1e);
    if ((cVar4 == '\0') || (cVar4 = FUN_144f3afc0(param_1,param_2), cVar4 == '\0')) {
      cVar4 = FUN_144f3add0(param_1,0x15);
      if (cVar4 != '\0') {
        lVar7 = 0;
        if (*(char *)(param_2 + 0x30) == '\x03') {
          lVar7 = param_2;
        }
        uVar5 = func_0x000144f200a0((ulonglong)uVar1);
        cVar4 = FUN_1452e3590(uVar5,lVar7);
        if (cVar4 != '\0') {
          return 1;
        }
      }
      cVar4 = FUN_144f3add0(param_1,0x14);
      if (((cVar4 != '\0') && (*(char *)(param_2 + 0x30) == '\x03')) &&
         (cVar4 = func_0x00014041bb10(*(undefined4 *)(param_2 + 0x9c)), cVar4 != '\0')) {
        return 1;
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}

