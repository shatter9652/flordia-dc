// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008e740  size: 115 bytes
// Name:    FUN_14008e740
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f7b390, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008e740(longlong param_1)

{
  byte *pbVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  longlong lVar10;
  
  FUN_140004b40(0x147f0a4a0);
  if (*(int *)(param_1 + 0x596c) != 0) {
    plVar8 = (longlong *)(param_1 + 0x5970);
    do {
      lVar10 = *plVar8;
      FUN_140f7b390(lVar10,1);
      pbVar1 = (byte *)(lVar10 + 0x7fc);
      *pbVar1 = *pbVar1 & 0xbf;
      plVar8 = plVar8 + 1;
    } while (plVar8 != (longlong *)(param_1 + 0x5970) + *(uint *)(param_1 + 0x596c));
  }
  *(undefined4 *)(param_1 + 0x596c) = 0;
  iRam0000000147f0a4b0 = iRam0000000147f0a4b0 + -1;
  uVar7 = uRam0000000147f0a4a0;
  if (iRam0000000147f0a4b0 == 0) {
    do {
      uVar6 = uVar7;
      LOCK();
      uVar7 = uVar6;
      uVar2 = (ulonglong)((int)uVar6 - 1) | 0xffffffff00000000;
      if (uVar6 != uRam0000000147f0a4a0) {
        uVar7 = uRam0000000147f0a4a0;
        uVar2 = uRam0000000147f0a4a0;
      }
      uRam0000000147f0a4a0 = uVar2;
      UNLOCK();
    } while (uVar6 != uVar7);
    if ((uVar6 & 0xfffffffe) != 0) {
      iRam0000000147f0a4b0 = 0;
      lVar10 = lRam0000000147f0a4a8;
      do {
        while (lVar10 < 0) {
          cVar4 = FUN_1400062d0(0x147f0a4a8,1,&stack0xffffffffffffffe0);
          if (cVar4 != '\0') {
            return;
          }
        }
        LOCK();
        lVar5 = lVar10;
        lVar3 = lVar10 + 0x100000000;
        if (lVar10 != lRam0000000147f0a4a8) {
          lVar5 = lRam0000000147f0a4a8;
          lVar3 = lRam0000000147f0a4a8;
        }
        lRam0000000147f0a4a8 = lVar3;
        UNLOCK();
        bVar9 = lVar10 != lVar5;
        lVar10 = lVar5;
      } while (bVar9);
      return;
    }
  }
  return;
}

