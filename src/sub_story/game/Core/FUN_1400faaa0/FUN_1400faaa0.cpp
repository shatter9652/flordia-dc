// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400faaa0  size: 275 bytes
// Name:    FUN_1400faaa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401d7580, FUN_1400fa100, FUN_144f96310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_1400faaa0(undefined8 param_1,longlong *param_2,longlong param_3,longlong param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong unaff_GS_OFFSET;
  undefined4 uStack_2c;
  
  lVar2 = *(longlong *)(param_3 + 0x10);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar3 = _DAT_1487703a0;
  if (*(int *)(param_4 + 0x28 + (longlong)param_5 * 4) == 0) {
    lVar6 = 0;
    lVar7 = lVar2;
  }
  else {
    uVar1 = *(undefined4 *)(param_4 + 0x128 + (longlong)param_5 * 4);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994(_DAT_1487703a0);
    }
    uStack_2c = uVar1;
    lVar5 = FUN_1400fa100(uVar3,&uStack_2c,lVar2);
    lVar7 = lVar5;
    if (lVar5 == 0) {
      lVar7 = lVar2;
    }
    lVar6 = 0;
    if (lVar5 != lVar2) {
      lVar6 = lVar5;
    }
  }
  cVar4 = FUN_1401d7580(*(undefined8 *)(lVar7 + 0x10),*(undefined2 *)(lVar7 + 0x18),0x99177ad3);
  if (cVar4 == '\0') {
    lVar6 = func_0x000144f97130(0x38);
    uVar8 = 1;
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_144f96310(lVar6,lVar7);
    }
  }
  else {
    uVar8 = 0;
  }
  *param_2 = lVar6;
  *(undefined1 *)(param_2 + 1) = uVar8;
  return param_2;
}

