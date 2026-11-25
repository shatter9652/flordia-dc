// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c010  size: 303 bytes
// Name:    FUN_14014c010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14014c010(undefined4 param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar7 = 0;
  switch(param_1) {
  case 0:
    lVar5 = func_0x000144f68150();
    uVar7 = (ulonglong)*(uint *)(lVar5 + 0x7c);
    break;
  case 1:
    lVar5 = func_0x000144f68150();
    uVar7 = (ulonglong)*(uint *)(lVar5 + 0x80);
    break;
  case 2:
    uVar4 = func_0x000144ea4d00();
    cVar3 = func_0x0001407fdf90(uVar4);
    if (cVar3 != '\0') {
      auVar10._0_12_ = ZEXT812(0);
      auVar10._12_4_ = 0;
      auVar8 = ZEXT416((uint)(_DAT_145fc6edc * 0.0 + _DAT_145fc6edc));
      auVar2 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar8);
      auVar8 = vcmpss_avx(auVar8,auVar10,1);
      return CONCAT44(~auVar8._4_4_ & auVar2._4_4_,~auVar8._0_4_ & auVar2._0_4_);
    }
    goto code_r0x00014014c136;
  case 3:
    lVar5 = func_0x000145073c10();
    plVar1 = *(longlong **)(lVar5 + 0x910);
    if (plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar1 + 8))(plVar1,0x1f13c983);
      if (cVar3 == '\0') {
        return 0;
      }
      lVar5 = FUN_1405cb220(plVar1 + 0x33);
      lVar6 = FUN_140c37600(plVar1 + 0x33);
      fVar9 = _DAT_145fc6ed8;
      if (_DAT_145fc6f00 < *(float *)(lVar5 + 8)) {
        auVar11._0_12_ = ZEXT812(0);
        auVar11._12_4_ = 0;
        auVar8 = ZEXT416((uint)(*(float *)(*(longlong *)(lVar6 + 0x68) + 0x10f4) /
                               *(float *)(lVar5 + 8)));
        auVar2 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar8);
        auVar8 = vcmpss_avx(auVar8,auVar11,1);
        fVar9 = (float)(~auVar8._0_4_ & auVar2._0_4_);
      }
      return (ulonglong)(uint)(_DAT_145fc6ed8 - fVar9);
    }
code_r0x00014014c136:
    uVar7 = 0;
  }
  return uVar7;
}

