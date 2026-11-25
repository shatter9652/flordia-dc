// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b44f0  size: 120 bytes
// Name:    FUN_1400b44f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1431093f0, FUN_140004b40, FUN_143109af0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b44f0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  longlong lStack_20;
  
  cVar3 = func_0x000140452090(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x60));
  if ((cVar3 == '\0') || (*(char *)(param_1 + 0x30) != '\f')) {
    return;
  }
  FUN_140004b40(0x147f56698);
  uVar4 = FUN_143109af0(param_1);
  if (*(int *)(_DAT_148d7a9f8 + 0x2c + (ulonglong)uVar4 * 0x40) != 0) {
    lVar7 = _DAT_148d7a9f8 + (ulonglong)uVar4 * 0x40;
    uVar4 = 0;
    do {
      FUN_1431093f0(lVar7,uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(lVar7 + 0x2c));
  }
  iRam0000000147f566a8 = iRam0000000147f566a8 + -1;
  uVar6 = uRam0000000147f56698;
  if (iRam0000000147f566a8 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam0000000147f56698) {
        uVar6 = uRam0000000147f56698;
        uVar1 = uRam0000000147f56698;
      }
      uRam0000000147f56698 = uVar1;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam0000000147f566a0;
      iRam0000000147f566a8 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x147f566a0,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar7 = lStack_20;
        lVar2 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam0000000147f566a0) {
          lVar7 = lRam0000000147f566a0;
          lVar2 = lRam0000000147f566a0;
        }
        lRam0000000147f566a0 = lVar2;
        UNLOCK();
        bVar8 = lStack_20 != lVar7;
        lStack_20 = lVar7;
      } while (bVar8);
      return;
    }
  }
  return;
}

