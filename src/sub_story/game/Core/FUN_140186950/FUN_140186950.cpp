// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186950  size: 208 bytes
// Name:    FUN_140186950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140181f60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140186950(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  *param_1 = &UNK_146630f40;
  if (param_1[0x10] != 0) {
    func_0x00014503e5b0();
    uVar1 = param_1[0x10];
    FUN_140181f60(uVar1,param_1 + 0xb);
    func_0x00014503e5c0(uVar1);
    if (param_1[0x10] != 0) {
      func_0x00014503e5c0();
    }
  }
  (**(code **)(*(longlong *)param_1[0xe] + 0x10))((longlong *)param_1[0xe],param_1[0xf]);
  if (param_1[8] != 0) {
    func_0x00014503e5b0();
    uVar1 = param_1[8];
    FUN_140181f60(uVar1,param_1 + 3);
    func_0x00014503e5c0(uVar1);
    if (param_1[8] != 0) {
      func_0x00014503e5c0();
    }
  }
  (**(code **)(*(longlong *)param_1[6] + 0x10))((longlong *)param_1[6],param_1[7]);
  if (param_2 != 0) {
    (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,param_1);
  }
  return param_1;
}

