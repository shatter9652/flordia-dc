// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fe120  size: 65 bytes
// Name:    FUN_1400fe120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fe120(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  
  plVar2 = (longlong *)param_1[5];
  puVar3 = (undefined1 *)*plVar2;
  *plVar2 = (longlong)(puVar3 + 1);
  *puVar3 = param_2;
  plVar1 = plVar2 + 1;
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    cVar5 = (*(code *)plVar2[3])();
    if (cVar5 == '\0') {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x0001400fe15e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(param_1);
      return;
    }
  }
  return;
}

