// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015bce0  size: 79 bytes
// Name:    FUN_14015bce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017dc60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015bce0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  
  FUN_14017dc60(param_1[0x12],1);
  param_1[7] = 0x14;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (param_1[6] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  func_0x000144e71130((int)param_1[3]);
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    func_0x000144e71130((int)param_1[3]);
    *(undefined2 *)((longlong)param_1 + 0x1e) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    if (*param_1 != 0) {
      func_0x000145f40580(*param_1,0,(ulonglong)*(ushort *)((longlong)param_1 + 0x1c) << 6,param_4,
                          unaff_RSI);
      if (*(short *)((longlong)param_1 + 0x1c) != 0) {
        lVar2 = 0x2a;
        uVar3 = 0;
        do {
          lVar1 = *param_1;
          uVar3 = uVar3 + 1;
          *(undefined8 *)(lVar1 + -10 + lVar2) = 0xffffffff00000000;
          *(undefined1 *)(lVar1 + lVar2) = 0;
          *(undefined2 *)(lVar1 + -2 + lVar2) = 0xffff;
          lVar2 = lVar2 + 0x40;
        } while (uVar3 < *(ushort *)((longlong)param_1 + 0x1c));
      }
      if (*param_1 != 0) {
        FUN_144ec6720();
        if (*param_1 != 0) {
          func_0x000144d9c130();
        }
        *param_1 = 0;
        FUN_144ec6670();
        *(undefined1 *)((longlong)param_1 + 0x24) = 0;
      }
    }
  }
  return;
}

