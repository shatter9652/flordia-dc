// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fe9d0  size: 476 bytes
// Name:    FUN_1400fe9d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144a687d0, FUN_14509a340, FUN_1451b46d0, FUN_1451cf970, FUN_1455d5700
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fe9d0(longlong param_1,uint *param_2,undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined *puStack_40;
  longlong lVar20;
  
  if ((*(uint *)(param_1 + 0xca0) >> 0xb & 1) != 0) {
    LOCK();
    *(uint *)(param_1 + 0xca0) = *(uint *)(param_1 + 0xca0) & 0xfffff7ff;
    UNLOCK();
    func_0x0001400fe9c0(param_1,*(int *)(param_1 + 0x8f4) + 1);
    func_0x000144f9f580(param_1 + 0x950,*(int *)(param_1 + 0x8f4) + 1);
  }
  lVar20 = param_1 + 0x950;
  cVar5 = FUN_14509a340(lVar20);
  if (cVar5 != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0xabc);
    if (*(int *)(param_1 + 0xc98) == 0) {
      uVar6 = func_0x0001452b6800(*(undefined4 *)(param_1 + 0xc58));
    }
    else {
      uVar6 = 0;
    }
    FUN_1451b46d0(param_1,lVar20,0,uVar6,uVar1);
    if (0 < *(int *)(param_1 + 0x940)) {
      if (*(int *)(param_1 + 0x8f4) < 0) {
        iVar12 = (int)*(short *)(param_1 + 0xa68);
        *(int *)(param_1 + 0x8e4) = iVar12 + -1;
        *(int *)(param_1 + 0x8e8) = iVar12;
        if (param_3 == (undefined1 (*) [16])0x0) {
          pfVar7 = (float *)func_0x000144eb7050(lVar20);
          fVar16 = *pfVar7;
          fVar17 = pfVar7[1];
          fVar18 = pfVar7[2];
          fVar19 = pfVar7[3];
          pfVar7 = (float *)func_0x000144eb7050(lVar20,iVar12);
          auVar15._0_4_ = (fVar16 + *pfVar7) * _DAT_145fc6edc;
          auVar15._4_4_ = (fVar17 + pfVar7[1]) * _DAT_145fc6edc;
          auVar15._8_4_ = (fVar18 + pfVar7[2]) * _DAT_145fc6edc;
          auVar15._12_4_ = (fVar19 + pfVar7[3]) * _DAT_145fc6edc;
        }
        else {
          auVar15 = *param_3;
        }
        *(undefined1 (*) [16])(param_1 + 0x8c0) = auVar15;
        cVar5 = FUN_144a687d0(param_1,param_1 + 0x8c0);
        if (cVar5 == '\0') {
          func_0x00014043b750(*(undefined8 *)(param_1 + 0xc38),1);
        }
        else {
          *(short *)(param_1 + 0xa68) = (short)*(undefined4 *)(param_1 + 0x8f4) + 1;
          FUN_1455d5700(param_1,param_2);
          FUN_1451cf970(param_1);
        }
        func_0x0001404411c0(param_1,auStack_58);
        func_0x000144e99350(param_1,auStack_68);
        func_0x0001455d56e0(param_1,auStack_68,auStack_58);
      }
      goto LAB_1400feac8;
    }
  }
  func_0x00014043b750(*(undefined8 *)(param_1 + 0xc38),1);
LAB_1400feac8:
  if (**(char **)(param_1 + 0xc38) != '\x01') {
    return;
  }
  if (param_2 == (uint *)0x0) {
    puStack_50 = &UNK_144a68efa;
    FUN_140004b40(0x14a15abc0);
    lVar20 = *_DAT_14a04ec10;
    uVar2 = *(uint *)(_DAT_14a04ec10 + 1);
    uVar13 = uRam000000014a15abb0;
    lVar8 = lRam000000014a15abb8;
    if (uRam000000014a15abb4 == uRam000000014a15abb0) {
      uVar13 = 1;
      if (1 < uRam000000014a15abb4) {
        uVar13 = uRam000000014a15abb4 >> 1;
      }
      uVar13 = uVar13 + uRam000000014a15abb4;
      puStack_50 = &UNK_144a68f3b;
      lVar8 = func_0x000144d9c140(4);
      if ((ulonglong)uRam000000014a15abb4 != 0) {
        puStack_50 = &UNK_144a68f5d;
        func_0x000145f40560(lVar8,lRam000000014a15abb8,(ulonglong)uRam000000014a15abb4 << 2);
      }
      if (lRam000000014a15abb8 != 0) {
        puStack_50 = &UNK_144a68f6e;
        func_0x000144d9c130();
      }
    }
    lRam000000014a15abb8 = lVar8;
    uRam000000014a15abb0 = uVar13;
    uVar10 = (ulonglong)uRam000000014a15abb4;
    uRam000000014a15abb4 = uRam000000014a15abb4 + 1;
    *(int *)(lRam000000014a15abb8 + uVar10 * 4) =
         (int)((ulonglong)(param_1 - lVar20) / (ulonglong)uVar2);
    iRam000000014a15abd0 = iRam000000014a15abd0 + -1;
    uVar10 = uRam000000014a15abc0;
    if (iRam000000014a15abd0 == 0) {
      do {
        uVar9 = uVar10;
        LOCK();
        uVar10 = uVar9;
        uVar3 = (ulonglong)((int)uVar9 - 1) | 0xffffffff00000000;
        if (uVar9 != uRam000000014a15abc0) {
          uVar10 = uRam000000014a15abc0;
          uVar3 = uRam000000014a15abc0;
        }
        uRam000000014a15abc0 = uVar3;
        UNLOCK();
      } while (uVar9 != uVar10);
      if ((uVar9 & 0xfffffffe) != 0) {
        iRam000000014a15abd0 = 0;
        lVar20 = lRam000000014a15abc8;
        do {
          while (lVar20 < 0) {
            puStack_50 = (undefined *)0x140019c89;
            cVar5 = FUN_1400062d0(0x14a15abc8,1,&stack0xffffffffffffffe0);
            if (cVar5 != '\0') {
              return;
            }
          }
          LOCK();
          lVar8 = lVar20;
          lVar4 = lVar20 + 0x100000000;
          if (lVar20 != lRam000000014a15abc8) {
            lVar8 = lRam000000014a15abc8;
            lVar4 = lRam000000014a15abc8;
          }
          lRam000000014a15abc8 = lVar4;
          UNLOCK();
          bVar14 = lVar20 != lVar8;
          lVar20 = lVar8;
        } while (bVar14);
        return;
      }
    }
    return;
  }
  lVar20 = *_DAT_14a04ec10;
  uVar2 = *(uint *)(_DAT_14a04ec10 + 1);
  uVar13 = param_2[1];
  if (uVar13 == *param_2) {
    uVar11 = 1;
    if (1 < uVar13) {
      uVar11 = uVar13 >> 1;
    }
    puStack_40 = &UNK_1455d576f;
    FUN_1455350b0(param_2,uVar11 + uVar13);
    uVar13 = param_2[1];
  }
  param_2[1] = uVar13 + 1;
  *(int *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar13 * 4) =
       (int)((ulonglong)(param_1 - lVar20) / (ulonglong)uVar2);
  return;
}

