// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400be110  size: 178 bytes
// Name:    FUN_1400be110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f4ec40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400be110(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auVar6 [64];
  
  if (((param_2 != 0) && (uVar4 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0, uVar4 != 0)) &&
     (*(char *)(uVar4 + 0x30) == '\x04')) {
    iVar3 = *(int *)(param_2 + 0x1414);
    if (0 < iVar3) {
      auVar6 = ZEXT464(_DAT_145fc6ed8);
      lVar5 = 0;
      do {
        lVar1 = func_0x000144ef6cc0(*(undefined2 *)(param_2 + 0x1418 + lVar5 * 2));
        if (lVar1 != 0) {
          lVar2 = func_0x000144ef6cb0(*(undefined4 *)(lVar1 + 0x270));
          if (lVar2 != 0) {
            FUN_144f4ec40(lVar1 + 0x90,lVar1,uVar4,auVar6._0_8_,0,0x3f800000);
            iVar3 = *(int *)(param_2 + 0x1414);
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar3);
    }
  }
  return;
}

