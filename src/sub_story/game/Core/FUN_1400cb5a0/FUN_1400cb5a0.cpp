// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cb5a0  size: 649 bytes
// Name:    FUN_1400cb5a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9d7a0, FUN_145001f10, FUN_1400cb830
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cb5a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  uint auStack_d8 [16];
  byte bStack_98;
  uint auStack_88 [16];
  byte bStack_48;
  
  bVar6 = *(byte *)(param_2 + 0x14d) & 0xef;
  *(byte *)(param_2 + 0x14d) = bVar6;
  if (((~*(uint *)(*(longlong *)(param_1 + 0x2f8) + 0xa4) & 0x7ffe) != 0) &&
     (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x2f8) + 0xa0),
     cVar2 = FUN_144d9d7a0(uVar1,uVar1 >> 0x10), cVar2 != '\0')) {
LAB_1400cb72b:
    *(byte *)(param_2 + 0x14d) = bVar6 | 0x10;
    return;
  }
  if ((*(longlong *)(param_2 + 8) != 0) &&
     (lVar3 = FUN_145001f10(*(longlong *)(param_2 + 8),0,1), lVar3 != 0)) {
    bVar6 = *(byte *)(param_2 + 0x14d);
    goto LAB_1400cb72b;
  }
  lVar3 = *(longlong *)(param_2 + 0x20);
  bVar6 = 1;
  if (lVar3 != 0) {
    if (((*(uint *)(lVar3 + 0x10) & 0x20) == 0) || (*(longlong *)(lVar3 + 0x898) == 0)) {
      bVar6 = *(longlong *)(lVar3 + 0x8e8) != 0 & (byte)(*(uint *)(lVar3 + 0x10) >> 0xb);
    }
    else {
      bVar6 = 0;
    }
  }
  func_0x000144f65360(auStack_88);
  plVar4 = (longlong *)func_0x000144f63b60(param_1 + 0x2a0,0,0);
  if (((plVar4 != (longlong *)0x0) && ((int)plVar4[4] == 4)) &&
     (*(short *)((longlong)plVar4 + 0x1e) != 0)) {
    FUN_1400cb830(param_1,plVar4,auStack_88,param_2,bVar6,1,0);
  }
  if ((bStack_48 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = func_0x00014540d1f0(*(undefined4 *)(*plVar4 + 0x20 + (ulonglong)auStack_88[0] * 0x40));
    lVar5 = func_0x000144e63d10(*(undefined4 *)(lVar3 + 0x9c));
    if ((((~*(uint *)(lVar3 + 0xa4) & 0x7ffe) != 0) &&
        (cVar2 = FUN_144d9d7a0(*(uint *)(lVar3 + 0xa0),*(uint *)(lVar3 + 0xa0) >> 0x10),
        cVar2 != '\0')) || ((lVar5 != 0 && (lVar5 = FUN_145001f10(lVar5,0,1), lVar5 != 0))))
    goto LAB_1400cb816;
  }
  func_0x000144f65360(auStack_d8);
  plVar4 = (longlong *)func_0x000144f63b60(param_1 + 0x2a0,1,0);
  if (((plVar4 != (longlong *)0x0) && ((int)plVar4[4] == 4)) &&
     (*(short *)((longlong)plVar4 + 0x1e) != 0)) {
    FUN_1400cb830(param_1,plVar4,auStack_d8,param_2,bVar6,1,0);
  }
  if ((bStack_98 & 1) == 0) {
    return;
  }
  lVar5 = func_0x00014540d1f0(*(undefined4 *)(*plVar4 + 0x20 + (ulonglong)auStack_d8[0] * 0x40));
  if (lVar3 == lVar5) {
    return;
  }
  lVar3 = func_0x000144e63d10(*(undefined4 *)(lVar5 + 0x9c));
  if (((~*(uint *)(lVar5 + 0xa4) & 0x7ffe) == 0) ||
     (cVar2 = FUN_144d9d7a0(*(uint *)(lVar5 + 0xa0),*(uint *)(lVar5 + 0xa0) >> 0x10), cVar2 == '\0')
     ) {
    if (lVar3 == 0) {
      return;
    }
    lVar3 = FUN_145001f10(lVar3,0,1);
    if (lVar3 == 0) {
      return;
    }
  }
LAB_1400cb816:
  *(byte *)(param_2 + 0x14d) = *(byte *)(param_2 + 0x14d) | 0x10;
  return;
}

