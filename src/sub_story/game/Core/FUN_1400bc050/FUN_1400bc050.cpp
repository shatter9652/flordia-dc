// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bc050  size: 77 bytes
// Name:    FUN_1400bc050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bb790, FUN_1400bba30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bc050(byte *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  byte *pbVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  FUN_1400bb790(param_1 + 0x10);
  bVar3 = *param_1;
  if ((bVar3 & 1) != 0) {
    FUN_1400bba30(param_1 + 0x1a0);
    bVar3 = *param_1;
  }
  if ((bVar3 & 2) == 0) {
    return;
  }
  pbVar4 = param_1 + 0xd0;
  if ((bVar3 & 1) == 0) {
    pbVar4 = param_1;
  }
  plVar6 = *(longlong **)(pbVar4 + 0x1a0);
  plVar1 = *(longlong **)(pbVar4 + 0x1a8);
  if ((plVar6 != (longlong *)0x0) &&
     (bVar3 = *(byte *)((longlong)plVar6 + 0x26e), (bVar3 & 0x20) == 0)) {
    if ((bVar3 & 2) == 0) {
      plVar5 = plVar6 + 0x1c;
    }
    else {
      lVar2 = FUN_145031fd0(plVar6 + 0x60,pbVar4[0x3e0]);
      bVar3 = *(byte *)((longlong)plVar6 + 0x26e);
      plVar5 = (longlong *)(lVar2 + 0x10);
    }
    if (-1 < (char)bVar3) {
      if ((bVar3 & 2) == 0) {
        (**(code **)(*plVar6 + 0x38))(plVar6);
        (**(code **)(*plVar6 + 0x40))(plVar6);
      }
      else {
        FUN_145032800(plVar6 + 0x60,CONCAT71((int7)((ulonglong)plVar5 >> 8),pbVar4[0x3e0]));
      }
    }
  }
  if ((plVar1 != (longlong *)0x0) &&
     (bVar3 = *(byte *)((longlong)plVar1 + 0x26e), (bVar3 & 0x20) == 0)) {
    if ((bVar3 & 2) == 0) {
      plVar6 = plVar1 + 0x1c;
    }
    else {
      lVar2 = FUN_145031fd0(plVar1 + 0x60,pbVar4[0x3e1]);
      bVar3 = *(byte *)((longlong)plVar1 + 0x26e);
      plVar6 = (longlong *)(lVar2 + 0x10);
    }
    if (-1 < (char)bVar3) {
      if ((bVar3 & 2) == 0) {
        (**(code **)(*plVar1 + 0x38))(plVar1);
        (**(code **)(*plVar1 + 0x40))(plVar1);
      }
      else {
        FUN_145032800(plVar1 + 0x60,CONCAT71((int7)((ulonglong)plVar6 >> 8),pbVar4[0x3e1]));
      }
    }
  }
  return;
}

