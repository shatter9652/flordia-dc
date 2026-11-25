// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007c7c0  size: 151 bytes
// Name:    FUN_14007c7c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007c7c0(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong unaff_GS_OFFSET;
  undefined1 auVar5 [16];
  
  lVar4 = func_0x000144dccaf0(param_2);
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0x7e4);
    if (*(int *)(lVar4 + 0x7e4) < *(int *)(param_1 + 0x248)) {
      iVar3 = *(int *)(param_1 + 0x248);
    }
    *(int *)(param_1 + 0x248) = iVar3;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uVar2 = _DAT_145fc6ed8;
    uVar1 = *param_3;
    lVar4 = (longlong)*(int *)(param_1 + 0x240) * 0x10;
    *(int *)(param_1 + 0x240) = *(int *)(param_1 + 0x240) + 1;
    *(undefined8 *)(param_1 + 0x40 + lVar4) = uVar1;
    auVar5 = vcvtps2ph_f16c(ZEXT416(uVar2),3);
    *(uint *)(param_1 + 0x48 + lVar4) = (uint)auVar5._0_2_ | param_2 << 0x10;
  }
  return;
}

