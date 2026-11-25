// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083280  size: 214 bytes
// Name:    FUN_140083280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404b8f60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140083280(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 aauStack_38 [2] [16];
  
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  cVar3 = func_0x000144e238f0(uVar1);
  if ((cVar3 != '\0') && (lVar4 = func_0x000144e6ea40(uVar1), lVar4 != 0)) {
    uVar5 = func_0x000144e6e9f0(lVar4);
    auVar7 = ZEXT1264(ZEXT812(0));
    cVar3 = FUN_1404b8f60(uVar5,0xe9284407);
    if (cVar3 != '\0') {
      uStack_58 = *(undefined8 *)(param_2 + 0x70);
      uStack_50 = *(undefined8 *)(param_2 + 0x78);
      func_0x000144dc3790(&uStack_58,aauStack_38);
      uStack_68 = *(undefined8 *)(param_1 + 0x70);
      uStack_60 = *(undefined8 *)(param_1 + 0x78);
      func_0x000144dc3790(&uStack_68,auStack_48);
      auVar2 = vsubps_avx(aauStack_38[0],auStack_48);
      auVar6._0_4_ = auVar2._0_4_ * 0.0;
      auVar6._4_4_ = auVar2._4_4_ * 0.0;
      auVar6._8_4_ = auVar2._8_4_ * 0.0;
      auVar6._12_4_ = auVar2._12_4_ * 0.0;
      auVar2 = vblendps_avx(auVar6,auVar7._0_16_,8);
      auVar2 = vhaddps_avx(auVar2,auVar2);
      auVar2 = vhaddps_avx(auVar2,auVar2);
      auVar2 = vcmpps_avx(auVar2,auVar7._0_16_,6);
      return (((SUB161(auVar2 >> 0x1f,0) & 1) == 0 && (SUB161(auVar2 >> 0x3f,0) & 1) == 0) &&
             (SUB161(auVar2 >> 0x5f,0) & 1) == 0) && -1 < auVar2[0xf];
    }
  }
  return false;
}

