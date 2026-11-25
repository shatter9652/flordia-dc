// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aded0  size: 879 bytes
// Name:    FUN_1401aded0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401aea00, FUN_1436dbf60, FUN_1401aded0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401aded0(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong *plStack_70;
  ulonglong uStack_68;
  longlong *plStack_50;
  longlong *plStack_48;
  
  uVar14 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar14 < 0x101) {
LAB_1401adef3:
    plVar7 = param_1 + 1;
    plVar9 = param_1;
    if (param_1 + 1 != param_2 && param_1 != param_2) {
      do {
        plVar6 = plVar7;
        lVar3 = plVar9[1];
        uVar2 = *(undefined4 *)(lVar3 + 0xa0);
        cVar5 = FUN_1401aea00(uVar2,*(undefined4 *)(*param_1 + 0xa0));
        if (cVar5 == '\0') {
          lVar10 = plVar6[-1];
          cVar5 = FUN_1401aea00(uVar2,*(undefined4 *)(lVar10 + 0xa0));
          plVar7 = plVar6;
          while (cVar5 != '\0') {
            *plVar7 = lVar10;
            lVar10 = plVar7[-2];
            cVar5 = FUN_1401aea00(*(undefined4 *)(lVar3 + 0xa0),*(undefined4 *)(lVar10 + 0xa0));
            plVar7 = plVar7 + -1;
          }
        }
        else {
          func_0x000145744e50(param_1,plVar6,plVar9 + 2);
          plVar7 = param_1;
        }
        *plVar7 = lVar3;
        plVar7 = plVar6 + 1;
        plVar9 = plVar6;
      } while (plVar6 + 1 != param_2);
    }
  }
  else {
    plStack_70 = param_2;
    if (0 < (longlong)param_3) {
      do {
        FUN_1436dbf60(&plStack_50,param_1,plStack_70);
        plVar9 = plStack_48;
        plVar7 = plStack_50;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)plStack_50 - (longlong)param_1 < (longlong)plStack_70 - (longlong)plStack_48)
        {
          FUN_1401aded0(param_1,plStack_50,param_3);
          param_1 = plVar9;
        }
        else {
          FUN_1401aded0(plStack_48,plStack_70,param_3);
          plStack_70 = plVar7;
        }
        uVar14 = (longlong)plStack_70 - (longlong)param_1;
        param_2 = plStack_70;
        if ((longlong)uVar14 < 0x101) goto LAB_1401adef3;
      } while (param_3 != 0);
    }
    uVar1 = (uVar14 >> 3) - 1;
    uVar12 = uVar1 >> 1;
    uStack_68 = uVar14 >> 4;
    do {
      lVar3 = param_1[uStack_68 - 1];
      uVar13 = uStack_68 - 1;
      uVar8 = uVar13;
      uVar11 = uVar13;
      if ((longlong)uStack_68 <= (longlong)uVar12) {
        do {
          cVar5 = FUN_1401aea00(*(undefined4 *)(param_1[uVar8 * 2 + 2] + 0xa0),
                                *(undefined4 *)(param_1[uVar8 * 2 + 1] + 0xa0));
          if (cVar5 == '\0') {
            uVar11 = uVar8 * 2 + 2;
          }
          else {
            uVar11 = uVar8 * 2 + 1;
          }
          param_1[uVar8] = param_1[uVar11];
          uVar8 = uVar11;
        } while ((longlong)uVar11 < (longlong)uVar12);
      }
      if (((uVar14 & 8) == 0) && (uVar11 == uVar12)) {
        param_1[uVar12] = param_1[(uVar14 >> 3) - 1];
        uVar11 = uVar1;
      }
      while ((longlong)uStack_68 <= (longlong)uVar11) {
        uVar8 = (longlong)(uVar11 - 1) >> 1;
        lVar10 = param_1[uVar8];
        cVar5 = FUN_1401aea00(*(undefined4 *)(lVar10 + 0xa0),*(undefined4 *)(lVar3 + 0xa0));
        if (cVar5 == '\0') break;
        param_1[uVar11] = lVar10;
        uVar11 = uVar8;
      }
      param_1[uVar11] = lVar3;
      bVar4 = 1 < (longlong)uStack_68;
      uStack_68 = uVar13;
    } while (bVar4);
    uVar14 = (longlong)plStack_70 - (longlong)param_1;
    while (8 < (longlong)uVar14) {
      lVar3 = plStack_70[-1];
      uVar14 = (longlong)(plStack_70 + -1) - (longlong)param_1;
      uVar1 = ((longlong)uVar14 >> 3) - 1;
      plStack_70[-1] = *param_1;
      uVar12 = (longlong)uVar1 >> 1;
      if ((longlong)uVar12 < 1) {
        uVar13 = 0;
      }
      else {
        uVar11 = 0;
        do {
          cVar5 = FUN_1401aea00(*(undefined4 *)(param_1[uVar11 * 2 + 2] + 0xa0),
                                *(undefined4 *)(param_1[uVar11 * 2 + 1] + 0xa0));
          if (cVar5 == '\0') {
            uVar13 = uVar11 * 2 + 2;
          }
          else {
            uVar13 = uVar11 * 2 + 1;
          }
          param_1[uVar11] = param_1[uVar13];
          uVar11 = uVar13;
        } while ((longlong)uVar13 < (longlong)uVar12);
      }
      if (((uVar14 & 8) == 0) && (uVar13 == uVar12)) {
        param_1[uVar12] = param_1[((longlong)uVar14 >> 3) + -1];
        uVar13 = uVar1;
      }
      if (0 < (longlong)uVar13) {
        do {
          uVar1 = uVar13 - 1;
          uVar12 = uVar1 >> 1;
          lVar10 = param_1[uVar12];
          cVar5 = FUN_1401aea00(*(undefined4 *)(lVar10 + 0xa0),*(undefined4 *)(lVar3 + 0xa0));
          if (cVar5 == '\0') goto LAB_1401ae21f;
          param_1[uVar13] = lVar10;
          uVar13 = uVar12;
        } while (1 < uVar1);
        uVar13 = 0;
      }
LAB_1401ae21f:
      param_1[uVar13] = lVar3;
      plStack_70 = plStack_70 + -1;
    }
  }
  return;
}

