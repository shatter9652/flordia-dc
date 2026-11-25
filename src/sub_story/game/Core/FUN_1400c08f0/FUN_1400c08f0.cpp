// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c08f0  size: 484 bytes
// Name:    FUN_1400c08f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400c08f0(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = _DAT_145fc6ed8;
  uVar5 = *(uint *)(*(longlong *)(param_2 + 0x1df2c8) + 4);
  uVar8 = uVar5 >> 4 & 0xfffff;
  uVar7 = *(int *)(param_2 + 0x1df330) + uVar8;
  uVar4 = (*(int *)(param_2 + 0x1df330) + 1U) % (uVar5 & 0xf);
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x1df2c0) + 0x88) + 0x10);
  uVar5 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)(uVar7 / 0x555 << 4)) + 4 +
                   (ulonglong)(uVar7 % 0x555) * 0xc);
  if ((*(byte *)(param_1 + 0xd2) & 1) == 0) {
    uVar6 = uVar5 >> 0x10 & 0xff;
    uVar7 = uVar5 >> 0x18;
    if (uVar6 < uVar5 >> 0x18) {
      uVar7 = uVar6;
    }
    uVar8 = uVar8 + uVar4;
    uVar5 = *(uint *)(*(longlong *)(lVar1 + (ulonglong)(uVar8 / 0x555 << 4)) + 4 +
                     (ulonglong)(uVar8 % 0x555) * 0xc);
    uVar4 = uVar5 >> 0x10 & 0xff;
    uVar5 = uVar5 >> 0x18;
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
  }
  else {
    uVar8 = uVar8 + uVar4;
    uVar7 = uVar5 >> 0x10 & 0xff;
    uVar5 = (uint)*(byte *)(*(longlong *)(lVar1 + (ulonglong)(uVar8 / 0x555 << 4)) + 6 +
                           (ulonglong)(uVar8 % 0x555) * 0xc);
  }
  uVar3 = 1;
  fVar9 = *(float *)(param_1 + 0x1a4) + _DAT_146159cbc;
  auVar2 = vcmpss_avx(ZEXT416((uint)((float)uVar7 * _DAT_14615b724)),ZEXT416((uint)fVar9),1);
  fVar11 = (float)(auVar2._0_4_ & (uint)(fVar9 - (float)uVar7 * _DAT_14615b724));
  auVar2 = vcmpss_avx(ZEXT416((uint)((float)uVar5 * _DAT_14615b724)),ZEXT416((uint)fVar9),1);
  fVar9 = (float)(auVar2._0_4_ & (uint)(fVar9 - (float)uVar5 * _DAT_14615b724));
  if ((0.0 < fVar11) || (0.0 < fVar9)) {
    if (((*(byte *)(param_1 + 0xd5) & 4) != 0) || (fVar11 + fVar9 <= *(float *)(param_2 + 0x1df390))
       ) {
      auVar2 = vminss_avx(ZEXT416((uint)(fVar11 / *(float *)(param_2 + 0x1df390))),
                          ZEXT416((uint)_DAT_145fc6ed8));
      *param_3 = auVar2._0_4_;
      auVar2 = vmaxss_avx(ZEXT416((uint)(fVar10 - fVar9 / *(float *)(param_2 + 0x1df390))),
                          ZEXT816(0) << 0x20);
      fVar10 = auVar2._0_4_;
      *param_4 = fVar10;
      if (fVar10 < *param_3) {
        fVar10 = (fVar10 + *param_3) * _DAT_145fc6edc;
        *param_4 = fVar10;
        *param_3 = fVar10;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

