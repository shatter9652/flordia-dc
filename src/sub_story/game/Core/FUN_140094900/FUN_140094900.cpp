// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094900  size: 537 bytes
// Name:    FUN_140094900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140094c10, FUN_140094b60, FUN_1456a4a10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140094900(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_50;
  uint uStack_48;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x1c8))(*(longlong **)(param_1 + 0x10),1);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x1a0))();
    if (uVar2 < 2) {
      uStack_9c = 1;
      iStack_a0 = *(int *)(param_1 + 0x1c) + 1;
      func_0x000140094bc0(*(undefined8 *)(param_1 + 0x28),&uStack_94);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x68))(*(longlong **)(param_1 + 8),&iStack_a0);
      if ((*(int *)(param_1 + 0x1c) == 0) ||
         (cVar1 = FUN_140094c10(&uStack_94,&iStack_a0), cVar1 != '\0')) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                  (*(longlong **)(param_1 + 0x10),&uStack_80);
        uStack_70 = CONCAT44(uStack_9c,iStack_a0);
        uStack_68 = uStack_80;
        uStack_60 = 0;
        FUN_1456a4a10(param_1);
      }
    }
    else {
      uVar4 = 0;
      do {
        plVar3 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 8) + 0x1a8))
                           (*(longlong **)(param_1 + 8),uVar4);
        if ((plVar3 != (longlong *)0x0) &&
           ((**(code **)(*plVar3 + 0x68))(plVar3,&iStack_a0), iStack_a0 != 0)) {
          uVar5 = (ulonglong)*(uint *)(param_1 + 0x1c);
          if (uVar5 == 0) {
            iVar7 = 0;
          }
          else {
            lVar6 = *(longlong *)(param_1 + 0x20);
            iVar7 = 0;
            do {
              if (*(uint *)(lVar6 + 0x10) == uVar4) {
                cVar1 = FUN_140094b60(lVar6,&iStack_a0);
                if (cVar1 != '\0') goto LAB_14009497c;
                iVar7 = iVar7 + 1;
              }
              lVar6 = lVar6 + 0x14;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          uStack_94 = CONCAT44(1,iVar7 + 1);
          func_0x000140094bc0(*(undefined8 *)(param_1 + 0x28),auStack_88);
          if ((iVar7 == 0) || (cVar1 = FUN_140094c10(auStack_88,&iStack_a0), cVar1 != '\0')) {
            plVar3 = (longlong *)(**(code **)(*plVar3 + 0x160))(plVar3);
            if (plVar3 == (longlong *)0x0) {
              uStack_94 = 0;
              uStack_8c = 0;
            }
            else {
              (**(code **)(*plVar3 + 0x30))(plVar3,&uStack_94);
            }
            (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
                      (*(longlong **)(param_1 + 0x10),&uStack_78);
            uStack_50 = uStack_78;
            uStack_48 = uVar4;
            FUN_1456a4a10(param_1);
          }
        }
LAB_14009497c:
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar2);
    }
  }
  return;
}

