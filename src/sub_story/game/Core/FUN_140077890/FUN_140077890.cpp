// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077890  size: 48 bytes
// Name:    FUN_140077890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140e12cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140077890(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &UNK_14652b9b0;
  FUN_140e12cc0();
  func_0x000143b5c530(param_1[0x14]);
  *param_1 = &UNK_14652b870;
  FUN_144f4d110(param_1 + 5);
  FUN_144f4d110(param_1 + 7);
  FUN_144f4d110(param_1 + 9);
  if (param_1[1] != 0) {
    FUN_14053c3e0(param_1[1],param_1);
  }
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    FUN_143b5c2a0(*(undefined8 *)param_1[3],*(undefined4 *)(param_1 + 2),
                  *(undefined4 *)((longlong)param_1 + 0x14));
  }
  lVar2 = param_1[0x11];
  uVar1 = *(uint *)((longlong)param_1 + 0x84);
  if ((ulonglong)uVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_140c13ae0(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar3);
    lVar2 = param_1[0x11];
  }
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  if (lVar2 != 0) {
    func_0x000144d9c130(lVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  if (param_1[10] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  if (param_1[8] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  if (param_1[6] != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  return;
}

