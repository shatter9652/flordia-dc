// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140095b40  size: 200 bytes
// Name:    FUN_140095b40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140095c10, FUN_140004b40, FUN_140095ca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140095b40(undefined8 param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 uStack_40;
  longlong lStack_38;
  uint uStack_2c;
  char cStack_28;
  
  if (param_3 != '\0') {
    return;
  }
  uStack_40 = param_1;
  FUN_140004b40(0x148fc71e0);
  lVar5 = func_0x000144f97130(0x1e0);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    FUN_140095c10(lVar5,param_2,param_1,0,0);
  }
  FUN_140095ca0(0x148fc71b0,&lStack_38,&uStack_40);
  if (cStack_28 == '\x01') {
    uVar6 = (ulonglong)((uStack_2c & 0xf) << 4);
    lStack_38 = (ulonglong)(uStack_2c >> 4) * 0x110 + lStack_38;
    *(undefined8 *)(uVar6 + 0x10 + lStack_38) = param_1;
    *(longlong *)(uVar6 + 0x18 + lStack_38) = lVar5;
  }
  func_0x000144e9d800(param_2);
  *(byte *)(param_2 + 0x9e) = *(byte *)(param_2 + 0x9e) | 1;
  iRam0000000148fc71f0 = iRam0000000148fc71f0 + -1;
  uVar6 = uRam0000000148fc71e0;
  if (iRam0000000148fc71f0 == 0) {
    do {
      uVar7 = uVar6;
      LOCK();
      uVar6 = uVar7;
      uVar1 = (ulonglong)((int)uVar7 - 1) | 0xffffffff00000000;
      if (uVar7 != uRam0000000148fc71e0) {
        uVar6 = uRam0000000148fc71e0;
        uVar1 = uRam0000000148fc71e0;
      }
      uRam0000000148fc71e0 = uVar1;
      UNLOCK();
    } while (uVar7 != uVar6);
    if ((uVar7 & 0xfffffffe) != 0) {
      iRam0000000148fc71f0 = 0;
      lVar5 = lRam0000000148fc71e8;
      do {
        while (lVar5 < 0) {
          cVar3 = FUN_1400062d0(0x148fc71e8,1,&stack0xffffffffffffffe0);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lVar5;
        lVar2 = lVar5 + 0x100000000;
        if (lVar5 != lRam0000000148fc71e8) {
          lVar4 = lRam0000000148fc71e8;
          lVar2 = lRam0000000148fc71e8;
        }
        lRam0000000148fc71e8 = lVar2;
        UNLOCK();
        bVar8 = lVar5 != lVar4;
        lVar5 = lVar4;
      } while (bVar8);
      return;
    }
  }
  return;
}

