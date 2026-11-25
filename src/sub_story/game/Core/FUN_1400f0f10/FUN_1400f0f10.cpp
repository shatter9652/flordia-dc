// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0f10  size: 660 bytes
// Name:    FUN_1400f0f10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9d7a0, FUN_144e29dd0, FUN_144e8f2f0, FUN_144f412b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400f0f10(longlong param_1,char param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 in_register_00001304 [12];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  auStack_58._0_8_ = CONCAT44(_DAT_145fc6f50,_DAT_145fc6f50);
  auStack_58._8_4_ = _DAT_145fc6f50;
  auStack_58._12_4_ = _DAT_145fc6f50;
  auStack_48._4_4_ = _DAT_145fc6f54;
  auStack_48._0_4_ = _DAT_145fc6f54;
  auStack_48._8_4_ = _DAT_145fc6f54;
  auStack_48._12_4_ = _DAT_145fc6f54;
  FUN_144f412b0(auStack_58._0_8_,auStack_58);
  auVar8 = vsubps_avx(auStack_48,auStack_58);
  lVar5 = *(longlong *)(param_1 + 0x20);
  fVar7 = auVar8._0_4_ * _DAT_145fc6edc;
  fVar10 = auVar8._4_4_ * _DAT_145fc6edc;
  fVar11 = auVar8._8_4_ * _DAT_145fc6edc;
  fVar12 = auVar8._12_4_ * _DAT_145fc6edc;
  auVar8._0_4_ = fVar7 * fVar7;
  auVar8._4_4_ = fVar10 * fVar10;
  auVar8._8_4_ = fVar11 * fVar11;
  auVar8._12_4_ = fVar12 * fVar12;
  auVar8 = vblendps_avx(auVar8,ZEXT416(0) << 0x20,8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar9 = vrsqrtss_avx(auVar8,auVar8);
  fVar7 = auVar9._0_4_;
  fVar7 = ((fVar7 * fVar7 * auVar8._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar7 + fVar7) *
          auVar8._0_4_;
  auVar8 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar8,2);
  fVar10 = (float)(auVar8._0_4_ & (uint)fVar7);
  cVar3 = FUN_144e8f2f0(auVar8._0_8_,fVar7);
  if (cVar3 != '\0') {
LAB_1400f0fc7:
    return (ulonglong)(uint)(fVar10 + _DAT_146159c58);
  }
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  if (((uint)uVar6 >> 0x19 & 1) != 0) {
    return (ulonglong)(uint)(fVar10 + _DAT_14615b35c);
  }
  cVar3 = FUN_144e29dd0(param_1);
  if (cVar3 != '\0') {
    return (ulonglong)(uint)(fVar10 + _DAT_14615b360);
  }
  cVar3 = func_0x0001451f9a70(uVar6);
  if (cVar3 != '\0') {
    auVar8 = vmaxss_avx(ZEXT416((uint)((float)*(ushort *)(param_1 + 0x88) * _DAT_146159cc4)),
                        ZEXT416((uint)(fVar10 + _DAT_14615b360)));
    return auVar8._0_8_;
  }
  if ((*(byte *)(lVar5 + 0x9a) & 0x7f) == 3) {
    return (ulonglong)(uint)(fVar10 + _DAT_14615ae8c);
  }
  lVar4 = func_0x000144e8f430(lVar5 + 0x10,_DAT_149e5822c);
  if (lVar4 != 0) {
    return (ulonglong)(uint)(fVar10 + _DAT_14615be18);
  }
  lVar5 = func_0x000144e8f430(lVar5 + 0x10,_DAT_14999adbc);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x29) == '\x01')) goto LAB_1400f0fc7;
  uVar6 = func_0x000144e3bfa0(param_1);
  cVar3 = func_0x000144e8f490(uVar6,_DAT_1492d79dc);
  if ((cVar3 != '\0') &&
     ((DAT_147c1efc0 != '\0' ||
      (fVar7 = (float)func_0x000144f2b490(param_1), _DAT_145fc6edc < fVar7)))) {
    return (ulonglong)(uint)(fVar10 + _DAT_146159c64);
  }
  lVar5 = func_0x000144e8f430(uVar6,_DAT_14999ee54);
  if (lVar5 != 0) {
    return (ulonglong)(uint)(fVar10 + *(float *)(lVar5 + 0x44));
  }
  uVar1 = *(ushort *)(param_1 + 0x88);
  if ((~*(uint *)(param_1 + 0xa4) & 0x7ffe) != 0) {
    iVar2 = *(int *)(param_1 + 0xa0);
    cVar3 = FUN_144d9d7a0(iVar2);
    if (cVar3 != '\0') {
      fVar7 = _DAT_146159ce0;
      if ((param_2 == '\0') && ((ulonglong)_DAT_147c1efcc != 0)) {
        lVar5 = 0;
        do {
          if (iVar2 == *(int *)(_DAT_147c1efd0 + 4 + lVar5)) goto LAB_1400f1155;
          lVar5 = lVar5 + 8;
        } while ((ulonglong)_DAT_147c1efcc << 3 != lVar5);
      }
      goto joined_r0x0001400f1162;
    }
  }
LAB_1400f1155:
  fVar7 = _DAT_146159ae0;
  if ((*(byte *)(param_1 + 0x102) & 0x20) != 0) {
    return (ulonglong)(uint)_DAT_14615ae8c;
  }
joined_r0x0001400f1162:
  if (uVar1 < 0x15) {
    auVar9._0_4_ = (float)(ushort)(uVar1 + 5);
    auVar9._4_12_ = in_register_00001304;
    auVar8 = vminss_avx(ZEXT416((uint)fVar7),auVar9);
    fVar7 = auVar8._0_4_;
  }
  return (ulonglong)(uint)(fVar7 + fVar10);
}

