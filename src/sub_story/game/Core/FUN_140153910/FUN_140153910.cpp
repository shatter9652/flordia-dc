// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140153910  size: 304 bytes
// Name:    FUN_140153910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450cb0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140153910(undefined8 *param_1)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auVar15 [64];
  
  param_1[0x45] = &UNK_1465292d0;
  param_1[0x59] = &UNK_1465292f0;
  param_1[0x5a] = &UNK_146529318;
  func_0x00014065fe80(param_1 + 0x5b);
  param_1[0x45] = &UNK_146546000;
  param_1[0x53] = &UNK_146546020;
  plVar11 = (longlong *)param_1[0x57];
  iVar5 = *(int *)((longlong)param_1 + 0x2b4);
  if (iVar5 != 0) {
    do {
      if (*plVar11 != 0) {
        *plVar11 = 0;
        if ((longlong *)plVar11[1] != (longlong *)0x0) {
          (**(code **)(*(longlong *)plVar11[1] + 0x10))();
          iVar5 = *(int *)((longlong)param_1 + 0x2b4);
        }
        iVar5 = iVar5 + -1;
        *(int *)((longlong)param_1 + 0x2b4) = iVar5;
      }
      plVar11 = plVar11 + 2;
    } while (iVar5 != 0);
    plVar11 = (longlong *)param_1[0x57];
  }
  if (plVar11 != (longlong *)0x0) {
    func_0x000144d9c130(plVar11);
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  puVar8 = (undefined8 *)param_1[0x41];
  if (puVar8 != (undefined8 *)0x0) {
    (**(code **)*puVar8)(puVar8,1);
  }
  if (param_1[0x3c] != 0) {
    FUN_1450cb0e0(param_1[0x3c],param_1 + 0x3c);
  }
  param_1[0x3c] = 0;
  puVar8 = (undefined8 *)param_1[0x39];
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar8 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  *param_1 = &UNK_14650f240;
  lVar12 = param_1[0x36];
  if (lVar12 != 0) {
    if (*(longlong *)(lVar12 + 0x48) != 0) {
      FUN_1450cb0e0(*(longlong *)(lVar12 + 0x48),lVar12 + 0x48);
    }
    *(undefined8 *)(lVar12 + 0x48) = 0;
    if (*(longlong *)(lVar12 + 0x40) != 0) {
      FUN_1450cb0e0(*(longlong *)(lVar12 + 0x40),lVar12 + 0x40);
    }
    *(undefined8 *)(lVar12 + 0x40) = 0;
    if (*(longlong *)(lVar12 + 0x38) != 0) {
      FUN_1450cb0e0(*(longlong *)(lVar12 + 0x38),(undefined8 *)(lVar12 + 0x38));
    }
    *(undefined8 *)(lVar12 + 0x38) = 0;
    if (*(longlong *)(lVar12 + 0x30) != 0) {
      FUN_1450cb0e0(*(longlong *)(lVar12 + 0x30));
    }
    *(undefined8 *)(lVar12 + 0x30) = 0;
    if (*(longlong *)(lVar12 + 0x28) != 0) {
      FUN_1450cb0e0(*(longlong *)(lVar12 + 0x28),(undefined8 *)(lVar12 + 0x28));
    }
    *(undefined8 *)(lVar12 + 0x28) = 0;
    if (*(longlong *)(lVar12 + 0x20) != 0) {
      FUN_1450cb0e0(*(longlong *)(lVar12 + 0x20));
    }
    func_0x000144d9c130(lVar12,0x50);
  }
  param_1[0x36] = 0;
  puVar8 = (undefined8 *)param_1[0x35];
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    psVar2 = (short *)(puVar8 + 7);
    *psVar2 = *psVar2 + -1;
    UNLOCK();
    if (*psVar2 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  puVar8 = (undefined8 *)param_1[0x34];
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    psVar2 = (short *)(puVar8 + 7);
    *psVar2 = *psVar2 + -1;
    UNLOCK();
    if (*psVar2 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  FUN_14087d730(param_1 + 0x31);
  if (param_1[0x32] != 0) {
    func_0x000144d9c130();
  }
  auVar15 = ZEXT1264(ZEXT812(0));
  param_1[0x32] = 0;
  lVar12 = 0x188;
  do {
    uVar6 = *(uint *)((longlong)param_1 + lVar12 + -0x10);
    lVar13 = lVar12 + -0x18;
    if (uVar6 != 0) {
      uVar14 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)((longlong)param_1 + lVar13) + uVar14 * 8);
        if (lVar10 != 0) {
          do {
            lVar3 = *(longlong *)(lVar10 + 0x28);
            if (*(longlong *)(lVar10 + 0x18) != 0) {
              plVar11 = (longlong *)(lVar10 + 8);
              do {
                while( true ) {
                  do {
                    lVar9 = *plVar11;
                  } while (lVar9 == 0);
                  LOCK();
                  plVar7 = *(longlong **)(lVar9 + 0x20);
                  if (plVar11 == plVar7) {
                    *(longlong *)(lVar9 + 0x20) = 0;
                    plVar7 = plVar11;
                  }
                  UNLOCK();
                  if (plVar11 != plVar7) break;
                  for (puVar8 = *(undefined8 **)(lVar10 + 0x20); puVar8 != (undefined8 *)0x0;
                      puVar8 = (undefined8 *)*puVar8) {
                    lVar4 = puVar8[1];
                    if ((lVar4 == lVar9) && (lVar4 != puVar8[3])) {
                      puVar8[1] = *(undefined8 *)(lVar4 + 0x10);
                      *(byte *)(puVar8 + 5) = *(byte *)(puVar8 + 5) & 0xfe;
                    }
                  }
                  if (*plVar11 == lVar9) {
                    *plVar11 = *(longlong *)(*plVar11 + 0x10);
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                    if (*plVar11 == 0) {
                      *(undefined8 *)(lVar10 + 0x10) = 0;
                    }
                    else {
                      *(undefined8 *)(*plVar11 + 0x18) = 0;
                    }
                  }
                  else if (*(longlong *)(lVar10 + 0x10) == lVar9) {
                    *(undefined8 *)(lVar10 + 0x10) =
                         *(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x18);
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    if (*(longlong *)(lVar10 + 0x10) != 0) {
                      *(undefined8 *)(*(longlong *)(lVar10 + 0x10) + 0x10) = 0;
                    }
                  }
                  else {
                    lVar4 = *(longlong *)(lVar9 + 0x10);
                    *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10) = lVar4;
                    *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar9 + 0x18);
                    *(undefined1 (*) [16])(lVar9 + 0x10) = auVar15._0_16_;
                  }
                  lVar9 = *(longlong *)(lVar10 + 0x18) + -1;
                  *(longlong *)(lVar10 + 0x18) = lVar9;
                  if (lVar9 == 0) goto code_r0x000145402840;
                }
              } while (*(longlong *)(lVar10 + 0x18) != 0);
            }
code_r0x000145402840:
            func_0x000144d9c130(lVar10,0x30);
            lVar10 = lVar3;
          } while (lVar3 != 0);
          uVar6 = *(uint *)((longlong)param_1 + lVar12 + -0x10);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar6);
    }
    if (*(longlong *)((longlong)param_1 + lVar13) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 *)((longlong)param_1 + lVar13) = 0;
    *(undefined4 *)((longlong)param_1 + lVar12 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar12 + -0x10) = 0;
    lVar12 = lVar13;
    if (lVar13 == 0x140) {
      FUN_14087d870(param_1 + 0x26);
      if (param_1[0x27] != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(param_1 + 0x26) = 0;
      param_1[0x27] = 0;
      FUN_14087d870(param_1 + 0x24);
      if (param_1[0x25] != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      param_1[0x25] = 0;
      FUN_14087d870(param_1 + 0x22);
      if (param_1[0x23] != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(param_1 + 0x22) = 0;
      param_1[0x23] = 0;
      func_0x000145402550(param_1 + 0x1f);
      FUN_14087d530(param_1 + 0xf);
      lVar12 = param_1[0xe];
      if (lVar12 != 0) {
        FUN_143183b60(lVar12);
        lVar13 = lRam0000000148fe6478;
        FUN_1455060a0(lRam0000000148fe6478,lVar12);
        if (*(longlong *)(lVar13 + 0x18) != 0) {
          FUN_140189080(lVar13,lVar12);
        }
      }
      func_0x00014087d510(param_1 + 0xc);
      func_0x00014087d510(param_1 + 10);
      *param_1 = &UNK_1465a6f70;
      return;
    }
  } while( true );
}

