// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c7780  size: 895 bytes
// Name:    FUN_1400c7780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d27020, FUN_1415a98f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c7780(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_b8 [16];
  undefined4 uStack_a8;
  undefined1 uStack_a1;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined *puStack_80;
  int iStack_78;
  float fStack_74;
  undefined1 uStack_70;
  
  auStack_b8._0_12_ = ZEXT812(0);
  auStack_b8._12_4_ = 0;
  uStack_a1 = 0;
  uStack_a8 = 0;
  uVar4 = *(uint *)(param_1 + 0x4c);
  if (uVar4 != 0) {
    lVar7 = param_1 + 0x98;
    uVar8 = 0;
    do {
      if (*(char *)(lVar7 + 5) == '\x01') {
        FUN_141d27020(auStack_b8,lVar7);
        uVar4 = *(uint *)(param_1 + 0x4c);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x50;
    } while (uVar8 < uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x2d0);
  if (uVar4 != 0) {
    lVar7 = param_1 + 0x324;
    uVar8 = 0;
    do {
      if (*(char *)(lVar7 + 4) == '\x01') {
        FUN_141d27020(auStack_b8,lVar7);
        uVar4 = *(uint *)(param_1 + 0x2d0);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x50;
    } while (uVar8 < uVar4);
  }
  uVar4 = *(uint *)(param_1 + 0x560);
  if (uVar4 != 0) {
    lVar7 = param_1 + 0x5a8;
    uVar8 = 0;
    do {
      if (*(char *)(lVar7 + 4) == '\x01') {
        FUN_141d27020(auStack_b8,lVar7);
        uVar4 = *(uint *)(param_1 + 0x560);
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x40;
    } while (uVar8 < uVar4);
  }
  uVar8 = (ulonglong)(uint)auStack_b8._8_4_;
  uVar3 = auStack_b8._0_8_;
  if (0 < (int)auStack_b8._8_4_) {
    uVar10 = 0;
    do {
      piVar9 = *(int **)(auStack_b8._0_8_ + uVar10 * 8);
      if (piVar9 != (int *)0x0) {
        lStack_90 = param_1 + 0x2e0;
        lStack_88 = param_1 + 0x50;
        bVar11 = false;
        fVar12 = 0.0;
        lStack_98 = param_1 + 0x570;
        do {
          do {
            iVar1 = *piVar9;
            plVar5 = (longlong *)FUN_1415a98f0();
            uVar6 = (ulonglong)*(uint *)(param_1 + 0x4c);
            if (plVar5 == (longlong *)0x0) {
              if (uVar6 != 0) {
                lVar7 = 0;
                do {
                  if (*(int *)(param_1 + 0x98 + lVar7) == iVar1) {
                    *(undefined1 *)(param_1 + 0x9d + lVar7) = 0;
                  }
                  lVar7 = lVar7 + 0x50;
                } while (uVar6 * 0x50 != lVar7);
              }
              uVar4 = *(uint *)(param_1 + 0x2d0);
              if ((ulonglong)uVar4 != 0) {
                lVar7 = 0;
                do {
                  if (*(int *)(param_1 + 0x324 + lVar7) == iVar1) {
                    *(undefined1 *)(param_1 + 0x328 + lVar7) = 0;
                  }
                  lVar7 = lVar7 + 0x50;
                } while ((ulonglong)uVar4 * 0x50 != lVar7);
              }
              uVar4 = *(uint *)(param_1 + 0x560);
              if ((ulonglong)uVar4 != 0) {
                lVar7 = 0;
                do {
                  if (*(int *)(param_1 + 0x5a8 + lVar7) == iVar1) {
                    *(undefined1 *)(param_1 + 0x5ac + lVar7) = 0;
                  }
                  lVar7 = lVar7 + 0x40;
                } while ((ulonglong)uVar4 << 6 != lVar7);
              }
            }
            else {
              fVar13 = 0.0;
              lVar7 = lStack_88;
              for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                if (*(int *)(lVar7 + 0x48) == iVar1) {
                  fVar13 = *(float *)(lVar7 + 0x34);
                  break;
                }
                lVar7 = lVar7 + 0x50;
              }
              uVar6 = (ulonglong)*(uint *)(param_1 + 0x2d0);
              if (uVar6 != 0) {
                if ((fVar13 == fVar12) && (lVar7 = lStack_90, !NAN(fVar13) && !NAN(fVar12))) {
                  do {
                    if (*(int *)(lVar7 + 0x44) == iVar1) {
                      fVar13 = *(float *)(lVar7 + 0x30);
                      break;
                    }
                    lVar7 = lVar7 + 0x50;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
              }
              uVar6 = (ulonglong)*(uint *)(param_1 + 0x560);
              if (uVar6 != 0) {
                if ((fVar13 == fVar12) && (lVar7 = lStack_98, !NAN(fVar13) && !NAN(fVar12))) {
                  do {
                    if (*(int *)(lVar7 + 0x38) == iVar1) {
                      fVar13 = *(float *)(lVar7 + 0x24);
                      break;
                    }
                    lVar7 = lVar7 + 0x40;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
              }
              func_0x0001425d4840(param_1,iVar1);
              puStack_80 = &UNK_146202ac8;
              uStack_70 = 1;
              iStack_78 = iVar1;
              fStack_74 = fVar13;
              (**(code **)(*plVar5 + 0x100))(plVar5,&puStack_80);
              bVar11 = true;
            }
            piVar9 = *(int **)(piVar9 + 2);
          } while (piVar9 != (int *)0x0);
          uVar6 = (longlong)(int)uVar10;
          do {
            uVar10 = uVar6 + 1;
            if ((longlong)uVar8 <= (longlong)uVar10) {
              if (bVar11) {
                func_0x0001425d3e90(param_1);
              }
              goto LAB_1400c77f3;
            }
            piVar9 = *(int **)(uVar3 + 8 + uVar6 * 8);
            uVar6 = uVar10;
          } while (piVar9 == (int *)0x0);
        } while( true );
      }
      uVar10 = uVar10 + 1;
    } while (uVar8 != uVar10);
  }
LAB_1400c77f3:
  if (uVar8 != 0) {
    uVar10 = 0;
    do {
      lVar7 = *(longlong *)(uVar3 + uVar10 * 8);
      while (lVar7 != 0) {
        lVar2 = *(longlong *)(lVar7 + 8);
        func_0x000144d9c130(lVar7,0x10);
        lVar7 = lVar2;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  if (uVar3 != 0) {
    func_0x000144d9c130(uVar3);
  }
  return;
}

