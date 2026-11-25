// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140056f60  size: 345 bytes
// Name:    FUN_140056f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140057300, FUN_1400570c0, FUN_140057130, FUN_1456a4960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140056f60(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined1 auStack_28 [8];
  
  if (*(longlong *)(param_1 + 0x126b0) != 0) {
    func_0x000144da9f50(param_1);
    *(undefined8 *)(param_1 + 0x126b0) = 0;
  }
  if (*(longlong *)(param_1 + 0x47a00) != 0) {
    func_0x000144da9f50(param_1);
    *(undefined8 *)(param_1 + 0x47a00) = 0;
  }
  if (*(longlong *)(param_1 + 0x47a08) != 0) {
    func_0x000144da9f50(param_1);
    *(undefined8 *)(param_1 + 0x47a08) = 0;
  }
  if (*(longlong *)(param_1 + 0x47a10) != 0) {
    func_0x000144da9f50(param_1);
    *(undefined8 *)(param_1 + 0x47a10) = 0;
  }
  if (*(longlong *)(param_1 + 0x47a18) != 0) {
    func_0x000144da9f50(param_1);
    *(undefined8 *)(param_1 + 0x47a18) = 0;
  }
  if (*(longlong *)(param_1 + 0x127c8) == 0) {
    FUN_140057300(param_1 + 0x12780,param_2,param_1);
  }
  else {
    FUN_140057130(param_1);
    FUN_140057300(param_1 + 0x12780,param_2,param_1);
    FUN_1400570c0(param_1);
  }
  if (((param_3 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x12188), lVar1 != 0)) &&
     (*(char *)(lVar1 + 0x121a4) == '\x01')) {
    FUN_1456a4960(lVar1,auStack_28,0);
  }
  return;
}

