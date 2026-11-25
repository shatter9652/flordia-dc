// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140039c50  size: 1208 bytes
// Name:    FUN_140039c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1405b67e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140039c50(longlong *param_1,float *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  byte bVar10;
  bool bVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lStack_48;
  longlong lStack_40;
  longlong lStack_38;
  
  *param_2 = (float)(*(byte *)((longlong)param_1 + 0x123) >> 2 & 1);
  param_2[1] = 0.0;
  fVar12 = 0.0;
  if ((*(byte *)((longlong)param_1 + 0x125) & 0x10) == 0) {
    fVar12 = (float)func_0x000144e552d0(*(undefined4 *)((longlong)param_1 + 0xc4));
  }
  param_2[2] = fVar12;
  param_2[5] = *(float *)(param_1 + 0x18);
  if (param_3 == 0) {
    fVar12 = 1.8367e-40;
    bVar10 = DAT_00000030;
  }
  else {
    bVar10 = *(byte *)(param_3 + 0x30);
    plVar1 = *(longlong **)((ulonglong)bVar10 * 8 + 0x14abbe7c0);
    uVar3 = (uint)((ulonglong)(param_3 - *plVar1) / (ulonglong)*(uint *)(plVar1 + 1)) & 0x1ffff;
    fVar12 = (float)((bVar10 & 0x1f) << 0x11 | uVar3 |
                    (*(uint *)(plVar1[5] + (ulonglong)uVar3 * 4) & 0x7fe0000) << 5);
  }
  param_2[6] = fVar12;
  if (bVar10 == 4) {
    bVar11 = (ushort)((*(ushort *)(param_3 + 0x96) & 0xf) - 1) < 2;
  }
  else {
    bVar11 = false;
  }
  param_2[9] = (float)(uint)bVar11;
  param_2[0xd] = (float)(*(ushort *)(param_1 + 0x26) & 0x1fff);
  param_2[0xe] = -NAN;
  param_2[0xf] = -NAN;
  param_2[0x10] = -NAN;
  param_2[0xc] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[10] = (float)((*(uint *)((longlong)param_1 + 0x124) >> 3 & 1) +
                       (*(ushort *)(param_3 + 0x32) >> 0xe & 1) * 2);
  bVar10 = *(byte *)((longlong)param_1 + 0x126);
  if (((bVar10 & 0x40) != 0) && (*(int *)((longlong)param_1 + 0x104) != 0)) {
    lVar7 = FUN_1405b67e0();
    if (lVar7 != 0) {
      return;
    }
    bVar10 = *(byte *)((longlong)param_1 + 0x126);
  }
  if ((bVar10 & 4) != 0) {
    lVar7 = func_0x000144f56f90(param_1);
    uVar3 = *(uint *)(lVar7 + 0x680);
    if (*(uint *)(lVar7 + 0x680) == 0xffffffff) {
      uVar3 = 0;
    }
    iVar4 = func_0x000145553500();
    if ((uint)(iVar4 * 2) <= uVar3) {
      uVar3 = 0;
    }
    lVar9 = func_0x0001455b0410(uVar3);
    lVar2 = _DAT_14a943aa0;
    param_2[0xc] = (float)((ulonglong)
                           (*(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x18) - _DAT_14a943aa0) >> 5
                          );
    lVar9 = func_0x0001455b0420(uVar3);
    param_2[3] = (float)((ulonglong)(*(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x18) - lVar2) >> 5
                        );
    param_2[4] = (float)(*(uint *)(lVar7 + 0x8ac) & 0xffffff);
    return;
  }
  bVar10 = *(byte *)(param_1 + 0x27);
  if (bVar10 < 9) {
    if (bVar10 == 0) {
      lVar7 = (**(code **)(*param_1 + 0x130))(param_1);
      if (lVar7 == 0) {
        return;
      }
      if (*(char *)(lVar7 + 0x3a7) == '\x01') {
        uVar3 = *(uint *)(lVar7 + 0x39c);
        uVar6 = 0;
        uVar3 = (int)(longlong)((float)(uVar3 >> 0x10 & 0xff) * _DAT_14617236c) << 0xb |
                (int)(longlong)((float)(uVar3 >> 8 & 0xff) * _DAT_14617236c) << 6 |
                (uint)(longlong)((float)(uVar3 & 0xff) * _DAT_146172368);
      }
      else {
        uVar3 = *(uint *)(lVar7 + 0x370);
        uVar6 = (uint)*(byte *)(lVar7 + 0x3a6) << 0x1d;
      }
      param_2[0xd] = (float)((uint)param_2[0xd] | (uVar3 & 0xffff) << 0xd | uVar6);
      return;
    }
    if (bVar10 == 6) {
LAB_140039e77:
      if ((((*(byte *)(param_1 + 0x5a) & 8) != 0) ||
          ((*(byte *)((longlong)param_1 + 0x33c) & 0x40) != 0)) &&
         (lVar7 = param_1[100], lVar7 != 0)) {
        func_0x000141736b20(&lStack_48,*(undefined4 *)(lVar7 + 0x8c));
        if (lStack_48 == 0) {
          auVar13._4_4_ = _DAT_145fc6ed8;
          auVar13._0_4_ = _DAT_145fc6ed8;
          auVar13._8_4_ = _DAT_145fc6ed8;
          auVar13._12_4_ = _DAT_145fc6ed8;
          fVar12 = _DAT_148770140;
        }
        else {
          uVar3 = *(uint *)(lStack_48 + 0x38);
          uVar6 = uVar3 >> 0x10;
          if ((ushort)(uVar3 >> 0x10) <= (ushort)uVar3) {
            uVar6 = uVar3;
          }
          auVar13 = vpmovzxwd_avx(ZEXT416(uVar3));
          auVar14 = vcvtdq2ps_avx(auVar13);
          fVar12 = _DAT_145fc6ed8 / (float)(uVar6 & 0xffff);
          auVar13._0_4_ = auVar14._0_4_ * fVar12;
          auVar13._4_4_ = auVar14._4_4_ * fVar12;
          auVar13._8_4_ = auVar14._8_4_ * fVar12;
          auVar13._12_4_ = auVar14._12_4_ * fVar12;
          fVar12 = (float)((ulonglong)
                           (*(longlong *)(*(longlong *)(lStack_48 + 0x28) + 0x18) - _DAT_14a943aa8)
                          >> 5);
        }
        param_2[0xc] = fVar12;
        fVar12 = _DAT_148770144;
        if (lStack_40 != 0) {
          fVar12 = (float)((ulonglong)
                           (*(longlong *)(*(longlong *)(lStack_40 + 0x28) + 0x18) - _DAT_14a943aa8)
                          >> 5);
        }
        param_2[3] = fVar12;
        fVar12 = _DAT_14876e0f0;
        if (lStack_38 != 0) {
          fVar12 = (float)((ulonglong)
                           (*(longlong *)(*(longlong *)(lStack_38 + 0x28) + 0x18) - _DAT_14a943aa8)
                          >> 5);
        }
        auVar14 = vcvtps2ph_f16c(auVar13,3);
        auVar13 = vmovshdup_avx(auVar13);
        param_2[4] = fVar12;
        auVar13 = vcvtps2ph_f16c(auVar13,3);
        param_2[10] = (float)((uint)param_2[10] | (uint)*(byte *)(lVar7 + 0xd1) << 2);
        param_2[0xf] = (float)(*(ushort *)(lVar7 + 0x2e) | 0xffff0000);
        param_2[0x10] = (float)(auVar13._0_4_ << 0x10 | (uint)auVar14._0_2_);
      }
      fVar12 = -NAN;
      if ((*(byte *)(param_1 + 0x55) & 2) != 0) {
        if (((*(byte *)((longlong)param_1 + 0x33c) & 2) == 0) ||
           ((*(uint *)(param_3 + 0xb4) & 0x3e) != 8)) {
          if (param_1[0x51] != 0) {
            fVar12 = (float)((uint)((ulonglong)
                                    (*(longlong *)(*(longlong *)(param_1[0x51] + 0x28) + 0x18) -
                                    _DAT_14a943aa0) >> 5) | 0x80000000);
          }
        }
        else {
          uVar8 = func_0x000144da8e10(param_1[0x53]);
          fVar12 = (float)func_0x000144da2350(uVar8);
        }
      }
      param_2[0xe] = fVar12;
      return;
    }
  }
  else {
    if (bVar10 == 9) {
      fVar5 = -NAN;
      fVar12 = -NAN;
      if (param_1[0x2a] != 0) {
        uVar8 = func_0x000144da8e10();
        fVar12 = (float)func_0x000144da2350(uVar8);
      }
      param_2[0xe] = fVar12;
      if (param_1[0x2b] != 0) {
        uVar8 = func_0x000144da8e10();
        fVar5 = (float)func_0x000144da2350(uVar8);
      }
      param_2[0xf] = fVar5;
      return;
    }
    if (bVar10 == 0x1b) goto LAB_140039e77;
  }
  if (((*(byte *)((longlong)param_1 + 0x124) & 0x10) != 0) && (param_1[0x1a] != 0)) {
    uVar8 = func_0x000144da8e10();
    fVar12 = (float)func_0x000144da2350(uVar8);
    param_2[0xe] = fVar12;
  }
  return;
}

