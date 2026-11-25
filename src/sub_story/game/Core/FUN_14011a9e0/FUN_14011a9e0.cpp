// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a9e0  size: 432 bytes
// Name:    FUN_14011a9e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011ad70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint * FUN_14011a9e0(uint *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != param_1) {
    uVar1 = *param_1;
    if ((ulonglong)uVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 2);
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
        lVar3 = lVar3 + 0x1d0;
      } while ((ulonglong)uVar1 * 0x1d0 - lVar3 != 0);
    }
    param_1[1] = 0;
    FUN_14011ad70(param_1);
  }
  return param_1;
}

