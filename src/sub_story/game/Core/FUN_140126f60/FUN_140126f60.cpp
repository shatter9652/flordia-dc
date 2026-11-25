// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140126f60  size: 668 bytes
// Name:    FUN_140126f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14245ae70, FUN_14080ebb0, FUN_141733e70, FUN_1418718e0, FUN_140b182f0, FUN_141f74530, FUN_14245b240, FUN_1408080a0, FUN_140004b40, FUN_140869e30, FUN_1409519a0, FUN_140b18a10, FUN_140869ba0, FUN_141511190, FUN_14053c060, FUN_144fc4550, FUN_1451d3b90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140126f60(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  FUN_140004b40(param_1 + 0x2d0);
  if (*(char *)(param_1 + 0x3ab) == '\x01') {
    FUN_141733e70(param_1);
  }
  iVar2 = *(int *)(param_1 + 0x94);
  if (iVar2 == 0) {
    lVar6 = **(longlong **)(param_1 + 0x78);
    if (*(char *)(lVar6 + 0x650) != '\0') {
LAB_140127043:
      cVar1 = func_0x000144da2930(*(undefined4 *)(lVar6 + 0x61c));
      if (cVar1 != '\0') {
        cVar1 = FUN_141511190(param_1);
        if (cVar1 == '\0') {
          iVar2 = *(int *)(param_1 + 0x94);
          goto LAB_140126f9e;
        }
        *(undefined4 *)(param_1 + 0x94) = 1;
        goto LAB_140126fa7;
      }
      goto LAB_140127081;
    }
    dVar8 = (double)FUN_1451d3b90(param_1);
    dVar9 = (double)FUN_144fc4550(param_1);
    uVar7 = 1;
    if (dVar8 < dVar9) goto LAB_140127043;
LAB_140127083:
    if (*(int *)(param_1 + 0x94) != 2) goto LAB_14012719c;
  }
  else {
LAB_140126f9e:
    if (iVar2 != 1) {
LAB_140127081:
      uVar7 = 0;
      goto LAB_140127083;
    }
LAB_140126fa7:
    cVar1 = func_0x000144da2930(*(undefined4 *)(**(longlong **)(param_1 + 0x78) + 0x61c));
    if (cVar1 == '\0') {
      FUN_141f74530(param_1);
      goto LAB_140127081;
    }
    cVar1 = FUN_141511190();
    if (cVar1 == '\0') {
LAB_140127079:
      FUN_1408080a0(param_1);
      goto LAB_140127081;
    }
    FUN_140869e30(param_1);
    iVar2 = FUN_14080ebb0(param_1);
    if (iVar2 != 1) {
      if (iVar2 == 0) {
        uVar7 = 0;
        if (*(int *)(**(longlong **)(param_1 + 0x78) + 0x61c) != *(int *)(param_1 + 0x9c)) {
          FUN_1408080a0(param_1);
        }
        goto LAB_140127083;
      }
      goto LAB_140127079;
    }
    if (*(char *)(**(longlong **)(param_1 + 0x78) + 0x650) != '\0') goto LAB_140127081;
    FUN_14245ae70(param_1);
    *(undefined4 *)(param_1 + 0x94) = 2;
    uVar7 = 0;
  }
  if (*(char *)(**(longlong **)(param_1 + 0x78) + 0x650) != '\x01') {
    iVar2 = *(int *)(**(longlong **)(param_1 + 0x78) + 0x61c);
    if (iVar2 == -1) {
      FUN_141f74530(param_1);
      goto LAB_14012719c;
    }
    if (iVar2 == *(int *)(param_1 + 0x9c)) {
      lVar6 = param_1 + 0x340;
      lVar3 = func_0x000144da31b0(lVar6);
      if (lVar3 != 0) {
        FUN_140b182f0(param_1,lVar6);
        FUN_141733e70(param_1);
        if (*(char *)(param_1 + 0x3a0) == '\0') {
          FUN_1418718e0(param_1);
        }
        FUN_14245b240(param_1);
        FUN_140869ba0(param_1);
        FUN_14053c060(param_1);
      }
      lVar3 = param_1 + 0x348;
      lVar4 = func_0x000144da31b0(lVar3);
      if (lVar4 != 0) {
        FUN_140b182f0(param_1,lVar3);
        dVar8 = (double)FUN_1451d3b90(param_1);
        dVar9 = (double)FUN_140b18a10(param_1);
        if (dVar9 - *(double *)(param_1 + 0x80) < dVar8) {
          uVar5 = func_0x000144da31b0(lVar3);
          FUN_1409519a0(uVar5,1,0x7585d45d);
        }
      }
      lVar6 = func_0x000144da31b0(lVar6);
      if ((lVar6 == 0) && (lVar6 = func_0x000144da31b0(lVar3), lVar6 == 0)) {
        uVar7 = 1;
      }
      goto LAB_14012719c;
    }
  }
  FUN_1408080a0(param_1);
LAB_14012719c:
  *(undefined4 *)(param_1 + 0x368) = _DAT_14aa31abc;
  func_0x000144d9dab0(param_1 + 0x2d0);
  return uVar7;
}

