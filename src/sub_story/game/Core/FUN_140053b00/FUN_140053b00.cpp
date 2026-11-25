// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140053b00  size: 77 bytes
// Name:    FUN_140053b00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140053b00(int param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lStack_20;
  
  FUN_140004b40(0x14909eae0);
  pcVar1 = (char *)((longlong)param_1 + 0x14909c388);
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 == '\0') {
    uVar7 = (ulonglong)_DAT_14909cb5c;
    _DAT_14909cb5c = _DAT_14909cb5c + 1;
    *(int *)(uVar7 * 4 + 0x14909cb60) = param_1;
  }
  iRam000000014909eaf0 = iRam000000014909eaf0 + -1;
  uVar7 = uRam000000014909eae0;
  if (iRam000000014909eaf0 == 0) {
    do {
      uVar6 = uVar7;
      LOCK();
      uVar7 = uVar6;
      uVar2 = (ulonglong)((int)uVar6 - 1) | 0xffffffff00000000;
      if (uVar6 != uRam000000014909eae0) {
        uVar7 = uRam000000014909eae0;
        uVar2 = uRam000000014909eae0;
      }
      uRam000000014909eae0 = uVar2;
      UNLOCK();
    } while (uVar6 != uVar7);
    if ((uVar6 & 0xfffffffe) != 0) {
      lStack_20 = lRam000000014909eae8;
      iRam000000014909eaf0 = 0;
      do {
        while (lStack_20 < 0) {
          cVar4 = FUN_1400062d0(0x14909eae8,1,&lStack_20);
          if (cVar4 != '\0') {
            return;
          }
        }
        LOCK();
        lVar5 = lStack_20;
        lVar3 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam000000014909eae8) {
          lVar5 = lRam000000014909eae8;
          lVar3 = lRam000000014909eae8;
        }
        lRam000000014909eae8 = lVar3;
        UNLOCK();
        bVar8 = lStack_20 != lVar5;
        lStack_20 = lVar5;
      } while (bVar8);
      return;
    }
  }
  return;
}

