// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140064e00  size: 332 bytes
// Name:    FUN_140064e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eaa660, FUN_140644920, FUN_140644b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140064e00(void)

{
  longlong *plVar1;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_10 [8];
  
  FUN_144eaa660();
  if (_DAT_149dd7c94 != 0) {
    plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1470);
    if ((_DAT_149dd7ca0 & 1) != 0) {
      FUN_140644b10(auStack_10,0);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(undefined **)(*plVar1 + 0x3990) = &UNK_14127e790;
      FUN_140644920(auStack_10);
    }
    if ((_DAT_149dd7ca0 & 2) != 0) {
      FUN_140644b10(auStack_10,1);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(undefined **)(*plVar1 + 0x3990) = &UNK_14127e790;
      FUN_140644920(auStack_10);
    }
    if ((_DAT_149dd7ca0 & 4) != 0) {
      FUN_140644b10(auStack_10,2);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      *(undefined **)(*plVar1 + 0x3990) = &UNK_14127e790;
      FUN_140644920(auStack_10);
    }
  }
  return;
}

