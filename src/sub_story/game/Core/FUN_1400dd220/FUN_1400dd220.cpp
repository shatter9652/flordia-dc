// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400dd220  size: 2961 bytes
// Name:    FUN_1400dd220
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400dd220(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 in_stack_00000038;
  
  uVar3 = 0;
  while( true ) {
    lVar1 = func_0x000144f653e0(param_1 + 0x2a0,in_stack_00000038,uVar3);
    if (((lVar1 != 0) && (*(uint *)(lVar1 + 0x20) < 4)) && (*(uint *)(lVar1 + 0x20) != 1)) break;
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    if (uVar2 == 4) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001400dd2a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14675793c + *(int *)(&UNK_14675793c + uVar3 * 4)))
            (&UNK_14675793c + *(int *)(&UNK_14675793c + uVar3 * 4));
  return;
}

