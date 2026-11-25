// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140135de0  size: 189 bytes
// Name:    FUN_140135de0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140c96470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140135de0(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  short sVar5;
  undefined8 uStack_30;
  
  uVar4 = (ulonglong)((param_2 & 0xffff) << 4);
  sVar5 = (short)(param_2 >> 0x10);
  if ((((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar4) == sVar5) &&
       (lVar2 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar4), lVar2 != 0)) &&
      ((*(byte *)(lVar2 + 0x154) & 1) != 0)) &&
     ((lVar1 = *(longlong *)(lVar2 + 0x48), lVar1 != 0 &&
      ((0x1cU >> (*(uint *)(lVar1 + 0x30) & 0x1f) & 1) != 0)))) {
    func_0x0001451986d0(lVar2,&uStack_30);
    cVar3 = FUN_140c96470(param_1,lVar1,lVar2,uStack_30,*(undefined8 *)(_DAT_14a9b33c0 + 0x28),0);
    if (cVar3 == '\0') {
      return 0;
    }
  }
  uVar4 = (ulonglong)((param_2 & 0xffff) << 4);
  if ((((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar4) == sVar5) &&
       (lVar2 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar4), lVar2 != 0)) &&
      (((*(byte *)(lVar2 + 0x154) & 1) != 0 &&
       ((lVar1 = *(longlong *)(lVar2 + 0x48), lVar1 != 0 &&
        ((0x1cU >> (*(uint *)(lVar1 + 0x30) & 0x1f) & 1) != 0)))))) &&
     ((cVar3 = FUN_1413ab740(lVar1,lVar2,_DAT_146159c64,_DAT_14615a7f8), cVar3 != '\0' ||
      (*(char *)(lVar1 + 0x30) == '\x03')))) {
    return 0;
  }
  return 1;
}

