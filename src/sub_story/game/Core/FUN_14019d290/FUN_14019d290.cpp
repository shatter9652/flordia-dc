// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019d290  size: 616 bytes
// Name:    FUN_14019d290
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144375410, FUN_1443755b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019d290(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  ushort uStack_6a;
  int aiStack_68 [16];
  
  if (*(ushort *)(param_1 + 2) != 0) {
    plVar5 = *(longlong **)(param_1 + 8);
    lVar3 = (ulonglong)*(ushort *)(param_1 + 2) << 4;
    do {
      if (*plVar5 == param_2) {
        uVar6 = (ulonglong)*(uint *)(param_3 + 1);
        if (uVar6 != 0) {
          uVar2 = *(ushort *)((longlong)plVar5 + 10);
          if (uVar2 == 0) {
            uVar2 = *(ushort *)(param_1 + 0x52);
            *(ushort *)(plVar5 + 1) = uVar2;
            FUN_144375410(param_1 + 0x50,(ulonglong)uVar2 * 4 + *(longlong *)(param_1 + 0x58),
                          *param_3,*param_3 + uVar6 * 4);
            *(short *)((longlong)plVar5 + 10) =
                 *(short *)((longlong)plVar5 + 10) + (short)param_3[1];
          }
          else {
            uVar4 = 0;
            lVar3 = (ulonglong)*(ushort *)(plVar5 + 1) * 4 + *(longlong *)(param_1 + 0x58);
            uStack_6a = 0;
            piVar7 = (int *)*param_3;
            piVar1 = piVar7 + uVar6;
            do {
              lVar8 = 0;
              do {
                if (*(int *)(lVar3 + lVar8) == *piVar7) goto LAB_14019d32b;
                lVar8 = lVar8 + 4;
              } while ((ulonglong)uVar2 * 4 != lVar8);
              uVar6 = (ulonglong)uVar4;
              uVar4 = uVar4 + 1;
              aiStack_68[uVar6] = *piVar7;
              uStack_6a = uVar4;
LAB_14019d32b:
              piVar7 = piVar7 + 1;
            } while (piVar7 != piVar1);
            if (uVar4 != 0) {
              FUN_144375410(param_1 + 0x50,lVar3,aiStack_68,aiStack_68 + uVar4);
              *(short *)((longlong)plVar5 + 10) = *(short *)((longlong)plVar5 + 10) + uStack_6a;
              uVar2 = *(ushort *)(param_1 + 2);
              if (uVar2 != 0) {
                lVar3 = *(longlong *)(param_1 + 8);
                lVar8 = 0;
                do {
                  if ((*(short *)(lVar3 + 10 + lVar8) != 0) &&
                     (uVar4 = *(ushort *)(lVar3 + 8 + lVar8), *(ushort *)(plVar5 + 1) < uVar4)) {
                    *(ushort *)(lVar3 + 8 + lVar8) = uVar4 + uStack_6a;
                  }
                  lVar8 = lVar8 + 0x10;
                } while ((ulonglong)uVar2 * 0x10 != lVar8);
              }
            }
          }
        }
        uVar6 = (ulonglong)*(uint *)(param_4 + 1);
        if (uVar6 == 0) {
          return;
        }
        uVar2 = *(ushort *)((longlong)plVar5 + 0xe);
        if (uVar2 == 0) {
          uVar2 = *(ushort *)(param_1 + 0x92);
          *(ushort *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1443755b0(param_1 + 0x90,(ulonglong)uVar2 * 4 + *(longlong *)(param_1 + 0x98),*param_4
                        ,*param_4 + uVar6 * 4);
          *(short *)((longlong)plVar5 + 0xe) =
               *(short *)((longlong)plVar5 + 0xe) + (short)param_4[1];
          return;
        }
        uVar4 = 0;
        lVar3 = (ulonglong)*(ushort *)((longlong)plVar5 + 0xc) * 4 + *(longlong *)(param_1 + 0x98);
        uStack_6a = 0;
        piVar7 = (int *)*param_4;
        piVar1 = piVar7 + uVar6;
        do {
          lVar8 = 0;
          do {
            if (*(int *)(lVar3 + lVar8) == *piVar7) goto LAB_14019d450;
            lVar8 = lVar8 + 4;
          } while ((ulonglong)uVar2 * 4 != lVar8);
          uVar6 = (ulonglong)uVar4;
          uVar4 = uVar4 + 1;
          aiStack_68[uVar6] = *piVar7;
          uStack_6a = uVar4;
LAB_14019d450:
          piVar7 = piVar7 + 1;
          if (piVar7 == piVar1) {
            if (uVar4 == 0) {
              return;
            }
            FUN_1443755b0(param_1 + 0x90,lVar3,aiStack_68,aiStack_68 + uVar4);
            *(short *)((longlong)plVar5 + 0xe) = *(short *)((longlong)plVar5 + 0xe) + uStack_6a;
            uVar2 = *(ushort *)(param_1 + 2);
            if (uVar2 == 0) {
              return;
            }
            lVar3 = *(longlong *)(param_1 + 8);
            lVar8 = 0;
            do {
              if ((*(short *)(lVar3 + 0xe + lVar8) != 0) &&
                 (uVar4 = *(ushort *)(lVar3 + 0xc + lVar8),
                 *(ushort *)((longlong)plVar5 + 0xc) < uVar4)) {
                *(ushort *)(lVar3 + 0xc + lVar8) = uVar4 + uStack_6a;
              }
              lVar8 = lVar8 + 0x10;
            } while ((ulonglong)uVar2 * 0x10 != lVar8);
            return;
          }
        } while( true );
      }
      plVar5 = plVar5 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  return;
}

