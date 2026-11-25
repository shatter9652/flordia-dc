// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001ae10  size: 169 bytes
// Name:    FUN_14001ae10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14001e700, FUN_144dfd390, FUN_144dfd190, FUN_14001aec0, FUN_144dff670, FUN_144df0140, FUN_144df7ec0, FUN_14001b040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001ae10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  FUN_14001b040();
  FUN_144df0140(*(undefined8 *)(param_1 + 0x88));
  FUN_14001aec0(*(undefined8 *)(param_1 + 0x88));
  FUN_144dfd390(param_1);
  FUN_144dff670(param_1);
  FUN_144dfd190(param_1);
  FUN_14001e700(*(undefined8 *)(param_1 + 0x88));
  FUN_144df7ec0(param_1);
  cVar3 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x240));
  if ((cVar3 == '\0') &&
     ((((lVar2 = **(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20) + 0x3b30),
        *(char *)(lVar2 + 0x79) != -1 || (*(char *)(lVar2 + 0x7e) != -1)) ||
       (*(char *)(lVar2 + 0x7a) != -1)) || (*(char *)(lVar2 + 0x7c) != -1)))) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x80) + 0x24);
    cVar3 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x239));
    iVar6 = iVar1;
    if (cVar3 != '\0') {
      iVar6 = func_0x000144dfd1f0(*(undefined8 *)(param_1 + 0x88));
      iVar6 = iVar6 + 1;
    }
    lVar2 = *(longlong *)(param_1 + 0x88);
    iVar11 = 0;
    cVar3 = func_0x000144df8330(lVar2,9);
    if ((cVar3 != '\0') || (cVar3 = func_0x000144df8330(lVar2,10), iVar12 = iVar11, cVar3 != '\0'))
    {
      lVar10 = *(longlong *)(param_1 + 0x80);
      if ((*(byte *)(lVar2 + 0x6384) & 2) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = func_0x000144da4370(*(undefined1 *)(param_1 + 0xc1));
      }
      iVar12 = iVar6;
      if (0 < iVar6) {
        do {
          puVar8 = (undefined4 *)func_0x000144df8320(*(undefined8 *)(lVar10 + 0x158),iVar11);
          FUN_144df8660(param_1,puVar8,0x1b,1);
          uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x5ea0);
          cVar3 = func_0x000144df8cb0(uVar9,iVar11,9);
          cVar5 = func_0x000144df8cb0(uVar9,iVar11,10);
          if ((cVar3 != '\0') || (cVar5 != '\0')) {
            uVar9 = FUN_144df8970(*(undefined4 *)(lVar10 + 0x20),*(undefined8 *)(lVar10 + 0x30),
                                  *puVar8);
            uVar7 = func_0x000144da4370(*(undefined1 *)(param_1 + 0xc1));
            FUN_144df8ef0(uVar9,0x1b,uVar7,0,uVar4);
            FUN_144df8d30(param_1,iVar11);
          }
          iVar11 = iVar11 + 1;
        } while (iVar6 != iVar11);
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar10 = func_0x000144df8960(*(undefined8 *)(lVar2 + 0x10));
    cVar3 = func_0x000144df8950(*(undefined4 *)(lVar10 + 4));
    if ((iVar12 < iVar1) && (cVar3 == '\0')) {
      do {
        uVar9 = func_0x000144df8320(*(undefined8 *)(lVar2 + 0x158),iVar12);
        FUN_144df8660(param_1,uVar9,0x1b,0,unaff_RBX,unaff_RDI,unaff_RSI,unaff_R14,unaff_R15);
        iVar12 = iVar12 + 1;
      } while (iVar1 != iVar12);
    }
    return;
  }
  return;
}

