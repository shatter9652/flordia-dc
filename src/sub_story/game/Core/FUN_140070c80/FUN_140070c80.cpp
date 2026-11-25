// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070c80  size: 119 bytes
// Name:    FUN_140070c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140070c80(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lStack_38;
  undefined8 uStack_30;
  longlong lStack_28;
  code *pcStack_20;
  
  if (_DAT_14a942bd0 != 0 || _DAT_14a942bc0 != 0) {
    lStack_38 = _DAT_14a942bc0;
    uStack_30 = uRam000000014a942bc8;
    lStack_28 = _DAT_14a942bd0;
    pcStack_20 = pcRam000000014a942bd8;
    (*pcRam000000014a942bd8)(&lStack_38,param_1);
  }
  lVar2 = *param_1;
  if (*(short *)(lVar2 + 0x40) != 0) {
    plVar4 = param_1 + 1;
    uVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x38) + uVar3 * 8);
      (**(code **)(*plVar1 + 0x10))(plVar1,plVar4);
      lVar2 = *param_1;
      uVar3 = uVar3 + 1;
      plVar4 = (longlong *)((longlong)plVar4 + 0xc);
    } while (uVar3 < *(ushort *)(lVar2 + 0x40));
  }
  *(undefined1 *)((longlong)param_1 + 0x2c3) = 2;
  return;
}

