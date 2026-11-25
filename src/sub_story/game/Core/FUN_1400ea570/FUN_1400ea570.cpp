// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ea570  size: 150 bytes
// Name:    FUN_1400ea570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f68bd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ea570(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar5 = *(undefined4 *)(param_1 + 0x9c);
  lVar3 = func_0x000145226dc0(uVar5);
  if ((lVar3 != 0) && (uVar1 = *(uint *)(lVar3 + 0x664), uVar1 != 0x1ffff)) {
    uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if (((~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
       (((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000) && (lVar3 = *_DAT_14abb6918, lVar3 != 0)))) {
      uVar4 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]);
      uVar5 = *(undefined4 *)(lVar3 + 0x9c + uVar4);
      param_1 = lVar3 + uVar4;
    }
  }
  uStack_28 = *(undefined8 *)(param_1 + 0x70);
  uStack_20 = *(undefined8 *)(param_1 + 0x78);
  FUN_144f68bd0(&uStack_28,uVar5,0x1f);
  return;
}

