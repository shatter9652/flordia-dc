// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b0a80  size: 514 bytes
// Name:    FUN_1400b0a80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e5b80, FUN_140b19cc0, FUN_140fbaa50, FUN_14246e340, FUN_1454f4350
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b0a80(longlong param_1,undefined4 param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  
  bVar1 = *(byte *)(param_1 + 0x2c);
  lVar7 = param_3;
  func_0x0001455ad6e0();
  lVar4 = func_0x000145162130(*(undefined4 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x340) + 0x9c));
  if (lVar4 == 0) {
    return;
  }
  bVar6 = (byte)param_2;
  if ((*(int *)(lVar4 + 0x2c) == 0) && (*(int *)(lVar4 + 0x3c) == 0)) {
    if (*(short *)(lVar4 + 0x54) == -1) {
      return;
    }
    lVar7 = *(longlong *)(lRam0000000148982148 + (ulonglong)(uint)(int)*(short *)(lVar4 + 0x54) * 8)
    ;
    uVar5 = (ulonglong)*(uint *)(lVar7 + 4);
    if (uVar5 != 0) {
      lVar7 = *(longlong *)(lVar7 + 8);
      lVar4 = 0;
      do {
        *(byte *)(lVar7 + 1 + lVar4) = *(byte *)(lVar7 + 1 + lVar4) & 0xfd | bVar6 * '\x02';
        lVar4 = lVar4 + 2;
      } while (uVar5 * 2 != lVar4);
    }
    return;
  }
  FUN_1454f4350(lVar4,param_2);
  func_0x0001455c9860(*(undefined4 *)(lVar4 + 0x2c),*(undefined8 *)(lVar4 + 0x30));
  uVar2 = *(uint *)(lVar4 + 0x3c);
  if ((ulonglong)uVar2 != 0) {
    if ((param_3 == 0) ||
       (cVar3 = func_0x000144e238f0(*(undefined4 *)(param_3 + 0x9c)), cVar3 == '\0')) {
      plVar9 = *(longlong **)(lVar4 + 0x40);
      plVar8 = plVar9 + uVar2;
      bVar10 = 1;
    }
    else {
      FUN_140fbaa50(param_3);
      if ((ulonglong)*(uint *)(lVar4 + 0x3c) == 0) goto LAB_1400b0b90;
      plVar9 = *(longlong **)(lVar4 + 0x40);
      plVar8 = plVar9 + *(uint *)(lVar4 + 0x3c);
      bVar10 = bVar6 & 1;
    }
    do {
      lVar4 = *(longlong *)(*plVar9 + 0x100);
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = CONCAT71((int7)((ulonglong)lVar7 >> 8),*(undefined1 *)(lVar4 + 0x34)) &
                0xffffffffffffff01;
      }
      lVar7 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 & bVar10);
      FUN_140b19cc0(*plVar9,4,lVar7,0);
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar8);
  }
LAB_1400b0b90:
  if (((byte)((bVar1 & 4) >> 2 ^ bVar6) == 1 && param_3 != 0) &&
     (cVar3 = func_0x000144e238f0(*(undefined4 *)(param_3 + 0x9c)), cVar3 != '\0')) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x340);
    uStack_58 = *(undefined8 *)(lVar7 + 0x70);
    uStack_50 = *(undefined8 *)(lVar7 + 0x78);
    func_0x000144dc3790(&uStack_58,auStack_48);
    FUN_14246e340(auStack_48,param_3,param_2);
    FUN_1402e5b80(4);
  }
  return;
}

