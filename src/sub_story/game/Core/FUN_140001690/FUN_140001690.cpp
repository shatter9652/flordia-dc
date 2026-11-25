// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001690  size: 57 bytes
// Name:    FUN_140001690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1441cb7a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140001690(undefined8 param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lStack_20;
  
  FUN_140004b40(0x14ab77b98);
  FUN_1441cb7a0(param_1,*param_2,param_2[1]);
  iRam000000014ab77ba8 = iRam000000014ab77ba8 + -1;
  uVar6 = uRam000000014ab77b98;
  if (iRam000000014ab77ba8 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam000000014ab77b98) {
        uVar6 = uRam000000014ab77b98;
        uVar1 = uRam000000014ab77b98;
      }
      uRam000000014ab77b98 = uVar1;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam000000014ab77ba0;
      iRam000000014ab77ba8 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x14ab77ba0,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar2 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam000000014ab77ba0) {
          lVar4 = lRam000000014ab77ba0;
          lVar2 = lRam000000014ab77ba0;
        }
        lRam000000014ab77ba0 = lVar2;
        UNLOCK();
        bVar7 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar7);
      return;
    }
  }
  return;
}

