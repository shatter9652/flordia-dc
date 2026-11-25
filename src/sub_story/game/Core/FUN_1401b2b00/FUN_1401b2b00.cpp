// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b2b00  size: 40 bytes
// Name:    FUN_1401b2b00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1401b2b30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b2b00(void)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lStack_20;
  
  FUN_140004b40(0x1498cc238);
  FUN_1401b2b30(0);
  iRam00000001498cc248 = iRam00000001498cc248 + -1;
  uVar6 = uRam00000001498cc238;
  if (iRam00000001498cc248 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam00000001498cc238) {
        uVar6 = uRam00000001498cc238;
        uVar1 = uRam00000001498cc238;
      }
      uRam00000001498cc238 = uVar1;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam00000001498cc240;
      iRam00000001498cc248 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x1498cc240,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar2 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam00000001498cc240) {
          lVar4 = lRam00000001498cc240;
          lVar2 = lRam00000001498cc240;
        }
        lRam00000001498cc240 = lVar2;
        UNLOCK();
        bVar7 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar7);
      return;
    }
  }
  return;
}

