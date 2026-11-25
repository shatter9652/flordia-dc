// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140110400  size: 181 bytes
// Name:    FUN_140110400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_141712920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140110400(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lStack_20;
  
  FUN_140004b40(0x149ab3cf8);
  FUN_141712920(param_1 + 0xc0);
  FUN_141712920(param_1 + 0x6e0);
  uVar10 = _UNK_14617c378;
  uVar9 = _DAT_14617c370;
  *(undefined8 *)(param_1 + 0x6e8) = _DAT_14617c370;
  *(undefined8 *)(param_1 + 0x6f0) = uVar10;
  FUN_141712920(param_1 + 0x6f8);
  *(undefined8 *)(param_1 + 0x700) = uVar9;
  *(undefined8 *)(param_1 + 0x708) = uVar10;
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  *(undefined4 *)(param_1 + 0x818) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  *(undefined4 *)(param_1 + 0x85c) = 0;
  *(undefined1 (*) [16])(param_1 + 0xd0) = auVar8;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x840) = 2;
  *(undefined8 *)(param_1 + 0x848) = 0xbff0000000000000;
  iRam0000000149ab3d08 = iRam0000000149ab3d08 + -1;
  uVar6 = uRam0000000149ab3cf8;
  if (iRam0000000149ab3d08 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam0000000149ab3cf8) {
        uVar6 = uRam0000000149ab3cf8;
        uVar1 = uRam0000000149ab3cf8;
      }
      uRam0000000149ab3cf8 = uVar1;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam0000000149ab3d00;
      iRam0000000149ab3d08 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x149ab3d00,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar2 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam0000000149ab3d00) {
          lVar4 = lRam0000000149ab3d00;
          lVar2 = lRam0000000149ab3d00;
        }
        lRam0000000149ab3d00 = lVar2;
        UNLOCK();
        bVar7 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar7);
      return;
    }
  }
  return;
}

