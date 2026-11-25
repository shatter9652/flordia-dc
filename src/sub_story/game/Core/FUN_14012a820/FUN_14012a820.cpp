// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012a820  size: 111 bytes
// Name:    FUN_14012a820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012a820(longlong param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_2;
  param_2[1] = uVar1;
  if ((ulonglong)uVar1 != 0) {
    func_0x000145f40580(param_2 + 2,0,(ulonglong)uVar1 << 2);
  }
  uVar1 = *(uint *)(param_1 + 0x24);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = 0;
    do {
      if (*(char *)(lVar2 + 0x44 + lVar3) == '\x01') {
        uVar4 = (ulonglong)*(uint *)(lVar2 + 8 + lVar3);
        param_2[uVar4 + 2] = (uint)((float)param_2[uVar4 + 2] + *(float *)(lVar2 + 0xc + lVar3));
      }
      lVar3 = lVar3 + 0x48;
    } while ((ulonglong)uVar1 * 0x48 != lVar3);
  }
  return;
}

