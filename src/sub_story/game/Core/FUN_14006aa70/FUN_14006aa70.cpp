// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006aa70  size: 360 bytes
// Name:    FUN_14006aa70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401df2a0, FUN_144e29d10, FUN_144decea0, FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006aa70(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  longlong *plStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  
  if ((*(byte *)(param_1 + 0xf9) & 2) != 0) {
    return;
  }
  auVar8 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x50));
  auVar9 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x60));
  auVar10 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x100));
  auVar11 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x110));
  FUN_1401df2a0();
  auVar2 = vcmpps_avx(auVar10._0_16_,*(undefined1 (*) [16])(param_1 + 0x100),0);
  auVar3 = vcmpps_avx(auVar11._0_16_,*(undefined1 (*) [16])(param_1 + 0x110),0);
  auVar7._0_4_ = auVar3._0_4_ & auVar2._0_4_;
  auVar7._4_4_ = auVar3._4_4_ & auVar2._4_4_;
  auVar7._8_4_ = auVar3._8_4_ & auVar2._8_4_;
  auVar7._12_4_ = auVar3._12_4_ & auVar2._12_4_;
  uVar5 = vmovmskps_avx(auVar7);
  if ((~(byte)uVar5 & 7) == 0) {
    auVar2 = vcmpps_avx(auVar9._0_16_,*(undefined1 (*) [16])(param_1 + 0x60),0);
    uVar5 = vmovmskps_avx(auVar2);
    if ((~(byte)uVar5 & 7) == 0) {
      auVar2 = vcmpps_avx(auVar8._0_16_,*(undefined1 (*) [16])(param_1 + 0x50),0);
      uVar5 = vmovmskps_avx(auVar2);
      if ((~(byte)uVar5 & 7) == 0) goto LAB_14006ab11;
    }
  }
  *(byte *)(param_1 + 0xf8) = *(byte *)(param_1 + 0xf8) | 6;
LAB_14006ab11:
  lVar1 = *(longlong *)(param_1 + 0xe8);
  uVar6 = *(uint *)(lVar1 + 0xa0);
  if ((*(char *)(lVar1 + 0x30) == '\x02') &&
     (cVar4 = FUN_144e29d10(*(undefined4 *)(lVar1 + 0x9c)), cVar4 != '\0')) {
    uStack_98 = *(undefined8 *)(param_1 + 0x70);
    uStack_90 = *(undefined8 *)(param_1 + 0x78);
    func_0x000144dc3790(&uStack_98,auStack_88);
    FUN_144decea0(&plStack_78,auStack_88,0);
    uVar6 = (uint)plStack_78;
  }
  if (((uVar6 ^ *(uint *)(param_1 + 0xa0)) & 0xfffcffff) != 0) {
    plStack_78 = &lStack_a0;
    pcStack_70 = FUN_1435cc020;
    puStack_68 = &UNK_1401167b0;
    puStack_60 = &SUB_140004380;
    lStack_a0 = param_1;
    FUN_1402e5b80(6);
  }
  return;
}

