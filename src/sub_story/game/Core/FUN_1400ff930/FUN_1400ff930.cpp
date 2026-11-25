// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff930  size: 277 bytes
// Name:    FUN_1400ff930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ffb50, FUN_1400ffa50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400ff930(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong unaff_GS_OFFSET;
  int iStack_54;
  longlong lStack_50;
  undefined4 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar3 = param_3 & 0xffffffff;
    FUN_1400ffa50(&iStack_54,param_2);
    if (iStack_54 != 0) {
      uStack_48 = 0xffffffff;
      uStack_38 = 1;
      uStack_30 = 0;
      lStack_50 = param_1;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      lVar2 = *(longlong *)(lVar1 + 0x1448);
      if (lVar2 == 0) {
        uStack_30 = 0;
      }
      uStack_2c = 0;
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994(iStack_54);
        lVar2 = *(longlong *)(lVar1 + 0x1448);
      }
      if (lVar2 == 0) {
        uStack_2c = 0;
      }
      uStack_28 = 0;
      lStack_40 = param_2;
      uVar3 = FUN_1400ffb50(iStack_54);
    }
  }
  return uVar3;
}

