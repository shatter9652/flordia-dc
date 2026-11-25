// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fabc0  size: 178 bytes
// Name:    FUN_1400fabc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451eddb0, FUN_144e6ea00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400fabc0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  lVar2 = FUN_144e6ea00(param_2,0);
  if (lVar2 != 0) {
    lVar3 = func_0x000144e6ea20(param_2,1);
    if ((lVar3 != 0) && ((0x1cU >> (*(uint *)(lVar3 + 0x30) & 0x1f) & 1) != 0)) {
      lVar3 = func_0x000144eb3780(*(undefined4 *)(lVar3 + 0x9c));
      if (lVar3 != 0) {
        lVar4 = func_0x000144f96a30(*(undefined8 *)(param_2 + 0xf8));
        if (lVar4 == 0) {
          iVar1 = func_0x0001450e1d70(lVar3,lVar2);
        }
        else {
          iVar1 = *(int *)(lVar4 + 0x14);
        }
        if (iVar1 != -1) {
          lVar2 = FUN_1451eddb0(*(undefined8 *)(lVar3 + 8),iVar1);
          if ((lVar2 != 0) && ((~*(uint *)(lVar2 + 0x1c) & *(uint *)(param_1 + 0x10)) == 0)) {
            uVar5 = CONCAT71((int7)((ulonglong)lVar3 >> 8),
                             (~*(uint *)(lVar2 + 0x20) & *(uint *)(param_1 + 0x14)) == 0);
            goto LAB_1400fac5d;
          }
        }
      }
    }
    uVar5 = 0;
  }
LAB_1400fac5d:
  return uVar5 & 0xffffffff;
}

