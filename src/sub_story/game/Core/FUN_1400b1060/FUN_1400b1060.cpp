// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1060  size: 179 bytes
// Name:    FUN_1400b1060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401e85f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1400b1060(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [64];
  undefined1 extraout_var [56];
  
  lVar3 = *(longlong *)(param_2 + 8);
  if (((((*(float *)(lVar3 + 0x68) != 0.0) || (*(float *)(lVar3 + 0x6c) != 0.0)) ||
       (NAN(*(float *)(lVar3 + 0x6c)))) ||
      ((*(float *)(lVar3 + 0x70) != 0.0 || (NAN(*(float *)(lVar3 + 0x70)))))) &&
     ((param_1 != 0 && (*(longlong **)(param_1 + 0x348) != (longlong *)0x0)))) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x58))();
    if (lVar3 != 0) {
      auVar5._0_8_ = FUN_1401e85f0(lVar3);
      auVar5._8_56_ = extraout_var;
      fVar4 = (float)auVar5._0_8_;
      auVar2 = vcmpss_avx(ZEXT416((uint)_DAT_145fc6edc),auVar5._0_16_,6);
      auVar2 = vblendvps_avx(ZEXT416((uint)(fVar4 + fVar4 + _DAT_145fc6f48)),
                             ZEXT416((uint)(fVar4 + fVar4)),auVar2);
      fVar1 = *(float *)(*(longlong *)(param_2 + 8) + 0x68 +
                        (ulonglong)(_DAT_145fc6edc <= fVar4) * 4);
      return auVar2._0_4_ *
             (*(float *)(*(longlong *)(param_2 + 8) + 0x6c +
                        (ulonglong)(_DAT_145fc6edc <= fVar4) * 4) - fVar1) + fVar1;
    }
    lVar3 = *(longlong *)(param_2 + 8);
  }
  return *(float *)(lVar3 + 100);
}

