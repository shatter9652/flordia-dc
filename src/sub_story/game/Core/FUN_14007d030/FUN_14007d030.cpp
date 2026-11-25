// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d030  size: 75 bytes
// Name:    FUN_14007d030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007d030(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lStack_20;
  
  FUN_140004b40(0x149ae88d0);
  *(short *)((longlong)param_1 * 2 + 0x149ae81c0) = (short)_DAT_149ae88cc;
  _DAT_149ae88cc = param_1;
  LOCK();
  _DAT_149ae88c4 = _DAT_149ae88c4 + -1;
  UNLOCK();
  iRam0000000149ae88e0 = iRam0000000149ae88e0 + -1;
  uVar6 = uRam0000000149ae88d0;
  if (iRam0000000149ae88e0 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam0000000149ae88d0) {
        uVar6 = uRam0000000149ae88d0;
        uVar1 = uRam0000000149ae88d0;
      }
      uRam0000000149ae88d0 = uVar1;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam0000000149ae88d8;
      iRam0000000149ae88e0 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x149ae88d8,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar2 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam0000000149ae88d8) {
          lVar4 = lRam0000000149ae88d8;
          lVar2 = lRam0000000149ae88d8;
        }
        lRam0000000149ae88d8 = lVar2;
        UNLOCK();
        bVar7 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar7);
      return;
    }
  }
  return;
}

