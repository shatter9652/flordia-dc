// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401941b0  size: 152 bytes
// Name:    FUN_1401941b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451d2410, FUN_140194110, FUN_144f8eca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401941b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = FUN_1451d2410(param_1,param_2,param_5);
  if (_DAT_149c3e0b8 <= (uint)(_DAT_149c3e0b0 + iVar4)) {
    FUN_140194110(0);
  }
  lVar5 = FUN_144f8eca0();
  cVar3 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x228))
                    (*(longlong **)(lVar5 + 0x10),lVar5,param_1,param_2,param_3,param_4,param_5);
  if (cVar3 == '\0') {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  _DAT_149c3e0b0 = _DAT_149c3e0b0 + iVar4;
  plVar1 = (longlong *)(_DAT_149c3e070 + (ulonglong)DAT_149c3e0bc * 8);
  *plVar1 = *plVar1 + param_5;
  return;
}

