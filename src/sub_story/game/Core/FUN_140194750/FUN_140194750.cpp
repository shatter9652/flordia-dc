// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194750  size: 154 bytes
// Name:    FUN_140194750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452cd000, FUN_14079f960, FUN_1452cda60, FUN_140194900
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140194750(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [64];
  
  auVar7 = ZEXT464(_DAT_145fc6f48);
  uVar6 = (ulonglong)_DAT_145fc6f48;
  if (param_1 != (longlong *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x160))();
    lVar4 = FUN_1452cd000(uVar3,0xcff74a31);
    uVar6 = auVar7._0_8_;
    if ((lVar4 != 0) &&
       ((lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 8), lVar1 == 0 ||
        ((*(byte *)(lVar1 + 4) & 1) == 0)))) {
      cVar2 = FUN_14079f960(lVar4);
      if (cVar2 != '\0') {
        FUN_140194900(lVar4);
      }
      uVar3 = *(undefined8 *)(lVar4 + 0x48);
      uVar5 = func_0x0001452cda10(*(undefined8 *)(lVar4 + 0x40));
      FUN_1452cda60(uVar3,uVar5,1,1);
      uVar6 = (ulonglong)*(uint *)(lVar4 + 0x70);
    }
  }
  return uVar6;
}

