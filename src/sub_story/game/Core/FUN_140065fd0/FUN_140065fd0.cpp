// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140065fd0  size: 161 bytes
// Name:    FUN_140065fd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140065fd0(longlong param_1)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong unaff_GS_OFFSET;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  if (*(char *)(*(longlong *)(lVar3 + 0x1478) + 0x11) != '\0') {
    plVar4 = *(longlong **)(param_1 + 0x18);
    pcVar1 = (char *)((longlong)plVar4 + 0x11);
    *pcVar1 = *pcVar1 + -1;
    cVar5 = *pcVar1;
    (**(code **)(*plVar4 + 0x98))(plVar4,cVar5 == '\0');
    *(undefined1 *)(plVar4 + 2) = 0;
    if (cVar5 == '\0') {
      *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
    }
  }
  plVar4 = (longlong *)(lVar3 + 0x1478);
  if (plVar2 != (longlong *)0x0) {
    *(undefined1 *)(plVar2 + 2) = *(undefined1 *)(param_1 + 0x20);
    (**(code **)(*plVar2 + 0xb0))(plVar2,param_1);
  }
  if (plVar2 != (longlong *)*plVar4) {
    cVar5 = (**(code **)(*(longlong *)*plVar4 + 8))();
    if (cVar5 != '\0') {
      (**(code **)(*(longlong *)*plVar4 + 0xa0))();
    }
  }
  *plVar4 = (longlong)plVar2;
  return;
}

