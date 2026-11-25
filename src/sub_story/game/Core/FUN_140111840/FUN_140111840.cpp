// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140111840  size: 281 bytes
// Name:    FUN_140111840
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fac3c0, FUN_144fab520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140111840(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = _DAT_14a95dee0;
  if (*(longlong *)(param_2 + 0x40) == 0) {
    if (_DAT_14615a608 <
        (float)((*(longlong *)(_DAT_14a95dee0 + 200) + *(ulonglong *)(_DAT_14a95dee0 + 0xc0)) -
               *(longlong *)(_DAT_14a95dee0 + 0xd0)) / (float)*(ulonglong *)(_DAT_14a95dee0 + 0xc0))
    {
      return;
    }
    LOCK();
    puVar1 = (uint *)(param_1 + 1);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
      LOCK();
      *(int *)(param_1 + 1) = (int)param_1[1] + -1;
      UNLOCK();
      return;
    }
    lVar3 = FUN_144fac3c0(lVar3 + 0x98,0xf0,0x10);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x88) = 0;
      *(undefined1 *)(lVar3 + 0x95) = 0;
      *(undefined4 *)(lVar3 + 0x80) = 0;
      *(undefined1 (*) [32])(lVar3 + 0x60) = ZEXT1232(ZEXT812(0));
    }
    param_3 = param_3 & 0xffffffff;
    *(longlong *)(*param_1 + (ulonglong)uVar2 * 8) = lVar3;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x40);
  }
  FUN_144fab520(lVar3,param_2,param_3);
  *(longlong *)(param_2 + 0x40) = lVar3;
  return;
}

