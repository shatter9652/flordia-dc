// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140132730  size: 196 bytes
// Name:    FUN_140132730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140132730(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  byte bVar7;
  
  uVar6 = *(undefined4 *)(param_2 + 0x9c);
  lVar4 = func_0x000144e23bb0(uVar6);
  if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x10) & 1) == 0)) {
LAB_1401327eb:
    bVar7 = 0;
  }
  else {
    lVar4 = func_0x000144da10f0(uVar6);
    lVar5 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x650) + 0x10);
    if ((lVar5 < 0) ||
       (plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x650) + 0x20 + lVar5 * 8),
       plVar1 == (longlong *)0x0)) goto LAB_1401327eb;
    bVar7 = 0;
    lVar4 = (**(code **)(*plVar1 + 0x218))(plVar1,0);
    if (lVar4 != 0) {
      bVar7 = (byte)(*(uint *)(lVar4 + 0x54) >> 0x11) & 8;
    }
  }
  uVar6 = *(undefined4 *)(param_2 + 0x9c);
  lVar4 = func_0x000144f01400(uVar6);
  if (lVar4 != 0) {
    cVar2 = func_0x000140132800(*(undefined8 *)(lVar4 + 0x68));
    if (cVar2 != '\0') {
      bVar3 = 2;
      goto LAB_1401327cd;
    }
    uVar6 = *(undefined4 *)(param_2 + 0x9c);
  }
  cVar2 = func_0x000140132810(uVar6);
  bVar3 = cVar2 * '\x02';
LAB_1401327cd:
  *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) & 0xf5 | bVar3 | bVar7;
  return;
}

