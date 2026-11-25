// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c82f0  size: 446 bytes
// Name:    FUN_1400c82f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c8a10, FUN_1400c9200, FUN_1400c84e0, FUN_1400c84b0, FUN_1400cc190, FUN_1400dc5f0, FUN_1400c93d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c82f0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined1 auStack_568 [68];
  undefined4 uStack_524;
  undefined1 *puStack_520;
  undefined1 auStack_518 [145];
  byte bStack_487;
  undefined1 auStack_418 [288];
  undefined1 auStack_2f8 [288];
  undefined1 auStack_1d8 [208];
  undefined1 auStack_108 [216];
  
  func_0x0001400c88d0(auStack_568);
  func_0x000144f62e00(auStack_418);
  func_0x000144f62e00(auStack_2f8);
  func_0x000144f62d80(auStack_1d8);
  func_0x000144f62d80(auStack_108);
  if (*(char *)(param_1 + 0x38e) == '\x01') {
    *(undefined1 *)(param_1 + 0x38f) = 1;
    FUN_1400c84e0(param_1,param_2,auStack_568);
    FUN_1400c8a10(param_1,param_2,auStack_568,auStack_418,auStack_1d8,param_3);
    lVar1 = func_0x000145028560(*(undefined8 *)(param_1 + 0x2f8));
    FUN_1400c9200(param_1,*(undefined8 *)
                           (*(longlong *)
                             (lVar1 + 0x10 +
                             (ulonglong)*(byte *)(lVar1 + 0xc0 + (ulonglong)DAT_14abc3ac0) * 8) +
                           0x20));
  }
  else {
    FUN_1400cc190(param_1,bStack_487);
    FUN_1400c84e0(param_1,param_2,auStack_568);
    FUN_1400c8a10(param_1,param_2,auStack_568,auStack_418,auStack_1d8,param_3);
    FUN_1400c93d0(param_1,param_2,auStack_568,auStack_418,auStack_1d8,param_3);
    lVar1 = func_0x000145028560(*(undefined8 *)(param_1 + 0x2f8));
    FUN_1400c84b0(param_1,*(undefined8 *)
                           (*(longlong *)
                             (lVar1 + 0x10 +
                             (ulonglong)*(byte *)(lVar1 + 0xc0 + (ulonglong)DAT_14abc3ac0) * 8) +
                           0x20),0);
    if ((bStack_487 & 2) == 0) goto LAB_1400c840c;
  }
  FUN_1400dc5f0(param_1,param_2,auStack_568,auStack_418,auStack_1d8);
LAB_1400c840c:
  uStack_524 = 0;
  if ((auStack_518 != puStack_520) && (puStack_520 != (undefined1 *)0x0)) {
    func_0x000144d9c130();
  }
  return;
}

