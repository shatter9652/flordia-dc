// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a05d0  size: 72 bytes
// Name:    FUN_1401a05d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a05d0(undefined2 *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  
  cVar3 = func_0x000144eca830(0x149fee3b0,param_1);
  if (cVar3 != '\0') {
    if (param_1 != (undefined2 *)0x0) {
      uVar4 = (int)param_1 - iRam0000000149fee3b8;
      uVar1 = (ulonglong)uRam0000000149fee3c4;
      uVar6 = uRam0000000149fee3b0;
      do {
        *param_1 = (short)(uVar6 >> 0x20);
        LOCK();
        bVar7 = uVar6 != uRam0000000149fee3b0;
        uVar2 = (ulonglong)((int)uVar6 + 1) |
                (uVar6 & 0xffff000000000000 | (uVar4 / uVar1 & 0xffff) << 0x20) + 0x1000000000000;
        if (bVar7) {
          uVar6 = uRam0000000149fee3b0;
          uVar2 = uRam0000000149fee3b0;
        }
        uRam0000000149fee3b0 = uVar2;
        UNLOCK();
      } while (bVar7);
    }
    return;
  }
  plVar5 = (longlong *)func_0x000144fc99c0(0,0);
  if (param_1 == (undefined2 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))();
  return;
}

