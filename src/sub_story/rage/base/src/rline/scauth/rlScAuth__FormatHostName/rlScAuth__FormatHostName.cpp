// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143d9fe20  size: 223 bytes
// Name:    rlScAuth::FormatHostName
// Subsystem: core
// Class:   rlScAuth
//
// Evidence:
//   GTAVSRC: rlScAuth::FormatHostName  (rage/base/src/rline/scauth/rlscauth.cpp)
//   literal: %s.scauth.rockstargames.com
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1457d1ec0, FUN_141a76020, FUN_144fcb2d0, FUN_1458173c0, FUN_144f50790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlScAuth.h"


bool rlScAuth__FormatHostName(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  longlong lStack_120;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [32];
  
  if (param_1 == 0) {
    FUN_1457d1ec0(0x146c31dd0,1,0xbd,0x186f7c6f);
  }
  else {
    cVar2 = FUN_144f50790();
    uVar1 = FUN_1458173c0();
    if (cVar2 == '\x02') {
      func_0x000142a8a840(param_1);
    }
    else {
      FUN_144fcb2d0(param_1,0x800,&UNK_14677fad2,uVar1);
    }
    auVar3._0_12_ = ZEXT812(0);
    auVar3._12_4_ = 0;
    auStack_58 = ZEXT1632(auVar3);
    auStack_d8 = ZEXT1632(auVar3);
    auStack_118 = ZEXT1632(auVar3);
    auStack_f8 = auStack_118;
    auStack_b8 = auStack_d8;
    auStack_98 = auStack_d8;
    auStack_78 = auStack_d8;
    auStack_38 = auStack_58;
    lStack_120 = FUN_141a76020(param_1,auStack_118,0x100);
    if (lStack_120 != 0) {
      func_0x000144dac8f0(param_1,&lStack_120,0x800);
    }
  }
  return param_1 != 0;
}

