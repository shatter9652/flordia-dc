// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e520  size: 181 bytes
// Name:    FUN_14012e520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012e5e0, FUN_1452e2b10, FUN_1450cb0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012e520(longlong param_1)

{
  FUN_14012e5e0();
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1452e2b10(*(longlong *)(param_1 + 0x50),*(undefined2 *)(param_1 + 0x48));
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1452e2b10(*(longlong *)(param_1 + 0x38),*(undefined2 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1450cb0e0(*(longlong *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

