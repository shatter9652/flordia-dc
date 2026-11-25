// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014e5e0  size: 133 bytes
// Name:    FUN_14014e5e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140347fd0, FUN_1402c59f0, FUN_1451dc740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14014e5e0(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uStack_28;
  
  FUN_140347fd0(&uStack_28,0x147bc8550);
  if (*(short *)(param_1 + 0x18) == 0) {
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
      if (*(int *)(lVar1 + 500) == param_2) {
        cVar2 = FUN_1451dc740(lVar1,1);
        if ((cVar2 != '\0') && ((lVar3 == 0 || (*(char *)(lVar3 + 0x1e4) == '\0')))) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_1 + 0x18));
  }
  FUN_1402c59f0(uStack_28);
  return lVar3;
}

