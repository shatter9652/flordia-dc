// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140017ef0  size: 325 bytes
// Name:    FUN_140017ef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb9080, FUN_144fb8b40, FUN_144f1e2c0, FUN_144f1e280, FUN_140018040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140017ef0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  if ((((((*(longlong *)(param_1 + 0x200) != 0 || *(short *)(param_1 + 0x220) != 0) ||
         *(short *)(param_1 + 0x222) != 0) ||
         *(undefined1 (*) [32])(param_1 + 0x1e0) != (undefined1  [32])0x0) ||
       (0 < *(int *)(param_1 + 0x21c))) || (*(int *)(param_1 + 0x218) != -1)) ||
     (*(char *)(param_1 + 0x226) != 'd')) {
    *(byte *)(param_1 + 0x22b) = *(byte *)(param_1 + 0x22b) | 1;
    *(undefined1 *)(param_1 + 0x227) = 1;
  }
  FUN_140018040(param_1);
  FUN_144fb8b40(param_1,param_2);
  if (((*(ushort *)(param_1 + 0xb4) != 0xffff) && (_DAT_14ab73aa0 != 0)) &&
     (lVar2 = *(longlong *)(_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)(param_1 + 0x7e) * 0x8ad0)
     , lVar2 != 0)) {
    uVar4 = (ulonglong)((uint)*(ushort *)(param_1 + 0xb4) * _DAT_14ab73a88);
    lVar1 = lVar2 + uVar4;
    FUN_144fb9080(param_1,param_3);
    func_0x000144ead240(lVar1,*(undefined8 *)(param_1 + 0x30));
    uVar3 = FUN_144f1e280(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x58),param_2);
    *(undefined4 *)(lVar2 + 0x4c + uVar4) = uVar3;
    FUN_144f1e2c0(lVar1,param_2);
  }
  return;
}

