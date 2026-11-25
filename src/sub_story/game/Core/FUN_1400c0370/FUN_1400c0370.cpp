// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c0370  size: 238 bytes
// Name:    FUN_1400c0370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b44ec0, FUN_141fc7940, FUN_141fc7660, FUN_141328020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400c0370(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auVar5 [64];
  float fStack_30;
  undefined4 uStack_2c;
  
  lVar3 = func_0x000144db7b80(*(undefined4 *)(param_1 + 0x9c));
  if (lVar3 != 0) {
    fStack_30 = 0.0;
    cVar1 = FUN_141fc7660(param_1);
    if (cVar1 != '\0') {
      return (ulonglong)(uint)(fStack_30 + 0.0);
    }
    if (0.0 <= *(float *)(lVar3 + 0x4d4)) {
      return (ulonglong)(uint)*(float *)(lVar3 + 0x4d4);
    }
  }
  bVar2 = func_0x000140521300(param_1);
  lVar3 = FUN_140b44ec0(param_1);
  auVar5 = ZEXT464(*(uint *)(lVar3 + 0x38 + (ulonglong)(bVar2 ^ 1) * 4));
  FUN_141328020(&fStack_30,*(undefined4 *)(param_1 + 0x9c));
  if (CONCAT44(uStack_2c,fStack_30) != 0) {
    auVar5 = ZEXT464((uint)(auVar5._0_4_ * _DAT_146159cc4));
  }
  lVar3 = FUN_140b44ec0(param_1);
  uVar4 = func_0x000145255c10(*(undefined2 *)(param_1 + 0xf8),
                              auVar5._0_4_ * *(float *)(lVar3 + 0x40),auVar5._0_8_);
  cVar1 = FUN_141fc7940(*(undefined4 *)(param_1 + 0x9c));
  if (cVar1 != '\0') {
    uVar4 = (ulonglong)(uint)((float)uVar4 * _DAT_145fc6edc);
  }
  return uVar4;
}

