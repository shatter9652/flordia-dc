// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401508a0  size: 433 bytes
// Name:    FUN_1401508a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401508a0(longlong *param_1)

{
  ulonglong uVar1;
  
  func_0x000140150a60(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150ab0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150b10(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150b70(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150bd0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150c30(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150c90(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150cf0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150d50(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150db0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150e10(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150e70(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150ed0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150f30(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150f90(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140150ff0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401510b0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140151110(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140151170(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401511d0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140151050(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140151230(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140151290(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401512f0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140151350(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401513b0(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140151410(*(undefined4 *)(*param_1 + 0x9c));
  func_0x000140151470(*(undefined4 *)(*param_1 + 0x9c));
  func_0x0001401514d0(*(undefined4 *)(*param_1 + 0x9c));
  uVar1 = (ulonglong)
          *(ushort *)
           (lRam000000014abbe030 +
           (ulonglong)((*(uint *)(*param_1 + 0x9c) & 0x1ffff) * iRam000000014abbe024 + 0x1e) * 2);
  if (uVar1 != 0xffff) {
    if (*(longlong *)(lRam000000014abbe040 + 0x1e0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014015158a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lRam000000014abbe018 + 0xf0) + 0x10))
                (*(longlong **)(lRam000000014abbe018 + 0xf0),*(uint *)(*param_1 + 0x9c),
                 *(longlong *)(lRam000000014abbe040 + 0x1e0) +
                 uVar1 * *(longlong *)(lRam000000014abbe040 + 0x1e8));
      return;
    }
  }
  return;
}

