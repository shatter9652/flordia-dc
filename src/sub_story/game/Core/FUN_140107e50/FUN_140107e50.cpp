// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140107e50  size: 412 bytes
// Name:    FUN_140107e50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1416dc0a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140107e50(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = &UNK_14655ce30;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  if (param_1[0x1f] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  if (param_1[0x1d] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  if (param_1[0x1b] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  if (param_1[0x19] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  lVar1 = param_1[0x17];
  if ((ulonglong)*(uint *)((longlong)param_1 + 0xb4) != 0) {
    lVar1 = lVar1 + 0x18;
    lVar2 = (ulonglong)*(uint *)((longlong)param_1 + 0xb4) * 0x28;
    do {
      FUN_1416dc0a0(lVar1);
      *(undefined4 *)(lVar1 + -0xc) = 0;
      if (*(longlong *)(lVar1 + -8) != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar1 + -0x10) = 0;
      *(undefined8 *)(lVar1 + -8) = 0;
      lVar1 = lVar1 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
    lVar1 = param_1[0x17];
  }
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  if (lVar1 != 0) {
    func_0x000144d9c130(lVar1);
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  func_0x000140107ff0(param_1);
  if (param_2 != 0) {
    func_0x000144d9c130(param_1,0x130);
  }
  return param_1;
}

