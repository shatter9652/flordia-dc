// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400056a0  size: 467 bytes
// Name:    FUN_1400056a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400056a0(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  puVar2 = *(uint **)(param_1 + 4);
  uVar1 = *param_1;
  if ((ulonglong)uVar1 != 0) {
    lVar3 = 0;
    do {
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3))) {
        *(undefined1 *)((longlong)puVar2 + lVar3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 1))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 1) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 2))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 2) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 3))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 3) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 4))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 4) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 5))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 5) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 6))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 6) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 7))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 7) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 8))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 8) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 9))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 9) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 10))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 10) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 0xb))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 0xb) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 0xc))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 0xc) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 0xd))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 0xd) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 0xe))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 0xe) = 0x80;
      }
      if (!SBORROW1('\0',*(char *)((longlong)puVar2 + lVar3 + 0xf))) {
        *(undefined1 *)((longlong)puVar2 + lVar3 + 0xf) = 0x80;
      }
      lVar3 = lVar3 + 0x50;
    } while ((ulonglong)uVar1 * 0x50 != lVar3);
    puVar2 = *(uint **)(param_1 + 4);
  }
  param_1[1] = 0;
  if ((param_1 + 8 != puVar2) && (puVar2 != (uint *)0x0)) {
    func_0x000144d9c130(puVar2);
  }
  *(uint **)(param_1 + 4) = param_1 + 8;
  *param_1 = 1;
  return;
}

