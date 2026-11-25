// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bcc40  size: 107 bytes
// Name:    FUN_1400bcc40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140c13960, FUN_144e3f120, FUN_14537fb60, FUN_140004b40, FUN_140272b90, FUN_140093d90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bcc40(longlong param_1)

{
  int *piVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lStack_20;
  
  if ((*(char *)(param_1 + 8) == '\x01') && (FUN_144e3f120(param_1), *(char *)(param_1 + 8) != '\0')
     ) {
    return;
  }
  puVar2 = (ulonglong *)(param_1 + 0xe0);
  FUN_140004b40(puVar2);
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_140c13960(param_1);
    FUN_140093d90(param_1);
    FUN_140272b90(param_1);
    FUN_14537fb60(param_1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  piVar1 = (int *)(param_1 + 0xf0);
  *piVar1 = *piVar1 + -1;
  uVar6 = *puVar2;
  if (*piVar1 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = *puVar2;
      if (uVar5 == uVar6) {
        *puVar2 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      plVar7 = (longlong *)(param_1 + 0xe8);
      lStack_20 = *(longlong *)(param_1 + 0xe8);
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(plVar7,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = *plVar7;
        if (lStack_20 == lVar4) {
          *plVar7 = lStack_20 + 0x100000000;
          lVar4 = lStack_20;
        }
        UNLOCK();
        bVar8 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar8);
      return;
    }
  }
  return;
}

