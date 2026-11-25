// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401037d0  size: 673 bytes
// Name:    FUN_1401037d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14300af80, FUN_144e258f0, FUN_144d9fa40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401037d0(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 *param_7,undefined1 param_8)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  lStack_a8 = param_1[8];
  lStack_a0 = param_1[9];
  lStack_98 = param_1[10];
  lStack_90 = param_1[0xb];
  lStack_88 = param_1[0xc];
  lStack_80 = param_1[0xd];
  auVar1 = *(undefined1 (*) [16])(param_1 + 0xe);
  auVar8 = vpunpckhwd_avx(auVar1,auVar1);
  auVar8 = vpsrad_avx(auVar8,0x10);
  auVar8 = vcvtdq2ps_avx(auVar8);
  auVar8 = vshufpd_avx(auVar8,auVar8,3);
  fStack_78 = auVar8._0_4_ * _DAT_146159c90 + auVar1._0_4_;
  fStack_74 = auVar8._4_4_ * _UNK_146159c94 + auVar1._4_4_;
  fStack_70 = auVar8._8_4_ * _UNK_146159c98 + auVar1._8_4_;
  fStack_6c = auVar8._12_4_ * _UNK_146159c9c + auVar1._12_4_;
  if ((char)param_1[6] == '\x02') {
    plVar4 = (longlong *)FUN_144e258f0(param_1);
    if (plVar4 == (longlong *)0x0) goto LAB_140103875;
    lVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4);
    if (lVar5 != 0) goto LAB_140103875;
    lVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    if (lVar5 == 0) goto LAB_140103875;
    bVar3 = func_0x000144e2aae0(*(undefined8 *)(lVar5 + 8));
  }
  else {
LAB_140103875:
    bVar3 = 0;
  }
  if (((0x1cU >> (*(uint *)(param_1 + 6) & 0x1f) & 1) == 0) ||
     ((~bVar3 & (*(byte *)((longlong)param_1 + 0xee) & 4) == 0) != 0)) {
LAB_14010390b:
    uVar7 = 0;
  }
  else {
    lVar5 = FUN_144d9fa40(*(undefined4 *)((longlong)param_1 + 0x9c));
    if (lVar5 == 0) goto LAB_14010390b;
    lVar2 = (ulonglong)((uint)DAT_14abc3ad8 * 2) * 3;
    bVar3 = *(byte *)(lVar5 + 0x18 + lVar2);
    if ((((bVar3 == 0x1e) && (bVar3 = *(byte *)(lVar5 + 0x19 + lVar2), bVar3 == 0x1e)) &&
        (bVar3 = *(byte *)(lVar5 + 0x1a + lVar2), bVar3 == 0x1e)) &&
       (((bVar3 = *(byte *)(lVar5 + 0x1b + lVar2), bVar3 == 0x1e &&
         (bVar3 = *(byte *)(lVar5 + 0x1c + lVar2), bVar3 == 0x1e)) &&
        (bVar3 = *(byte *)(lVar5 + 0x1d + lVar2), bVar3 == 0x1e)))) goto LAB_14010390b;
    uVar7 = *(undefined8 *)(lVar5 + 0xa0 + (ulonglong)bVar3 * 8);
  }
  uVar6 = (**(code **)(*param_1 + 0xa8))(param_1);
  lVar5 = param_1[4];
  if (param_2 == 0) {
    fVar9 = *(float *)((longlong)param_1 + 0x5c);
    param_2 = FUN_144e258f0(param_1);
    if (param_2 == 0) {
      fVar9 = fVar9 + _DAT_145fc6ed8;
      uStack_b8 = *param_7;
      uStack_b0 = param_7[1];
      param_2 = 0;
      goto LAB_1401039aa;
    }
  }
  uStack_b8 = *param_7;
  uStack_b0 = param_7[1];
  fVar9 = *(float *)(param_2 + 0x6c) + _DAT_145fc6ed8;
LAB_1401039aa:
  FUN_14300af80(&lStack_a8,uVar7,uVar6,param_2,0,param_3,param_4,param_5,lVar5,fVar9,param_6,
                &uStack_b8,param_8);
  return;
}

