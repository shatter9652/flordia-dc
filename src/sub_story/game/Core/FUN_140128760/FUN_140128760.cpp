// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128760  size: 57 bytes
// Name:    FUN_140128760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f3ae40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140128760(longlong param_1)

{
  undefined1 extraout_AL;
  char cVar1;
  undefined1 extraout_AL_00;
  undefined1 uVar2;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  
  func_0x000144fd4840(*(undefined2 *)(param_1 + 0x16));
  cVar1 = func_0x0001454b2fb0(CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)));
  if (cVar1 == '\0') {
    FUN_140f3ae40(0xffffffff);
    uVar2 = func_0x000140f3ae10(CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)));
    *(ushort *)(param_1 + 0x16) = CONCAT11(extraout_AH_01,uVar2);
  }
  return;
}

