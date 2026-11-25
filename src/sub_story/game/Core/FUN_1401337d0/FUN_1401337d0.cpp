// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401337d0  size: 198 bytes
// Name:    FUN_1401337d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401337d0(int param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  
  if (param_1 == param_2) {
LAB_1401337db:
    uVar4 = 1;
  }
  else {
    lVar3 = func_0x000140c5f790();
    if ((lVar3 != 0) && (*(ushort *)(lVar3 + 0x48) != 0)) {
      lVar5 = 0;
      do {
        if (*(int *)(*(longlong *)(lVar3 + 0x40) + lVar5) == param_2) goto LAB_1401337db;
        lVar5 = lVar5 + 4;
      } while ((ulonglong)*(ushort *)(lVar3 + 0x48) * 4 != lVar5);
    }
    lVar5 = func_0x000140c5f790(param_2);
    if (lVar5 != 0) {
      uVar2 = *(ushort *)(lVar5 + 0x48);
      if (uVar2 != 0) {
        uVar6 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar5 + 0x40) + uVar6) == param_1) goto LAB_1401337db;
          uVar6 = uVar6 + 4;
        } while ((uint)uVar2 * 4 != uVar6);
      }
      if (lVar3 != 0) {
        if (*(ushort *)(lVar3 + 0x48) == 0) {
          return 0;
        }
        if (uVar2 == 0) {
          return 0;
        }
        piVar7 = *(int **)(lVar3 + 0x40);
        piVar1 = piVar7 + *(ushort *)(lVar3 + 0x48);
        do {
          lVar3 = 0;
          do {
            if (*piVar7 == *(int *)(*(longlong *)(lVar5 + 0x40) + lVar3)) goto LAB_1401337db;
            lVar3 = lVar3 + 4;
          } while ((ulonglong)uVar2 * 4 != lVar3);
          piVar7 = piVar7 + 1;
          if (piVar7 == piVar1) {
            return 0;
          }
        } while( true );
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

