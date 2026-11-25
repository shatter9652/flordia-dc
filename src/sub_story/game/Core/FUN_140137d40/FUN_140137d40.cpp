// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137d40  size: 154 bytes
// Name:    FUN_140137d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140137d40(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  int iVar6;
  longlong lVar7;
  longlong alStack_48 [8];
  
  lVar3 = func_0x000140137de0(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  if (lVar3 == 0) {
    puVar5 = &SUB_140004380;
  }
  else {
    lVar2 = 0;
    do {
      lVar7 = lVar2;
      alStack_48[lVar7] = lVar3;
      if ((ulonglong)*(uint *)(lVar3 + 0x5c) == 0xffffffff) break;
      lVar3 = *(longlong *)(_DAT_149febac8 + (ulonglong)*(uint *)(lVar3 + 0x5c) * 8);
      lVar2 = lVar7 + 1;
    } while (lVar3 != 0);
    uVar4 = lVar7 + 0x100000000;
    iVar6 = (int)lVar7 + 2;
    do {
      uVar1 = *(uint *)((longlong *)alStack_48[uVar4 & 0xffffffff] + 1);
      if ((uint)((ulonglong)param_2 & 0xffff) < uVar1) {
        return *(undefined **)
                (*(longlong *)alStack_48[uVar4 & 0xffffffff] + 0x18 +
                ((ulonglong)param_2 & 0xffff) * 0x28);
      }
      param_2 = param_2 - uVar1;
      iVar6 = iVar6 + -1;
      uVar4 = uVar4 - 1;
    } while (1 < iVar6);
    puVar5 = (undefined *)0x0;
  }
  return puVar5;
}

