// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019ba0  size: 165 bytes
// Name:    FUN_140019ba0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140019ba0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong unaff_GS_OFFSET;
  bool bVar5;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    uVar3 = *(uint *)(lVar1 + 0x1454);
    if (uVar3 == 0xffffffff) {
      uVar3 = func_0x0001410d65a0();
      *(uint *)(lVar1 + 0x1454) = uVar3;
    }
    if (uVar3 == (uint)((ulonglong)lVar4 >> 0x20)) {
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
    }
    else {
      do {
        while (lVar4 != -0x100000000) {
          cVar2 = func_0x000140a7c330(param_1,uVar3,lVar4);
          if (cVar2 != '\0') {
            return;
          }
          lVar4 = *param_1;
        }
        LOCK();
        lVar4 = *param_1;
        bVar5 = lVar4 == -0x100000000;
        if (bVar5) {
          *param_1 = ((ulonglong)uVar3 << 0x20) + 1;
          lVar4 = -0x100000000;
        }
        UNLOCK();
      } while (!bVar5);
      *(undefined4 *)(param_1 + 2) = 1;
    }
  }
  return;
}

