// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bb570  size: 62 bytes
// Name:    FUN_1400bb570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bb5d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bb570(uint *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  uVar2 = *param_1;
  if ((uVar2 & 1) != 0) {
    FUN_1400bb5d0(param_1 + 4);
    uVar2 = *param_1;
  }
  if ((uVar2 & 2) == 0) {
    return;
  }
  puVar5 = param_1 + 0x3c;
  if ((uVar2 & 1) == 0) {
    puVar5 = param_1;
  }
  plVar7 = *(longlong **)(puVar5 + 4);
  plVar1 = *(longlong **)(puVar5 + 6);
  vhsubps_avx(*(undefined1 (*) [16])(puVar5 + 0x30),*(undefined1 (*) [16])(puVar5 + 0x30));
  if (plVar7 != (longlong *)0x0) {
    bVar4 = *(byte *)((longlong)plVar7 + 0x26e);
    if ((bVar4 & 2) == 0) {
      plVar6 = plVar7 + 0x1c;
    }
    else {
      lVar3 = FUN_145031fd0(plVar7 + 0x60,(char)puVar5[0x36]);
      bVar4 = *(byte *)((longlong)plVar7 + 0x26e);
      plVar6 = (longlong *)(lVar3 + 0x10);
    }
    if (-1 < (char)bVar4) {
      if ((bVar4 & 2) == 0) {
        (**(code **)(*plVar7 + 0x38))(plVar7);
        (**(code **)(*plVar7 + 0x40))(plVar7);
      }
      else {
        FUN_145032800(plVar7 + 0x60,CONCAT71((int7)((ulonglong)plVar6 >> 8),(char)puVar5[0x36]));
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    bVar4 = *(byte *)((longlong)plVar1 + 0x26e);
    if ((bVar4 & 2) == 0) {
      plVar7 = plVar1 + 0x1c;
    }
    else {
      lVar3 = FUN_145031fd0(plVar1 + 0x60,*(undefined1 *)((longlong)puVar5 + 0xd9));
      bVar4 = *(byte *)((longlong)plVar1 + 0x26e);
      plVar7 = (longlong *)(lVar3 + 0x10);
    }
    if (-1 < (char)bVar4) {
      if ((bVar4 & 2) == 0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        (**(code **)(*plVar1 + 0x40))(plVar1);
      }
      else {
        FUN_145032800(plVar1 + 0x60,
                      CONCAT71((int7)((ulonglong)plVar7 >> 8),
                               *(undefined1 *)((longlong)puVar5 + 0xd9)));
      }
    }
  }
  return;
}

