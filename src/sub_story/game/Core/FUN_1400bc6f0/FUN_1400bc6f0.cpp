// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bc6f0  size: 114 bytes
// Name:    FUN_1400bc6f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1408b94e0, FUN_144f4b590
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400bc6f0(uint param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  
  plVar2 = (longlong *)(ulonglong)param_1;
  lVar1 = FUN_144f4b590(_DAT_14a210cb0);
  if (lVar1 == 0) {
    if (param_3 != '\0') {
      uVar3 = 0;
      goto LAB_1400bc724;
    }
    if (*param_2 == 0) {
      (*(code *)param_2[1])();
    }
    else {
      (*(code *)param_2[1])();
    }
  }
  else {
    if (param_3 != '\0') {
      uVar3 = 0;
      LOCK();
      bVar4 = *(int *)(lVar1 + 0xa0) == 0;
      if (bVar4) {
        *(int *)(lVar1 + 0xa0) = 0;
      }
      UNLOCK();
      if (bVar4) goto LAB_1400bc724;
    }
    lStack_38 = *param_2;
    lStack_30 = param_2[1];
    lStack_28 = param_2[2];
    lStack_20 = param_2[3];
    plVar2 = &lStack_38;
    FUN_1408b94e0();
  }
  uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
LAB_1400bc724:
  return uVar3 & 0xffffffff;
}

