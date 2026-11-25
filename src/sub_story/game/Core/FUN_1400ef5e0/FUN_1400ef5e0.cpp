// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ef5e0  size: 281 bytes
// Name:    FUN_1400ef5e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f7ad70, FUN_1400ef810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400ef5e0(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  uint uStack_80;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [16];
  uint uStack_68;
  uint uStack_64;
  
  uStack_80 = 0;
  FUN_144f7ad70(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc),&uStack_68,
                param_1 + 0x10);
  auVar7 = ZEXT464(uStack_68);
  auVar8 = ZEXT464(uStack_64);
  FUN_144f7ad70(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc),auStack_78,
                param_1 + 0x20);
  uVar1 = vextractps_avx(*param_3,1);
  uVar2 = vextractps_avx(*param_2,1);
  uVar3 = vextractps_avx(auStack_78,1);
  cVar4 = FUN_1400ef810(&uStack_80,auStack_7c,auVar7._0_8_,auVar8._0_8_,auStack_78._0_4_,uVar3,
                        SUB164(*param_2,0),uVar2,SUB164(*param_3,0),uVar1);
  if (cVar4 == '\0') {
    auVar6._0_4_ = uStack_80 ^ _DAT_145fc6f10;
    auVar6._4_4_ = _DAT_145fc6f10;
    auVar6._8_4_ = _DAT_145fc6f10;
    auVar6._12_4_ = _DAT_145fc6f10;
    auVar6 = vmaxss_avx(auVar6,ZEXT416(uStack_80));
    bVar5 = auVar6._0_4_ < param_4;
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}

