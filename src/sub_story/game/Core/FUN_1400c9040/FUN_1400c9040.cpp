// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c9040  size: 435 bytes
// Name:    FUN_1400c9040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145146220, FUN_144de6230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1400c9040(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  
  if (*(byte *)(param_2 + 0xe0) == 1) {
    if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
      lVar2 = *(longlong *)(param_1 + 0x2f8);
      bVar1 = FUN_145146220(lVar2,0);
      if ((*(byte *)(param_2 + 0xf0) & 8) != 0) {
        return '\x02';
      }
      uVar3 = *(uint *)(lVar2 + 0xe8) & 0x380000;
      bVar5 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x28) & bVar1;
      if (bVar5 == 1) {
        if (uVar3 == 0x180000) {
          if ((*(byte *)(param_2 + 0xf0) & 2) != 0) {
            return '\x02';
          }
          if ((*(byte *)(param_2 + 0x140) & 0x20) != 0) {
            return '\x02';
          }
        }
        if (((((*(byte *)(param_2 + 0xe1) & 2) != 0) && ((*(byte *)(param_2 + 0xe1) & 1) != 0)) &&
            (lVar2 = FUN_144de6230(*(undefined4 *)(lVar2 + 0x9c)), lVar2 != 0)) &&
           ((*(longlong *)(lVar2 + 0x20) != 0 &&
            (*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x60) == -0x6b2384d5e4a60a1d)))) {
          return '\x02';
        }
      }
      if ((*(char *)(param_1 + 0x38c) == '\0') && (*(int *)(param_1 + 0x378) < 1)) {
        bVar1 = bVar1 & (*(byte *)(param_2 + 0x140) & 0x20) >> 5;
      }
      if (bVar1 != 0) {
        return (uVar3 == 0x180000) + '\x01';
      }
      if ((uVar3 != 0x180000 && bVar5 == 0) && ((*(byte *)(param_2 + 0xde) & 8) == 0)) {
        if (((*(int *)(param_1 + 0x380) != 0) || (_DAT_14615d650 <= *(float *)(param_2 + 200))) &&
           (*(int *)(param_1 + 0x380) != 1 || _DAT_14615ebe4 <= *(float *)(param_2 + 200))) {
          if (*(char *)(param_1 + 0x60) == '\x02') {
            return '\x01';
          }
          goto LAB_1400c9172;
        }
      }
    }
    cVar4 = '\x01';
  }
  else {
    if (*(byte *)(param_2 + 0xe0) - 2 < 2) {
      return '\x02';
    }
LAB_1400c9172:
    cVar4 = '\0';
  }
  return cVar4;
}

