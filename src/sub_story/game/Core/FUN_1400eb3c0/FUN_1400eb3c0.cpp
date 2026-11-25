// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eb3c0  size: 207 bytes
// Name:    FUN_1400eb3c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f6a930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400eb3c0(longlong *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_2 = 0xffffffff;
  iVar2 = *(int *)(*param_1 + 0xd10);
  if (iVar2 == 0x7f3a6aa9) {
    cVar5 = FUN_144f6a930(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    lVar8 = 2;
    uVar6 = 2;
  }
  else {
    uVar6 = 0;
    if (iVar2 == 0xfaa24e8) {
      lVar8 = 0;
    }
    else {
      if (iVar2 != 0x27a48605) {
        return 0;
      }
      lVar8 = 1;
      uVar6 = 1;
    }
  }
  *param_2 = uVar6;
  bVar1 = *(byte *)(lVar8 * 7 + 0x147b9a410);
  if (bVar1 == 0) {
    return 0;
  }
  lVar7 = (ulonglong)bVar1 * 0x10;
  puVar3 = (ushort *)((longlong *)*param_1)[0x191];
  lVar8 = *(longlong *)(*(longlong *)*param_1 + 0x50);
  lVar4 = *(longlong *)(param_1[1] + (ulonglong)*(ushort *)(lVar8 + -8 + lVar7) * 8);
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),
                  0 < *(int *)(lVar4 + (ulonglong)
                                       puVar3[(ulonglong)*puVar3 * 0xc +
                                              (ulonglong)*(ushort *)(lVar8 + -6 + lVar7) * 0xc + 6])
                 );
}

