// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000af30  size: 284 bytes
// Name:    FUN_14000af30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140a8dc90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000af30(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = func_0x0001451af120(**(undefined4 **)(param_1 + 0x10),
                              *(undefined8 *)(*(undefined4 **)(param_1 + 0x10) + 0x14));
  if (lVar1 != 0) {
    if ((*(char *)(param_1 + 0x42) != -1) &&
       ((*(char *)(lVar1 + 0x131) != *(char *)(param_1 + 0x42) || (*(int *)(lVar1 + 0x30) != 4)))) {
      FUN_140a8dc90(lVar1);
    }
  }
  *(undefined1 *)(param_1 + 0x42) = 0xff;
  lVar1 = func_0x000144dc2c90(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (lVar1 != 0) {
    func_0x0001402f1ec0(lVar1);
    func_0x0001402f1f00(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x41) = 0xff00;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c);
  lVar1 = func_0x000144dc4490(uVar2);
  if (lVar1 != 0) {
    func_0x00014000a670(lVar1 + 0x3d38,4,5);
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c);
  }
  lVar1 = func_0x000144e24670(uVar2);
  if (((lVar1 != 0) && ((*(uint *)(lVar1 + 0x10) >> 0x1b & 1) != 0)) &&
     (*(uint *)(lVar1 + 0x10) = *(uint *)(lVar1 + 0x10) & 0xf7ffffff,
     *(longlong *)(lVar1 + 0x30) != 0 || *(longlong *)(lVar1 + 0x20) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014000b049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))(lVar1 + 0x20,0x1b);
    return;
  }
  return;
}

