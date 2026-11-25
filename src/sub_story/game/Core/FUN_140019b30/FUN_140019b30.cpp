// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019b30  size: 31 bytes
// Name:    FUN_140019b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140019b30(void)

{
  uint uVar1;
  void *in_R9;
  
  uVar1 = GetCurrentThreadId();
                    /* WARNING: Could not recover jumptable at 0x000140019b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  OpenThread(0x1fffff,(void *)0x0,(void *)(ulonglong)uVar1,in_R9);
  return;
}

