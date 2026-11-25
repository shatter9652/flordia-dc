// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188af0  size: 574 bytes
// Name:    FUN_140188af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eb77b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140188af0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144eb77b0(param_1 + 0x8c0,0);
  func_0x00014183ba90(param_1 + 0x8c0);
  func_0x000144eb7790(param_1);
  func_0x000144eb77a0(param_1);
  uVar1 = *(uint *)(param_1 + 0x2b4);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2b8);
    lVar3 = 0;
    do {
      *(undefined4 *)(lVar2 + 0x4c + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x50 + lVar3) != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar2 + 0x48 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x50 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0x3c + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x40 + lVar3) != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar2 + 0x38 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x40 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0x2c + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x30 + lVar3) != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar2 + 0x28 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x30 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0x1c + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x20 + lVar3) != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar2 + 0x18 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x20 + lVar3) = 0;
      *(undefined4 *)(lVar2 + 0xc + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x10 + lVar3) != 0) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
      *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0;
      lVar3 = lVar3 + 0x58;
    } while ((ulonglong)uVar1 * 0x58 - lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  uVar1 = *(uint *)(param_1 + 0x2050);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x2058);
    lVar3 = 0;
    do {
      if (!SBORROW1('\0',*(char *)(lVar2 + lVar3))) {
        *(undefined1 *)(lVar2 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 1 + lVar3))) {
        *(undefined1 *)(lVar2 + 1 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 2 + lVar3))) {
        *(undefined1 *)(lVar2 + 2 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 3 + lVar3))) {
        *(undefined1 *)(lVar2 + 3 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 4 + lVar3))) {
        *(undefined1 *)(lVar2 + 4 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 5 + lVar3))) {
        *(undefined1 *)(lVar2 + 5 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 6 + lVar3))) {
        *(undefined1 *)(lVar2 + 6 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 7 + lVar3))) {
        *(undefined1 *)(lVar2 + 7 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 8 + lVar3))) {
        *(undefined1 *)(lVar2 + 8 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 9 + lVar3))) {
        *(undefined1 *)(lVar2 + 9 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 10 + lVar3))) {
        *(undefined1 *)(lVar2 + 10 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 0xb + lVar3))) {
        *(undefined1 *)(lVar2 + 0xb + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 0xc + lVar3))) {
        *(undefined1 *)(lVar2 + 0xc + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 0xd + lVar3))) {
        *(undefined1 *)(lVar2 + 0xd + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 0xe + lVar3))) {
        *(undefined1 *)(lVar2 + 0xe + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)(lVar2 + 0xf + lVar3))) {
        *(undefined1 *)(lVar2 + 0xf + lVar3) = 0x80;
      }
      lVar3 = lVar3 + 0x90;
    } while ((ulonglong)uVar1 * 0x90 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x2054) = 0;
  return;
}

