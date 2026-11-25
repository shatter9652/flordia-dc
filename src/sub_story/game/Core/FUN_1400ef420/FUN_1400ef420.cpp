// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ef420  size: 435 bytes
// Name:    FUN_1400ef420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ef700, FUN_144f7ab60, FUN_1400ef5e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1400ef420(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_88 [104];
  undefined1 auVar11 [64];
  undefined1 auVar14 [64];
  
  lVar1 = *param_2;
  fVar9 = 0.0;
  if (((lVar1 != 0) && (fVar9 = 0.0, param_2[2] != 0)) && (param_2[1] != 0)) {
    cVar2 = FUN_1400ef700(0,param_2[1] + 0x40);
    if (cVar2 == '\0') {
      fVar8 = *(float *)(lVar1 + 0x14) * _DAT_146159cbc;
    }
    else {
      fVar8 = (_DAT_146159c48 * 0.0 + _DAT_145fc6f48) * *(float *)(lVar1 + 0x14);
    }
    auVar10._4_4_ = _DAT_145fc6f4c;
    auVar10._0_4_ = _DAT_145fc6f4c;
    auVar10._8_4_ = _DAT_145fc6f4c;
    auVar10._12_4_ = _DAT_145fc6f4c;
    auVar11 = ZEXT1664(auVar10);
    auVar13._4_4_ = _DAT_145fc6f70;
    auVar13._0_4_ = _DAT_145fc6f70;
    auVar13._8_4_ = _DAT_145fc6f70;
    auVar13._12_4_ = _DAT_145fc6f70;
    auVar14 = ZEXT1664(auVar13);
    puVar4 = (uint *)param_2[2];
    fVar9 = 0.0;
    fVar12 = 0.0;
    auVar5._0_4_ = _DAT_145fc6f4c & *puVar4;
    auVar5._4_4_ = _DAT_145fc6f4c & puVar4[1];
    auVar5._8_4_ = _DAT_145fc6f4c & puVar4[2];
    auVar5._12_4_ = _DAT_145fc6f4c & puVar4[3];
    auVar5 = vcmpps_avx(auVar5,auVar13,0x11);
    uVar3 = vmovmskps_avx(auVar5);
    if ((~(byte)uVar3 & 7) == 0) {
      FUN_144f7ab60(param_1,auStack_88);
      auVar13 = auVar14._0_16_;
      auVar10 = auVar11._0_16_;
      puVar4 = (uint *)param_2[2];
      auVar7._0_4_ = (float)auStack_88._0_8_ * (float)(_DAT_145fc6f10 ^ *puVar4);
      auVar7._4_4_ = SUB84(auStack_88._0_8_,4) * (float)(_DAT_145fc6f10 ^ puVar4[1]);
      auVar7._8_4_ = (float)(_DAT_145fc6f10 ^ puVar4[2]) * 0.0;
      auVar7._12_4_ = (float)(_DAT_145fc6f10 ^ puVar4[3]) * 0.0;
      fVar12 = *(float *)(lVar1 + 0x18);
      auVar5 = vhaddps_avx(auVar7,auVar7);
      if (fVar12 <= auVar5._0_4_) {
        fVar12 = ((auVar5._0_4_ - fVar12) * *(float *)(lVar1 + 0x2c)) / (_DAT_145fc6ed8 - fVar12);
      }
      else {
        fVar12 = 0.0;
      }
    }
    auVar6._0_4_ = auVar10._0_4_ & puVar4[8];
    auVar6._4_4_ = auVar10._4_4_ & puVar4[9];
    auVar6._8_4_ = auVar10._8_4_ & puVar4[10];
    auVar6._12_4_ = auVar10._12_4_ & puVar4[0xb];
    auVar5 = vcmpps_avx(auVar6,auVar13,0x11);
    uVar3 = vmovmskps_avx(auVar5);
    if ((~(byte)uVar3 & 7) == 0) {
      cVar2 = FUN_1400ef5e0(param_1,param_2[1] + 0x50,puVar4 + 8,*(undefined4 *)(lVar1 + 0x20));
      if (cVar2 != '\0') {
        fVar9 = *(float *)(lVar1 + 0x30);
      }
    }
    fVar9 = fVar12 + fVar8 + fVar9;
  }
  return fVar9;
}

