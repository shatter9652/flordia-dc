// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140198620  size: 403 bytes
// Name:    FUN_140198620
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec37c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140198620(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
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
  undefined1 aauStack_48 [2] [16];
  
  FUN_144ec37c0(aauStack_48);
  func_0x0001451a2770(*(undefined4 *)(param_2 + 0x134),*(undefined8 *)(param_2 + 0x138),&uStack_f8,
                      *(undefined4 *)(param_1 + 0x7c));
  func_0x000144f578c0(&uStack_f8,auStack_58);
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  auVar1 = vsubps_avx(aauStack_48[0],auStack_58);
  auVar4._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar4._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar4._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar4._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar4,auVar5,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  if (*(float *)((ulonglong)DAT_149e5763c * 4 + 0x149e57630) <= auVar1._0_4_) {
LAB_140198795:
    uVar3 = 0;
  }
  else {
    func_0x0001451a2770(*(undefined4 *)(param_2 + 0x134),*(undefined8 *)(param_2 + 0x138),&uStack_f8
                        ,*(undefined4 *)(param_1 + 0x7c));
    auVar6 = ZEXT464(*(uint *)((ulonglong)DAT_149e5764c * 4 + 0x149e57640));
    func_0x000144f578c0(&uStack_f8,&uStack_68);
    uStack_78 = uStack_68;
    uStack_70 = uStack_60;
    cVar2 = func_0x000145052850(&uStack_78,auVar6._0_8_);
    if (cVar2 == '\0') {
      uStack_88 = uStack_f8;
      uStack_80 = uStack_f0;
      cVar2 = func_0x000145052850(&uStack_88,auVar6._0_8_);
      if (cVar2 == '\0') {
        uStack_98 = uStack_e8;
        uStack_90 = uStack_e0;
        cVar2 = func_0x000145052850(&uStack_98,auVar6._0_8_);
        if (cVar2 == '\0') {
          uStack_a8 = uStack_d8;
          uStack_a0 = uStack_d0;
          cVar2 = func_0x000145052850(&uStack_a8,auVar6._0_8_);
          if (cVar2 == '\0') {
            uStack_b8 = uStack_c8;
            uStack_b0 = uStack_c0;
            cVar2 = func_0x000145052850(&uStack_b8,auVar6._0_8_);
            if (cVar2 == '\0') goto LAB_140198795;
          }
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

