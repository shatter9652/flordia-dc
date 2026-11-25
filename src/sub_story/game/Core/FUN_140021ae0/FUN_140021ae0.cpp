// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140021ae0  size: 641 bytes
// Name:    FUN_140021ae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e15620, FUN_144daa460, FUN_144db6f30, FUN_144db6f00, FUN_140027f70, FUN_144e1ff00, FUN_140025c40, FUN_144e155c0, FUN_144da0e70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140021ae0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined1 (*param_4) [16],
             float param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined8 *puVar8;
  undefined8 uStack_188;
  undefined8 uStack_180;
  char acStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  auStack_148._0_12_ = ZEXT812(0);
  auStack_148._12_4_ = 0;
  auVar7 = ZEXT1664(auStack_148);
  if (_DAT_145fc6f00 < param_5) {
    uStack_88 = *param_3;
    uStack_80 = param_3[1];
    FUN_140025c40(param_1,acStack_178,&uStack_88,&uStack_158);
    FUN_144daa460(*(undefined8 *)(param_1 + 0x10),auStack_98,*(undefined4 *)(param_1 + 0x78));
    FUN_140027f70(param_1,acStack_178,auStack_98,auStack_148);
    auVar4._8_8_ = uStack_150;
    auVar4._0_8_ = uStack_158;
    auVar4 = vsubps_avx(auStack_148,auVar4);
    auVar6 = ZEXT1664(auVar4);
    auVar4 = vcmpps_avx(auVar7._0_16_,auVar4,4);
    if ((((SUB161(auVar4 >> 0x1f,0) & 1) != 0 || (SUB161(auVar4 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar4 >> 0x5f,0) & 1) != 0) || auVar4[0xf] < '\0') {
      (**(code **)(*param_2 + 0x18))(param_2,acStack_178,&uStack_158);
      auVar5._8_8_ = uStack_150;
      auVar5._0_8_ = uStack_158;
      auVar4 = vsubps_avx(*param_4,auVar5);
      auVar7 = ZEXT1664(CONCAT412(auVar4._12_4_ * auVar6._12_4_ +
                                  (float)((ulonglong)uStack_150 >> 0x20),
                                  CONCAT48(auVar4._8_4_ * auVar6._8_4_ + (float)uStack_150,
                                           CONCAT44(auVar4._4_4_ * auVar6._4_4_ +
                                                    (float)((ulonglong)uStack_158 >> 0x20),
                                                    auVar4._0_4_ * auVar6._0_4_ + (float)uStack_158)
                                          )));
      FUN_144daa460(*(undefined8 *)(param_1 + 0x10),&uStack_188,*(undefined4 *)(param_1 + 0x74));
      FUN_144db6f30(*(undefined8 *)(param_1 + 0x10),&uStack_a8,*(undefined4 *)(param_1 + 0x70));
      uStack_b8 = uStack_188;
      uStack_b0 = uStack_180;
      FUN_144db6f00(*(undefined8 *)(param_1 + 0x10),&uStack_c8,*(undefined4 *)(param_1 + 0x74));
      puVar8 = &uStack_138;
      uStack_108 = uStack_c8;
      uStack_100 = uStack_c0;
      auStack_128 = auVar7._0_16_;
      uStack_138 = uStack_a8;
      uStack_130 = uStack_a0;
      FUN_144e1ff00(&uStack_188,&uStack_108,auStack_118,auStack_128,&uStack_b8,puVar8);
      lVar2 = *(longlong *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(param_1 + 0x74);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x30);
      if (lVar3 != 0) {
        FUN_144e15620(auStack_d8,*(undefined8 *)(lVar2 + 8),uVar1,&uStack_188,lVar3,
                      (ulonglong)puVar8 & 0xffffffffffffff00);
      }
      FUN_144da0e70(lVar2,uVar1,&uStack_188);
      if (acStack_178[0] != '\0') {
        FUN_144da0e70(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x78));
      }
      return 1;
    }
    if (acStack_178[0] != '\0') {
      uStack_f8 = uStack_168;
      uStack_f0 = uStack_160;
      FUN_144da0e70(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x78));
    }
  }
  else {
    FUN_144e155c0(acStack_178,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x78),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x38));
  }
  return 0;
}

