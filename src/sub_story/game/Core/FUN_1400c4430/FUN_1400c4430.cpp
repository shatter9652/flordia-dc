// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c4430  size: 201 bytes
// Name:    FUN_1400c4430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c4430(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  uVar8 = (ulonglong)*(uint *)(param_2 + 1);
  if (uVar8 != 0) {
    lVar9 = uVar8 - 1;
    auVar10._8_8_ = _DAT_145f437c0;
    auVar10._0_8_ = _DAT_145f437c0;
    auVar10._16_8_ = _DAT_145f437c0;
    auVar10._24_8_ = _DAT_145f437c0;
    auVar4 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
    auVar12._4_4_ = _DAT_145fc6ed8;
    auVar12._0_4_ = _DAT_145fc6ed8;
    auVar12._8_4_ = _DAT_145fc6ed8;
    auVar12._12_4_ = _DAT_145fc6ed8;
    auVar12._16_4_ = _DAT_145fc6ed8;
    auVar12._20_4_ = _DAT_145fc6ed8;
    auVar12._24_4_ = _DAT_145fc6ed8;
    auVar12._28_4_ = _DAT_145fc6ed8;
    lVar1 = *param_2;
    uVar7 = 0;
    auVar3 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
    auVar11._8_8_ = lVar9;
    auVar11._0_8_ = lVar9;
    auVar11._16_8_ = lVar9;
    auVar11._24_8_ = lVar9;
    auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    do {
      auVar13._8_8_ = uVar7;
      auVar13._0_8_ = uVar7;
      auVar13._16_8_ = uVar7;
      auVar13._24_8_ = uVar7;
      auVar6 = vpor_avx2(auVar13,auVar5);
      auVar13 = vpor_avx2(auVar13,auVar4);
      auVar13 = vpcmpgtq_avx2(auVar13 ^ auVar10,auVar11 ^ auVar10);
      auVar6 = vpcmpgtq_avx2(auVar6 ^ auVar10,auVar11 ^ auVar10);
      auVar13 = vpackssdw_avx2(auVar6,auVar13);
      auVar2 = vpackssdw_avx(SUB3216(auVar13 ^ auVar3,0),SUB3216(auVar13 ^ auVar3,0x10));
      auVar2 = vpshufd_avx(auVar2,0xd8);
      auVar13 = vpmovzxwd_avx2(auVar2);
      auVar13 = vpslld_avx2(auVar13,0x1f);
      auVar13 = vmaskmovps_avx(auVar13,auVar12);
      *(undefined1 (*) [32])(lVar1 + uVar7 * 4) = auVar13;
      uVar7 = uVar7 + 8;
    } while ((uVar8 + 7 & 0xfffffffffffffff8) != uVar7);
  }
  return;
}

