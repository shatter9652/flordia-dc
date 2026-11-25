// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bd010  size: 104 bytes
// Name:    FUN_1401bd010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1408298d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bd010(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  bool bVar10;
  
  lVar6 = func_0x0001401bd080(param_1,param_4);
  FUN_1408298d0(lVar6 + 0x20,param_2,param_3);
  if ((*(int *)(lVar6 + 0x24) != 0) || (*(longlong *)(lVar6 + 8) == 0)) {
    return;
  }
  if (*(longlong *)(lVar6 + 8) == 0) {
    return;
  }
  FUN_14542c600(uRam0000000147c17a00,*(longlong *)(lVar6 + 8) + 0x38,0);
  puVar1 = (ulonglong *)(*(longlong *)(lVar6 + 8) + 0x128 + (longlong)*(int *)(lVar6 + 0x10) * 0x20)
  ;
  FUN_140004b40(puVar1);
  plVar3 = (longlong *)(*(longlong *)(lVar6 + 8) + 0x110 + (longlong)*(int *)(lVar6 + 0x10) * 8);
  do {
    plVar8 = plVar3;
    lVar2 = *plVar8;
    plVar3 = (longlong *)(lVar2 + 0x18);
  } while (lVar2 != lVar6);
  *plVar8 = *(longlong *)(lVar6 + 0x18);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  *(undefined8 *)(lVar6 + 8) = 0;
  puVar9 = puVar1 + 2;
  *(int *)puVar9 = (int)*puVar9 + -1;
  uVar7 = *puVar1;
  if ((int)*puVar9 == 0) {
    do {
      uVar5 = uVar7;
      LOCK();
      uVar7 = *puVar1;
      if (uVar5 == uVar7) {
        *puVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
        uVar7 = uVar5;
      }
      UNLOCK();
    } while (uVar5 != uVar7);
    if ((uVar5 & 0xfffffffe) != 0) {
      puVar9 = puVar1 + 1;
      uVar7 = puVar1[1];
      do {
        while ((longlong)uVar7 < 0) {
          cVar4 = FUN_1400062d0(puVar9,1,&stack0xffffffffffffffe0);
          if (cVar4 != '\0') {
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
        bVar10 = uVar7 != uVar5;
        uVar7 = uVar5;
      } while (bVar10);
      return;
    }
  }
  return;
}

