// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bcf70  size: 109 bytes
// Name:    FUN_1401bcf70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14523f8e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bcf70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  bool bVar12;
  
  lVar6 = FUN_14523f8e0(*(undefined8 *)(param_1 + -8));
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)FUN_14523f8e0(*(undefined8 *)(param_1 + -8));
    cVar4 = (**(code **)*puVar7)(puVar7,0xa2e57123);
    if (cVar4 != '\0') {
      uVar8 = func_0x0001401bcfe0(puVar7);
      lVar6 = func_0x0001401bd080(uVar8,param_4);
      FUN_1408298d0(lVar6 + 0x20,param_2,param_3);
      if ((*(int *)(lVar6 + 0x24) != 0) || (*(longlong *)(lVar6 + 8) == 0)) {
        return;
      }
      if (*(longlong *)(lVar6 + 8) == 0) {
        return;
      }
      FUN_14542c600(uRam0000000147c17a00,*(longlong *)(lVar6 + 8) + 0x38,0);
      puVar1 = (ulonglong *)
               (*(longlong *)(lVar6 + 8) + 0x128 + (longlong)*(int *)(lVar6 + 0x10) * 0x20);
      FUN_140004b40(puVar1);
      plVar3 = (longlong *)(*(longlong *)(lVar6 + 8) + 0x110 + (longlong)*(int *)(lVar6 + 0x10) * 8)
      ;
      do {
        plVar10 = plVar3;
        lVar2 = *plVar10;
        plVar3 = (longlong *)(lVar2 + 0x18);
      } while (lVar2 != lVar6);
      *plVar10 = *(longlong *)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x18) = 0;
      *(undefined8 *)(lVar6 + 8) = 0;
      puVar11 = puVar1 + 2;
      *(int *)puVar11 = (int)*puVar11 + -1;
      uVar9 = *puVar1;
      if ((int)*puVar11 == 0) {
        do {
          uVar5 = uVar9;
          LOCK();
          uVar9 = *puVar1;
          if (uVar5 == uVar9) {
            *puVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
            uVar9 = uVar5;
          }
          UNLOCK();
        } while (uVar5 != uVar9);
        if ((uVar5 & 0xfffffffe) != 0) {
          puVar11 = puVar1 + 1;
          uVar9 = puVar1[1];
          do {
            while ((longlong)uVar9 < 0) {
              cVar4 = FUN_1400062d0(puVar11,1,&stack0xffffffffffffffe0);
              if (cVar4 != '\0') {
                return;
              }
            }
            LOCK();
            uVar5 = *puVar11;
            if (uVar9 == uVar5) {
              *puVar11 = uVar9 + 0x100000000;
              uVar5 = uVar9;
            }
            UNLOCK();
            bVar12 = uVar9 != uVar5;
            uVar9 = uVar5;
          } while (bVar12);
          return;
        }
      }
      return;
    }
  }
  return;
}

