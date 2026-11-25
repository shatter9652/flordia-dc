// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140158b10  size: 76 bytes
// Name:    FUN_140158b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1415252c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140158b10(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lStack_20;
  
  *param_1 = &UNK_1462064c0;
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
    return;
  }
  FUN_140004b40(0x1476d51b8);
  FUN_1415252c0(0x1476d51d8,param_1);
  iRam00000001476d51c8 = iRam00000001476d51c8 + -1;
  uVar6 = uRam00000001476d51b8;
  if (iRam00000001476d51c8 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam00000001476d51b8) {
        uVar6 = uRam00000001476d51b8;
        uVar1 = uRam00000001476d51b8;
      }
      uRam00000001476d51b8 = uVar1;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam00000001476d51c0;
      iRam00000001476d51c8 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x1476d51c0,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar2 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam00000001476d51c0) {
          lVar4 = lRam00000001476d51c0;
          lVar2 = lRam00000001476d51c0;
        }
        lRam00000001476d51c0 = lVar2;
        UNLOCK();
        bVar7 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar7);
      return;
    }
  }
  return;
}

