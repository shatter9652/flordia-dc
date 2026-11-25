// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140130470  size: 326 bytes
// Name:    FUN_140130470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401305c0, FUN_140130470, FUN_140130120, FUN_1450caf90, FUN_142d9e2d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140130470(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  
  lVar2 = FUN_140130120(*(undefined4 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    FUN_140130470(lVar2,param_2,param_3);
  }
  lVar2 = FUN_1401305c0(param_1,param_2);
  if (lVar2 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x01') {
      lVar2 = func_0x000144fdec40(*param_2,(int)param_2[1]);
      if (lVar2 != 0) {
        lVar2 = func_0x0001424d7fb0(lVar2);
        if (lVar2 != 0) {
          FUN_142d9e2d0(lVar2,*(undefined4 *)(param_3 + 0x14));
        }
      }
    }
    plVar3 = (longlong *)func_0x000144f97130(0x18);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      lVar2 = *param_2;
      *plVar3 = lVar2;
      if (lVar2 != 0) {
        FUN_1450caf90(lVar2,plVar3);
      }
      *(int *)(plVar3 + 1) = (int)param_2[1];
      *(undefined4 *)(plVar3 + 2) = 1;
    }
    uVar1 = *(uint *)(param_1 + 0x4c);
    if (uVar1 == *(uint *)(param_1 + 0x48)) {
      uVar4 = 1;
      if (1 < uVar1) {
        uVar4 = uVar1 >> 1;
      }
      lVar2 = func_0x000144d9c140(8,(ulonglong)(uVar4 + uVar1) * 8);
      if ((ulonglong)*(uint *)(param_1 + 0x4c) != 0) {
        func_0x000145f40560(lVar2,*(undefined8 *)(param_1 + 0x50),
                            (ulonglong)*(uint *)(param_1 + 0x4c) << 3);
      }
      if (*(longlong *)(param_1 + 0x50) != 0) {
        func_0x000144d9c130();
      }
      *(longlong *)(param_1 + 0x50) = lVar2;
      *(uint *)(param_1 + 0x48) = uVar4 + uVar1;
      uVar1 = *(uint *)(param_1 + 0x4c);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x50);
    }
    *(uint *)(param_1 + 0x4c) = uVar1 + 1;
    *(longlong **)(lVar2 + (ulonglong)uVar1 * 8) = plVar3;
  }
  else {
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  return;
}

