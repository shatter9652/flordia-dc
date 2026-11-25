// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b0760  size: 568 bytes
// Name:    FUN_1400b0760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143e55490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b0760(uint *param_1,int *param_2,longlong param_3,uint param_4,byte param_5,
                  uint param_6,uint param_7,uint param_8,byte param_9,float param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong unaff_GS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  
  auVar10 = ZEXT416(param_7);
  param_4 = param_4 >> (param_5 & 0x1f);
  uVar5 = param_4 & 7;
  if (uVar5 == 7) {
    FUN_143e55490(param_1,param_2,param_3,param_7,param_6,param_10);
    uVar5 = *param_1;
    uVar2 = uVar5;
    if (*(longlong *)(param_3 + 0x58) != 0) {
      func_0x0001455cc110(param_8,CONCAT71((int7)((ulonglong)param_3 >> 8),param_9) & 0xffffffff,
                          param_1);
      uVar2 = *param_1;
      if ((uVar2 == param_8 & param_9) == 1) {
        *param_2 = -1;
        uVar2 = *param_1;
      }
    }
    if (param_6 < uVar2) {
      uVar2 = param_6;
    }
    *param_1 = uVar2;
    if (uVar2 == uVar5) {
      return;
    }
  }
  else {
    if ((param_4 & 4) != 0) {
      *param_1 = param_4 & 3;
      return;
    }
    if (*(longlong *)(param_3 + 0x58) == 0) {
      return;
    }
    *param_1 = param_6;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      auVar11 = ZEXT464(param_7);
      func_0x0001455db994();
      auVar10 = auVar11._0_16_;
    }
    fVar9 = auVar10._0_4_;
    lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    uVar2 = *(uint *)(lVar4 + 0x12d8);
    if ((uVar2 & 6) == 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        auVar11 = ZEXT1664(auVar10);
        func_0x0001455db994();
        uVar2 = *(uint *)(lVar4 + 0x12d8);
        fVar9 = auVar11._0_4_;
      }
      lVar4 = (ulonglong)(((uVar2 & 0x20) >> 5) << 7) + 0xa8;
    }
    else {
      lVar4 = 0x128;
    }
    uVar2 = _DAT_14615a2c4;
    if (param_6 != 0) {
      fVar6 = *(float *)(param_3 + 0x70);
      param_10 = param_10 * *(float *)(lVar4 + 0x14a15e080);
      fVar8 = param_10 * fVar6;
      if (fVar9 < fVar8) {
        uVar3 = 0;
        fVar7 = 0.0;
      }
      else {
        uVar1 = 1;
        do {
          fVar7 = fVar6;
          uVar3 = uVar1;
          if (param_6 == uVar3) goto LAB_1400b092c;
          fVar6 = *(float *)(param_3 + 0x70 + (longlong)(int)uVar3 * 4);
          fVar8 = param_10 * fVar6;
          uVar1 = uVar3 + 1;
        } while (fVar8 <= fVar9);
      }
      fVar6 = (fVar6 - fVar7) * _DAT_145fc6edc;
      *param_1 = uVar3;
      auVar10 = vminss_avx(ZEXT416(uVar2),ZEXT416((uint)fVar6));
      if (fVar8 - fVar9 < auVar10._0_4_) {
        *param_2 = (int)(((fVar8 - fVar9) * _DAT_146159f68) / auVar10._0_4_);
      }
    }
LAB_1400b092c:
    if (uVar5 <= *param_1) {
      return;
    }
    *param_1 = uVar5;
  }
  *param_2 = -1;
  return;
}

