// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fb180  size: 176 bytes
// Name:    FUN_1400fb180
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f97310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fb180(longlong param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  longlong unaff_GS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  uStack_28 = *(undefined4 *)(param_1 + 0x8c);
  uVar1 = *(undefined4 *)(param_1 + 0x88);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    uStack_24 = *(undefined4 *)(param_1 + 0x90);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
  }
  else {
    uStack_24 = *(undefined4 *)(param_1 + 0x90);
  }
  uStack_20 = *(undefined8 *)(param_1 + 0x94);
  FUN_144f97310(param_2,*(undefined8 *)(param_1 + 8),&uStack_28,uVar1);
  do {
    uVar2 = *param_2;
    *param_2 = uVar2 + 1;
    if (*(uint *)(*(longlong *)(param_2 + 2) + 0x3b4) <= uVar2 + 1) {
      return;
    }
    cVar3 = FUN_144f97200(param_2);
  } while (cVar3 == '\0');
  return;
}

