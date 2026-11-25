// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164150  size: 479 bytes
// Name:    FUN_140164150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140164150(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &UNK_1462ea390;
  lVar2 = param_1[8];
  uVar1 = *(uint *)(param_1 + 7);
  if ((ulonglong)uVar1 != 0) {
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
    lVar2 = param_1[8];
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  if (lVar2 != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  if (param_2 != 0) {
    func_0x000144d9c130(param_1,0x48);
  }
  return param_1;
}

