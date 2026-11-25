// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b3190  size: 932 bytes
// Name:    FUN_1401b3190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144392360, FUN_1420cc4e0, FUN_1420cc430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401b3190(longlong param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                      undefined8 param_5,int param_6,longlong param_7)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte bVar9;
  
  lVar2 = *(longlong *)(*param_2 + 8);
  uVar4 = func_0x00014497a170(param_3,param_4);
  if (param_6 == 1) {
    bVar9 = *(byte *)(param_7 + 0x48);
    if ((bVar9 & 1) == 0) {
      if (*(int *)(param_1 + 0xc) == 1) {
        if ((bVar9 & 4) != 0 || *(longlong **)(param_1 + 0x20) == (longlong *)0x0)
        goto LAB_1401b3416;
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
        if ((iVar3 != *(int *)(param_1 + 0x38)) || (*(longlong *)(param_1 + 0x30) == 0)) {
          puVar7 = *(undefined8 **)(lVar2 + 0x20);
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar7 + 2);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar7)(puVar7,1);
            }
            *(undefined8 *)(lVar2 + 0x20) = 0;
          }
          bVar9 = *(byte *)(param_7 + 0x48);
          goto LAB_1401b340f;
        }
        puVar5 = (undefined8 *)FUN_144392360(param_1,uVar4);
        puVar7 = *(undefined8 **)(lVar2 + 0x20);
        if (puVar7 != puVar5) {
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + 1;
            UNLOCK();
            puVar7 = *(undefined8 **)(lVar2 + 0x20);
          }
          if (puVar7 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar7 + 2);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar7)(puVar7,1);
            }
          }
          *(undefined8 **)(lVar2 + 0x20) = puVar5;
        }
        bVar9 = *(byte *)(param_7 + 0x48) & 0xfb | (puVar5 != (undefined8 *)0x0) << 2;
      }
      else {
        lVar6 = FUN_1420cc430(param_1,uVar4);
        if ((lVar6 == 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
          FUN_144392360(param_1,uVar4);
        }
        puVar7 = *(undefined8 **)(param_1 + 0x20);
        puVar5 = *(undefined8 **)(lVar2 + 0x20);
        if (puVar7 == (undefined8 *)0x0) {
          if (puVar5 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar5 + 2);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar5)(puVar5,1);
            }
            *(undefined8 *)(lVar2 + 0x20) = 0;
          }
          bVar9 = *(byte *)(param_7 + 0x48);
LAB_1401b340f:
          bVar9 = bVar9 & 0xfb;
        }
        else {
          puVar8 = *(undefined8 **)(param_1 + 0x10);
          if (puVar8 != puVar5) {
            if (puVar5 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + 1;
              UNLOCK();
              puVar8 = *(undefined8 **)(param_1 + 0x10);
            }
            if (puVar8 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar8 + 2);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar8)(puVar8,1);
              }
            }
            *(undefined8 **)(param_1 + 0x10) = puVar5;
            puVar7 = *(undefined8 **)(param_1 + 0x20);
            puVar5 = *(undefined8 **)(lVar2 + 0x20);
          }
          if (puVar5 != puVar7) {
            if (puVar7 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + 1;
              UNLOCK();
              puVar5 = *(undefined8 **)(lVar2 + 0x20);
            }
            if (puVar5 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar5 + 2);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar5)(puVar5,1);
              }
            }
            *(undefined8 **)(lVar2 + 0x20) = puVar7;
          }
          *(undefined4 *)(param_1 + 0xc) = 1;
          bVar9 = *(byte *)(param_7 + 0x48) | 4;
        }
      }
      *(byte *)(param_7 + 0x48) = bVar9;
    }
LAB_1401b3416:
    if (((bVar9 & 2) != 0) || (*(int *)(param_1 + 8) == 1)) goto LAB_1401b34b9;
    FUN_1420cc4e0(param_1,uVar4,param_5);
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    puVar5 = *(undefined8 **)(lVar2 + 0x18);
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0x18);
      if (puVar8 != puVar5) {
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + 1;
          UNLOCK();
          puVar8 = *(undefined8 **)(param_1 + 0x18);
        }
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        *(undefined8 **)(param_1 + 0x18) = puVar5;
        puVar7 = *(undefined8 **)(param_1 + 0x28);
        puVar5 = *(undefined8 **)(lVar2 + 0x18);
      }
      if (puVar5 != puVar7) {
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + 1;
          UNLOCK();
          puVar5 = *(undefined8 **)(lVar2 + 0x18);
        }
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar5 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        *(undefined8 **)(lVar2 + 0x18) = puVar7;
      }
      *(undefined4 *)(param_1 + 8) = 1;
      goto LAB_1401b34b9;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) goto LAB_1401b34b9;
    FUN_1420cc4e0(param_1,uVar4,param_5);
    puVar7 = *(undefined8 **)(param_1 + 0x28);
    puVar5 = *(undefined8 **)(lVar2 + 0x18);
    if (puVar7 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)(param_1 + 0x18);
      if (puVar8 != puVar5) {
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar5 + 2) = *(int *)(puVar5 + 2) + 1;
          UNLOCK();
          puVar8 = *(undefined8 **)(param_1 + 0x18);
        }
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar8 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
        *(undefined8 **)(param_1 + 0x18) = puVar5;
        puVar7 = *(undefined8 **)(param_1 + 0x28);
        puVar5 = *(undefined8 **)(lVar2 + 0x18);
      }
      if (puVar5 != puVar7) {
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar7 + 2) = *(int *)(puVar7 + 2) + 1;
          UNLOCK();
          puVar5 = *(undefined8 **)(lVar2 + 0x18);
        }
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar5 + 2);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        *(undefined8 **)(lVar2 + 0x18) = puVar7;
      }
      *(undefined4 *)(param_1 + 8) = 2;
      goto LAB_1401b34b9;
    }
  }
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined8 *)(lVar2 + 0x18) = 0;
  }
LAB_1401b34b9:
  if (*(longlong *)(lVar2 + 0x20) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      lVar6 = *param_2;
    }
  }
  return lVar6;
}

