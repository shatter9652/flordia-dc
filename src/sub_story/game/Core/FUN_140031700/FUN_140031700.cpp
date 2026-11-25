// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140031700  size: 146 bytes
// Name:    FUN_140031700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140031700(undefined4 param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong unaff_GS_OFFSET;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = param_2 & 0xff;
  uStack_24 = param_1;
  uStack_1c = param_3;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar3 = _DAT_14ab1a4de;
  if (_DAT_14ab1a4de != 0) {
    uVar2 = _DAT_14ab1a4de >> 2;
    lVar1 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    uVar4 = func_0x000144e3d460(lVar1,_DAT_14ab1a4de,&uStack_24,0xc);
    func_0x000144da8e20(lVar1,uVar3,uVar4);
    *(undefined2 *)(lVar1 + 0x70c0 + (ulonglong)uVar2 * 2) = 0;
  }
  return;
}

