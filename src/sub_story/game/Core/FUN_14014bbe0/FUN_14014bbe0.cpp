// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014bbe0  size: 217 bytes
// Name:    FUN_14014bbe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014bcc0, FUN_14014c140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_14014bbe0(longlong param_1,char param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  float fVar3;
  longlong lVar4;
  code *UNRECOVERED_JUMPTABLE;
  float fVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  longlong *plStack_48;
  undefined *puStack_40;
  
  if (*(char *)(param_1 + 0x110) != '\x01' || param_2 != '\0') {
    FUN_14014c140();
    fVar3 = *(float *)(param_1 + 0xf8);
    auVar19 = ZEXT464((uint)fVar3);
    plStack_48 = (longlong *)(param_1 + 0xa8);
    fVar5 = *(float *)(param_1 + 0x108) - fVar3;
    auVar20 = ZEXT464((uint)fVar5);
    bVar6 = FUN_14014bcc0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x18),fVar5,fVar3,
                          param_1 + 0x68,0x19);
    plStack_48 = (longlong *)(param_1 + 200);
    bVar7 = FUN_14014bcc0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x20),
                          auVar20._0_8_,auVar19._0_8_,param_1 + 0x88,0x15);
    return bVar7 | bVar6;
  }
  puStack_40 = &UNK_14014c2d3;
  cVar8 = FUN_145014060(*(longlong *)(param_1 + 0x58) + 0x1d8,0x19,param_1 + 0x68);
  if (cVar8 != '\0') {
    return 1;
  }
  lVar4 = *(longlong *)(param_1 + 0x58);
  param_1 = param_1 + 0x88;
  plVar14 = *(longlong **)(lVar4 + 0x1e0);
  uVar15 = (ulonglong)*(uint *)(lVar4 + 0x1dc);
  if (uVar15 == 0) {
    uVar15 = 0;
    plVar13 = plVar14;
  }
  else {
    plStack_48 = plVar14 + uVar15;
    lVar17 = uVar15 << 3;
    plVar13 = plVar14;
    do {
      UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)*plVar13;
      if (UNRECOVERED_JUMPTABLE == (code *)&SUB_1450141d0) {
        iVar11 = func_0x0001450141d0();
      }
      else if (UNRECOVERED_JUMPTABLE == (code *)&SUB_1450141d0) {
        iVar11 = func_0x0001450141d0();
      }
      else if (UNRECOVERED_JUMPTABLE == (code *)&SUB_1450141d0) {
        iVar11 = func_0x0001450141d0();
      }
      else {
        iVar11 = (*UNRECOVERED_JUMPTABLE)();
      }
      plVar14 = plVar13;
      if (iVar11 == 0x15) break;
      plVar13 = plVar13 + 1;
      lVar17 = lVar17 + -8;
      plVar14 = plStack_48;
    } while (lVar17 != 0);
    uVar15 = (ulonglong)*(uint *)(lVar4 + 0x1dc);
    plVar13 = *(longlong **)(lVar4 + 0x1e0);
  }
  if (plVar14 == plVar13 + uVar15) {
    return 0;
  }
  plVar14 = (longlong *)*plVar14;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar14 + 0x38);
  if (UNRECOVERED_JUMPTABLE == FUN_14014bdf0) {
    puVar1 = (uint *)(plVar14 + 4);
    puVar2 = (ulonglong *)(plVar14 + 5);
    uVar10 = *(uint *)(plVar14 + 4);
code_r0x00014014be2a:
    do {
      do {
        while (uVar9 = uVar10, (uVar9 & 0x1ff0000) == 0) {
          LOCK();
          uVar10 = *puVar1;
          bVar18 = uVar9 == uVar10;
          if (bVar18) {
            *puVar1 = uVar9 + 1;
            uVar10 = uVar9;
          }
          UNLOCK();
          if (bVar18) {
            bVar6 = FUN_140355b80(plVar14,param_1);
            FUN_140323580(puVar1);
            return bVar6;
          }
        }
        LOCK();
        uVar10 = *puVar1;
        bVar18 = uVar9 == uVar10;
        if (bVar18) {
          *puVar1 = uVar9 + 0x100;
          uVar10 = uVar9;
        }
        UNLOCK();
      } while (!bVar18);
      uVar16 = (uint)(*puVar2 >> 7) & 0xffffff;
      uVar15 = *puVar2;
      if ((*puVar2 >> 7 & 0xffffff) != 0) {
        do {
          if ((longlong)uVar15 < 0x100000000) {
            uVar12 = *puVar2;
          }
          else {
            LOCK();
            uVar12 = *puVar2;
            if (uVar15 == uVar12) {
              *puVar2 = uVar15 - 0x100000000;
              uVar12 = uVar15;
            }
            UNLOCK();
            uVar10 = uVar9;
            if (uVar15 == uVar12) goto code_r0x00014014be2a;
          }
          uVar16 = uVar16 - 1;
          uVar15 = uVar12;
        } while (uVar16 != 0);
      }
      plVar13 = (longlong *)*puVar2;
      do {
        while (plStack_48 = plVar13, 0xffffffff < (longlong)plStack_48) {
          LOCK();
          plVar13 = (longlong *)*puVar2;
          if (plStack_48 == plVar13) {
            *puVar2 = (ulonglong)(plStack_48 + -0x20000000);
            plVar13 = plStack_48;
          }
          UNLOCK();
          uVar10 = uVar9;
          if (plStack_48 == plVar13) goto code_r0x00014014be2a;
        }
        cVar8 = FUN_140006180(puVar2,1,&plStack_48);
        uVar10 = uVar9;
        plVar13 = plStack_48;
      } while (cVar8 == '\0');
    } while( true );
  }
  if (UNRECOVERED_JUMPTABLE != FUN_14014bf00) {
    if (UNRECOVERED_JUMPTABLE != FUN_14014c1a0) {
                    /* WARNING: Could not recover jumptable at 0x0001450141a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar6 = (*UNRECOVERED_JUMPTABLE)(plVar14,param_1);
      return bVar6;
    }
    puVar1 = (uint *)(plVar14 + 4);
    puVar2 = (ulonglong *)(plVar14 + 5);
    uVar10 = *(uint *)(plVar14 + 4);
code_r0x00014014c1da:
    do {
      do {
        while (uVar9 = uVar10, (uVar9 & 0x1ff0000) == 0) {
          LOCK();
          uVar10 = *puVar1;
          bVar18 = uVar9 == uVar10;
          if (bVar18) {
            *puVar1 = uVar9 + 1;
            uVar10 = uVar9;
          }
          UNLOCK();
          if (bVar18) {
            bVar6 = FUN_1420bb660(plVar14,param_1);
            FUN_140323580(puVar1);
            return bVar6;
          }
        }
        LOCK();
        uVar10 = *puVar1;
        bVar18 = uVar9 == uVar10;
        if (bVar18) {
          *puVar1 = uVar9 + 0x100;
          uVar10 = uVar9;
        }
        UNLOCK();
      } while (!bVar18);
      uVar16 = (uint)(*puVar2 >> 7) & 0xffffff;
      uVar15 = *puVar2;
      if ((*puVar2 >> 7 & 0xffffff) != 0) {
        do {
          if ((longlong)uVar15 < 0x100000000) {
            uVar12 = *puVar2;
          }
          else {
            LOCK();
            uVar12 = *puVar2;
            if (uVar15 == uVar12) {
              *puVar2 = uVar15 - 0x100000000;
              uVar12 = uVar15;
            }
            UNLOCK();
            uVar10 = uVar9;
            if (uVar15 == uVar12) goto code_r0x00014014c1da;
          }
          uVar16 = uVar16 - 1;
          uVar15 = uVar12;
        } while (uVar16 != 0);
      }
      plVar13 = (longlong *)*puVar2;
      do {
        while (plStack_48 = plVar13, 0xffffffff < (longlong)plStack_48) {
          LOCK();
          plVar13 = (longlong *)*puVar2;
          if (plStack_48 == plVar13) {
            *puVar2 = (ulonglong)(plStack_48 + -0x20000000);
            plVar13 = plStack_48;
          }
          UNLOCK();
          uVar10 = uVar9;
          if (plStack_48 == plVar13) goto code_r0x00014014c1da;
        }
        cVar8 = FUN_140006180(puVar2,1,&plStack_48);
        uVar10 = uVar9;
        plVar13 = plStack_48;
      } while (cVar8 == '\0');
    } while( true );
  }
  puVar1 = (uint *)(plVar14 + 4);
  puVar2 = (ulonglong *)(plVar14 + 5);
  uVar10 = *(uint *)(plVar14 + 4);
code_r0x00014014bf3a:
  do {
    do {
      while (uVar9 = uVar10, (uVar9 & 0x1ff0000) == 0) {
        LOCK();
        uVar10 = *puVar1;
        bVar18 = uVar9 == uVar10;
        if (bVar18) {
          *puVar1 = uVar9 + 1;
          uVar10 = uVar9;
        }
        UNLOCK();
        if (bVar18) {
          bVar6 = FUN_140435940(plVar14,param_1);
          FUN_140323580(puVar1);
          return bVar6;
        }
      }
      LOCK();
      uVar10 = *puVar1;
      bVar18 = uVar9 == uVar10;
      if (bVar18) {
        *puVar1 = uVar9 + 0x100;
        uVar10 = uVar9;
      }
      UNLOCK();
    } while (!bVar18);
    uVar16 = (uint)(*puVar2 >> 7) & 0xffffff;
    uVar15 = *puVar2;
    if ((*puVar2 >> 7 & 0xffffff) != 0) {
      do {
        if ((longlong)uVar15 < 0x100000000) {
          uVar12 = *puVar2;
        }
        else {
          LOCK();
          uVar12 = *puVar2;
          if (uVar15 == uVar12) {
            *puVar2 = uVar15 - 0x100000000;
            uVar12 = uVar15;
          }
          UNLOCK();
          uVar10 = uVar9;
          if (uVar15 == uVar12) goto code_r0x00014014bf3a;
        }
        uVar16 = uVar16 - 1;
        uVar15 = uVar12;
      } while (uVar16 != 0);
    }
    plVar13 = (longlong *)*puVar2;
    do {
      while (plStack_48 = plVar13, 0xffffffff < (longlong)plStack_48) {
        LOCK();
        plVar13 = (longlong *)*puVar2;
        if (plStack_48 == plVar13) {
          *puVar2 = (ulonglong)(plStack_48 + -0x20000000);
          plVar13 = plStack_48;
        }
        UNLOCK();
        uVar10 = uVar9;
        if (plStack_48 == plVar13) goto code_r0x00014014bf3a;
      }
      cVar8 = FUN_140006180(puVar2,1,&plStack_48);
      uVar10 = uVar9;
      plVar13 = plStack_48;
    } while (cVar8 == '\0');
  } while( true );
}

