// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086c70  size: 260 bytes
// Name:    FUN_140086c70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f845d0, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140086c70(ulonglong *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  FUN_140004b40();
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x24) != 0) {
    uVar5 = param_1[5];
    lVar8 = (ulonglong)*(uint *)((longlong)param_1 + 0x24) << 3;
    if (param_4 == '\0') {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(uVar5 + lVar7);
        if ((((*(char *)(lVar1 + 0x1a8) == '\x01') &&
             (cVar3 = func_0x00014437ef90(*(undefined8 *)(lVar1 + 0x1a0),param_2), cVar3 != '\0'))
            && (cVar3 = func_0x0001450903f0(*(undefined4 *)(lVar1 + 0x1c)), cVar3 != '\0')) &&
           (1 < *(int *)(lVar1 + 0x10))) {
          FUN_144f845d0(*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),param_3);
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 != lVar7);
    }
    else {
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(uVar5 + lVar7);
        if (*(char *)(lVar1 + 0x1a8) == '\x01') {
          uVar2 = *(undefined8 *)(lVar1 + 0x1a0);
          cVar3 = func_0x00014437ef90(uVar2,param_2);
          if (((cVar3 != '\0') || (cVar3 = func_0x00014437ef90(uVar2,0x13187d06), cVar3 != '\0')) &&
             ((cVar3 = func_0x0001450903f0(*(undefined4 *)(lVar1 + 0x1c)), cVar3 != '\0' &&
              (1 < *(int *)(lVar1 + 0x10))))) {
            FUN_144f845d0(*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),param_3);
          }
        }
        lVar7 = lVar7 + 8;
      } while (lVar8 != lVar7);
    }
  }
  puVar6 = param_1 + 2;
  *(int *)puVar6 = (int)*puVar6 + -1;
  uVar5 = *param_1;
  if ((int)*puVar6 == 0) {
    do {
      uVar4 = uVar5;
      LOCK();
      uVar5 = *param_1;
      if (uVar4 == uVar5) {
        *param_1 = (ulonglong)((int)uVar4 - 1) | 0xffffffff00000000;
        uVar5 = uVar4;
      }
      UNLOCK();
    } while (uVar4 != uVar5);
    if ((uVar4 & 0xfffffffe) != 0) {
      puVar6 = param_1 + 1;
      uVar5 = param_1[1];
      do {
        while ((longlong)uVar5 < 0) {
          cVar3 = FUN_1400062d0(puVar6,1,&stack0xffffffffffffffe0);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        uVar4 = *puVar6;
        if (uVar5 == uVar4) {
          *puVar6 = uVar5 + 0x100000000;
          uVar4 = uVar5;
        }
        UNLOCK();
        bVar9 = uVar5 != uVar4;
        uVar5 = uVar4;
      } while (bVar9);
      return;
    }
  }
  return;
}

