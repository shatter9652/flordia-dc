// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2530  size: 173 bytes
// Name:    FUN_1400b2530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1431bcf50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b2530(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  ulonglong uVar1;
  longlong unaff_GS_OFFSET;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    uVar1 = param_2 & 0xffffffff;
    func_0x0001455db994();
    uStack_2a = 1;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994(param_1,uVar1,param_3,param_4);
      uVar1 = param_2 & 0xffffffff;
    }
  }
  else {
    uStack_2a = 1;
    uVar1 = param_2;
  }
  uStack_29 = *param_5;
  FUN_1431bcf50(param_1,uVar1,param_3,param_4,&uStack_2a,&uStack_29);
  return;
}

