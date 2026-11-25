// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077110  size: 140 bytes
// Name:    FUN_140077110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140077110(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  
  uVar4 = *(uint *)((longlong)param_1 + 0x54);
  do {
    if (uVar4 == 0) {
LAB_14007711c:
      *(undefined4 *)((longlong)param_1 + 0x54) = 0;
      return;
    }
    iVar2 = *(int *)param_1[0xb];
    (**(code **)(*param_1 + 0x30))(param_1,iVar2,0x1c);
    func_0x0001400771a0(iVar2);
    uVar3 = *(uint *)((longlong)param_1 + 0x54);
    if ((ulonglong)uVar3 == 0) goto LAB_14007711c;
    lVar6 = (ulonglong)uVar3 * 4;
    piVar5 = (int *)param_1[0xb];
    do {
      if (*piVar5 == iVar2) {
        uVar4 = uVar3 - 1;
        piVar1 = (int *)param_1[0xb] + uVar4;
        if (piVar1 != piVar5) {
          *piVar5 = *piVar1;
          uVar4 = *(int *)((longlong)param_1 + 0x54) - 1;
        }
        *(uint *)((longlong)param_1 + 0x54) = uVar4;
        break;
      }
      piVar5 = piVar5 + 1;
      lVar6 = lVar6 + -4;
      uVar4 = 1;
    } while (lVar6 != 0);
  } while( true );
}

