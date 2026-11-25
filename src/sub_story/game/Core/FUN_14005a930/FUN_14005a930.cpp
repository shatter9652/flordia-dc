// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005a930  size: 311 bytes
// Name:    FUN_14005a930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14005aa70, FUN_145043da0, FUN_144dbce00, FUN_144e6cf90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005a930(void)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong unaff_GS_OFFSET;
  undefined4 uStack_16;
  undefined2 uStack_12;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar3 = _DAT_14a922a08;
  lVar1 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  uVar2 = FUN_144e6cf90(_DAT_14a922a08);
  lVar3 = *(longlong *)(lVar3 + (ulonglong)uVar2 * 8);
  if ((lVar3 != 0) && ((ushort)(*(short *)(lVar3 + 0x12) - 1U) < _DAT_14a943ab8)) {
    *(undefined1 *)(lVar1 + 0x121a4) = 1;
    uStack_16 = 0xffffffff;
    uStack_12 = 0xffff;
    FUN_144dbce00(lVar1,0,lVar3,&uStack_16,0x107);
  }
  lVar3 = FUN_14005aa70();
  if ((lVar3 != 0) && ((ushort)(*(short *)(lVar3 + 0x12) - 1U) < _DAT_14a943ab8)) {
    *(undefined1 *)(lVar1 + 0x121a4) = 1;
    uStack_16 = 0xffffffff;
    uStack_12 = 0xffff;
    FUN_144dbce00(lVar1,0,lVar3,&uStack_16,0x103);
  }
  lVar3 = FUN_145043da0();
  if ((lVar3 != 0) && ((ushort)(*(short *)(lVar3 + 0x12) - 1U) < _DAT_14a943ab8)) {
    *(undefined1 *)(lVar1 + 0x121a4) = 1;
    uStack_16 = 0xffffffff;
    uStack_12 = 0xffff;
    FUN_144dbce00(lVar1,0,lVar3,&uStack_16,0x103);
  }
  return;
}

