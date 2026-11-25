// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ee730  size: 194 bytes
// Name:    FUN_1400ee730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14528cc50, FUN_1400ef050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ee730(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [32];
  undefined8 uStack_40;
  
  (**(code **)(*param_1 + 0x58))(param_1,auStack_68,param_2,param_3);
  (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3,auStack_68);
  uStack_40 = 0;
  auStack_60 = ZEXT1232(ZEXT812(0));
  (**(code **)(*param_1 + 0x68))(param_1,auStack_68,0);
  lVar1 = FUN_1400ef050(param_3 + 0x38,auStack_68);
  bVar3 = 0xff;
  bVar4 = bVar3;
  if ((lVar1 != 0) && (*(int *)(param_3 + 0x3c) != 0)) {
    bVar5 = 0;
    do {
      lVar2 = FUN_14528cc50(param_3 + 0x40 + (ulonglong)bVar5 * 0x18);
      bVar4 = bVar5;
      if (lVar2 == lVar1) break;
      bVar5 = bVar5 + 1;
      bVar4 = bVar3;
    } while ((uint)bVar5 < *(uint *)(param_3 + 0x3c));
  }
  *(byte *)(param_3 + 0x1651) = bVar4;
  return;
}

