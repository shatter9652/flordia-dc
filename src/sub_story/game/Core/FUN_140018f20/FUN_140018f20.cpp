// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018f20  size: 97 bytes
// Name:    FUN_140018f20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140018ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140018f20(undefined8 *param_1,int param_2)

{
  *param_1 = &UNK_146529330;
  if ((*(short *)((longlong)param_1 + 0x3a) != 0) && (param_1[6] != 0)) {
    func_0x000144d9c130();
  }
  if ((*(short *)((longlong)param_1 + 0x2a) != 0) && (param_1[4] != 0)) {
    func_0x000144d9c130();
  }
  func_0x000144de8350(param_1);
  if (param_2 != 0) {
    FUN_140018ce0(param_1);
  }
  return param_1;
}

