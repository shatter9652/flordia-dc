// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010bf10  size: 252 bytes
// Name:    FUN_14010bf10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010bd90, FUN_14010bc20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14010bf10(ulonglong param_1,undefined8 param_2,float param_3)

{
  bool bVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = (param_1 & 0xffffffff) * 0x180;
  fVar3 = (float)FUN_14010bd90(param_2);
  fVar5 = 0.0;
  if ((_DAT_14849c024 != 0.0) || (NAN(_DAT_14849c024))) {
    fVar5 = 0.0;
    fVar4 = (float)FUN_14010bc20(param_2);
    bVar1 = param_3 / fVar4 < _DAT_14849c024;
  }
  else {
    bVar1 = true;
  }
  if ((fVar3 <= fVar5) || (!bVar1)) {
    fVar5 = *(float *)(lVar2 + 0x14849be4c) + _DAT_14a943794;
    *(float *)(lVar2 + 0x14849be4c) = fVar5;
  }
  else {
    *(undefined4 *)(lVar2 + 0x14849be4c) = 0;
    fVar5 = 0.0;
  }
  fVar4 = _DAT_145fc6ed8;
  if (!bVar1) {
    fVar4 = 0.0;
  }
  *(float *)(lVar2 + 0x14849be48) = fVar4 * fVar3;
  return CONCAT71((int7)((ulonglong)(lVar2 + 0x14849bcd0) >> 8),
                  fVar5 < _DAT_14849c01c + _DAT_14849c01c);
}

