// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c2b0  size: 81 bytes
// Name:    FUN_14014c2b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145014060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_14014c2b0(longlong param_1)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  longlong *plStack_48;
  
  cVar4 = FUN_145014060(*(longlong *)(param_1 + 0x58) + 0x1d8,0x19,param_1 + 0x68);
  if (cVar4 != '\0') {
    return 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x58);
  param_1 = param_1 + 0x88;
  plVar11 = *(longlong **)(lVar3 + 0x1e0);
  uVar12 = (ulonglong)*(uint *)(lVar3 + 0x1dc);
  if (uVar12 == 0) {
    uVar12 = 0;
    plVar10 = plVar11;
  }
  else {
    plStack_48 = plVar11 + uVar12;
    lVar14 = uVar12 << 3;
    plVar10 = plVar11;
    do {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)*plVar10;
      if (UNRECOVERED_JUMPTABLE == (code *)&SUB_1450141d0) {
        iVar8 = func_0x0001450141d0();
      }
      else if (UNRECOVERED_JUMPTABLE == (code *)&SUB_1450141d0) {
        iVar8 = func_0x0001450141d0();
      }
      else if (UNRECOVERED_JUMPTABLE == (code *)&SUB_1450141d0) {
        iVar8 = func_0x0001450141d0();
      }
      else {
        iVar8 = (*UNRECOVERED_JUMPTABLE)();
      }
      plVar11 = plVar10;
      if (iVar8 == 0x15) break;
      plVar10 = plVar10 + 1;
      lVar14 = lVar14 + -8;
      plVar11 = plStack_48;
    } while (lVar14 != 0);
    uVar12 = (ulonglong)*(uint *)(lVar3 + 0x1dc);
    plVar10 = *(longlong **)(lVar3 + 0x1e0);
  }
  if (plVar11 == plVar10 + uVar12) {
    return 0;
  }
  plVar11 = (longlong *)*plVar11;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar11 + 0x38);
  if (UNRECOVERED_JUMPTABLE == FUN_14014bdf0) {
    puVar1 = (uint *)(plVar11 + 4);
    puVar2 = (ulonglong *)(plVar11 + 5);
    uVar6 = *(uint *)(plVar11 + 4);
LAB_14014be2a:
    do {
      do {
        while (uVar5 = uVar6, (uVar5 & 0x1ff0000) == 0) {
          LOCK();
          uVar6 = *puVar1;
          bVar15 = uVar5 == uVar6;
          if (bVar15) {
            *puVar1 = uVar5 + 1;
            uVar6 = uVar5;
          }
          UNLOCK();
          if (bVar15) {
            uVar7 = FUN_140355b80(plVar11,param_1);
            FUN_140323580(puVar1);
            return uVar7;
          }
        }
        LOCK();
        uVar6 = *puVar1;
        bVar15 = uVar5 == uVar6;
        if (bVar15) {
          *puVar1 = uVar5 + 0x100;
          uVar6 = uVar5;
        }
        UNLOCK();
      } while (!bVar15);
      uVar13 = (uint)(*puVar2 >> 7) & 0xffffff;
      uVar12 = *puVar2;
      if ((*puVar2 >> 7 & 0xffffff) != 0) {
        do {
          if ((longlong)uVar12 < 0x100000000) {
            uVar9 = *puVar2;
          }
          else {
            LOCK();
            uVar9 = *puVar2;
            if (uVar12 == uVar9) {
              *puVar2 = uVar12 - 0x100000000;
              uVar9 = uVar12;
            }
            UNLOCK();
            uVar6 = uVar5;
            if (uVar12 == uVar9) goto LAB_14014be2a;
          }
          uVar13 = uVar13 - 1;
          uVar12 = uVar9;
        } while (uVar13 != 0);
      }
      plVar10 = (longlong *)*puVar2;
      do {
        while (plStack_48 = plVar10, 0xffffffff < (longlong)plStack_48) {
          LOCK();
          plVar10 = (longlong *)*puVar2;
          if (plStack_48 == plVar10) {
            *puVar2 = (ulonglong)(plStack_48 + -0x20000000);
            plVar10 = plStack_48;
          }
          UNLOCK();
          uVar6 = uVar5;
          if (plStack_48 == plVar10) goto LAB_14014be2a;
        }
        cVar4 = FUN_140006180(puVar2,1,&plStack_48);
        uVar6 = uVar5;
        plVar10 = plStack_48;
      } while (cVar4 == '\0');
    } while( true );
  }
  if (UNRECOVERED_JUMPTABLE != FUN_14014bf00) {
    if (UNRECOVERED_JUMPTABLE != FUN_14014c1a0) {
                    /* WARNING: Could not recover jumptable at 0x0001450141a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*UNRECOVERED_JUMPTABLE)(plVar11,param_1);
      return uVar7;
    }
    puVar1 = (uint *)(plVar11 + 4);
    puVar2 = (ulonglong *)(plVar11 + 5);
    uVar6 = *(uint *)(plVar11 + 4);
LAB_14014c1da:
    do {
      do {
        while (uVar5 = uVar6, (uVar5 & 0x1ff0000) == 0) {
          LOCK();
          uVar6 = *puVar1;
          bVar15 = uVar5 == uVar6;
          if (bVar15) {
            *puVar1 = uVar5 + 1;
            uVar6 = uVar5;
          }
          UNLOCK();
          if (bVar15) {
            uVar7 = FUN_1420bb660(plVar11,param_1);
            FUN_140323580(puVar1);
            return uVar7;
          }
        }
        LOCK();
        uVar6 = *puVar1;
        bVar15 = uVar5 == uVar6;
        if (bVar15) {
          *puVar1 = uVar5 + 0x100;
          uVar6 = uVar5;
        }
        UNLOCK();
      } while (!bVar15);
      uVar13 = (uint)(*puVar2 >> 7) & 0xffffff;
      uVar12 = *puVar2;
      if ((*puVar2 >> 7 & 0xffffff) != 0) {
        do {
          if ((longlong)uVar12 < 0x100000000) {
            uVar9 = *puVar2;
          }
          else {
            LOCK();
            uVar9 = *puVar2;
            if (uVar12 == uVar9) {
              *puVar2 = uVar12 - 0x100000000;
              uVar9 = uVar12;
            }
            UNLOCK();
            uVar6 = uVar5;
            if (uVar12 == uVar9) goto LAB_14014c1da;
          }
          uVar13 = uVar13 - 1;
          uVar12 = uVar9;
        } while (uVar13 != 0);
      }
      plVar10 = (longlong *)*puVar2;
      do {
        while (plStack_48 = plVar10, 0xffffffff < (longlong)plStack_48) {
          LOCK();
          plVar10 = (longlong *)*puVar2;
          if (plStack_48 == plVar10) {
            *puVar2 = (ulonglong)(plStack_48 + -0x20000000);
            plVar10 = plStack_48;
          }
          UNLOCK();
          uVar6 = uVar5;
          if (plStack_48 == plVar10) goto LAB_14014c1da;
        }
        cVar4 = FUN_140006180(puVar2,1,&plStack_48);
        uVar6 = uVar5;
        plVar10 = plStack_48;
      } while (cVar4 == '\0');
    } while( true );
  }
  puVar1 = (uint *)(plVar11 + 4);
  puVar2 = (ulonglong *)(plVar11 + 5);
  uVar6 = *(uint *)(plVar11 + 4);
LAB_14014bf3a:
  do {
    do {
      while (uVar5 = uVar6, (uVar5 & 0x1ff0000) == 0) {
        LOCK();
        uVar6 = *puVar1;
        bVar15 = uVar5 == uVar6;
        if (bVar15) {
          *puVar1 = uVar5 + 1;
          uVar6 = uVar5;
        }
        UNLOCK();
        if (bVar15) {
          uVar7 = FUN_140435940(plVar11,param_1);
          FUN_140323580(puVar1);
          return uVar7;
        }
      }
      LOCK();
      uVar6 = *puVar1;
      bVar15 = uVar5 == uVar6;
      if (bVar15) {
        *puVar1 = uVar5 + 0x100;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (!bVar15);
    uVar13 = (uint)(*puVar2 >> 7) & 0xffffff;
    uVar12 = *puVar2;
    if ((*puVar2 >> 7 & 0xffffff) != 0) {
      do {
        if ((longlong)uVar12 < 0x100000000) {
          uVar9 = *puVar2;
        }
        else {
          LOCK();
          uVar9 = *puVar2;
          if (uVar12 == uVar9) {
            *puVar2 = uVar12 - 0x100000000;
            uVar9 = uVar12;
          }
          UNLOCK();
          uVar6 = uVar5;
          if (uVar12 == uVar9) goto LAB_14014bf3a;
        }
        uVar13 = uVar13 - 1;
        uVar12 = uVar9;
      } while (uVar13 != 0);
    }
    plVar10 = (longlong *)*puVar2;
    do {
      while (plStack_48 = plVar10, 0xffffffff < (longlong)plStack_48) {
        LOCK();
        plVar10 = (longlong *)*puVar2;
        if (plStack_48 == plVar10) {
          *puVar2 = (ulonglong)(plStack_48 + -0x20000000);
          plVar10 = plStack_48;
        }
        UNLOCK();
        uVar6 = uVar5;
        if (plStack_48 == plVar10) goto LAB_14014bf3a;
      }
      cVar4 = FUN_140006180(puVar2,1,&plStack_48);
      uVar6 = uVar5;
      plVar10 = plStack_48;
    } while (cVar4 == '\0');
  } while( true );
}

