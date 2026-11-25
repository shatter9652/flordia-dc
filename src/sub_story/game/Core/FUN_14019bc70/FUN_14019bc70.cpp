// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019bc70  size: 75 bytes
// Name:    FUN_14019bc70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14505a1d0, FUN_14505a210
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14019bc70(undefined8 param_1,longlong param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  undefined1 extraout_var [56];
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  
  auVar9._0_8_ = FUN_14505a210();
  auVar9._8_56_ = extraout_var;
  auVar9 = ZEXT1664(auVar9._0_16_);
  lVar4 = FUN_14505a1d0(*(undefined4 *)(param_2 + 0x9c));
  pfVar5 = (float *)0x14a1e8634;
  if (lVar4 != 0) {
    pfVar5 = (float *)(lVar4 + 0xc0);
  }
  fVar7 = pfVar5[1];
  fVar6 = pfVar5[3];
  fVar1 = pfVar5[2];
  fVar3 = fVar7 - *pfVar5;
  auVar8._0_4_ = (auVar9._0_4_ - *pfVar5) / fVar3;
  auVar8._4_12_ = SUB6012((undefined1  [60])0x0,0);
  if ((auVar9._0_4_ < fVar7) || (_DAT_145fc6ed8 < auVar8._0_4_)) {
    if (fVar3 < _DAT_145fc6f00) {
      auVar8 = vcmpss_avx(ZEXT416((uint)fVar7),auVar9._0_16_,2);
      auVar8 = vblendvps_avx(ZEXT416((uint)fVar1),ZEXT416((uint)fVar6),auVar8);
      return auVar8._0_8_;
    }
    auVar2 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar8);
    auVar8 = vcmpss_avx(auVar8,ZEXT816(0),1);
    fVar7 = (float)(~auVar8._0_4_ & auVar2._0_4_);
  }
  else {
    if (fVar3 < _DAT_145fc6f00) goto code_r0x0001453f160a;
    auVar8 = vmaxss_avx(ZEXT816(0) << 0x20,auVar8);
    fVar7 = auVar8._0_4_;
  }
  fVar6 = fVar7 * (fVar6 - fVar1) + fVar1;
code_r0x0001453f160a:
  return (ulonglong)(uint)fVar6;
}

