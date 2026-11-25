// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186da0  size: 356 bytes
// Name:    FUN_140186da0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402b8320, FUN_140181f60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140186da0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_146630e30;
  if ((undefined8 *)param_1[0x1d] != (undefined8 *)0x146d328f8) {
    FUN_1402b8320(*(undefined8 *)param_1[0x1d]);
  }
  if (param_1[0x19] != 0) {
    func_0x00014503e5b0();
    uVar1 = param_1[0x19];
    FUN_140181f60(uVar1,param_1 + 0x14);
    func_0x00014503e5c0(uVar1);
    if (param_1[0x19] != 0) {
      func_0x00014503e5c0();
    }
  }
  (**(code **)(*(longlong *)param_1[0x17] + 0x10))((longlong *)param_1[0x17],param_1[0x18]);
  if (param_1[0x11] != 0) {
    func_0x00014503e5b0();
    uVar1 = param_1[0x11];
    FUN_140181f60(uVar1,param_1 + 0xc);
    func_0x00014503e5c0(uVar1);
    if (param_1[0x11] != 0) {
      func_0x00014503e5c0();
    }
  }
  (**(code **)(*(longlong *)param_1[0xf] + 0x10))((longlong *)param_1[0xf],param_1[0x10]);
  if (param_1[9] != 0) {
    func_0x00014503e5b0();
    uVar1 = param_1[9];
    FUN_140181f60(uVar1,param_1 + 4);
    func_0x00014503e5c0(uVar1);
    if (param_1[9] != 0) {
      func_0x00014503e5c0();
    }
  }
  (**(code **)(*(longlong *)param_1[7] + 0x10))((longlong *)param_1[7],param_1[8]);
  if (param_2 != 0) {
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,param_1);
  }
  return param_1;
}

