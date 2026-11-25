// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014b5c0  size: 297 bytes
// Name:    FUN_14014b5c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140034820, FUN_1400746e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_14014b5c0(longlong *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uStack_24;
  longlong lStack_20;
  undefined1 auStack_14 [4];
  
  lStack_20 = 0;
  cVar2 = FUN_140034820();
  if ((((cVar2 != '\0') && (lVar3 = (**(code **)(*param_1 + 0xa8))(param_1), lVar3 != 0)) &&
      (uStack_24 = 0xffffffff, param_2 != 0)) &&
     (cVar2 = FUN_1400746e0(lVar3,param_2,&uStack_24), cVar2 != '\0')) {
    lVar3 = func_0x000144da1090(lVar3,uStack_24,auStack_14);
    uVar5 = (ulonglong)*(uint *)(lStack_20 + 4);
    if (uVar5 != 0) {
      piVar4 = *(int **)(lStack_20 + 8);
      if (-1 < *(short *)(lVar3 + 0x46)) {
        piVar1 = piVar4 + uVar5 * 3;
        do {
          lVar6 = ((longlong)*(short *)(lVar3 + 0x46) - (ulonglong)*(ushort *)(lVar3 + 0x48)) * 0x50
                  + lVar3;
          if (*piVar4 == param_2) {
            return 1;
          }
          do {
            if (*(int *)(lVar6 + 0x1c) == *piVar4) {
              return 1;
            }
          } while ((-1 < (longlong)*(short *)(lVar6 + 0x46)) &&
                  (bVar7 = lVar6 != 0,
                  lVar6 = ((longlong)*(short *)(lVar6 + 0x46) - (ulonglong)*(ushort *)(lVar6 + 0x48)
                          ) * 0x50 + lVar6, bVar7));
          piVar4 = piVar4 + 3;
        } while (piVar4 != piVar1);
        return 0;
      }
      lVar3 = 0;
      do {
        if (*(int *)((longlong)piVar4 + lVar3) == param_2) {
          return 1;
        }
        bVar7 = uVar5 * 0xc + -0xc != lVar3;
        lVar3 = lVar3 + 0xc;
      } while (bVar7);
      return 0;
    }
  }
  return 0;
}

