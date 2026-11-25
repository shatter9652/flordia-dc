// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077720  size: 138 bytes
// Name:    FUN_140077720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14075def0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140077720(longlong *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  int *piVar5;
  longlong lVar6;
  
  piVar1 = (int *)param_1[0xb];
  uVar3 = *(uint *)((longlong)param_1 + 0x54);
  uVar4 = (ulonglong)uVar3;
  piVar5 = piVar1;
  if (uVar4 == 0) {
LAB_140077748:
    if (piVar5 != piVar1 + uVar4) {
      if (piVar1 + (uVar3 - 1) != piVar5) {
        *piVar5 = piVar1[uVar3 - 1];
        uVar3 = *(uint *)((longlong)param_1 + 0x54);
      }
      uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      *(uint *)((longlong)param_1 + 0x54) = uVar3 - 1;
      if (uVar3 - 1 == 0 && *(int *)((longlong)param_1 + 0x44) == 0) {
        FUN_14075def0(param_1,param_3);
        cVar2 = (**(code **)(*param_1 + 0x70))(param_1);
        if (cVar2 != '\0') {
          (**(code **)(*param_1 + 0x60))(param_1);
        }
      }
      goto LAB_140077793;
    }
  }
  else {
    lVar6 = uVar4 * 4;
    do {
      if (*piVar5 == param_2) goto LAB_140077748;
      piVar5 = piVar5 + 1;
      lVar6 = lVar6 + -4;
    } while (lVar6 != 0);
  }
  uVar4 = 0;
LAB_140077793:
  return uVar4 & 0xffffffff;
}

