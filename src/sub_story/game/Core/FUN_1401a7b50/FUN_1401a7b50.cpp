// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a7b50  size: 277 bytes
// Name:    FUN_1401a7b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401a7b50(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0x1ffff) {
    uVar5 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if ((((~uVar5 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
        (uVar5 = uVar5 & 0x7fe0000, uVar5 == (uVar1 & 0xfffe0000))) &&
       (lVar3 = *_DAT_14abb6918, lVar3 != 0)) {
      uVar2 = *(undefined4 *)
               (lVar3 + 0x9c + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]));
      lVar3 = func_0x000144eda820(uVar2,lVar3,uVar5,0);
      lVar4 = func_0x000144ef6280(uVar2);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x13) & 1) != 0)) {
        return 1;
      }
      if (lVar4 != 0) {
        if ((*(byte *)(lVar4 + 0x74) & 0x10) != 0) {
          return 1;
        }
        if ((*(byte *)(lVar4 + 0x100) & 0x10) != 0) {
          return 1;
        }
        if ((*(byte *)(lVar4 + 0x85) & 0x80) != 0) {
          return 1;
        }
        if ((*(byte *)(lVar4 + 0x111) & 0x80) != 0) {
          return 1;
        }
      }
      if ((*(byte *)(param_1 + 0x92) & 0xc) != 0) {
        return 1;
      }
      if (*(uint *)(param_1 + 0x8c) < 0x10) {
        return 1;
      }
      if ((*(byte *)(param_1 + 0x91) & 8) != 0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x70) == 0) {
        return 1;
      }
      if ((uint)(_DAT_14abbef40 - *(int *)(param_1 + 0x70)) <=
          (uint)(longlong)((_DAT_1499aab10 + _DAT_1499aab14) * _DAT_146159c28)) {
        return 1;
      }
    }
  }
  return 0;
}

