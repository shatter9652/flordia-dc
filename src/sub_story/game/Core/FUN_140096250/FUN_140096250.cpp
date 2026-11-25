// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140096250  size: 223 bytes
// Name:    FUN_140096250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144edc6b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140096250(float param_1,longlong param_2,ulonglong param_3,undefined1 *param_4,
                       undefined1 *param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  cVar3 = func_0x000145301d60(uVar1);
  if (cVar3 != '\0') {
    plVar2 = *(longlong **)((ulonglong)*(byte *)(param_2 + 0x30) * 8 + 0x14abbe7c0);
    uVar5 = (uint)((ulonglong)(param_2 - *plVar2) / (ulonglong)*(uint *)(plVar2 + 1));
    if ((*(uint *)(*(longlong *)((ulonglong)*(byte *)(param_2 + 0x30) * 0x10 + 0x14ab75fb0) +
                  (ulonglong)((uVar5 & 0x3fffffff) >> 3) * 4) >> ((uVar5 & 7) << 2) & 1) != 0) {
      *param_4 = 1;
      *param_5 = 1;
      return param_3;
    }
    lVar6 = func_0x000144edc640(uVar1);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x20) != 0)) &&
       (uVar5 = FUN_144edc6b0(*(undefined4 *)(lVar6 + 0x1c)),
       (float)uVar5 * _DAT_146159ec4 < param_1)) {
      uVar4 = 1;
      goto LAB_140096307;
    }
  }
  uVar4 = 0;
LAB_140096307:
  *param_4 = 0;
  *param_5 = uVar4;
  return (ulonglong)_DAT_14a4a7790;
}

