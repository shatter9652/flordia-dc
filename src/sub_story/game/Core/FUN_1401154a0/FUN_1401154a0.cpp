// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401154a0  size: 452 bytes
// Name:    FUN_1401154a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140115900, FUN_144ec6670, FUN_1419f7c90, FUN_140115800, FUN_140115780, FUN_14128b870, FUN_140115670, FUN_1420aca30, FUN_144ec6720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401154a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_148 [264];
  
  cVar1 = FUN_140115670(param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_14128b870(&UNK_1467830e8,auStack_148);
    uVar2 = 0;
    lVar5 = FUN_1419f7c90(param_2,1,1,0);
    if (lVar5 != 0) {
      lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      lVar7 = *(longlong *)(lVar4 + 0x1258);
      lVar6 = param_1 + 0x68;
      if (lVar7 != 0) {
        lVar6 = lVar7;
      }
      uVar2 = FUN_1420aca30(param_1,lVar5,param_3,param_4,(*(uint *)(lVar6 + 0x10) >> 0x12 & 1) == 0
                           );
      lVar4 = *(longlong *)(lVar4 + 0x1258);
      lVar7 = _DAT_14abcd240 + 0x68;
      if (lVar4 != 0) {
        lVar7 = lVar4;
      }
      if ((*(byte *)(lVar7 + 0x12) & 0x10) == 0) {
        func_0x0001401086f0(lVar5);
      }
      else {
        FUN_144ec6720();
        func_0x0001401086f0(lVar5);
        FUN_144ec6670();
      }
    }
    if (cVar1 != '\0') {
      func_0x00014128b850();
    }
    if (lVar5 != 0) {
      return uVar2;
    }
  }
  plVar3 = (longlong *)FUN_140115900(param_1,param_2);
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    lVar5 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1258);
    lVar4 = param_1 + 0x68;
    if (lVar5 != 0) {
      lVar4 = lVar5;
    }
    uVar2 = FUN_140115800(param_1,*plVar3,param_3,param_4,(*(uint *)(lVar4 + 0x10) >> 0x12 & 1) == 0
                         );
  }
  lVar5 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1258);
  lVar4 = _DAT_14abcd240 + 0x68;
  if (lVar5 != 0) {
    lVar4 = lVar5;
  }
  uVar8 = (uint)*(undefined8 *)(lVar4 + 0x10);
  if ((uVar8 >> 0x14 & 1) != 0) {
    FUN_144ec6720();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_140115780(plVar3);
    func_0x000144d9c130(plVar3,0x28);
  }
  if ((uVar8 >> 0x14 & 1) != 0) {
    FUN_144ec6670();
  }
  return uVar2;
}

