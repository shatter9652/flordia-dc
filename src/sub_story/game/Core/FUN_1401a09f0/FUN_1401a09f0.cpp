// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a09f0  size: 65 bytes
// Name:    FUN_1401a09f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401a09f0(char *param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iStack_c;
  
  if (*param_1 == '\x01') {
    (**(code **)(*param_2 + 0x20))(param_2,&iStack_c);
    return iStack_c == -0x72b08f9b;
  }
                    /* WARNING: Could not recover jumptable at 0x0001401a0a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2,0x8d4f7065);
  return (bool)uVar1;
}

