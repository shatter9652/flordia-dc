// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401abb30  size: 146 bytes
// Name:    FUN_1401abb30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400825f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1401abb30(longlong param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  cVar3 = FUN_1400825f0();
  if ((cVar3 == '\0') || (bVar4 = true, (*(uint *)(param_1 + 0xe8) & 0x380000) == 0x180000)) {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    func_0x000144dc3790(&uStack_48,auStack_28);
    func_0x0001453db630(auStack_38);
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    auVar2 = vsubps_avx(auStack_28,auStack_38);
    auVar5._0_4_ = auVar2._0_4_ * auVar2._0_4_;
    auVar5._4_4_ = auVar2._4_4_ * auVar2._4_4_;
    auVar5._8_4_ = auVar2._8_4_ * auVar2._8_4_;
    auVar5._12_4_ = auVar2._12_4_ * auVar2._12_4_;
    auVar2 = vblendps_avx(auVar5,auVar6,8);
    auVar2 = vhaddps_avx(auVar2,auVar2);
    auVar2 = vhaddps_avx(auVar2,auVar2);
    fVar1 = _DAT_1499aab00 * _DAT_1499aab00;
    auVar7._4_4_ = fVar1;
    auVar7._0_4_ = fVar1;
    auVar7._8_4_ = fVar1;
    auVar7._12_4_ = fVar1;
    auVar2 = vcmpps_avx(auVar2,auVar7,5);
    bVar4 = (((SUB161(auVar2 >> 0x1f,0) & 1) == 0 && (SUB161(auVar2 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar2 >> 0x5f,0) & 1) == 0) && -1 < auVar2[0xf];
  }
  return bVar4;
}

