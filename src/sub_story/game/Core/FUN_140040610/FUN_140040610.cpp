// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140040610  size: 131 bytes
// Name:    FUN_140040610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140040580, FUN_144e59360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140040610(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 auVar5 [64];
  
  iVar1 = FUN_144e59360();
  iVar2 = func_0x000144e4bcc0(*(undefined4 *)(*(longlong *)(_DAT_14abbeef0 + 0x20) + 0x5c),
                              *(undefined4 *)(*(longlong *)(_DAT_14abbeef0 + 0x20) + 0x58));
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  if (_DAT_149283b60 != 0) {
    iVar2 = func_0x000144e59390(*(undefined4 *)(_DAT_149283b60 + 0x10));
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
  }
  if (*(int *)(_DAT_14abb6918 + 0xc) < iVar1) {
    iVar1 = *(int *)(_DAT_14abb6918 + 0xc);
  }
  iVar2 = func_0x000144e59350();
  auVar5._8_56_ = extraout_var;
  auVar5._0_8_ = extraout_XMM0_Qa;
  auVar5 = ZEXT1664(CONCAT124(auVar5._4_12_,(float)(iVar1 - iVar2)));
  fVar4 = (float)FUN_140040580();
  uVar3 = (uint)(fVar4 * auVar5._0_4_);
  return ~((int)uVar3 >> 0x1f) & uVar3;
}

