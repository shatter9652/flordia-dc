// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140135ea0  size: 350 bytes
// Name:    FUN_140135ea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140135ea0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  short sVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  
  uVar7 = (uint)param_2 & 0xffff;
  uVar4 = (ulonglong)(uVar7 << 4);
  sVar6 = (short)(param_2 >> 0x10);
  sVar8 = (short)(param_2 >> 0x20);
  if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar4) == sVar6) &&
     (lVar1 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar4), lVar1 != 0)) {
    uVar9 = (uint)*(undefined8 *)(lVar1 + 0xf8);
    if (((sVar8 != -2) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x20), *(char *)(lVar2 + 0x10) == '\x06'))
       && (*(longlong *)(lVar2 + 0x88) != 0)) {
      uVar3 = func_0x0001403dc2f0(lVar1,param_2 >> 0x20);
      if (uVar3 == 0xffff) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 & (uint)*(undefined8 *)(*(longlong *)(lVar2 + 0x88) + (ulonglong)uVar3 * 0x10)
        ;
      }
    }
  }
  else {
    uVar9 = 0;
  }
  uVar4 = (ulonglong)(uVar7 << 4);
  if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar4) == sVar6) &&
     (lVar1 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar4), lVar1 != 0)) {
    uVar7 = (uint)*(undefined8 *)(lVar1 + 0xf8);
    if (((sVar8 != -2) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x20), *(char *)(lVar2 + 0x10) == '\x06'))
       && (*(longlong *)(lVar2 + 0x88) != 0)) {
      uVar3 = func_0x0001403dc2f0(lVar1,param_2 >> 0x20);
      if (uVar3 == 0xffff) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 & (uint)*(undefined8 *)(*(longlong *)(lVar2 + 0x88) + (ulonglong)uVar3 * 0x10)
        ;
      }
    }
  }
  else {
    uVar7 = 0;
  }
  if ((uVar9 & 0x4000000) != (uVar7 & 0x20000000)) {
    return 0;
  }
  uVar4 = (ulonglong)(((uint)param_2 & 0xffff) << 4);
  if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar4) == sVar6) &&
      (lVar1 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar4), lVar1 != 0)) &&
     ((*(byte *)(lVar1 + 0x154) & 1) != 0)) {
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
  }
  else {
    uVar5 = 0;
  }
  uVar4 = FUN_140136050(uVar5);
  return uVar4 ^ 1;
}

