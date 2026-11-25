// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189ad0  size: 382 bytes
// Name:    FUN_140189ad0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140189c50, FUN_14018a240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140189ad0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  longlong lStack_28;
  uint uStack_20;
  uint uStack_1c;
  
  if (param_2 != 0) {
    lStack_28 = param_2;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar2 = *(longlong *)(lVar1 + 0x1400);
    if (lVar2 != 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar2 = *(longlong *)(lVar1 + 0x1400);
      }
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        if ((*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1414) & 1) == 0) {
          uStack_20 = (uint)((ulonglong)(param_1 - *_DAT_1492defc8) /
                            (ulonglong)*(uint *)(_DAT_1492defc8 + 1)) & 0x1ffff;
          uStack_20 = *(uint *)(_DAT_1492defc8[5] + (ulonglong)uStack_20 * 4) & 0xfffe0000 |
                      uStack_20;
          uStack_1c = (uint)((ulonglong)(param_2 - *_DAT_14abb6918) /
                            (ulonglong)*(uint *)(_DAT_14abb6918 + 1)) & 0x1ffff;
          uStack_1c = *(uint *)(_DAT_14abb6918[5] + (ulonglong)uStack_1c * 4) & 0xfffe0000 |
                      uStack_1c;
          FUN_140189c50(&uStack_20,&stack0xffffffffffffffe8);
          goto LAB_140189bf3;
        }
      }
    }
    FUN_14018a240(param_1 + 0x160,&lStack_28);
  }
LAB_140189bf3:
  return param_2 != 0;
}

