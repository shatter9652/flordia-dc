// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140193ff0  size: 202 bytes
// Name:    FUN_140193ff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140194110, FUN_144f8eca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140193ff0(undefined8 param_1,undefined8 param_2,int param_3,longlong *param_4,
                  longlong param_5,undefined1 param_6)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_5 + 8) - param_3;
  if (_DAT_149c3e0b8 <= (uint)(_DAT_149c3e0b0 + iVar9)) {
    FUN_140194110(0);
  }
  lVar5 = FUN_144f8eca0();
  cVar4 = (**(code **)(**(longlong **)(lVar5 + 0x10) + 0x230))
                    (*(longlong **)(lVar5 + 0x10),lVar5,param_1,param_2,param_3,param_4,param_5,
                     param_6);
  lVar5 = _DAT_149c3e070;
  if (cVar4 == '\0') {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  _DAT_149c3e0b0 = _DAT_149c3e0b0 + iVar9;
  uVar1 = *(uint *)(param_4 + 1);
  if ((ulonglong)uVar1 != 0) {
    uVar6 = (ulonglong)DAT_149c3e0bc;
    lVar2 = *param_4;
    lVar8 = 0;
    lVar7 = *(longlong *)(_DAT_149c3e070 + uVar6 * 8);
    do {
      lVar7 = lVar7 + *(longlong *)(lVar2 + 8 + lVar8);
      lVar8 = lVar8 + 0x10;
      *(longlong *)(lVar5 + uVar6 * 8) = lVar7;
    } while ((ulonglong)uVar1 << 4 != lVar8);
  }
  return;
}

