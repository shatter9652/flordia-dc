// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140074d80  size: 538 bytes
// Name:    FUN_140074d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1448a5810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140074d80(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  lVar2 = param_1[0x16];
  if (lVar2 != 0) {
    LOCK();
    bVar4 = *(byte *)(lVar2 + 0x40);
    if (bVar4 == 1) {
      *(byte *)(lVar2 + 0x40) = 0;
      bVar4 = 1;
    }
    UNLOCK();
    if ((bVar4 & 1) == 0) {
      do {
      } while ((*(byte *)(lVar2 + 0x41) & 1) == 0);
    }
    else {
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      *param_1 = FUN_1443723e0;
      *(undefined4 *)(param_1 + 1) = 0;
      *(undefined2 *)((longlong)param_1 + 0xc) = 0x505;
      *(undefined1 (*) [32])(param_1 + 8) = ZEXT1632(auVar8);
      *(undefined1 (*) [32])(param_1 + 0xc) = ZEXT1632(auVar8);
      *(undefined1 (*) [32])(param_1 + 0x10) = ZEXT1632(auVar8);
      param_1[0x14] = 0;
      param_1[0x15] = lVar2;
      uVar1 = *(uint *)(lVar2 + 4);
      if ((ulonglong)uVar1 != 0) {
        puVar3 = *(undefined8 **)(lVar2 + 8);
        cVar5 = (**(code **)(*(longlong *)*puVar3 + 0x108))();
        if ((cVar5 != '\0') && (lVar6 = (**(code **)(*(longlong *)*puVar3 + 0x70))(), lVar6 != 0)) {
          FUN_1448a5810(lVar6,param_1,0);
        }
        if (uVar1 != 1) {
          cVar5 = (**(code **)(*(longlong *)puVar3[1] + 0x108))();
          if ((cVar5 != '\0') &&
             (lVar6 = (**(code **)(*(longlong *)puVar3[1] + 0x70))(), lVar6 != 0)) {
            FUN_1448a5810(lVar6,param_1,1);
          }
          if (uVar1 != 2) {
            cVar5 = (**(code **)(*(longlong *)puVar3[2] + 0x108))();
            if ((cVar5 != '\0') &&
               (lVar6 = (**(code **)(*(longlong *)puVar3[2] + 0x70))(), lVar6 != 0)) {
              FUN_1448a5810(lVar6,param_1,2);
            }
            if (uVar1 != 3) {
              cVar5 = (**(code **)(*(longlong *)puVar3[3] + 0x108))();
              if ((cVar5 != '\0') &&
                 (lVar6 = (**(code **)(*(longlong *)puVar3[3] + 0x70))(), lVar6 != 0)) {
                FUN_1448a5810(lVar6,param_1,3);
              }
              if (uVar1 != 4) {
                cVar5 = (**(code **)(*(longlong *)puVar3[4] + 0x108))();
                if ((cVar5 != '\0') &&
                   (lVar6 = (**(code **)(*(longlong *)puVar3[4] + 0x70))(), lVar6 != 0)) {
                  FUN_1448a5810(lVar6,param_1,4);
                }
                if (uVar1 != 5) {
                  cVar5 = (**(code **)(*(longlong *)puVar3[5] + 0x108))();
                  if ((cVar5 != '\0') &&
                     (lVar6 = (**(code **)(*(longlong *)puVar3[5] + 0x70))(), lVar6 != 0)) {
                    FUN_1448a5810(lVar6,param_1,5);
                  }
                  if (uVar1 != 6) {
                    lVar6 = 0x30;
                    do {
                      cVar5 = (**(code **)(**(longlong **)((longlong)puVar3 + lVar6) + 0x108))();
                      if ((cVar5 != '\0') &&
                         (lVar7 = (**(code **)(**(longlong **)((longlong)puVar3 + lVar6) + 0x70))(),
                         lVar7 != 0)) break;
                      lVar6 = lVar6 + 8;
                    } while ((ulonglong)uVar1 << 3 != lVar6);
                  }
                }
              }
            }
          }
        }
      }
      *(undefined1 *)(lVar2 + 0x41) = 1;
    }
  }
  return;
}

