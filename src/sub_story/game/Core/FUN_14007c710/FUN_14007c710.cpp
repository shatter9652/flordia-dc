// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007c710  size: 108 bytes
// Name:    FUN_14007c710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007c710(uint param_1)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar5 = _DAT_14764fb90;
  if ((((_DAT_14764fb90 != 0) && ((int)param_1 < *(int *)(_DAT_14764fb90 + 0x18))) &&
      ((*(uint *)(*(longlong *)(_DAT_14764fb90 + 0x40) + (ulonglong)(param_1 >> 5) * 4) >>
        (param_1 & 0x1f) & 1) != 0)) && (*(longlong *)(_DAT_14764fb90 + 0x10) != 0)) {
    uVar6 = (longlong)(int)param_1 * *(ulonglong *)(_DAT_14764fb90 + 0x28);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = *(ulonglong *)(_DAT_14764fb90 + 0x28);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar6;
    func_0x000144ea5b80(_DAT_14764fb90,*(longlong *)(_DAT_14764fb90 + 0x10) + uVar6);
    bVar4 = SUB161(auVar3 / auVar2,0) & 0x1f;
    puVar1 = (uint *)(*(longlong *)(lVar5 + 0x40) + (ulonglong)(SUB164(auVar3 / auVar2,0) >> 5) * 4)
    ;
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  return;
}

