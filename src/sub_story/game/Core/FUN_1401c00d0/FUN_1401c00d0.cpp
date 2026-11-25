// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c00d0  size: 180 bytes
// Name:    FUN_1401c00d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401c00d0(longlong *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  float extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  
  lVar4 = (**(code **)(*param_1 + 0x1b8))();
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x20);
  auVar3 = vsubps_avx(*(undefined1 (*) [16])(lVar4 + 0x20),*(undefined1 (*) [16])(lVar4 + 0x30));
  auVar1 = vmovshdup_avx(auVar3);
  fVar2 = auVar1._0_4_ * auVar3._0_4_;
  auVar1 = vshufpd_avx(auVar3,auVar3,1);
  fVar5 = fVar2 * auVar1._0_4_;
  lVar4 = (**(code **)(*param_2 + 0x1b8))(auVar1._0_8_,fVar2);
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x20);
  auVar3 = vsubps_avx(*(undefined1 (*) [16])(lVar4 + 0x20),*(undefined1 (*) [16])(lVar4 + 0x30));
  auVar1 = vmovshdup_avx(auVar3);
  fVar2 = auVar1._0_4_ * auVar3._0_4_;
  auVar1 = vshufpd_avx(auVar3,auVar3,1);
  fVar6 = fVar2 * auVar1._0_4_;
  func_0x0001401c0030(auVar1._0_8_,fVar2);
  return extraout_XMM0_Da * fVar5 < fVar6;
}

