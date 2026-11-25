// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bf970  size: 220 bytes
// Name:    FUN_1400bf970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145288d30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bf970(char param_1)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  _DAT_147f56170 =
       func_0x0001450cef40(*(undefined8 *)(_DAT_14abbeef0 + 8),
                           *(undefined4 *)(_DAT_14abbeef0 + 0x10),0x74b31be3,1);
  _DAT_14a15e2a4 = 0x28;
  if (0x28 < _DAT_147f56170) {
    _DAT_14a15e2a4 = _DAT_147f56170;
  }
  _DAT_14a15e2a4 = _DAT_14a15e2a4 + -0x28;
  iVar2 = 0x14;
  if (0x14 < _DAT_147f56170) {
    iVar2 = _DAT_147f56170;
  }
  _DAT_146ab4ca4 = 0x208;
  if (iVar2 < 0x208) {
    _DAT_146ab4ca4 = iVar2;
  }
  _DAT_146ab4ca4 = _DAT_146ab4ca4 + -0x14;
  fVar4 = _DAT_146161f20;
  fVar3 = _DAT_14615a298;
  if (param_1 == '\0') {
    lVar1 = FUN_145288d30();
    if (lVar1 != 0) {
      fVar4 = *(float *)(lVar1 + 0x4c);
      fVar3 = *(float *)(lVar1 + 0x50);
    }
  }
  iVar2 = 0x50;
  if (0x50 < _DAT_146ab4ca4) {
    iVar2 = _DAT_146ab4ca4;
  }
  _DAT_146ab428c = (int)(fVar4 * (float)(iVar2 + -0x50));
  _DAT_146ab4ca0 = (int)(fVar3 * (float)(iVar2 + -0x50));
  return;
}

