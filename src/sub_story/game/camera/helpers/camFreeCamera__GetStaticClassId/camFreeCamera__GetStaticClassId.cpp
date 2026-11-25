// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 144a248b0  size: 338 bytes
// Name:    camFreeCamera::GetStaticClassId
// Subsystem: core
// Class:   camFreeCamera
//
// Evidence:
//   GTAVSRC: camFreeCamera::GetStaticClassId  (game/camera/helpers/FramePropagator.cpp)
//   literal: The active camera is positioned outside the (expanded) world limits (%f, %f, %f)
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452dbab0, FUN_14550f720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/camFreeCamera.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 camFreeCamera__GetStaticClassId(uint *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auStack_98 [152];
  
  auVar6 = *(undefined1 (*) [16])(param_1 + 0xc);
  auVar5 = vpunpckhwd_avx(auVar6,auVar6);
  auVar5 = vpsrad_avx(auVar5,0x10);
  auVar5 = vcvtdq2ps_avx(auVar5);
  auVar5 = vshufpd_avx(auVar5,auVar5,3);
  auVar9._0_4_ = auVar5._0_4_ * _DAT_146159c90 + auVar6._0_4_;
  auVar9._4_4_ = auVar5._4_4_ * _UNK_146159c94 + auVar6._4_4_;
  auVar9._8_4_ = auVar5._8_4_ * _UNK_146159c98 + auVar6._8_4_;
  auVar9._12_4_ = auVar5._12_4_ * _UNK_146159c9c + auVar6._12_4_;
  auVar10 = ZEXT1664(auVar9);
  auVar5._4_4_ = _DAT_145fc6f70;
  auVar5._0_4_ = _DAT_145fc6f70;
  auVar5._8_4_ = _DAT_145fc6f70;
  auVar5._12_4_ = _DAT_145fc6f70;
  auVar6._0_4_ = (uint)auVar9._0_4_ & _DAT_145fc6f4c;
  auVar6._4_4_ = (uint)auVar9._4_4_ & _DAT_145fc6f4c;
  auVar6._8_4_ = (uint)auVar9._8_4_ & _DAT_145fc6f4c;
  auVar6._12_4_ = (uint)auVar9._12_4_ & _DAT_145fc6f4c;
  auVar6 = vcmpps_avx(auVar6,auVar5,0x11);
  uVar1 = vmovmskps_avx(auVar6);
  if ((~(byte)uVar1 & 7) != 0) {
    return 0;
  }
  auVar7._0_4_ = _DAT_145fc6f4c & param_1[4];
  auVar7._4_4_ = _DAT_145fc6f4c & param_1[5];
  auVar7._8_4_ = _DAT_145fc6f4c & param_1[6];
  auVar7._12_4_ = _DAT_145fc6f4c & param_1[7];
  auVar6 = vcmpps_avx(auVar7,auVar5,0x11);
  uVar1 = vmovmskps_avx(auVar6);
  if ((~(byte)uVar1 & 7) != 0) {
    return 0;
  }
  auVar8._0_4_ = _DAT_145fc6f4c & *param_1;
  auVar8._4_4_ = _DAT_145fc6f4c & param_1[1];
  auVar8._8_4_ = _DAT_145fc6f4c & param_1[2];
  auVar8._12_4_ = _DAT_145fc6f4c & param_1[3];
  auVar6 = vcmpps_avx(auVar8,auVar5,0x11);
  uVar1 = vmovmskps_avx(auVar6);
  if ((~(byte)uVar1 & 7) != 0) {
    return 0;
  }
  auVar3._0_4_ = _DAT_145fc6f4c & param_1[8];
  auVar3._4_4_ = _DAT_145fc6f4c & param_1[9];
  auVar3._8_4_ = _DAT_145fc6f4c & param_1[10];
  auVar3._12_4_ = _DAT_145fc6f4c & param_1[0xb];
  auVar6 = vcmpps_avx(auVar3,auVar5,0x11);
  uVar1 = vmovmskps_avx(auVar6);
  if ((~(byte)uVar1 & 7) == 0) {
    auVar6 = vcmpps_avx(auVar9,ZEXT816(0) << 0x20,0);
    uVar1 = vmovmskps_avx(auVar6);
    if ((~(byte)uVar1 & 7) == 0) {
      func_0x000144a24a10(auStack_98);
    }
    else {
      FUN_1452dbab0();
      auVar9 = auVar10._0_16_;
      auVar6 = vcmpps_avx(auVar9,_DAT_1498c1390,2);
      auVar5 = vcmpps_avx(_DAT_1498c1380,auVar9,2);
      auVar4._0_4_ = auVar6._0_4_ & auVar5._0_4_;
      auVar4._4_4_ = auVar6._4_4_ & auVar5._4_4_;
      auVar4._8_4_ = auVar6._8_4_ & auVar5._8_4_;
      auVar4._12_4_ = auVar6._12_4_ & auVar5._12_4_;
      uVar1 = vmovmskps_avx(auVar4);
      if ((~(byte)uVar1 & 7) == 0) {
        uVar2 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        if (_DAT_148012968 != 0) {
          _DAT_148012968 = 0;
          return uVar2;
        }
        return uVar2;
      }
      auVar5 = vshufpd_avx(auVar9,auVar9,1);
      auVar6 = vmovshdup_avx(auVar9);
      FUN_14550f720(auStack_98,&UNK_146789d90,(double)auVar10._0_4_,(double)auVar6._0_4_,
                    (double)auVar5._0_4_);
    }
    _DAT_148012968 = _DAT_148012968 + 1;
    return 0;
  }
  return 0;
}

