// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bbc10  size: 505 bytes
// Name:    FUN_1400bbc10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145031fd0, FUN_145032800
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bbc10(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  
  vhsubps_avx(*(undefined1 (*) [16])(param_1 + 0x12),*(undefined1 (*) [16])(param_1 + 0x12));
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  vcmpps_avx(auVar6,*(undefined1 (*) [16])(param_1 + 0x30),4);
  plVar5 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  if (plVar5 != (longlong *)0x0) {
    bVar3 = *(byte *)((longlong)plVar5 + 0x26e);
    if ((bVar3 & 2) == 0) {
      plVar4 = plVar5 + 0x1c;
    }
    else {
      lVar2 = FUN_145031fd0(plVar5 + 0x60,(char)param_1[0x33]);
      bVar3 = *(byte *)((longlong)plVar5 + 0x26e);
      plVar4 = (longlong *)(lVar2 + 0x10);
    }
    if (-1 < (char)bVar3) {
      if ((bVar3 & 2) == 0) {
        (**(code **)(*plVar5 + 0x38))(plVar5);
        (**(code **)(*plVar5 + 0x40))(plVar5);
      }
      else {
        FUN_145032800(plVar5 + 0x60,CONCAT71((int7)((ulonglong)plVar4 >> 8),(char)param_1[0x33]));
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    bVar3 = *(byte *)((longlong)plVar1 + 0x26e);
    if ((bVar3 & 2) == 0) {
      plVar5 = plVar1 + 0x1c;
    }
    else {
      lVar2 = FUN_145031fd0(plVar1 + 0x60,*(undefined1 *)((longlong)param_1 + 0x199));
      bVar3 = *(byte *)((longlong)plVar1 + 0x26e);
      plVar5 = (longlong *)(lVar2 + 0x10);
    }
    if (-1 < (char)bVar3) {
      if ((bVar3 & 2) == 0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        (**(code **)(*plVar1 + 0x40))(plVar1);
      }
      else {
        FUN_145032800(plVar1 + 0x60,
                      CONCAT71((int7)((ulonglong)plVar5 >> 8),
                               *(undefined1 *)((longlong)param_1 + 0x199)));
      }
    }
  }
  return;
}

