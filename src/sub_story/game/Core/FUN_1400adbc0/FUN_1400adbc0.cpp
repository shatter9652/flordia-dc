// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400adbc0  size: 664 bytes
// Name:    FUN_1400adbc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ade90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001400adcbe: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400adbc0(longlong param_1,longlong param_2,longlong param_3,short param_4,longlong param_5
                  )

{
  undefined1 auVar1 [32];
  undefined4 uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 aauStack_38 [2] [16];
  
  uStack_98 = *(undefined8 *)(param_1 + 0x670);
  uStack_90 = *(undefined8 *)(param_1 + 0x678);
  uStack_88 = *(undefined8 *)(param_1 + 0x680);
  uStack_80 = *(undefined8 *)(param_1 + 0x688);
  uStack_78 = *(undefined8 *)(param_1 + 0x690);
  uStack_70 = *(undefined8 *)(param_1 + 0x698);
  uStack_68 = *(undefined8 *)(param_1 + 0x6a0);
  uStack_60 = *(undefined8 *)(param_1 + 0x6a8);
  lVar5 = (longlong)param_4;
  uStack_d8 = *(undefined8 *)(param_1 + 0x6b0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x6b8);
  uStack_c8 = *(undefined8 *)(param_1 + 0x6c0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x6c8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x6d0);
  uStack_b0 = *(undefined8 *)(param_1 + 0x6d8);
  uStack_a8 = *(undefined8 *)(param_1 + 0x6e0);
  uStack_a0 = *(undefined8 *)(param_1 + 0x6e8);
  pauVar3 = (undefined1 (*) [16])(lVar5 * 0x10 + param_2);
  if ((*(byte *)(param_1 + 0x709) & 4) == 0) {
    auStack_58 = *pauVar3;
    auVar7._4_4_ = _DAT_145fc6f48;
    auVar7._0_4_ = _DAT_145fc6f48;
    auVar7._8_4_ = _DAT_145fc6f48;
    auVar7._12_4_ = _DAT_145fc6f48;
    auVar7 = vcmpps_avx(auStack_58,auVar7,0);
    uVar2 = vmovmskps_avx(auVar7);
    if ((~(byte)uVar2 & 3) == 0) {
      auVar10._4_4_ = _DAT_145fc6ed8;
      auVar10._0_4_ = _DAT_145fc6ed8;
      auVar10._8_4_ = _DAT_145fc6ed8;
      auVar10._12_4_ = _DAT_145fc6ed8;
      auVar7 = vshufps_avx(auStack_58,auStack_58,0xfe);
      auVar7 = vcmpps_avx(auVar7,auVar10,0);
      uVar2 = vmovmskps_avx(auVar7);
      if ((~(byte)uVar2 & 3) == 0) {
        *(undefined1 *)(param_3 + lVar5 * 2) = 1;
        goto code_r0x000145f40560;
      }
    }
    auVar7 = vshufps_avx(auStack_58,auStack_58,0xfa);
    auVar10 = vshufps_avx(auStack_58,auStack_58,0x50);
    auVar7 = vcmpps_avx(auVar10,auVar7,5);
    if ((((SUB161(auVar7 >> 0x1f,0) & 1) != 0 || (SUB161(auVar7 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar7 >> 0x5f,0) & 1) != 0) || auVar7[0xf] < '\0') {
      return;
    }
    puVar4 = auStack_58;
    *(undefined1 *)(param_3 + lVar5 * 2) = 1;
    param_5 = param_5 + lVar5 * 0x120;
    goto LAB_1400addfb;
  }
  auVar1 = vcvtph2ps_f16c(*pauVar3);
  auVar6 = auVar1._0_16_;
  auVar7 = vshufps_avx(auVar6,auVar6,0xfa);
  auVar10 = vshufps_avx(auVar6,auVar6,0x50);
  auVar8 = auVar1._16_16_;
  auVar7 = vcmpps_avx(auVar10,auVar7,5);
  if ((((SUB161(auVar7 >> 0x1f,0) & 1) == 0 && (SUB161(auVar7 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar7 >> 0x5f,0) & 1) == 0) && -1 < auVar7[0xf]) {
LAB_1400adc5c:
    auStack_48 = auVar8;
    auVar8 = auVar6;
  }
  else {
    auVar7 = vshufps_avx(auVar8,auVar8,0xfa);
    auVar10 = vshufps_avx(auVar8,auVar8,0x50);
    auVar7 = vcmpps_avx(auVar10,auVar7,5);
    auStack_48 = auVar6;
    if ((((SUB161(auVar7 >> 0x1f,0) & 1) != 0 || (SUB161(auVar7 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar7 >> 0x5f,0) & 1) != 0) || auVar7[0xf] < '\0') goto LAB_1400adc5c;
  }
  auVar6._4_4_ = _DAT_145fc6f48;
  auVar6._0_4_ = _DAT_145fc6f48;
  auVar6._8_4_ = _DAT_145fc6f48;
  auVar6._12_4_ = _DAT_145fc6f48;
  auVar7 = vcmpps_avx(auVar8,auVar6,0);
  uVar2 = vmovmskps_avx(auVar7);
  if ((~(byte)uVar2 & 3) == 0) {
    auVar9._4_4_ = _DAT_145fc6ed8;
    auVar9._0_4_ = _DAT_145fc6ed8;
    auVar9._8_4_ = _DAT_145fc6ed8;
    auVar9._12_4_ = _DAT_145fc6ed8;
    auVar7 = vshufps_avx(auVar8,auVar8,0xfe);
    auVar7 = vcmpps_avx(auVar7,auVar9,0);
    uVar2 = vmovmskps_avx(auVar7);
    if ((~(byte)uVar2 & 3) == 0) {
      *(undefined1 *)(param_3 + lVar5 * 2) = 1;
code_r0x000145f40560:
                    /* WARNING: Could not recover jumptable at 0x000145f40560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      memcpy(lVar5 * 0x120 + param_5,param_1,0x90);
      return;
    }
  }
  auVar7 = vshufps_avx(auVar8,auVar8,0xfa);
  auVar10 = vshufps_avx(auVar8,auVar8,0x50);
  auVar7 = vcmpps_avx(auVar10,auVar7,5);
  if ((((SUB161(auVar7 >> 0x1f,0) & 1) == 0 && (SUB161(auVar7 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar7 >> 0x5f,0) & 1) == 0) && -1 < auVar7[0xf]) {
    *(undefined1 *)(param_3 + lVar5 * 2) = 1;
    auVar11 = ZEXT1664(auStack_48);
    aauStack_38[0] = auVar8;
    FUN_1400ade90(aauStack_38,&uStack_98,&uStack_d8,lVar5 * 0x120 + param_5);
    auStack_48 = auVar11._0_16_;
  }
  auVar7 = vshufps_avx(auStack_48,auStack_48,0xfa);
  auVar10 = vshufps_avx(auStack_48,auStack_48,0x50);
  auVar7 = vcmpps_avx(auVar10,auVar7,5);
  if ((((SUB161(auVar7 >> 0x1f,0) & 1) != 0 || (SUB161(auVar7 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar7 >> 0x5f,0) & 1) != 0) || auVar7[0xf] < '\0') {
    return;
  }
  puVar4 = auStack_48;
  *(undefined1 *)(param_3 + 1 + lVar5 * 2) = 1;
  param_5 = param_5 + 0x90 + lVar5 * 0x120;
LAB_1400addfb:
  FUN_1400ade90(puVar4,&uStack_98,&uStack_d8,param_5);
  return;
}

