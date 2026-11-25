// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019d500  size: 315 bytes
// Name:    FUN_14019d500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450c0e90, FUN_1450615c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_14019d500(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  if ((param_2 < 5) && (lVar2 = FUN_1450c0e90(*(undefined4 *)(param_3 + 0x28)), lVar2 != 0)) {
    lVar1 = (ulonglong)((uint)DAT_1492e3528 * 2) * 3;
    bVar4 = *(byte *)(lVar2 + 0x18 + lVar1);
    if ((((bVar4 != 0x1e) ||
         (((bVar4 = *(byte *)(lVar2 + 0x19 + lVar1), bVar4 != 0x1e ||
           (bVar4 = *(byte *)(lVar2 + 0x1a + lVar1), bVar4 != 0x1e)) ||
          (bVar4 = *(byte *)(lVar2 + 0x1b + lVar1), bVar4 != 0x1e)))) ||
        ((bVar4 = *(byte *)(lVar2 + 0x1c + lVar1), bVar4 != 0x1e ||
         (bVar4 = *(byte *)(lVar2 + 0x1d + lVar1), bVar4 != 0x1e)))) &&
       ((lVar2 = *(longlong *)(lVar2 + 0xa0 + (ulonglong)bVar4 * 8), lVar2 != 0 &&
        (lVar3 = FUN_1450c0e90(*(undefined4 *)(param_1 + 0x28)), lVar3 != 0)))) {
      bVar4 = *(byte *)(lVar3 + 0x18 + lVar1);
      if (((bVar4 == 0x1e) && (bVar4 = *(byte *)(lVar3 + 0x19 + lVar1), bVar4 == 0x1e)) &&
         ((bVar4 = *(byte *)(lVar3 + 0x1a + lVar1), bVar4 == 0x1e &&
          (((bVar4 = *(byte *)(lVar3 + 0x1b + lVar1), bVar4 == 0x1e &&
            (bVar4 = *(byte *)(lVar3 + 0x1c + lVar1), bVar4 == 0x1e)) &&
           (bVar4 = *(byte *)(lVar3 + 0x1d + lVar1), bVar4 == 0x1e)))))) {
        uStack_30 = 0;
      }
      else {
        uStack_30 = *(undefined8 *)(lVar3 + 0xa0 + (ulonglong)bVar4 * 8);
      }
      uStack_28 = 0;
      FUN_1450615c0(lVar2,&UNK_14019d640,&uStack_30,param_2);
      return uStack_28;
    }
  }
  return 0;
}

