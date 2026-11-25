// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094c60  size: 757 bytes
// Name:    FUN_140094c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409e4820, FUN_142f14cb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140094c60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  uVar15 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
  if (uVar15 < 2) {
                    /* WARNING: Could not recover jumptable at 0x000140094c96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1);
    return;
  }
  uStack_78 = 0;
  uVar7 = 1;
  lVar12 = 0x14;
  while (*(int *)(param_1[4] + 8 + lVar12) == 0) {
    uVar7 = uVar7 + 1;
    lVar12 = lVar12 + 0x14;
    if (uVar15 * 0x14 == lVar12) goto LAB_140094db6;
  }
  uStack_58 = uVar7 & 0xffffffff;
  lStack_68 = lVar12 + 8;
  uVar16 = 1;
  lVar13 = 0x14;
  uVar10 = 0;
  lStack_70 = lVar12;
  uStack_60 = uVar7;
  do {
    uVar7 = uVar10 + 1;
    if (uVar7 < uVar15) {
      lVar11 = uVar10 * 0x14 + param_1[4];
      uVar10 = uVar16;
      lVar12 = lVar13;
      do {
        if (*(int *)(param_1[4] + 0x10 + lVar12) == *(int *)(lVar11 + 0x10)) {
          FUN_142f14cb0(param_1[4] + lVar12,lVar11);
          uVar15 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x14;
      } while (uVar10 < uVar15);
    }
    uVar9 = uStack_60;
    uVar5 = (uint)uVar15;
    uVar16 = uVar16 + 1;
    lVar13 = lVar13 + 0x14;
    uVar10 = uVar7;
  } while (uVar7 != uStack_58);
  lVar12 = param_1[4];
  uVar8 = (uint)uStack_60;
  FUN_1409e4820(&uStack_78,lVar12 + 8 + (uStack_60 & 0xffffffff) * 0x14);
  if (uVar8 < uVar5) {
    lVar12 = lStack_68;
    do {
      FUN_142f14cb0(param_1[4] + lVar12,&uStack_78);
      uVar5 = *(uint *)((longlong)param_1 + 0x1c);
      uVar15 = (ulonglong)uVar5;
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x14;
    } while (uVar9 < uVar15);
    lVar12 = param_1[4];
  }
  if (uVar5 != uVar8) {
    lVar13 = lVar12 + lStack_70;
    lVar11 = 0;
    lVar14 = uVar15 * 0x14 - lStack_70;
    do {
      lVar1 = lVar12 + lVar11;
      FUN_1409e4820(lVar1,lVar13 + lVar11);
      lVar2 = lVar12 + 8 + lVar11;
      FUN_1409e4820(lVar2,lVar13 + 8 + lVar11);
      lVar11 = lVar11 + 0x14;
      *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lStack_70 + 0x10 + lVar1);
    } while (lVar14 != lVar11);
    iVar4 = *(int *)((longlong)param_1 + 0x1c) - uVar8;
    *(int *)((longlong)param_1 + 0x1c) = iVar4;
    if (iVar4 == 0) goto LAB_140094dbd;
    if (*(int *)(param_1[4] + (ulonglong)(iVar4 - 1) * 0x14) != 0) {
      (**(code **)(*(longlong *)param_1[1] + 0x28))();
      iVar4 = *(int *)((longlong)param_1 + 0x1c);
      uVar5 = (**(code **)(*(longlong *)param_1[1] + 0x1a0))();
      if (uVar5 < 2) {
        (**(code **)(*(longlong *)param_1[1] + 0x88))
                  ((longlong *)param_1[1],
                   *(undefined8 *)(param_1[4] + (ulonglong)(iVar4 - 1) * 0x14));
      }
      else {
        if (*(int *)((longlong)param_1 + 0x1c) != 0) {
          uVar15 = 0;
          do {
            uVar8 = 0;
            puVar17 = (undefined8 *)(uVar15 * 0x14 + param_1[4]);
            do {
              if ((uVar8 == *(uint *)(puVar17 + 2)) &&
                 (plVar6 = (longlong *)
                           (**(code **)(*(longlong *)param_1[1] + 0x1a8))
                                     ((longlong *)param_1[1],uVar8), plVar6 != (longlong *)0x0)) {
                (**(code **)(*plVar6 + 0x88))(plVar6,*puVar17);
              }
              uVar8 = uVar8 + 1;
            } while (uVar5 != uVar8);
            uVar15 = uVar15 + 1;
          } while (uVar15 < *(uint *)((longlong)param_1 + 0x1c));
        }
        if ((longlong *)param_1[1] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[1] + 0x30))();
        }
        uVar8 = 0;
        do {
          plVar6 = (longlong *)
                   (**(code **)(*(longlong *)param_1[1] + 0x1a8))((longlong *)param_1[1],uVar8);
          cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6);
          if (cVar3 == '\0') goto LAB_140094f0f;
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
        (**(code **)(*param_1 + 0x28))(param_1);
      }
LAB_140094f0f:
      if (*(int *)((longlong)param_1 + 0x1c) == 0) {
        return;
      }
      (**(code **)(*(longlong *)param_1[2] + 0x68))((longlong *)param_1[2],&uStack_50);
      func_0x000142f14d10(uStack_50,&uStack_48,&uStack_78);
      (**(code **)(*(longlong *)param_1[2] + 0x88))((longlong *)param_1[2],uStack_48);
      return;
    }
  }
LAB_140094db6:
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
LAB_140094dbd:
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}

