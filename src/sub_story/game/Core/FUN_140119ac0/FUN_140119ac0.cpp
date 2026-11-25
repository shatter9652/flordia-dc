// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140119ac0  size: 289 bytes
// Name:    FUN_140119ac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dbce00, FUN_1453f9fa0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140119ac0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_GS_OFFSET;
  undefined4 uStack_18;
  undefined2 uStack_14;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar4 = *(longlong *)(lVar3 + 0x12a8);
  if (*(char *)(lVar4 + 0x1237c) == '\x01') {
    *(undefined1 *)(lVar4 + 0x1237c) = 0;
  }
  plVar1 = (longlong *)(lVar3 + 0x12a8);
  if ((char)param_1[1] == '\x01') {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar4 = *plVar1;
    }
    FUN_1453f9fa0(lVar4);
  }
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar3 = *param_1;
    }
    lVar4 = *(longlong *)(lVar3 + 8);
    if ((ushort)(*(short *)(lVar4 + 0x12) - 1U) < _DAT_14a943ab8) {
      uStack_14 = *(undefined2 *)(lVar3 + 0x1c);
      lVar2 = *plVar1;
      uStack_18 = *(undefined4 *)(lVar3 + 0x18);
      *(undefined1 *)(lVar2 + 0x121a4) = 1;
      FUN_144dbce00(lVar2,0,lVar4,&uStack_18,0x103);
    }
  }
  return;
}

