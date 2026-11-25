// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002e040  size: 256 bytes
// Name:    FUN_14002e040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145223610, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002e040(ulonglong *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                  code *param_5,code *param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  uint uVar10;
  bool bVar11;
  uint uStack_34;
  
  uVar3 = (*param_5)(param_7);
  lVar6 = FUN_145223610(param_1,uVar3,param_3,param_4,param_2);
  (*param_6)(param_7,lVar6 + 0x20);
  func_0x000144e2aaa0(param_8,lVar6,0);
  FUN_140004b40(param_1);
  lVar8 = (ulonglong)param_2 * 0x10;
  piVar1 = (int *)(param_1[0x25a] + 8 + lVar8);
  LOCK();
  iVar4 = *piVar1;
  if (iVar4 == 0) {
    *piVar1 = 1;
    iVar4 = 0;
  }
  UNLOCK();
  if (iVar4 == 1) {
    uVar10 = 8;
    do {
      for (uStack_34 = 0; uStack_34 < uVar10; uStack_34 = uStack_34 + 1) {
      }
      LOCK();
      iVar4 = *piVar1;
      if (iVar4 == 0) {
        *piVar1 = 1;
        iVar4 = 0;
      }
      UNLOCK();
      uVar10 = uVar10 << (uVar10 < 0x400);
    } while (iVar4 == 1);
  }
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(param_1[0x25a] + lVar8);
  *(longlong *)(param_1[0x25a] + lVar8) = lVar6;
  *piVar1 = 0;
  puVar9 = param_1 + 2;
  *(int *)puVar9 = (int)*puVar9 + -1;
  uVar7 = *param_1;
  if ((int)*puVar9 == 0) {
    do {
      uVar5 = uVar7;
      LOCK();
      uVar7 = *param_1;
      if (uVar5 == uVar7) {
        *param_1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
        uVar7 = uVar5;
      }
      UNLOCK();
    } while (uVar5 != uVar7);
    if ((uVar5 & 0xfffffffe) != 0) {
      puVar9 = param_1 + 1;
      uVar7 = param_1[1];
      do {
        while ((longlong)uVar7 < 0) {
          cVar2 = FUN_1400062d0(puVar9,1,&stack0xffffffffffffffe0);
          if (cVar2 != '\0') {
            return;
          }
        }
        LOCK();
        uVar5 = *puVar9;
        if (uVar7 == uVar5) {
          *puVar9 = uVar7 + 0x100000000;
          uVar5 = uVar7;
        }
        UNLOCK();
        bVar11 = uVar7 != uVar5;
        uVar7 = uVar5;
      } while (bVar11);
      return;
    }
  }
  return;
}

