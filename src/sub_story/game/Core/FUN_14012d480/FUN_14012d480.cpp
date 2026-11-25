// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012d480  size: 207 bytes
// Name:    FUN_14012d480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012d9c0, FUN_1401307a0, FUN_14012d760, FUN_14012d550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012d480(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int aiStack_28 [4];
  
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(short *)(param_1 + 0x20) != 0)) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar1 = *(ushort *)(param_1 + 0x20);
        if ((ulonglong)uVar1 != 0) {
          lVar7 = 0;
          do {
            piVar3 = *(int **)(*(longlong *)(param_1 + 0x18) + 0xb0 + lVar7);
            if ((((*(longlong *)(piVar3 + 6) == 0) && (*piVar3 != 0)) &&
                ((*(byte *)(piVar3 + 10) & 1) == 0)) && (cVar4 = FUN_14012d630(), cVar4 == '\0')) {
              return;
            }
            lVar7 = lVar7 + 0xb8;
          } while ((ulonglong)uVar1 * 0xb8 - lVar7 != 0);
        }
        *(undefined1 *)(param_1 + 0x28) = 1;
      }
      return;
    }
    FUN_14012d760(param_1);
    FUN_14012d550(*(undefined8 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x20));
    FUN_14012d9c0(param_1);
    lVar7 = *(longlong *)(param_1 + 0x48);
    if (lVar7 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x40);
      lVar5 = func_0x00014012d970(*(undefined4 *)(lVar6 + 200));
      if ((lVar5 == 0) ||
         ((*(int *)(*(longlong *)(lVar5 + 0x50) + 0x118) == 0 &&
          (*(int *)(*(longlong *)(lVar5 + 0x50) + 0x120) == 0)))) {
        if ((*(char *)(param_1 + 0x50) == '\0') &&
           (*(longlong *)(lVar6 + 0x48) == *(longlong *)(lVar7 + 0xb0))) {
          *(undefined1 *)(param_1 + 0x50) = 1;
          FUN_1401307a0(lVar7,0);
          lVar6 = *(longlong *)(param_1 + 0x40);
          lVar7 = *(longlong *)(param_1 + 0x48);
        }
        piVar3 = *(int **)(lVar7 + 0xb0);
        if (piVar3 != (int *)0x0) {
          iVar2 = *piVar3;
          if (*(int **)(lVar6 + 0x48) == (int *)0x0) {
            func_0x0001406f8830(aiStack_28);
          }
          else {
            aiStack_28[0] = **(int **)(lVar6 + 0x48);
          }
          if (aiStack_28[0] == iVar2) {
            FUN_14012d660();
          }
          else if ((*(int **)(lVar6 + 0x58) == (int *)0x0) || (**(int **)(lVar6 + 0x58) != iVar2)) {
            FUN_14012d660();
            *(int **)(lVar6 + 0x58) = piVar3;
            *(longlong *)(piVar3 + 8) = lVar6;
            *(undefined1 *)(lVar6 + 0x2d) = 0;
          }
        }
        return;
      }
    }
  }
  return;
}

