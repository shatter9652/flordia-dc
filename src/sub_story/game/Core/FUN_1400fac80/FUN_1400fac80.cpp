// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fac80  size: 221 bytes
// Name:    FUN_1400fac80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1400fac80(void *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(char *)((longlong)param_1 + 0x10) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x11) == '\0') {
      fVar1 = _DAT_145fc6ed8;
      fVar2 = _DAT_145fc6ed8;
      if ((0.0 < param_2) && (fVar1 = 0.0, fVar2 = _DAT_145fc6ed8, param_2 < _DAT_145fc6ed8)) {
        fVar2 = _DAT_145fc6ed8;
        fVar1 = (float)func_0x000145f40770(param_2 * _DAT_146159bdc);
      }
    }
    else {
      fVar1 = _DAT_145fc6edc;
      fVar2 = _DAT_145fc6edc;
      if ((0.0 < param_2) && (fVar1 = _DAT_145fc6f08, param_2 < _DAT_145fc6ed8)) {
        fVar1 = (float)func_0x000145f40770(param_2 * _DAT_145fc6f80);
        fVar1 = fVar1 * _DAT_145fc6edc;
      }
    }
    fVar2 = fVar2 - fVar1;
  }
  else {
    fVar2 = param_2;
    if (((*(char *)((longlong)param_1 + 0x11) != '\0') && (fVar2 = 0.0, 0.0 < param_2)) &&
       (fVar2 = _DAT_145fc6ed8, param_2 < _DAT_145fc6ed8)) {
                    /* WARNING: Could not recover jumptable at 0x000145f407b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar1 = sinf(param_1);
      return fVar1;
    }
  }
  return fVar2;
}

