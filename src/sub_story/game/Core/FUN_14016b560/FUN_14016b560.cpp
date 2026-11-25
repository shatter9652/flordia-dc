// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016b560  size: 187 bytes
// Name:    FUN_14016b560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016b560(uint param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if (-1 < (int)param_1) {
    LOCK();
    piVar1 = (int *)((ulonglong)param_1 * 4 + 0x149af3e10);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      func_0x00014016b620((ulonglong)param_1 * 0x18 + 0x14a9240e8);
      uVar4 = _DAT_149af3f18 - _DAT_149af3f14;
      while (uVar4 < _DAT_149af3f10) {
        uVar4 = _DAT_149af3f18;
        do {
          while (uVar2 = *(uint *)(_DAT_149af3f20 + (ulonglong)(uVar4 & _DAT_149af3f10 - 1) * 4),
                bVar6 = uVar4 <= uVar2, uVar2 == uVar4) {
            uVar2 = uVar4 + 1;
            LOCK();
            bVar6 = uVar4 == _DAT_149af3f18;
            uVar3 = uVar2;
            if (!bVar6) {
              uVar4 = _DAT_149af3f18;
              uVar3 = _DAT_149af3f18;
            }
            _DAT_149af3f18 = uVar3;
            UNLOCK();
            if (bVar6) {
              uVar5 = (ulonglong)(uVar4 & _DAT_149af3f10 - 1);
              *(short *)(_DAT_149af3f28 + uVar5 * 2) = (short)param_1;
              LOCK();
              *(uint *)(_DAT_149af3f20 + uVar5 * 4) = uVar2;
              UNLOCK();
              return;
            }
          }
          uVar4 = _DAT_149af3f18;
        } while (bVar6);
        uVar4 = _DAT_149af3f18 - _DAT_149af3f14;
      }
    }
  }
  return;
}

