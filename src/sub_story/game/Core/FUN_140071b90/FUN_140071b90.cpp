// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071b90  size: 205 bytes
// Name:    FUN_140071b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed3290
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140071b90(void)

{
  uint uVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  undefined1 auStack_1c [4];
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar1 = *(uint *)(lVar2 + 0x12d8);
  if ((uVar1 & 6) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      uVar1 = *(uint *)(lVar2 + 0x12d8);
    }
    lVar2 = 0x58;
    if ((uVar1 & 0x20) == 0) goto LAB_140071bf5;
  }
  lVar2 = 0x5c;
LAB_140071bf5:
  lVar2 = (longlong)*(int *)(lVar2 + 0x14a210cb8) * 0x730;
  uStack_18 = *(undefined8 *)(lVar2 + 0x14a94bca0);
  uStack_10 = *(undefined8 *)(lVar2 + 0x14a94bca8);
  _DAT_1492e11b0 = FUN_144ed3290(&uStack_18,auStack_1c,0,0,0);
  return;
}

