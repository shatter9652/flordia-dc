// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018e30  size: 133 bytes
// Name:    FUN_140018e30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140018e30(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  longlong lStack_20;
  
  FUN_140004b40(0x147bdf700);
  if (_DAT_147bdf720 == param_1) {
    _DAT_147bdf720 = *(longlong *)(param_1 + 0x1e0);
  }
  lVar4 = *(longlong *)(param_1 + 0x1e0);
  if (_DAT_147bdf728 == param_1) {
    _DAT_147bdf728 = lVar4;
  }
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 0x1e0) = lVar4;
  }
  if (lVar4 != 0) {
    *(longlong *)(lVar4 + 0x1d8) = lVar1;
  }
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x1d8) = auVar8;
  iRam0000000147bdf710 = iRam0000000147bdf710 + -1;
  uVar6 = uRam0000000147bdf700;
  if (iRam0000000147bdf710 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar2 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam0000000147bdf700) {
        uVar6 = uRam0000000147bdf700;
        uVar2 = uRam0000000147bdf700;
      }
      uRam0000000147bdf700 = uVar2;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam0000000147bdf708;
      iRam0000000147bdf710 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x147bdf708,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar1 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam0000000147bdf708) {
          lVar4 = lRam0000000147bdf708;
          lVar1 = lRam0000000147bdf708;
        }
        lRam0000000147bdf708 = lVar1;
        UNLOCK();
        bVar7 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar7);
      return;
    }
  }
  return;
}

