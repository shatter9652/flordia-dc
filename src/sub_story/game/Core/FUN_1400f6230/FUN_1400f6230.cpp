// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f6230  size: 173 bytes
// Name:    FUN_1400f6230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f6230(undefined8 param_1,undefined1 param_2)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar10 [32];
  
  uVar3 = func_0x0001400f6200();
  uVar6 = (ulonglong)uVar3;
  lVar4 = -1;
  if (-1 < (int)uVar3) {
    lVar4 = uVar6 * 8;
  }
  _DAT_149e4ea30 = uVar3;
  lVar4 = func_0x000144f97130(lVar4);
  _DAT_149e4ea28 = lVar4;
  if (uVar3 != 0) {
    lVar7 = uVar6 - 1;
    auVar8._8_8_ = _DAT_145f437c0;
    auVar8._0_8_ = _DAT_145f437c0;
    auVar8._16_8_ = _DAT_145f437c0;
    auVar8._24_8_ = _DAT_145f437c0;
    uVar5 = 0;
    auVar1 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
    auVar9._8_8_ = lVar7;
    auVar9._0_8_ = lVar7;
    auVar9._16_8_ = lVar7;
    auVar9._24_8_ = lVar7;
    auVar2 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    do {
      auVar10._8_8_ = uVar5;
      auVar10._0_8_ = uVar5;
      auVar10._16_8_ = uVar5;
      auVar10._24_8_ = uVar5;
      auVar10 = vpor_avx2(auVar10,auVar2);
      auVar10 = vpcmpgtq_avx2(auVar10 ^ auVar8,auVar9 ^ auVar8);
      auVar10 = vpmaskmovq_avx2(auVar10 ^ auVar1,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
      *(undefined1 (*) [32])(lVar4 + uVar5 * 8) = auVar10;
      uVar5 = uVar5 + 4;
    } while ((uVar6 + 3 & 0xfffffffffffffffc) != uVar5);
  }
  DAT_149e4ea48 = param_2;
  return;
}

