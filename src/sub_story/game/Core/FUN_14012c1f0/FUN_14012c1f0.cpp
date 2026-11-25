// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012c1f0  size: 200 bytes
// Name:    FUN_14012c1f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14012c1f0(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar5;
  undefined7 uVar4;
  
  if ((ulonglong)*(uint *)(param_1 + 0x7c) != 0) {
    lVar5 = 0;
    do {
      if ((*(ulonglong *)(param_1 + 0x80 + lVar5) & 0xffffffffffff) == (param_2 & 0xffffffffffff)) {
        uVar3 = 0;
        goto LAB_14012c2af;
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)*(uint *)(param_1 + 0x7c) << 3 != lVar5);
  }
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  uVar2 = (ulonglong)(((uint)param_2 & 0xffff) << 4);
  if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar2) == (short)(param_2 >> 0x10)) &&
      (lVar5 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar2), lVar5 != 0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x20), lVar5 != 0)) {
    if ((short)(param_2 >> 0x20) != -2 && *(char *)(lVar5 + 0x10) == '\x06') {
      uVar1 = func_0x0001403dc2f0();
      if (((uVar1 == 0xffff) || (*(ushort *)(lVar5 + 0x9a) <= uVar1)) ||
         (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)uVar1 * 8), lVar5 == 0))
      goto LAB_14012c2af;
    }
    uVar3 = CONCAT71(uVar4,*(int *)(lVar5 + 0x18) != -0x378ea8cb);
  }
LAB_14012c2af:
  return uVar3 & 0xffffffff;
}

