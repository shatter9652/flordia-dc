// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013eed0  size: 180 bytes
// Name:    FUN_14013eed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013eed0(uint param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  lVar5 = func_0x000144e3bfa0(0x14ab83cd8);
  plVar1 = *(longlong **)(*(longlong *)(lVar5 + 8) + (ulonglong)param_1 * 8);
  uVar6 = *(uint *)(lVar5 + 4);
  if (uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    uVar9 = 0;
    lVar8 = _DAT_14ab83c98;
    iVar7 = _DAT_14ab83cac;
    do {
      uVar3 = iVar7 * param_1 + (int)uVar9;
      if ((*(uint *)(lVar8 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar5 + 8) + uVar9 * 8) + 0x28))();
        uVar6 = *(uint *)(lVar5 + 4);
        lVar8 = _DAT_14ab83c98;
        iVar7 = _DAT_14ab83cac;
      }
      uVar9 = uVar9 + 1;
    } while ((uVar9 < uVar6) && ((char)uVar4 == '\0'));
  }
  (**(code **)(*plVar1 + 0x50))(plVar1,uVar4);
  bVar2 = func_0x0001451d8c80();
                    /* WARNING: Could not recover jumptable at 0x00014013ef7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x80 + (ulonglong)bVar2 * 8))(plVar1);
  return;
}

