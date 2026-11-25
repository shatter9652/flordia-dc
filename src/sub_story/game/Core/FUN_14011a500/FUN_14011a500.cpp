// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a500  size: 446 bytes
// Name:    FUN_14011a500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd9d80, FUN_144fc9930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011a500(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uStack_18;
  
  lVar3 = *(longlong *)(param_1 + 2);
  uVar1 = *param_1;
  if ((ulonglong)uVar1 != 0) {
    lVar2 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(lVar3 + lVar2))) {
        *(undefined1 *)(lVar3 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 1 + lVar2))) {
        *(undefined1 *)(lVar3 + 1 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 2 + lVar2))) {
        *(undefined1 *)(lVar3 + 2 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 3 + lVar2))) {
        *(undefined1 *)(lVar3 + 3 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 4 + lVar2))) {
        *(undefined1 *)(lVar3 + 4 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 5 + lVar2))) {
        *(undefined1 *)(lVar3 + 5 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 6 + lVar2))) {
        *(undefined1 *)(lVar3 + 6 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 7 + lVar2))) {
        *(undefined1 *)(lVar3 + 7 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 8 + lVar2))) {
        *(undefined1 *)(lVar3 + 8 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 9 + lVar2))) {
        *(undefined1 *)(lVar3 + 9 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 10 + lVar2))) {
        *(undefined1 *)(lVar3 + 10 + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xb + lVar2))) {
        *(undefined1 *)(lVar3 + 0xb + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xc + lVar2))) {
        *(undefined1 *)(lVar3 + 0xc + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xd + lVar2))) {
        *(undefined1 *)(lVar3 + 0xd + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xe + lVar2))) {
        *(undefined1 *)(lVar3 + 0xe + lVar2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar3 + 0xf + lVar2))) {
        *(undefined1 *)(lVar3 + 0xf + lVar2) = 0x80;
      }
      lVar2 = lVar2 + 0x1d0;
    } while ((ulonglong)uVar1 * 0x1d0 - lVar2 != 0);
    lVar3 = *(longlong *)(param_1 + 2);
  }
  param_1[1] = 0;
  FUN_144fc9930(&uStack_18,0);
  if (lVar3 != 0) {
    func_0x000144d9c130(lVar3);
  }
  FUN_144fd9d80(uStack_18);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  return;
}

