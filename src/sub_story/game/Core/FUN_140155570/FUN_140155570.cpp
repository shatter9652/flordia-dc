// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140155570  size: 207 bytes
// Name:    FUN_140155570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140155e40, FUN_1450cb0e0, FUN_143b16e00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140155570(longlong param_1)

{
  if ((*(short *)(param_1 + 0xf2) != 0) && (*(longlong *)(param_1 + 0xe8) != 0)) {
    func_0x000144d9c130(*(longlong *)(param_1 + 0xe8));
  }
  if ((*(short *)(param_1 + 0xe2) != 0) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    func_0x000144d9c130(*(longlong *)(param_1 + 0xd8));
  }
  if (*(short *)(param_1 + 0xd2) != 0) {
    FUN_143b16e00(*(undefined8 *)(param_1 + 200));
  }
  if (*(short *)(param_1 + 0xc2) != 0) {
    FUN_140155e40(*(undefined8 *)(param_1 + 0xb8));
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1450cb0e0(*(longlong *)(param_1 + 0xb0),(undefined8 *)(param_1 + 0xb0));
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}

