// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016a190  size: 162 bytes
// Name:    FUN_14016a190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14016a190(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar2 = func_0x000144e63d10(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x928), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x80))(plVar1,&fStack_18);
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    auVar3._0_4_ = _DAT_145fc6edc * fStack_18 * _DAT_145fc6edc * fStack_18;
    auVar3._4_4_ = _DAT_145fc6edc * fStack_14 * _DAT_145fc6edc * fStack_14;
    auVar3._8_4_ = _DAT_145fc6edc * fStack_10 * _DAT_145fc6edc * fStack_10;
    auVar3._12_4_ = _DAT_145fc6edc * fStack_c * _DAT_145fc6edc * fStack_c;
    auVar3 = vblendps_avx(auVar3,auVar5,8);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar5 = vhaddps_avx(auVar3,auVar3);
    auVar3 = vrsqrtss_avx(auVar5,auVar5);
    fVar4 = auVar3._0_4_;
    auVar3 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar5,2);
    return auVar3._0_4_ &
           (uint)(((fVar4 * fVar4 * auVar5._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar4 + fVar4)
                 * auVar5._0_4_);
  }
  return *(uint *)(*(longlong *)(param_1 + 0x20) + 0x2c);
}

