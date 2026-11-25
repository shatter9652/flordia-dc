// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140085180  size: 96 bytes
// Name:    FUN_140085180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd7510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140085180(char param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (((param_1 == '\x03') && (lVar2 = FUN_144dd7510(param_2), lVar2 != 0)) &&
     (cVar1 = func_0x000144efb5e0(*(undefined8 *)(lVar2 + 0x20),*(undefined1 *)(lVar2 + 0xfa)),
     cVar1 != '\0')) {
    uStack_38 = *(undefined8 *)(lVar2 + 0x70);
    uStack_30 = *(undefined8 *)(lVar2 + 0x78);
    func_0x000144dc3790(&uStack_38,&uStack_28);
    *param_3 = uStack_28;
    param_3[1] = uStack_20;
    return 1;
  }
  return 0;
}

