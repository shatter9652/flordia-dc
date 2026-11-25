// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016e410  size: 565 bytes
// Name:    FUN_14016e410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016e650, FUN_14016e6f0, FUN_140092fd0, FUN_144f215a0, FUN_140092b80, FUN_140004b40, FUN_14016e910
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014016e5ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014016e5f1) */
/* WARNING: Removing unreachable block (ram,0x00014016e5fc) */
/* WARNING: Removing unreachable block (ram,0x00014016e609) */
/* WARNING: Removing unreachable block (ram,0x00014016e60e) */
/* WARNING: Removing unreachable block (ram,0x00014016e635) */
/* WARNING: Removing unreachable block (ram,0x00014016e614) */

longlong *
FUN_14016e410(ulonglong *param_1,longlong *param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong *puVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined8 uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  
  if (((param_5 != 0) && (*(longlong *)(param_4 + 0x10) != 0 || *(longlong *)(param_4 + 0x20) != 0))
     && (FUN_14016e910(&lStack_40,param_4), lStack_40 != 0)) {
    cVar4 = func_0x000145265ec0(*(undefined1 *)(param_3 + 0x70));
    if (cVar4 != '\0') {
      lVar9 = lStack_40 + 0x38;
      cVar4 = func_0x000144f21430(lVar9);
      if (cVar4 == '\0') {
        iVar6 = FUN_144f215a0(lVar9);
        if (iVar6 != 3) goto code_r0x0001407cc710;
        FUN_140092b80(lVar9,(longlong)&uStack_50 + 4);
      }
      else {
        FUN_140092fd0(lVar9,(longlong)&uStack_50 + 4);
      }
      if (uStack_50._4_4_ != -0x218132af) goto code_r0x0001407cc710;
    }
    lStack_48 = lStack_40;
    FUN_14016e6f0(param_2,param_3);
    FUN_14016e650(param_2,*(undefined8 *)(param_4 + 0x18));
    FUN_140004b40(param_1);
    uVar5 = *(uint *)((longlong)param_1 + 0x24);
    if (uVar5 == (uint)param_1[4]) {
      uVar12 = 1;
      if (1 < uVar5) {
        uVar12 = uVar5 >> 1;
      }
      uVar8 = func_0x000144d9c140(8,(ulonglong)(uVar12 + uVar5) * 8);
      if ((ulonglong)*(uint *)((longlong)param_1 + 0x24) != 0) {
        uVar2 = param_1[5];
        lVar13 = (ulonglong)*(uint *)((longlong)param_1 + 0x24) << 3;
        lVar9 = 0;
        do {
          if ((undefined8 *)(uVar8 + lVar9) != (undefined8 *)0x0) {
            *(undefined8 *)(uVar8 + lVar9) = *(undefined8 *)(uVar2 + lVar9);
            *(undefined8 *)(uVar2 + lVar9) = 0;
          }
          lVar9 = lVar9 + 8;
        } while (lVar13 != lVar9);
        lVar9 = 0;
        do {
          puVar3 = *(undefined8 **)(uVar2 + lVar9);
          if (puVar3 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar3 + 2);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          lVar9 = lVar9 + 8;
        } while (lVar13 != lVar9);
      }
      if (param_1[5] != 0) {
        func_0x000144d9c130();
      }
      param_1[5] = uVar8;
      *(uint *)(param_1 + 4) = uVar12 + uVar5;
      uVar5 = *(uint *)((longlong)param_1 + 0x24);
    }
    else {
      uVar8 = param_1[5];
    }
    *(uint *)((longlong)param_1 + 0x24) = uVar5 + 1;
    if (uVar8 != 0) {
      lVar9 = *param_2;
      *(longlong *)(uVar8 + (ulonglong)uVar5 * 8) = lVar9;
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 0x10) = *(int *)(lVar9 + 0x10) + 1;
        UNLOCK();
      }
    }
    plVar10 = (longlong *)*param_1;
    puVar11 = param_1 + 2;
    *(int *)puVar11 = (int)*puVar11 + -1;
    if ((int)*puVar11 == 0) {
      do {
        plVar7 = plVar10;
        LOCK();
        plVar10 = (longlong *)*param_1;
        if (plVar7 == plVar10) {
          *param_1 = (ulonglong)((int)plVar7 - 1) | 0xffffffff00000000;
          plVar10 = plVar7;
        }
        UNLOCK();
      } while (plVar7 != plVar10);
      if (((ulonglong)plVar7 & 0xfffffffe) != 0) {
        puVar11 = param_1 + 1;
        plVar10 = (longlong *)param_1[1];
        do {
          while ((longlong)plVar10 < 0) {
            uStack_50 = 0x140019c89;
            plVar7 = (longlong *)FUN_1400062d0(puVar11,1,&stack0xffffffffffffffe0);
            if ((char)plVar7 != '\0') {
              return plVar7;
            }
          }
          LOCK();
          plVar7 = (longlong *)*puVar11;
          if (plVar10 == plVar7) {
            *puVar11 = (ulonglong)(plVar10 + 0x20000000);
            plVar7 = plVar10;
          }
          UNLOCK();
          bVar14 = plVar10 != plVar7;
          plVar10 = plVar7;
        } while (bVar14);
        return plVar7;
      }
    }
    return plVar10;
  }
code_r0x0001407cc710:
  *param_2 = 0;
  return param_2;
}

