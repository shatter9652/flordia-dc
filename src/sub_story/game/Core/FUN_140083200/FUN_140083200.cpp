// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083200  size: 108 bytes
// Name:    FUN_140083200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144efb210
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140083200(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  undefined7 uVar6;
  
  lVar3 = FUN_144efb210(param_2);
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18c);
    cVar2 = func_0x000140083270(iVar1);
    if ((cVar2 != '\0') ||
       ((lVar4 = func_0x0001408e7d50(*(undefined4 *)(lVar3 + 0x184)), lVar4 != 0 &&
        (0 < *(int *)(lVar4 + 0x204))))) {
      lVar4 = FUN_144efb210(*(undefined4 *)(param_1 + 0x9c));
      uVar5 = CONCAT71(uVar6,iVar1 == 5 || lVar4 == lVar3);
    }
  }
  return uVar5 & 0xffffffff;
}

