// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140193290  size: 229 bytes
// Name:    FUN_140193290
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141fab6e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140193290(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  bool bVar9;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    lVar5 = (longlong)_DAT_14a210d10 * 0x38;
    *(undefined8 *)(lVar5 + 0x14a9d60e8) = *param_2;
    *(undefined8 *)(lVar5 + 0x14a9d60f0) = uVar1;
    uVar1 = param_2[3];
    uVar2 = param_2[4];
    uVar3 = param_2[5];
    *(undefined8 *)(lVar5 + 0x14a9d60f8) = param_2[2];
    *(undefined8 *)(lVar5 + 0x14a9d6100) = uVar1;
    *(undefined8 *)(lVar5 + 0x14a9d6108) = uVar2;
    *(undefined8 *)(lVar5 + 0x14a9d6110) = uVar3;
    cVar8 = (char)*(undefined4 *)((longlong)param_2 + 0x34);
    *(char *)(lVar5 + 0x14a9d611c) = cVar8;
    *(undefined4 *)(lVar5 + 0x14a9d6118) = *(undefined4 *)(param_2 + 6);
    bVar9 = DAT_14a9d6158 == '\0';
    DAT_14a9d6158 = '\x01';
    if (bVar9) {
      DAT_14a9d6158 = cVar8;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x24c);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x250) + uVar7 * 8);
      if (lVar5 != 0) {
        if (_DAT_14a9d6174 == _DAT_14a9d6170) {
          uVar4 = 1;
          if (1 < _DAT_14a9d6174) {
            uVar4 = _DAT_14a9d6174 >> 1;
          }
          FUN_141fab6e0(uVar4 + _DAT_14a9d6174);
        }
        uVar6 = (ulonglong)_DAT_14a9d6174;
        _DAT_14a9d6174 = _DAT_14a9d6174 + 1;
        *(longlong *)(_DAT_14a9d6178 + uVar6 * 8) = lVar5;
        uVar4 = *(uint *)(param_1 + 0x24c);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar4);
  }
  return;
}

