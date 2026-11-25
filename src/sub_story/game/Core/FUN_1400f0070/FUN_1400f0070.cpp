// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0070  size: 118 bytes
// Name:    FUN_1400f0070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400f0070(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  
  func_0x00014535f0e0();
  *(undefined1 *)(param_1 + 2) = 1;
  *param_1 = &UNK_1465a4680;
  pcVar1 = *(code **)(param_2 + 0x58);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)((longlong)param_1 + 0x27U & 0xfffffffffffffff0,param_2 + 0xfU & 0xfffffffffffffff0);
  }
  param_1[0xd] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xe] = pcVar1;
  pcVar1 = *(code **)(param_2 + 0x60);
  param_1[0xf] = pcVar1;
  *(undefined4 *)(param_1 + 0x10) = 7;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2 + 0xfU & 0xfffffffffffffff0);
  }
  return param_1;
}

