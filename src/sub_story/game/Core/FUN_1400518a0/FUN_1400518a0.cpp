// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400518a0  size: 183 bytes
// Name:    FUN_1400518a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400518a0(int param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar1 = (param_3 >> 0x10 ^ param_3) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    uVar2 = (ulonglong)((uVar1 >> 0x10 ^ uVar1) & param_1 - 1U);
    lVar3 = uVar2 * 0x20;
    bVar4 = *(uint *)(param_2 + lVar3) != 0;
    if (*(uint *)(param_2 + lVar3) != param_3 && bVar4) {
      do {
        uVar2 = (ulonglong)((uint)(uVar2 * 0x20 + 0x20 >> 5) & param_1 - 1U);
        lVar3 = uVar2 * 0x20;
        bVar4 = *(uint *)(param_2 + lVar3) != 0;
      } while (bVar4 && *(uint *)(param_2 + lVar3) != param_3);
    }
    param_2 = param_2 + lVar3;
    if (bVar4) goto LAB_14005190c;
  }
  param_2 = 0;
LAB_14005190c:
  lVar3 = param_2 + 8;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}

