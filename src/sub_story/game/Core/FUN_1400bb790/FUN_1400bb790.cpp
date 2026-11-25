// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bb790  size: 475 bytes
// Name:    FUN_1400bb790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145031fd0, FUN_145032800
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bb790(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    bVar3 = *(byte *)((longlong)plVar4 + 0x26e);
    if ((bVar3 & 2) == 0) {
      plVar5 = plVar4 + 0x1c;
    }
    else {
      lVar2 = FUN_145031fd0(plVar4 + 0x60,(char)param_1[0x30]);
      bVar3 = *(byte *)((longlong)plVar4 + 0x26e);
      plVar5 = (longlong *)(lVar2 + 0x10);
    }
    if (-1 < (char)bVar3) {
      if ((bVar3 & 2) == 0) {
        (**(code **)(*plVar4 + 0x38))(plVar4);
        (**(code **)(*plVar4 + 0x40))(plVar4);
      }
      else {
        FUN_145032800(plVar4 + 0x60,CONCAT71((int7)((ulonglong)plVar5 >> 8),(char)param_1[0x30]));
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    bVar3 = *(byte *)((longlong)plVar1 + 0x26e);
    if ((bVar3 & 2) == 0) {
      plVar4 = plVar1 + 0x1c;
    }
    else {
      lVar2 = FUN_145031fd0(plVar1 + 0x60,*(undefined1 *)((longlong)param_1 + 0x181));
      bVar3 = *(byte *)((longlong)plVar1 + 0x26e);
      plVar4 = (longlong *)(lVar2 + 0x10);
    }
    if (-1 < (char)bVar3) {
      if ((bVar3 & 2) == 0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        (**(code **)(*plVar1 + 0x40))(plVar1);
      }
      else {
        FUN_145032800(plVar1 + 0x60,
                      CONCAT71((int7)((ulonglong)plVar4 >> 8),
                               *(undefined1 *)((longlong)param_1 + 0x181)));
      }
    }
  }
  return;
}

