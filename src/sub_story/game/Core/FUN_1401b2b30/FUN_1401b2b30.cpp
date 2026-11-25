// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b2b30  size: 79 bytes
// Name:    FUN_1401b2b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145074180, FUN_1401b2cd0, FUN_144fd22d0, FUN_1401b2e60, FUN_1401b2bc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401b2b30(char param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar5 = FUN_145074180();
  if (_DAT_1498cc2a0 == 0) {
    return uVar5;
  }
  FUN_1401b2e60();
  func_0x0001401b2b80();
  FUN_1401b2cd0();
  FUN_1401b2bc0();
  if (param_1 != '\0') {
    FUN_144fd22d0();
  }
  func_0x0001401b2b90();
  lVar3 = lRam00000001498cc230;
  if (_DAT_14abbef44 != uRam00000001498cc2b4) {
    uRam00000001498cc2b4 = _DAT_14abbef44;
    uVar5 = (ulonglong)uRam00000001498cc22c;
    if (uVar5 != 0) {
      uVar6 = 0xff00ffffffffffff;
      if (bRam00000001498cc222 == 0) {
        uVar6 = 0xffffffffffffff;
      }
      lVar7 = 0;
      do {
        puVar1 = (undefined8 *)(lVar3 + lVar7);
        lVar7 = lVar7 + 8;
        LOCK();
        *(ulonglong *)*puVar1 = *(ulonglong *)*puVar1 & uVar6;
        UNLOCK();
      } while (uVar5 << 3 != lVar7);
    }
    bVar2 = bRam00000001498cc222;
    bVar4 = bRam00000001498cc222 + 1;
    if (1 < (byte)(bRam00000001498cc222 + 1)) {
      bVar4 = 0;
    }
    LOCK();
    bRam00000001498cc222 = bVar4;
    UNLOCK();
    return (ulonglong)bVar2;
  }
  return (ulonglong)_DAT_14abbef44;
}

