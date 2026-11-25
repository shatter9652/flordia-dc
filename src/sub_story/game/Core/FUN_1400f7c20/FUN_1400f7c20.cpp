// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7c20  size: 98 bytes
// Name:    FUN_1400f7c20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_14221bad0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f7c20(undefined8 param_1,undefined4 param_2,ulonglong param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  longlong lVar9;
  
  FUN_140004b40(0x1471bfad8);
  if ((param_3 < _DAT_149e1dac0) || (_DAT_149e1dac0 + _DAT_149e1dac8 < param_4 + param_3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_14221bad0(param_1,param_2,param_3,param_4);
  iRam00000001471bfae8 = iRam00000001471bfae8 + -1;
  uVar7 = uRam00000001471bfad8;
  if (iRam00000001471bfae8 == 0) {
    do {
      uVar6 = uVar7;
      LOCK();
      uVar7 = uVar6;
      uVar2 = (ulonglong)((int)uVar6 - 1) | 0xffffffff00000000;
      if (uVar6 != uRam00000001471bfad8) {
        uVar7 = uRam00000001471bfad8;
        uVar2 = uRam00000001471bfad8;
      }
      uRam00000001471bfad8 = uVar2;
      UNLOCK();
    } while (uVar6 != uVar7);
    if ((uVar6 & 0xfffffffe) != 0) {
      iRam00000001471bfae8 = 0;
      lVar9 = lRam00000001471bfae0;
      do {
        while (lVar9 < 0) {
          cVar4 = FUN_1400062d0(0x1471bfae0,1,&stack0xffffffffffffffe0);
          if (cVar4 != '\0') {
            return;
          }
        }
        LOCK();
        lVar5 = lVar9;
        lVar3 = lVar9 + 0x100000000;
        if (lVar9 != lRam00000001471bfae0) {
          lVar5 = lRam00000001471bfae0;
          lVar3 = lRam00000001471bfae0;
        }
        lRam00000001471bfae0 = lVar3;
        UNLOCK();
        bVar8 = lVar9 != lVar5;
        lVar9 = lVar5;
      } while (bVar8);
      return;
    }
  }
  return;
}

