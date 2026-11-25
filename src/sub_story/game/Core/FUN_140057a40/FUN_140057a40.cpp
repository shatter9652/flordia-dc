// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140057a40  size: 173 bytes
// Name:    FUN_140057a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e523e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140057a40(uint param_1,int param_2,longlong param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  
  if ((param_3 == 0) || ((*(byte *)(param_3 + 0x34) & 1) != 0)) {
    if (param_1 == 0) {
      lStack_30 = (longlong)param_4;
      lStack_28 = (longlong)param_5;
      uStack_20 = 0x3d1bc246;
      lStack_38 = param_3;
      uVar3 = func_0x000145232960(&lStack_38,0x20);
    }
    else {
      uVar3 = (ulonglong)param_1;
    }
    FUN_144e523e0(&lStack_38,1);
    func_0x000144ea3f00(&lStack_38,uVar3);
    uVar1 = (int)((ulonglong)lStack_38 >> 0x20) + (int)lStack_38 * 0x5cfaa7 & 0x7fffff;
    uVar2 = CONCAT31((int3)(uVar1 >> 8),
                     (float)uVar1 * _DAT_14615af54 <= (float)param_2 * _DAT_146159ef4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

