// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140039bd0  size: 118 bytes
// Name:    FUN_140039bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140039bd0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [64];
  uint uStack_c;
  
  auVar3 = ZEXT1264(ZEXT812(0));
  iVar2 = (param_2 << 7) >> 0x19;
  if (iVar2 != 1) {
    if ((iVar2 == 2) || (iVar2 == 6)) {
      return (ulonglong)_DAT_145fc6ed8;
    }
    if (1 < iVar2 - 3U) {
      return 0;
    }
  }
  lVar1 = func_0x000144e2a2d0(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
    lVar1 = func_0x000144f124c0(*(longlong *)(lVar1 + 0x30),0);
    uStack_c = 0xbf800000;
    FUN_145146ab0(lVar1 + 0x80 + (ulonglong)*(uint *)(lVar1 + 0x78) * 0x30,0xe02034b9,&uStack_c);
    return (ulonglong)uStack_c;
  }
  return auVar3._0_8_;
}

