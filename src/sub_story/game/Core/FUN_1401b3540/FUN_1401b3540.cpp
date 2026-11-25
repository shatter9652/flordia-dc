// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b3540  size: 249 bytes
// Name:    FUN_1401b3540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145074f70, FUN_145077030, FUN_1401b38f0, FUN_145076fe0, FUN_145077190, FUN_1401b3640, FUN_1450770c0, FUN_145076fb0, FUN_145077110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401b3540(longlong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [64];
  
  FUN_145076fe0();
  cVar1 = FUN_1401b3640(param_1,param_4);
  if (cVar1 != '\0') {
    FUN_1450770c0(param_1);
    FUN_145077030(*(undefined8 *)(param_1 + 0x20),auStack_68);
    FUN_145077190(param_1,*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)param_2 * 0x10,auStack_68,
                  param_2);
    FUN_145076fb0(*(undefined8 *)(param_1 + 0x20),auStack_68);
    FUN_145077190(param_1,param_1 + 8,auStack_68,param_2);
    func_0x000145076f90(auStack_68,param_1,param_2,param_3);
    lVar2 = FUN_1401b38f0(param_1 + 0x250,auStack_68);
    if (lVar2 != 0) {
      uVar3 = func_0x000144e3bfa0(lVar2);
      cVar1 = FUN_145077110(param_1,param_2,uVar3);
      FUN_145074f70(param_1,param_4);
      *(undefined4 *)(*(longlong *)(lVar2 + 8) + 0x10) = 0;
      if (cVar1 == '\0') {
        return 0;
      }
      return lVar2;
    }
  }
  return 0;
}

