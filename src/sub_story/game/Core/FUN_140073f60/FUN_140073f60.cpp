// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140073f60  size: 147 bytes
// Name:    FUN_140073f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140073f60(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [64];
  
  lVar4 = func_0x000144e23bb0(param_2);
  uVar1 = _DAT_145fc6ed8;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(&UNK_14617a8a0 + (ulonglong)((*(byte *)(lVar4 + 0x10) & 1) == 0) * 4);
  }
  auVar6 = ZEXT464(uVar1);
  iVar3 = func_0x000144e23950(param_2);
  if (iVar3 == 6) {
    auVar6 = ZEXT464((uint)(auVar6._0_4_ * _DAT_145fc6f88));
  }
  cVar2 = func_0x000144e72530(param_2);
  uVar5 = auVar6._0_8_;
  if (cVar2 != '\0') {
    if (*(uint *)(param_1 + 0x1c8) - 3 < 2) {
      uVar5 = (ulonglong)(uint)(auVar6._0_4_ * _DAT_145fc6edc);
    }
    else if (*(uint *)(param_1 + 0x1c8) < 2) {
      uVar5 = (ulonglong)(uint)(auVar6._0_4_ * _DAT_146159cc0);
    }
  }
  return uVar5;
}

