// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037fc0  size: 334 bytes
// Name:    FUN_140037fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140609530, FUN_144e3f530, FUN_140038110, FUN_140070240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140037fc0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [88];
  undefined1 auVar6 [64];
  
  if (*(byte *)(param_1 + 0xa98) < 4) {
    uVar4 = func_0x000144e29fa0(*(undefined8 *)(*(longlong *)(param_1 + 0x6c8) + 0x38));
    FUN_144e3f530(auStack_88,uVar4,param_3);
    auVar1 = *(undefined1 (*) [16])(param_2 + 0x1680);
    auVar2 = vsubps_avx(*(undefined1 (*) [16])(param_2 + 0x1690),auVar1);
    auVar5._0_4_ = auVar2._0_4_ * _DAT_145fc6edc + auVar1._0_4_;
    auVar5._4_4_ = auVar2._4_4_ * _DAT_145fc6edc + auVar1._4_4_;
    auVar5._8_4_ = auVar2._8_4_ * _DAT_145fc6edc + auVar1._8_4_;
    auVar5._12_4_ = auVar2._12_4_ * _DAT_145fc6edc + auVar1._12_4_;
    auVar6 = ZEXT1664(auVar5);
    auVar1 = vcmpps_avx(ZEXT816(0) << 0x20,auVar5,5);
    if ((((SUB161(auVar1 >> 0x1f,0) & 1) == 0 && (SUB161(auVar1 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar1 >> 0x5f,0) & 1) == 0) && -1 < auVar1[0xf]) {
      param_1 = param_1 + 0x850;
      cVar3 = FUN_140038110(param_1,auStack_88);
      if ((cVar3 != '\0') || (cVar3 = FUN_140038110(param_1,param_4), cVar3 != '\0')) {
        fStack_8c = 0.0;
        FUN_140070240(param_1,auStack_88,0x9120cdc,&fStack_8c);
        fStack_90 = 0.0;
        FUN_140070240(param_1,param_4,0x9120cdc,&fStack_90);
        auVar6._0_4_ = (fStack_90 - fStack_8c) * auVar6._0_4_ + fStack_8c;
        vcmpss_avx(auVar6._0_16_,ZEXT816(0),1);
        vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar6._0_16_);
        FUN_140609530(param_1,auStack_88,0x9120cdc);
      }
    }
    func_0x000144e3f340(auStack_88);
    return;
  }
  return;
}

