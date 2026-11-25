// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001b040  size: 79 bytes
// Name:    FUN_14001b040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001b040(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  cVar3 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x239));
  if (cVar3 == '\0') {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x24);
  }
  else {
    iVar5 = func_0x000144dfd1f0(*(undefined8 *)(param_1 + 0x88));
    iVar5 = iVar5 + 1;
  }
  lVar11 = *(longlong *)(param_1 + 0x88);
  iVar10 = 0;
  cVar3 = func_0x000144df8330(lVar11,8);
  if (((cVar3 != '\0') || (cVar3 = func_0x000144df8330(lVar11,0x18), cVar3 != '\0')) ||
     (cVar3 = func_0x000144df8330(lVar11,0x1d), cVar3 != '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x80);
    if ((*(byte *)(lVar11 + 0x6384) & 2) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = func_0x000144da4370(*(undefined1 *)(param_1 + 0xc1));
    }
    if (0 < iVar5) {
      do {
        puVar7 = (undefined4 *)func_0x000144df8320(*(undefined8 *)(lVar1 + 0x158),iVar10);
        lVar8 = FUN_144df8970(*(undefined4 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x30),*puVar7);
        cVar3 = func_0x0001452295f0(*(undefined2 *)(lVar8 + 0xbe6));
        lVar11 = *(longlong *)(param_1 + 0x88);
        if (cVar3 != '\0') {
          uVar2 = *(undefined8 *)(lVar11 + 0x5ea0);
          cVar3 = func_0x000144df8cb0(uVar2,iVar10,8);
          if ((cVar3 == '\0') && (cVar3 = func_0x000144df8cb0(uVar2,iVar10,0x13), cVar3 == '\0')) {
            lVar9 = func_0x000144dfd5e0(lVar11);
            cVar3 = func_0x000144dfd5f0(*(undefined8 *)(lVar9 + 0x20),iVar10,8);
            if (cVar3 == '\0') goto code_r0x000144df0eff;
          }
          uVar6 = func_0x000144da4370(*(undefined1 *)(param_1 + 0xc1));
          FUN_144df8ef0(lVar8,0x18,uVar6,0,uVar4);
          FUN_144df0f80(param_1,iVar10);
          lVar11 = *(longlong *)(param_1 + 0x88);
        }
code_r0x000144df0eff:
        FUN_144df8380(lVar8,lVar11,0x1d,iVar10,uVar4,1);
        iVar10 = iVar10 + 1;
      } while (iVar5 != iVar10);
    }
  }
  return;
}

