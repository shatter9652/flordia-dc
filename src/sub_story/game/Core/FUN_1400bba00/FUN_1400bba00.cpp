// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bba00  size: 33 bytes
// Name:    FUN_1400bba00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bbe10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bba00(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1400bbe10();
  plVar5 = *(longlong **)(param_1 + 0x250);
  plVar1 = *(longlong **)(param_1 + 600);
  if ((plVar5 != (longlong *)0x0) &&
     (bVar3 = *(byte *)((longlong)plVar5 + 0x26e), (bVar3 & 0x20) == 0)) {
    if ((bVar3 & 2) == 0) {
      plVar4 = plVar5 + 0x1c;
    }
    else {
      lVar2 = FUN_145031fd0(plVar5 + 0x60,*(undefined1 *)(param_1 + 0x490));
      bVar3 = *(byte *)((longlong)plVar5 + 0x26e);
      plVar4 = (longlong *)(lVar2 + 0x10);
    }
    if (-1 < (char)bVar3) {
      if ((bVar3 & 2) == 0) {
        (**(code **)(*plVar5 + 0x38))(plVar5);
        (**(code **)(*plVar5 + 0x40))(plVar5);
      }
      else {
        FUN_145032800(plVar5 + 0x60,
                      CONCAT71((int7)((ulonglong)plVar4 >> 8),*(undefined1 *)(param_1 + 0x490)));
      }
    }
  }
  if ((plVar1 != (longlong *)0x0) &&
     (bVar3 = *(byte *)((longlong)plVar1 + 0x26e), (bVar3 & 0x20) == 0)) {
    if ((bVar3 & 2) == 0) {
      plVar5 = plVar1 + 0x1c;
    }
    else {
      lVar2 = FUN_145031fd0(plVar1 + 0x60,*(undefined1 *)(param_1 + 0x491));
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
                      CONCAT71((int7)((ulonglong)plVar5 >> 8),*(undefined1 *)(param_1 + 0x491)));
      }
    }
  }
  return;
}

