// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140066080  size: 239 bytes
// Name:    FUN_140066080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f61f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140066080(longlong *param_1,longlong *param_2,undefined8 *param_3,byte param_4,int param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong unaff_GS_OFFSET;
  undefined4 uStack_34;
  
  func_0x000144f61f00(&uStack_34);
  uVar4 = FUN_144f61f30(uStack_34);
  *param_3 = uVar4;
  lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  plVar3 = *(longlong **)(lVar2 + 0x1478);
  param_3[2] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *(bool *)((longlong)param_3 + 0x21) = *(char *)((longlong)plVar3 + 0x11) != '\0';
    *(char *)(param_3 + 4) = (char)plVar3[2];
    (**(code **)(*plVar3 + 0xa8))(plVar3,param_3);
    param_4 = param_4 | *(char *)((longlong)plVar3 + 0x11) != '\0';
  }
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1);
  }
  param_3[1] = param_1;
  param_3[3] = param_2;
  if (param_4 != 0) {
    *(undefined1 *)(param_2 + 2) = 2;
    cVar1 = *(char *)((longlong)param_2 + 0x11);
    *(char *)((longlong)param_2 + 0x11) = cVar1 + '\x01';
    (**(code **)(*param_2 + 0x90))(param_2,cVar1 == '\0');
    if (cVar1 == '\0') {
      if (param_5 == 0) {
        LOCK();
        UNLOCK();
        param_5 = _DAT_1498c1934 + 1;
        _DAT_1498c1934 = _DAT_1498c1934 + 1;
      }
      *(int *)((longlong)param_2 + 0x14) = param_5;
    }
  }
  *(longlong **)(lVar2 + 0x1478) = param_2;
  return;
}

