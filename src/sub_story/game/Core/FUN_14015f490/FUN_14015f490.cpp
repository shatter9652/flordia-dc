// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015f490  size: 175 bytes
// Name:    FUN_14015f490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140e4da50, FUN_14015f550, FUN_14015f5d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015f490(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_14015f550(param_1);
  FUN_14015f5d0(param_1);
  lVar1 = func_0x000144db6340(*(undefined4 *)
                               ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
  if (lVar1 != 0) {
    LOCK();
    lVar3 = *(longlong *)(lVar1 + 0x648);
    *(longlong *)(lVar1 + 0x648) = 0;
    UNLOCK();
    if (lVar3 != 0) {
      FUN_140e4da50(lVar3);
      func_0x000144d9c130(lVar3);
    }
  }
  lVar1 = func_0x00014502b780(*(undefined4 *)
                               ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
  if (lVar1 == 0) {
    return;
  }
  lVar3 = *(longlong *)(lVar1 + 0x238);
  uVar2 = (ulonglong)*(uint *)(lVar1 + 0x230);
  if (uVar2 != 0) {
    lVar4 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(lVar3 + lVar4))) {
        *(undefined1 *)(lVar3 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 1 + lVar4))) {
        *(undefined1 *)(lVar3 + 1 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 2 + lVar4))) {
        *(undefined1 *)(lVar3 + 2 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 3 + lVar4))) {
        *(undefined1 *)(lVar3 + 3 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 4 + lVar4))) {
        *(undefined1 *)(lVar3 + 4 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 5 + lVar4))) {
        *(undefined1 *)(lVar3 + 5 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 6 + lVar4))) {
        *(undefined1 *)(lVar3 + 6 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 7 + lVar4))) {
        *(undefined1 *)(lVar3 + 7 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 8 + lVar4))) {
        *(undefined1 *)(lVar3 + 8 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 9 + lVar4))) {
        *(undefined1 *)(lVar3 + 9 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 10 + lVar4))) {
        *(undefined1 *)(lVar3 + 10 + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xb + lVar4))) {
        *(undefined1 *)(lVar3 + 0xb + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xc + lVar4))) {
        *(undefined1 *)(lVar3 + 0xc + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xd + lVar4))) {
        *(undefined1 *)(lVar3 + 0xd + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xe + lVar4))) {
        *(undefined1 *)(lVar3 + 0xe + lVar4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xf + lVar4))) {
        *(undefined1 *)(lVar3 + 0xf + lVar4) = 0x80;
      }
      lVar4 = lVar4 + 0x290;
    } while (uVar2 * 0x290 - lVar4 != 0);
    lVar3 = *(longlong *)(lVar1 + 0x238);
  }
  *(undefined4 *)(lVar1 + 0x234) = 0;
  if (lVar3 != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(lVar1 + 0x238) = 0;
  *(uint *)(lVar1 + 0x230) = 0;
  return;
}

