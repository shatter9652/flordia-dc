// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164030  size: 126 bytes
// Name:    FUN_140164030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450cb0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140164030(undefined8 *param_1,int param_2)

{
  *param_1 = &UNK_1465a4360;
  if (param_1[0x1e] != 0) {
    FUN_1450cb0e0(param_1[0x1e],param_1 + 0x1e);
  }
  param_1[0x1e] = 0;
  *param_1 = &UNK_1465a4470;
  if ((*(short *)((longlong)param_1 + 0x2a) != 0) && (param_1[4] != 0)) {
    func_0x000144d9c130();
  }
  func_0x0001451f2570(param_1);
  if (param_2 != 0) {
    func_0x000144d9c130(param_1,0x100);
  }
  return param_1;
}

