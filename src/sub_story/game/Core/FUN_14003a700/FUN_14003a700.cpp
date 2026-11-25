// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003a700  size: 195 bytes
// Name:    FUN_14003a700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003a700(uint param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  if (param_1 != 0) {
    auVar8._8_8_ = _DAT_145f437c0;
    auVar8._0_8_ = _DAT_145f437c0;
    auVar8._16_8_ = _DAT_145f437c0;
    auVar8._24_8_ = _DAT_145f437c0;
    auVar3 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
    auVar10._4_4_ = _DAT_145fc6ed8;
    auVar10._0_4_ = _DAT_145fc6ed8;
    auVar10._8_4_ = _DAT_145fc6ed8;
    auVar10._12_4_ = _DAT_145fc6ed8;
    auVar10._16_4_ = _DAT_145fc6ed8;
    auVar10._20_4_ = _DAT_145fc6ed8;
    auVar10._24_4_ = _DAT_145fc6ed8;
    auVar10._28_4_ = _DAT_145fc6ed8;
    auVar2 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
    lVar6 = (ulonglong)param_1 - 1;
    uVar7 = 0;
    auVar9._8_8_ = lVar6;
    auVar9._0_8_ = lVar6;
    auVar9._16_8_ = lVar6;
    auVar9._24_8_ = lVar6;
    auVar4 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    do {
      auVar11._8_8_ = uVar7;
      auVar11._0_8_ = uVar7;
      auVar11._16_8_ = uVar7;
      auVar11._24_8_ = uVar7;
      auVar5 = vpor_avx2(auVar11,auVar4);
      auVar11 = vpor_avx2(auVar11,auVar3);
      auVar11 = vpcmpgtq_avx2(auVar11 ^ auVar8,auVar9 ^ auVar8);
      auVar5 = vpcmpgtq_avx2(auVar5 ^ auVar8,auVar9 ^ auVar8);
      auVar11 = vpackssdw_avx2(auVar5,auVar11);
      auVar1 = vpackssdw_avx(SUB3216(auVar11 ^ auVar2,0),SUB3216(auVar11 ^ auVar2,0x10));
      auVar1 = vpshufd_avx(auVar1,0xd8);
      auVar11 = vpmovzxwd_avx2(auVar1);
      auVar11 = vpslld_avx2(auVar11,0x1f);
      auVar11 = vmaskmovps_avx(auVar11,auVar10);
      *(undefined1 (*) [32])(param_2 + uVar7 * 4) = auVar11;
      uVar7 = uVar7 + 8;
    } while (((ulonglong)param_1 + 7 & 0xfffffffffffffff8) != uVar7);
  }
  return;
}

